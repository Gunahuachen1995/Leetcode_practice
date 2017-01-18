class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        result = []
        if not candidates:
            return result
        candidates.sort()
        self.helper(candidates, target, [], 0, result)
        return result

    def helper(self, candidates, target, path, index, result):
        if target == 0:
            result.append(path[:])
            return

        for i in range(index, len(candidates)):
            if i!=index and candidates[i]==candidates[i-1]:
                continue
            if candidates[i] > target:
                break
            self.helper(candidates, target - candidates[i], path + [candidates[i]], i+1, result)
