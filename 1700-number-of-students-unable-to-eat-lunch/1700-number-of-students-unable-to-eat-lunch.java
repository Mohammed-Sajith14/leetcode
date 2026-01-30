class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        Queue<Integer> q = new LinkedList<>();
        for(int s : students)
        {
            q.add(s);
        }
        int count = 0;
        int i = 0;
        while(!q.isEmpty() && count<q.size())
        {
            if(q.peek()==sandwiches[i])
            {
                q.remove();
                i++;
                count = 0;
            }
            else
            {
                q.add(q.remove());
                count++;
            }
        }
        return q.size();
    }
}