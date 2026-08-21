
/* cocos2d::experimental::PcmBufferProvider::init(void const*, unsigned long, unsigned long) */

undefined8 __thiscall
cocos2d::experimental::PcmBufferProvider::init
          (PcmBufferProvider *this,void *param_1,ulong param_2,ulong param_3)

{
  *(void **)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(ulong *)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x20) = 0;
  return 1;
}

