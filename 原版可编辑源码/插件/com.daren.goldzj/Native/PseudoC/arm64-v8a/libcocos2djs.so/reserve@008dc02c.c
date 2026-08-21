
/* std::__ndk1::vector<cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
::reserve(vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
          *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pvVar8 = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar8 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_1) {
    if (0x276276276276276 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    lVar9 = *(long *)(this + 8);
    pvVar6 = operator_new(param_1 * 0x68);
    lVar4 = lVar9 - (long)pvVar8;
    lVar1 = (long)pvVar6 + lVar4;
    pvVar2 = (void *)((long)pvVar6 + param_1 * 0x68);
    if (lVar4 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      lVar7 = 0;
      do {
        lVar3 = lVar9 + lVar7;
        lVar5 = lVar7 + (lVar4 >> 3) * 8;
        lVar7 = lVar7 + -0x68;
        *(undefined4 *)((long)pvVar6 + lVar5 + -0x68) = *(undefined4 *)(lVar3 + -0x68);
        uVar12 = *(undefined8 *)(lVar3 + -0x58);
        uVar11 = *(undefined8 *)(lVar3 + -0x60);
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x50) = *(undefined8 *)(lVar3 + -0x50);
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x58) = uVar12;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x60) = uVar11;
        uVar12 = *(undefined8 *)(lVar3 + -0x40);
        uVar11 = *(undefined8 *)(lVar3 + -0x48);
        *(undefined8 *)(lVar3 + -0x58) = 0;
        *(undefined8 *)(lVar3 + -0x50) = 0;
        *(undefined8 *)(lVar3 + -0x60) = 0;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x38) = *(undefined8 *)(lVar3 + -0x38);
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x40) = uVar12;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x48) = uVar11;
        uVar12 = *(undefined8 *)(lVar3 + -0x28);
        uVar11 = *(undefined8 *)(lVar3 + -0x30);
        *(undefined8 *)(lVar3 + -0x40) = 0;
        *(undefined8 *)(lVar3 + -0x38) = 0;
        *(undefined8 *)(lVar3 + -0x48) = 0;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x20) = *(undefined8 *)(lVar3 + -0x20);
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x28) = uVar12;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x30) = uVar11;
        *(undefined8 *)(lVar3 + -0x28) = 0;
        *(undefined8 *)(lVar3 + -0x20) = 0;
        *(undefined8 *)(lVar3 + -0x30) = 0;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x18) = 0;
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x10) = 0;
        *(undefined8 *)((long)pvVar6 + lVar5 + -8) = 0;
        uVar11 = *(undefined8 *)(lVar3 + -0x18);
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x10) = *(undefined8 *)(lVar3 + -0x10);
        *(undefined8 *)((long)pvVar6 + lVar5 + -0x18) = uVar11;
        *(undefined8 *)((long)pvVar6 + lVar5 + -8) = *(undefined8 *)(lVar3 + -8);
        *(undefined8 *)(lVar3 + -0x18) = 0;
        *(undefined8 *)(lVar3 + -0x10) = 0;
        *(undefined8 *)(lVar3 + -8) = 0;
      } while ((long)pvVar8 - lVar9 != lVar7);
      pvVar8 = *(void **)this;
      pvVar10 = *(void **)(this + 8);
      *(long *)this = (long)pvVar6 + lVar7 + (lVar4 >> 3) * 8;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
      while (pvVar10 != pvVar8) {
        pvVar10 = (void *)((long)pvVar10 + -0x68);
        FUN_008e15e8(this + 0x10,pvVar10);
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
      return;
    }
  }
  return;
}

