/*package whatever //do not write package name here */

import java.io.*;

class Maze {
    static boolean isSafe(int [][] maze,int x, int y){
        int N = maze.length;
        return (x>=0 && x<N && y>=0 && y<N && maze[x][y]==1);// check if valid ki vo position valid h yaa nhhi ..valid toh tabhi hogi naa agar tu aage jaa skti h
    }
    static boolean solveMaze(int [][] maze, int x, int y, int[][]sol){
        int N = maze.length;
        if(x==N-1 && y==N-1 && maze[x][y]==1){
            sol[x][y]=1;
            return true;
        }
        
        if(isSafe(maze,x,y)==true){// matlab aage jaa skte ho
            
            if(sol[x][y]==1){// this position is already part of solution/ path 
                return false;
            }
            
            sol[x][y]=1;// mark (x,y) as part of solution
            
            // now move formward in x direction
            if (solveMaze(maze,x+1, y,sol)){
                return true;
            }
            if(solveMaze(maze,x, y+1,sol)){
                return true;
            }
            
            // if none of the above statement works, then backtrack is the solution 
            // unmark x,y as part of solution path 
            
            sol[x][y]=0;
            return false;
            
        }
        
        return false;
        
        }
        
        static boolean solveMazeProb(int [][] maze){
            
            int N = maze.length;
            int [][]sol= new int [N][N];
            if(solveMaze(maze, 0, 0, sol)==false){
                System.out.println("Solution dont exist");
            }else{
            System.out.println("Hurrray!! solution exist!");}
            return true;
        }
	public static void main (String[] args) {
		
		int maze[][] = { { 1, 0, 0, 0 },
                         { 1, 1, 0, 1 },
                         { 0, 1, 0, 0 },
                         { 1, 1, 0, 1 } };
                         
        solveMazeProb(maze);
	}
}