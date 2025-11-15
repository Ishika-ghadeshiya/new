#include<stdio.h>
struct team_details
{
    char team_name[50], sport[50];
struct coach
    {
        char name[50];
        int age,experience;
    }s1[10];

}s2[10];

void main()
{
    int n,i;
    printf("Enter the no. of teams\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("TEAM DEATILS: \n");
        printf("Enter Team name: ");
        scanf(" %[^\n]",s2[i].team_name);
        printf("\nEnter sport: ");
        scanf(" %[^\n]",s2[i].sport);
        printf("COACH DETAILS: ");
        printf("\nEnter the name of coach: ");
        scanf(" %[^\n]", s2[i].s1[i].name);
        printf("\nAge: ");
        scanf(" %d",&s2[i].s1[i].age);
        printf("\nEnter years of experince: ");
        scanf("%d",&s2[i].s1[i].experience);

    }
     printf("==============TEAM DETAILS=================================COACH DETAILS===================\n");
    printf("No. Team name\t\t sport\t\t\t coach\t\t Age\t years of experience\n");

    for(i=0;i<n;i++)
    {
     printf("\n%-3d %-10s %20s %20s %11d %11d ",i+1,s2[i].team_name,s2[i].sport,s2[i].s1[i].name,s2[i].s1[i].age,s2[i].s1[i].experience);
    }
}
