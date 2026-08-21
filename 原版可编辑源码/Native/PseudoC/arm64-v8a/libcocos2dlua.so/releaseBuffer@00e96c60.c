
/* cocos2d::experimental::PcmBufferProvider::releaseBuffer(cocos2d::experimental::AudioBufferProvider::Buffer*)
    */

void __thiscall
cocos2d::experimental::PcmBufferProvider::releaseBuffer(PcmBufferProvider *this,Buffer *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(this + 0x28);
  lVar2 = uVar1 - uVar3;
  if (uVar1 < uVar3) {
    lVar2 = 0;
    uVar3 = uVar1;
  }
  *(ulong *)(this + 0x20) = *(long *)(this + 0x20) + uVar3;
  *(long *)(this + 0x28) = lVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

