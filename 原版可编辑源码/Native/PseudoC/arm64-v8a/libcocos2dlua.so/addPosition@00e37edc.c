
/* cocos2d::PUPositionEmitter::addPosition(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUPositionEmitter::addPosition(PUPositionEmitter *this,Vec3 *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *__src;
  size_t __n;
  ulong uVar7;
  
  puVar5 = *(undefined8 **)(this + 0x208);
  if (puVar5 != *(undefined8 **)(this + 0x210)) {
    uVar6 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
    *puVar5 = uVar6;
    *(long *)(this + 0x208) = (long)puVar5 + 0xc;
    return;
  }
  __src = *(void **)(this + 0x200);
  __n = (long)puVar5 - (long)__src;
  uVar7 = 0x1555555555555555;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(undefined8 **)(this + 0x210) - (long)__src >> 2;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar4 = lVar3 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e37fa0;
    }
  }
  pvVar2 = operator_new(uVar7 * 0xc);
LAB_00e37fa0:
  uVar6 = *(undefined8 *)param_1;
  puVar5 = (undefined8 *)((long)pvVar2 + ((long)__n >> 2) * 4);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar5 = uVar6;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar5 - __n),__src,__n);
  }
  *(void **)(this + 0x200) = (void *)((long)puVar5 - __n);
  *(long *)(this + 0x208) = (long)puVar5 + 0xc;
  *(void **)(this + 0x210) = (void *)((long)pvVar2 + uVar7 * 0xc);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

