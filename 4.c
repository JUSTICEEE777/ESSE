#include <float.h>
#include<limits.h>
#include<stdio.h>

int main(void){
    
	
	printf("double maximum:%g\n",FLT_MAX);/*表現可能な最大浮動小数点数。*/
	printf("double minimum:%g\n",DBL_MIN);/*正の最小数。*/
	printf("double precision:%d\n",DBL_DIG);/*精度の桁数*/
	printf("float minimum:%f\n",FLT_MIN);/*正の最小数。*/
    printf("float maximum:%f\n",FLT_MAX);/*表現可能な最大浮動小数点数。*/
    printf("float precision:%f\n",FLT_DIG);/*精度の桁数*/
    printf("long double maximum:%lf\n",LDBL_MAX);/*表現可能な最大浮動小数点数。*/
    printf("long double minimum:%lf\n",LDBL_MIN);/*正の最小数。*/
    printf("long double presision:%lf\n",LDBL_DIG);/*精度の桁数*/
    printf("unsigned char maximum:%u\n",UCHAR_MAX);/*符号なし最大値*/
    printf("char maximum:%c\n",CHAR_MAX);/*最大値*/
    printf("char minimum:%c\n",CHAR_MIN);/*最小値*/
    printf("unsigned short maximum:%d\n",USHRT_MAX);/*符号なし最大値*/
    printf("short maximum:%d\n",SHRT_MAX);/*最大値*/
    printf("short minimum:%d\n",SHRT_MIN);/*最小値*/
    printf(
    
	return 0;
	
}