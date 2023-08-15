class Solution
{
    public List<String> AllPossibleStrings(String str)
    {     List<String> result = new ArrayList<>();
        generateSubsequences(str, "", 0, result);
        Collections.sort(result);
        return result;
    }
    
    private static void generateSubsequences(String str, String current, int index, List<String> result) {
        if (index == str.length()) {
            if (!current.isEmpty()) {
                result.add(current);
            }
            return;
        }
        generateSubsequences(str, current + str.charAt(index), index + 1, result);
        generateSubsequences(str, current, index + 1, result);
    }
    
}
