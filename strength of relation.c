/** Strength of Relation
Strength of relation between two words S1 and S2 is defined by the set of position of 
common characters of S1 and S2, it is defined as Sum(pos(c) in S1 * pos(c) in S2) 
where c is the character which is present in both S1 and S2. Given a collection of words S and a test string W, 
write a program to find all strings in S with highest strength of relation with W. 
When there are many strings with highest strength of relation, print all strings in the order of input.

For example, consider the words thing and night, then the strength of relation (S1 to S2) is 1*5+2*4+3*2+4*1+5*3 = 38.

Given a collection of five words S as apple, tiny, hit, thing and get and W as night, 
you should print thing which has the maximum strength of relation.

Input Format

First line contains the number of words ‘n’ in the collection, S

Next ‘n’ lines contain the words in S

Next line contains the word W

Output Format

Print all the words in S that has got maximum strength of relation

"""
Input
5
apple
tiny
hit
thing
get
night
Expected output
thing
--------------
Input
7
act
cat
acting
tac
tic
toe
action
react
Expected output
act
acting
action
-----------------
Input
4
listen
ten
list
man
silent
Expected output
listen
"""*/
#include<stdio.h>
#include<string.h>
void main(){
    int n,i,j,k,s[10],l,p=0,max=0;
    scanf("%d",&n);
    char a[n+1][10],w[10];
    for(i=0;i<n;i++){
       scanf("%s",a[i]);
    } 
    scanf("%s",w);
    for(i=0;i<n;i++){
        p=0;
        for(j=0;j<strlen(a[i]);j++){
            for(k=0;k<strlen(w);k++){
                if(a[i][j]==w[k]){ 
                   p=p+(j+1)*(k+1);//printf("%c  %d %c %d\n",a[i][j],j,w[k],k);
               }
            } 
        }s[i]=p;
        //printf("%d\n",s[i]);
        max=max>p?max:p;
    }
    for(i=0;i<n;i++){
        if(s[i]==max)
           printf("%s\n",a[i]);
    }

}