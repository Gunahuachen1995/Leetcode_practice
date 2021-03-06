class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        Arrays.sort(candidates);
        helper(candidates, target, res, new ArrayList<Integer>(), 0);
        return res;
    }
    
    public void helper(int[] candidates, int target, List<List<Integer>> res, List<Integer> com, int index)
    {
        if(target == 0)
        {
            res.add(new ArrayList<Integer>(com));
            return;
        }
        for(int i = index; i < candidates.length && target >= candidates[i]; i++)
        {
            if(i == index || candidates[i] != candidates[i - 1])
            {
                com.add(candidates[i]);
                helper(candidates, target - candidates[i], res, com,i + 1);
                com.remove(com.size() - 1);   
            }
        }
        return;
    }
}
