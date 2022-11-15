int main(){
    // example of a guard branch

    int a, b;
    if(a==0){ // branch A
        if(b==0){ // branch B
            // do something
        }
        else{
            //do something else
        }
    }
    // here, if a is not 0, we will not need to execute the branch B
    // branch B is guarded by branch A
    // branch A is a guard branch


    // example of an affector branch
    int A[100];
    int B[100];
    int i = 20;

    if(A[0] == 0){ // branch A
        i = 0;
    }

    if(B[i] == 0){ // branch B
        // do something
    }

    // the condition of branch B depends on if branch A was taken or not
    // branch B is affected by branch A
    // branch A is an affector branch
}