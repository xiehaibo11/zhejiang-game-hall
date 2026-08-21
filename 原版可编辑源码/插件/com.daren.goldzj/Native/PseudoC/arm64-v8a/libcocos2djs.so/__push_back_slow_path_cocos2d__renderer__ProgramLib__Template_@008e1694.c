
/* void std::__ndk1::vector<cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>
   >::__push_back_slow_path<cocos2d::renderer::ProgramLib::Template>(cocos2d::renderer::ProgramLib::Template&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
::__push_back_slow_path<cocos2d::renderer::ProgramLib::Template>
          (vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
           *this,Template *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar10 = 0x276276276276276;
  uVar1 = lVar5 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5) < 0x13b13b13b13b13b) {
    uVar8 = lVar7 * -0x6276276276276276;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_008e172c;
    }
  }
  pvVar4 = operator_new(uVar10 * 0x68);
LAB_008e172c:
  puVar6 = (undefined4 *)((long)pvVar4 + lVar5 * 8);
  *puVar6 = *(undefined4 *)param_1;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(puVar6 + 4) = uVar13;
  *(undefined8 *)(puVar6 + 2) = uVar12;
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(puVar6 + 10) = uVar13;
  *(undefined8 *)(puVar6 + 8) = uVar12;
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(puVar6 + 0x10) = uVar13;
  *(undefined8 *)(puVar6 + 0xe) = uVar12;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(puVar6 + 0x16) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(puVar6 + 0x16) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(puVar6 + 0x14) = uVar12;
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  pvVar9 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  puVar2 = puVar6 + 0x1a;
  pvVar11 = pvVar9;
  if (pvVar3 != pvVar9) {
    lVar5 = 0;
    do {
      lVar7 = lVar5 + -0x68;
      *(undefined4 *)((long)puVar6 + lVar5 + -0x68) = *(undefined4 *)((long)pvVar3 + lVar5 + -0x68);
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x58);
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x60);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x50) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x50);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x58) = uVar13;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x60) = uVar12;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x40);
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x48);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x58) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x60) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x38) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x38);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x40) = uVar13;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x48) = uVar12;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x40) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x48) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x28) = uVar13;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x30) = uVar12;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x28) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x20) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x30) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x18) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x10) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -8) = 0;
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x10);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x18) = uVar12;
      *(undefined8 *)((long)puVar6 + lVar5 + -8) = *(undefined8 *)((long)pvVar3 + lVar5 + -8);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -8) = 0;
      lVar5 = lVar7;
    } while ((long)pvVar9 - (long)pvVar3 != lVar7);
    pvVar9 = *(void **)(this + 8);
    puVar6 = (undefined4 *)((long)puVar6 + lVar7);
    pvVar11 = *(void **)this;
  }
  *(undefined4 **)this = puVar6;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar10 * 0x68);
  if (pvVar9 != pvVar11) {
    do {
      pvVar9 = (void *)((long)pvVar9 + -0x68);
      FUN_008e15e8(this + 0x10,pvVar9);
    } while (pvVar11 != pvVar9);
  }
  if (pvVar11 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar11);
  return;
}

