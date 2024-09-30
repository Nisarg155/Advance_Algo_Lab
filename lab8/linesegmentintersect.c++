#include<bits/stdc++.h>

using namespace std;

class points{

    public :
    int x,y;
    points(int x,int y): x(x), y(y)
    {

    } 

};

int Direction (points A, points B , points C)
{
    return (C.x - A.x)* (B.y - A.y) - (B.x - A.x ) * (C.y - A.x);
}

// it does not truely check on segment , but it works in this algo due to first we are checking d 
bool OnSegment(points A, points B , points C)
{
    return (  min(A.x,B.x) <= C.x <= max(A.x,B.x)  ) && ( min(A.y,B.y) <=  C.y  <= max(A.y,B.y) );
}

void check(points A, points B , points C, points D)
{
    int d1 = Direction(C,D,A);
    int d2 = Direction(C,D,B);
    int d3 = Direction(A,B,C);
    int d4 = Direction(A,B,D);

    if(d1*d2 <0 && d3*d4 < 0) cout<<"true"<<endl;
    else if (!d1 && OnSegment(C,D,A)) cout<<"true"<<endl;
    else if (!d2 && OnSegment(C,D,B)) cout<<"true"<<endl;
    else if (!d3 && OnSegment(A,B,C)) cout<<"true"<<endl;
    else if (!d4 && OnSegment(A,B,D)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}

int main()
{
    //  test cases 
    points A(1,1) , B(5,5) ,C(1,5), D(5,1);
    points a1(1,1),b1(5,5) ,c1(3,3) , d1(3,7);
    points a2(1,1),b2(5,5) ,c2(6,6) , d2(6,9);

    check(A,B,C,D);
    check(a1,b1,c1,d1);
    check(a2,b2,c2,d2);

    return 0;
}