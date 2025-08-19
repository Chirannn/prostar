#include<stdio.h>
int main(){
    int mood;
    printf("Select your mood today,\n");
    printf("1.Happy\n");
    printf("2.Sad\n");
    printf("3.Excited\n");
    printf("4.Angry\n");
    printf("Enter choice:");
    scanf("%d",&mood);
    
    switch (mood){
        case 1:
        printf("Yay! Keep Smiling!\n");
        break;
        
        case 2:
        printf("Cheer up! Good things are coming\n");
        break;
        
        case 3:
        printf("Awesome! Share your energy!\n");
        break;
        
        case 4:
        printf("Take a deep breath!\n");
        break;
        default:
        printf("Invalid mood choice");
    }
    return 0;
}