#ifndef SOUND_H
#define SOUND_H

#include <SDL/SDL_mixer.h>


namespace Engine {
	class Sound
	{
	public:
		Sound(const char* path);
		~Sound();
		bool IsPlaying();
		Sound* Play(bool loop);
		Sound* SetVolume(int volume);
	private:
		Mix_Chunk* sound = NULL;
		int volume = 100;
	};

}

#endif

