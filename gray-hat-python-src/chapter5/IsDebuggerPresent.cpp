/**
 * 
 * @authors giantbranch (giantbranch@gmail.com)
 * @date    2016-08-19 16:03:39
 */
#include <windows.h>

extern "C" BOOL WINAPI IsDebuggerPresent(void);

int main(){
	if (IsDebuggerPresent())
	{
		MessageBox(NULL, "���ڵ��ԡ���", "����", NULL);
	}else{
		MessageBox(NULL, "û�е���Ŷ", "����", NULL);
	}
	return 0;
}