
/* std::__ndk1::vector<cocos2d::Vec3, std::__ndk1::allocator<cocos2d::Vec3> >::assign(unsigned long,
   cocos2d::Vec3 const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::assign
          (vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *this,ulong param_1,
          Vec3 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(this + 0x10);
  puVar2 = *(undefined8 **)this;
  if ((ulong)((lVar4 - (long)puVar2 >> 2) * -0x5555555555555555) < param_1) {
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 **)(this + 8) = puVar2;
      operator_delete(puVar2);
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x1555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar6 = 0x1555555555555555;
    if (((ulong)((lVar4 >> 2) * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) &&
       (uVar5 = (lVar4 >> 2) * 0x5555555555555556, uVar6 = param_1, param_1 <= uVar5)) {
      uVar6 = uVar5;
    }
    puVar3 = operator_new(uVar6 * 0xc);
    lVar4 = param_1 * 0xc;
    *(void **)(this + 0x10) = (void *)((long)puVar3 + uVar6 * 0xc);
    puVar2 = (undefined8 *)((long)puVar3 + lVar4);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    do {
      uVar7 = *(undefined8 *)param_2;
      lVar4 = lVar4 + -0xc;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
      *puVar3 = uVar7;
      puVar3 = (undefined8 *)((long)puVar3 + 0xc);
    } while (lVar4 != 0);
  }
  else {
    lVar4 = *(long *)(this + 8) - (long)puVar2 >> 2;
    uVar5 = lVar4 * -0x5555555555555555;
    uVar6 = uVar5;
    if (param_1 <= uVar5) {
      uVar6 = param_1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar7 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
      *puVar2 = uVar7;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    }
    if (uVar5 < param_1) {
      puVar3 = *(undefined8 **)(this + 8);
      lVar1 = param_1 + lVar4 * 0x5555555555555555;
      puVar2 = puVar3;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)((long)puVar3 + lVar1 * 0xc);
        lVar4 = lVar4 * -4 + param_1 * 0xc;
        do {
          uVar7 = *(undefined8 *)param_2;
          lVar4 = lVar4 + -0xc;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 8);
          *puVar3 = uVar7;
          puVar3 = (undefined8 *)((long)puVar3 + 0xc);
        } while (lVar4 != 0);
      }
    }
    else {
      puVar2 = (undefined8 *)(*(long *)this + param_1 * 0xc);
    }
  }
  *(undefined8 **)(this + 8) = puVar2;
  return;
}

