
/* void std::__ndk1::vector<std::__ndk1::vector<cocos2d::Node*,
   std::__ndk1::allocator<cocos2d::Node*> >,
   std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*, std::__ndk1::allocator<cocos2d::Node*>
   > > >::__emplace_back_slow_path<>() */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
::__emplace_back_slow_path<>
          (vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
           *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = (long)puVar2 - (long)puVar8 >> 3;
  uVar9 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)puVar8 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar6 * 0x5555555555555556;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00aaa218;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x18);
LAB_00aaa218:
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  pvVar3 = (void *)((long)pvVar3 + uVar9 * 0x18);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  if (puVar2 == puVar8) {
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar7 + 3;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    lVar4 = 0;
    do {
      *(undefined8 *)((long)puVar7 + lVar4 + -0x18) = 0;
      *(undefined8 *)((long)puVar7 + lVar4 + -0x10) = 0;
      *(undefined8 *)((long)puVar7 + lVar4 + -8) = 0;
      uVar10 = *(undefined8 *)((long)puVar2 + lVar4 + -0x18);
      lVar6 = lVar4 + -0x18;
      *(undefined8 *)((long)puVar7 + lVar4 + -0x10) = *(undefined8 *)((long)puVar2 + lVar4 + -0x10);
      *(undefined8 *)((long)puVar7 + lVar4 + -0x18) = uVar10;
      *(undefined8 *)((long)puVar7 + lVar4 + -8) = *(undefined8 *)((long)puVar2 + lVar4 + -8);
      *(undefined8 *)((long)puVar2 + lVar4 + -0x18) = 0;
      *(undefined8 *)((long)puVar2 + lVar4 + -0x10) = 0;
      *(undefined8 *)((long)puVar2 + lVar4 + -8) = 0;
      lVar4 = lVar6;
    } while ((long)puVar8 - (long)puVar2 != lVar6);
    puVar8 = *(undefined8 **)this;
    puVar2 = *(undefined8 **)(this + 8);
    *(long *)this = (long)puVar7 + lVar6;
    *(undefined8 **)(this + 8) = puVar7 + 3;
    *(void **)(this + 0x10) = pvVar3;
    if (puVar2 != puVar8) {
      pvVar3 = (void *)puVar2[-3];
      puVar7 = puVar2 + -3;
      while( true ) {
        if (pvVar3 != (void *)0x0) {
          puVar2[-2] = pvVar3;
          operator_delete(pvVar3);
        }
        if (puVar8 == puVar7) break;
        pvVar3 = (void *)puVar7[-3];
        puVar2 = puVar7;
        puVar7 = puVar7 + -3;
      }
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar8);
  return;
}

