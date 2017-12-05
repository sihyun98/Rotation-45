﻿# README file for TEAM[4,5]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

--------------------------------------------------------------------------------------------------
<프로그램 개요>
 - 사용자에게 프로그램을 실행시킬 것인지 묻고, 반복해서 문자열의 길이와 Rotation 횟수를 받을 수 있게 만든다.
 - 문자열, 문자열의 길이, 회전 횟수 등의 input을 받아서 4가지 방법에 따라 문자열을 rotate시키는 프로그램을 작성한다.
 - 문자열의 길이, 회전 횟수, 4가지 rotate 방법에 따라 실행시간을 측정하고 비교한다.
--------------------------------------------------------------------------------------------------

<역할분담>

-header: 전현욱(Jeon1)

-main: 최윤호(yunho303)

-trivial: 박시현(sihyun98)

-juggling: 유호성(Youhoseong)

-block-swap: 전현욱(Jeon1)

-reverse: 김윤희(tngkrbb123)

-README 파일: 모두
--------------------------------------------------------------------------------------------------
<Declaration of important data and data types in user header file>

	a. name: Rotation.h 
	b. Headers included
   	   - <stdio.h>
   	   - <stdlib.h>
  	   - <string.h>
	   - <time.h>
    	c. ownership: Hyunuk Jeon


--------------------------------------------------------------------------------------------------
<Function descriptions>

1. Trivial solution
	a. name: Trivial
	b. input parameter: char str[], int n, int d
	c. output parameter: [void]
	d. file name:  trivial.c
	e. ownership: SiHyun Park

2. juggling
	a. name: Juggling
	b. input parameter: char* ary,int n,int d
	c. output parameter: [void]
	d. file name: Juggling.c
	e. ownership: Hoseong You

3. blockswap
	a. name: blockswap
	b. input parameter: char arr[], int n, int d
	c. output parameter: [void]
	d. file name: blockswap.c 
	e. ownership: Hyunuk Jeon

4. reverse 
	a. name: reverse
	b. input parameter: char *str, int n, int d 
	c. output parameter: [void]
	d. file name: reverse.c
	e. ownership: YoonHee Kim

5. main
	a. file name: main.c
	b. ownership : Yunho Choi 

--------------------------------------------------------------------------------------------------

<TEAM 5's idea>
1. trivial
	a. 문자열과 n, d를 인수로 넘겨 받는다.
	b. temp를 초기화시킨다.
	c. d가 음수일 때와 양수일 때로 CASE를 구분한다.
	d. (d가 양수) temp에 첫번째 문자를 임시저장하고 다음칸의 문자를 앞칸으로 이동시킨다.
	e. (d가 음수) d를 음수로 변환한 후 temp를 n-1번째의 문자로 임시저장하고 다음칸의 문자를 앞칸의 문자로 저장한다.
	
2. juggling
	a. 문자열 포인터와 n, 그리고 d를 인수로 넘겨 받는다.
	b. d가 음수일 때와 양수일 때로 CASE를 구분한다.
	c. (d가 음수) 문자열의 첫 번째 index를 temp에 임시 저장하고, d칸 간격으로 문자열을 이동시킨 뒤
	마지막으로 마지막 index에 temp를 저장한다. 이 과정을 d와 n의 최대공약수 만큼 반복한다. 
	d. (d가 양수) 문자열의 마지막 index를 temp에 임시 저장하고, d칸 간격으로 문자열을 이동시킨 뒤
	마지막으로 첫 번째 index에 temp를 저장한다. 이 과정을 d와 n의 최대공약수 만큼 반복한다. 

3. blockswap
	-swap함수(arr, a, b, d): d번만큼 a+i번째 원소와 b+i번째 원소를 교체한다.
	a. A블럭의 크기를 n-d, B블럭의 크기를 d로 초기 설정한다
	b. 'A블럭의 크기 < B블럭의 크기'이면 swap함수를 호출해서 (A블럭 크기)번 만큼 ((n-d)- A블럭의 크기)번째 원소와 (n-d)+(B            블럭	의 크기-A블럭의 크기)번째 원소를 교체한다. 
	c. 그렇지 않은 경우는 ((n-d)-A블럭 크기)번째 원소와 (n-d)번째 원소를 (B블럭 크기)번 만큼 교체한다. 
	d. 이 과정을 A블럭의 크기와 B블럭의 크기가 같아질 때까지 반복한다.

4. reverse
	a. 문자열과 rotate시킬 크기 d, 문자열의 길이인 n을 reverse함수의 인수로 넘겨 받는다.
	b. 세번 호출할 sub_reverse함수를 추가하여 문자열을 reverse시킬 수 있게 한다. 
	c. d가 음수일 때아 양수일 때로 CASE를 구분하여  sub_reverse함수를 호출할때의 범위를 다르게 지
	정한다.
	d. d가 음수일 때는 d값을 기준으로 두개로 나누어서 각각 reverse시킨후 원하는 d만큼 rotate시킨다.
	e. d가 양수일때는 n - d값을 기준으로 두개로 나누어서 각각 reverse시킨후 원하는 d만큼 rotate시킨다.
	
--------------------------------------------------------------------------------------------------
<목표>



--------------------------------------------------------------------------------------------------
TestCase
[STRLength]  [ROTATE distance]  [T.trivial]    [T.juggle]     [T.bw]      [T.reverse] 
10	     1                   0.000000       0.000000       0.000000    0.000000
100	     39			 0.000000       0.000000       0.000000    0.000000
1000	     754                 0.004000       0.000000       0.000000    0.000000
5000   	     4259                0.116000       0.000000       0.000000    0.000000
10000        8705                0.473000	0.001000       0.000000    0.000000
100000 	     54123               29.762000      0.001000       0.001000    0.001000
500000       12354               33.677000      0.005000       0.003000    0.003000
1000000      12354               67.666000      0.009000       0.007000    0.008000







		
