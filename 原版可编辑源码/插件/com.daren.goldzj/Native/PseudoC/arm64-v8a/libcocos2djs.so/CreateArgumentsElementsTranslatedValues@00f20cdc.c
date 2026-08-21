
/* v8::internal::TranslatedState::CreateArgumentsElementsTranslatedValues(int, unsigned long,
   v8::internal::CreateArgumentsType, __sFILE*) */

void __thiscall
v8::internal::TranslatedState::CreateArgumentsElementsTranslatedValues
          (TranslatedState *this,uint param_1,long *param_2,byte param_4,__sFILE *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
  *this_00;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined4 local_70;
  undefined2 local_6c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_2;
  lVar16 = *(long *)this;
  if (plVar3[-1] == 0x26) {
    uVar8 = *(int *)(plVar3 + -3) >> 1;
    param_2 = plVar3;
  }
  else {
    uVar8 = *(uint *)(this + 0x28);
  }
  if (param_4 == 2) {
    uVar8 = uVar8 - *(int *)(this + 0x28) &
            ((int)(uVar8 - *(int *)(this + 0x28)) >> 0x1f ^ 0xffffffffU);
  }
  lVar18 = lVar16 + (long)(int)param_1 * 0x58;
  uVar14 = *(ulong *)(this + 0x58);
  plVar3 = (long *)(lVar18 + 0x50);
  lVar10 = *plVar3;
  uVar6 = uVar14;
  if (param_5 != (__sFILE *)0x0) {
    PrintF(param_5,"arguments elements object #%d (type = %d, length = %d)",uVar14 & 0xffffffff,
           (ulong)param_4,(ulong)uVar8);
    uVar6 = *(ulong *)(this + 0x58);
  }
  lVar4 = *(long *)(this + 0x38);
  uVar7 = 0;
  if (*(long *)(this + 0x40) - lVar4 != 0) {
    uVar7 = (*(long *)(this + 0x40) - lVar4) * 0x40 - 1;
  }
  uVar6 = uVar6 + *(long *)(this + 0x50);
  this_00 = (deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
             *)(lVar18 + 0x28);
  if (uVar7 == uVar6) {
    std::__ndk1::
    deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
    ::__add_back_capacity
              ((deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
                *)(this + 0x30));
    lVar4 = *(long *)(this + 0x38);
    uVar6 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
  }
  *(ulong *)(*(long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
       (ulong)param_1 | lVar10 << 0x20;
  lVar16 = lVar16 + (long)(int)param_1 * 0x58;
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  plVar15 = (long *)(lVar16 + 0x38);
  lVar18 = *plVar15;
  plVar19 = (long *)(lVar16 + 0x30);
  lVar10 = *plVar19;
  plVar17 = (long *)(lVar16 + 0x48);
  uVar6 = 0;
  if (lVar18 - lVar10 != 0) {
    uVar6 = (lVar18 - lVar10) * 0x10 - 1;
  }
  uVar7 = *plVar3 + *plVar17;
  if (uVar6 == uVar7) {
    std::__ndk1::
    deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
    __add_back_capacity(this_00);
    lVar10 = *plVar19;
    lVar18 = *plVar15;
    uVar7 = *plVar17 + *plVar3;
  }
  if (lVar18 == lVar10) {
    puVar5 = (undefined2 *)0x0;
  }
  else {
    puVar5 = (undefined2 *)
             (*(long *)(lVar10 + (uVar7 >> 4 & 0xffffffffffffff8)) + (uVar7 & 0x7f) * 0x20);
  }
  *puVar5 = 8;
  *(TranslatedState **)(puVar5 + 4) = this;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(int *)(puVar5 + 0xc) = (int)uVar14;
  *(uint *)(puVar5 + 0xe) = uVar8 + 2;
  *(undefined4 *)(puVar5 + 1) = local_70;
  puVar5[3] = local_6c;
  lVar16 = *plVar3;
  *plVar3 = lVar16 + 1;
  lVar18 = *plVar15;
  lVar10 = *plVar19;
  lVar4 = *(long *)(this + 0x18);
  uVar9 = *(undefined8 *)(lVar4 + 0xe0);
  uVar6 = 0;
  if (lVar18 - lVar10 != 0) {
    uVar6 = (lVar18 - lVar10) * 0x10 - 1;
  }
  uVar14 = *plVar17 + lVar16 + 1;
  if (uVar6 == uVar14) {
    std::__ndk1::
    deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
    __add_back_capacity(this_00);
    lVar10 = *plVar19;
    lVar18 = *plVar15;
    uVar14 = *plVar17 + *plVar3;
  }
  if (lVar18 == lVar10) {
    puVar5 = (undefined2 *)0x0;
  }
  else {
    puVar5 = (undefined2 *)
             (*(long *)(lVar10 + (uVar14 >> 4 & 0xffffffffffffff8)) + (uVar14 & 0x7f) * 0x20);
  }
  *puVar5 = 1;
  *(TranslatedState **)(puVar5 + 4) = this;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0xc) = uVar9;
  *(undefined4 *)(puVar5 + 1) = local_70;
  puVar5[3] = local_6c;
  lVar16 = *plVar3;
  *plVar3 = lVar16 + 1;
  lVar18 = *plVar15;
  lVar10 = *plVar19;
  uVar6 = 0;
  if (lVar18 - lVar10 != 0) {
    uVar6 = (lVar18 - lVar10) * 0x10 - 1;
  }
  uVar14 = *plVar17 + lVar16 + 1;
  if (uVar6 == uVar14) {
    std::__ndk1::
    deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
    __add_back_capacity(this_00);
    lVar10 = *plVar19;
    lVar18 = *plVar15;
    uVar14 = *plVar17 + *plVar3;
  }
  if (lVar18 == lVar10) {
    puVar5 = (undefined2 *)0x0;
  }
  else {
    puVar5 = (undefined2 *)
             (*(long *)(lVar10 + (uVar14 >> 4 & 0xffffffffffffff8)) + (uVar14 & 0x7f) * 0x20);
  }
  *puVar5 = 2;
  *(TranslatedState **)(puVar5 + 4) = this;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(uint *)(puVar5 + 0xc) = uVar8;
  *(undefined4 *)(puVar5 + 1) = local_70;
  puVar5[3] = local_6c;
  lVar16 = *plVar3 + 1;
  *plVar3 = lVar16;
  if (param_4 == 0) {
    uVar12 = *(uint *)(this + 0x28);
    if ((int)uVar8 <= (int)*(uint *)(this + 0x28)) {
      uVar12 = uVar8;
    }
    uVar13 = uVar12;
    if (0 < (int)uVar12) {
      do {
        lVar18 = *plVar15;
        lVar10 = *plVar19;
        uVar9 = *(undefined8 *)(lVar4 + 0xa8);
        uVar6 = 0;
        if (lVar18 - lVar10 != 0) {
          uVar6 = (lVar18 - lVar10) * 0x10 - 1;
        }
        uVar14 = lVar16 + *plVar17;
        if (uVar6 == uVar14) {
          std::__ndk1::
          deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
          ::__add_back_capacity(this_00);
          lVar10 = *plVar19;
          lVar18 = *plVar15;
          uVar14 = *plVar17 + *plVar3;
        }
        if (lVar18 == lVar10) {
          puVar5 = (undefined2 *)0x0;
        }
        else {
          puVar5 = (undefined2 *)
                   (*(long *)(lVar10 + (uVar14 >> 4 & 0xffffffffffffff8)) + (uVar14 & 0x7f) * 0x20);
        }
        *puVar5 = 1;
        *(TranslatedState **)(puVar5 + 4) = this;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 0xc) = uVar9;
        *(undefined4 *)(puVar5 + 1) = local_70;
        puVar5[3] = local_6c;
        uVar13 = uVar13 - 1;
        lVar16 = *plVar3 + 1;
        *plVar3 = lVar16;
      } while (uVar13 != 0);
    }
  }
  else {
    uVar12 = 0;
  }
  uVar8 = uVar8 + ~uVar12;
  if (-1 < (int)uVar8) {
    iVar11 = uVar8 * 8;
    lVar10 = (ulong)uVar8 + 1;
    do {
      lVar4 = *plVar15;
      lVar18 = *plVar19;
      uVar9 = *(undefined8 *)((long)param_2 + (long)iVar11 + 0x10);
      uVar6 = 0;
      if (lVar4 - lVar18 != 0) {
        uVar6 = (lVar4 - lVar18) * 0x10 - 1;
      }
      uVar14 = lVar16 + *plVar17;
      if (uVar6 == uVar14) {
        std::__ndk1::
        deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
        __add_back_capacity(this_00);
        lVar18 = *plVar19;
        lVar4 = *plVar15;
        uVar14 = *plVar17 + *plVar3;
      }
      if (lVar4 == lVar18) {
        puVar5 = (undefined2 *)0x0;
      }
      else {
        puVar5 = (undefined2 *)
                 (*(long *)(lVar18 + (uVar14 >> 4 & 0xffffffffffffff8)) + (uVar14 & 0x7f) * 0x20);
      }
      *puVar5 = 1;
      *(TranslatedState **)(puVar5 + 4) = this;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 0xc) = uVar9;
      *(undefined4 *)(puVar5 + 1) = local_70;
      puVar5[3] = local_6c;
      lVar10 = lVar10 + -1;
      iVar11 = iVar11 + -8;
      lVar16 = *plVar3 + 1;
      *plVar3 = lVar16;
    } while (0 < lVar10);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

