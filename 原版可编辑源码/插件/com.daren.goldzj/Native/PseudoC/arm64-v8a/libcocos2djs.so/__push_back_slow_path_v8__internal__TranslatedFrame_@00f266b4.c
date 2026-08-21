
/* void std::__ndk1::vector<v8::internal::TranslatedFrame,
   std::__ndk1::allocator<v8::internal::TranslatedFrame>
   >::__push_back_slow_path<v8::internal::TranslatedFrame>(v8::internal::TranslatedFrame&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>::
__push_back_slow_path<v8::internal::TranslatedFrame>
          (vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>
           *this,TranslatedFrame *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  TranslatedFrame *pTVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  TranslatedFrame *this_00;
  TranslatedFrame *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar1 < 0x2e8ba2e8ba2e8bb) {
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar1) goto LAB_00f2687c;
      pvVar4 = operator_new(uVar1 * 0x58);
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)param_1;
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = (undefined8 *)((long)pvVar4 + lVar8 * 8);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar5[1] = uVar11;
    *puVar5 = uVar10;
    puVar5[3] = uVar13;
    puVar5[2] = uVar12;
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = puVar5 + 0xb;
    puVar5[6] = *(undefined8 *)(param_1 + 0x30);
    puVar5[5] = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    puVar5[8] = *(undefined8 *)(param_1 + 0x40);
    puVar5[7] = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    puVar5[10] = *(undefined8 *)(param_1 + 0x50);
    puVar5[9] = uVar10;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    this_00 = *(TranslatedFrame **)this;
    pTVar3 = *(TranslatedFrame **)(this + 8);
    pTVar9 = this_00;
    if (pTVar3 != this_00) {
      lVar8 = 0;
      do {
        uVar11 = *(undefined8 *)(pTVar3 + lVar8 + -0x40);
        uVar10 = *(undefined8 *)(pTVar3 + lVar8 + -0x48);
        uVar13 = *(undefined8 *)(pTVar3 + lVar8 + -0x50);
        uVar12 = *(undefined8 *)(pTVar3 + lVar8 + -0x58);
        *(undefined4 *)((long)puVar5 + lVar8 + -0x38) = *(undefined4 *)(pTVar3 + lVar8 + -0x38);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x40) = uVar11;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x48) = uVar10;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x50) = uVar13;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x58) = uVar12;
        lVar6 = lVar8 + -0x58;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x30) = *(undefined8 *)(pTVar3 + lVar8 + -0x30);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x28) = *(undefined8 *)(pTVar3 + lVar8 + -0x28);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x20) = *(undefined8 *)(pTVar3 + lVar8 + -0x20);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x18) = *(undefined8 *)(pTVar3 + lVar8 + -0x18);
        *(undefined8 *)(pTVar3 + lVar8 + -0x28) = 0;
        *(undefined8 *)(pTVar3 + lVar8 + -0x30) = 0;
        *(undefined8 *)(pTVar3 + lVar8 + -0x18) = 0;
        *(undefined8 *)(pTVar3 + lVar8 + -0x20) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x10) = *(undefined8 *)(pTVar3 + lVar8 + -0x10);
        *(undefined8 *)((long)puVar5 + lVar8 + -8) = *(undefined8 *)(pTVar3 + lVar8 + -8);
        *(undefined8 *)(pTVar3 + lVar8 + -0x10) = 0;
        *(undefined8 *)(pTVar3 + lVar8 + -8) = 0;
        lVar8 = lVar6;
      } while ((long)this_00 - (long)pTVar3 != lVar6);
      this_00 = *(TranslatedFrame **)(this + 8);
      puVar5 = (undefined8 *)((long)puVar5 + lVar6);
      pTVar9 = *(TranslatedFrame **)this;
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x58);
    while (this_00 != pTVar9) {
      this_00 = this_00 + -0x58;
      v8::internal::TranslatedFrame::~TranslatedFrame(this_00);
    }
    if (pTVar9 != (TranslatedFrame *)0x0) {
      operator_delete(pTVar9);
      return;
    }
    return;
  }
LAB_00f2687c:
                    /* WARNING: Subroutine does not return */
  abort();
}

