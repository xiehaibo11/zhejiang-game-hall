
/* cocos2d::experimental::PcmBufferProvider::getNextBuffer(cocos2d::experimental::AudioBufferProvider::Buffer*,
   long) */

undefined4 cocos2d::experimental::PcmBufferProvider::getNextBuffer(Buffer *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(long *)(param_1 + 0x10) - lVar3;
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar4 < *(ulong *)(param_2 + 8)) {
    *(ulong *)(param_2 + 8) = uVar4;
    uVar2 = uVar4;
  }
  *(ulong *)(param_1 + 0x28) = uVar2;
  if (uVar2 == 0) {
    lVar3 = 0;
    uVar1 = 0xffffffc3;
  }
  else {
    uVar1 = 0;
    lVar3 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x18) * lVar3;
  }
  *(long *)param_2 = lVar3;
  return uVar1;
}

