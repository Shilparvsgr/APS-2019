#include <stdio.h>
#include <stdlib.h>



///no of vertices
int v = 6;
///counter to update pre and post order values
int count=0;

///arrays to store pre and post order
int pre[6]={0},post[6]={0};


///define a adjacency matrix
int a[6][6] ={
             {0,1,1,1,0,0},
             {1,0,1,0,0,0},
             {1,1,0,0,0,0},
             {1,0,0,0,0,0},
             {0,0,0,0,0,1},
             {0,0,0,0,1,0}};





/// Variable to hold source vertex

int source = 0;



/// Array to maintain the visited vertices

int visited[v];



/*function to find pre and post order traversal using dfs*/

void dfs(int m[6][6], int v, int source)

{


    int i;


    //set the visited of source vertex to 1
    visited[source] = 1;


    for(i=0; i<v; i++)

    {

        if(m[source][i] == 1 && visited[i] == 0)

        {
           //pre order
            pre[i]=++count;
            dfs(m, v, i);
            //post order
            post[i]=++count;

        }

    }

}



int main()

{

    /// Index variables

    int i,k;



    /// Set all the vertices to not visited

    for (i= 0; i < v; i ++)

        visited[i] = 0;



    /// Call the dfs traversal



    pre[source]=++count;
    dfs(a, v, source);
    post[source]=++count;

    ///if graph is a forest then run dfs on those vertices
    for(k=0;k<v;k++){
        if(visited[k]==0){
            pre[k]=++count;
            dfs(a,v,k);
            post[k]=++count;
        }
    }

    /// display the pre and post order traversal numbers of each vertex
    printf("vertex pre post\n");
    for(k=0;k<v;k++){
        printf("%d     %d     %d\n",k,pre[k],post[k]);
    }


    return 0;

}
