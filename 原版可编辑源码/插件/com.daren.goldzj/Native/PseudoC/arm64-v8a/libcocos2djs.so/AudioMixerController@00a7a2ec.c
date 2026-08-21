
/* cocos2d::AudioMixerController::AudioMixerController(int, int, int) */

void __thiscall
cocos2d::AudioMixerController::AudioMixerController
          (AudioMixerController *this,int param_1,int param_2,int param_3)

{
  void *__s;
  
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(undefined2 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(long *)(this + 0x60) = (long)param_1 * (long)param_3 * 2;
  __s = (void *)memalign(0x20);
  *(void **)(this + 0x58) = __s;
  memset(__s,0,*(size_t *)(this + 0x60));
  return;
}

