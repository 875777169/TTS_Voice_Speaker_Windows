
#include "speakVoice.h"

int main() {

	speakVoice voice;


	//voice.maoAsyncSpeak(L"��ϵ��̨1203");

	for (int i = 0; i < 10; i++) {
		voice.maoAsyncSpeak(L"�״������볡");
	}
	while (true)
		int a = 0;

	return 0;
}