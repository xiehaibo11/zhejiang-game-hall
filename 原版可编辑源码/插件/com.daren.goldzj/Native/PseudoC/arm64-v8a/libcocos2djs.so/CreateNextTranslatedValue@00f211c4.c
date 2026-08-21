
/* v8::internal::TranslatedState::CreateNextTranslatedValue(int, v8::internal::TranslationIterator*,
   v8::internal::FixedArray, unsigned long, v8::internal::RegisterValues*, __sFILE*) */

uint __thiscall
v8::internal::TranslatedState::CreateNextTranslatedValue
          (TranslatedState *this,uint param_1,long *param_2,ulong param_4,long *param_5,
          RegisterValues *param_6,__sFILE *param_7)

{
  deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
  *this_00;
  float fVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined4 local_118;
  undefined2 local_114;
  undefined8 local_110;
  undefined **local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_108 = &PTR__NameConverter_01cbdfa8;
  puStack_100 = auStack_f0;
  local_f8 = 0x80;
  lVar22 = *(long *)this;
  plVar21 = (long *)(lVar22 + (long)(int)param_1 * 0x58 + 0x50);
  lVar19 = *plVar21;
  puVar9 = (uint *)(param_2 + 1);
  uVar15 = (ulong)(int)*puVar9;
  lVar17 = *param_2;
  uVar4 = 0;
  uVar8 = 0;
  lVar23 = (long)(int)param_1;
  pbVar16 = (byte *)(lVar17 + uVar15 + 7);
  do {
    iVar14 = (int)uVar15;
    uVar7 = iVar14 + 1;
    uVar15 = (ulong)uVar7;
    *puVar9 = uVar7;
    bVar2 = *pbVar16;
    uVar8 = (uint)(bVar2 >> 1) << (ulong)(uVar4 & 0x1f) | uVar8;
    uVar4 = uVar4 + 7;
    pbVar16 = pbVar16 + 1;
  } while ((bVar2 & 1) != 0);
  uVar4 = -(uVar8 >> 1);
  if ((uVar8 & 1) == 0) {
    uVar4 = uVar8 >> 1;
  }
  if (0x12 < uVar4 - 7) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("We should never get here - unexpected deopt info.");
  }
  this_00 = (deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>
             *)(lVar22 + lVar23 * 0x58 + 0x28);
  uVar8 = iVar14 + 2;
  switch(uVar4) {
  case 7:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar8 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar8 = uVar18 >> 1;
    }
    if (param_7 != (__sFILE *)0x0) {
      PrintF(param_7,"duplicated object #%d",(ulong)uVar8);
    }
    lVar17 = *(long *)(this + 0x38);
    uVar15 = *(long *)(this + 0x50) + (long)(int)uVar8;
    lVar19 = *(long *)(lVar17 + (uVar15 >> 6 & 0x3fffffffffffff8));
    uVar13 = 0;
    if (*(long *)(this + 0x40) - lVar17 != 0) {
      uVar13 = (*(long *)(this + 0x40) - lVar17) * 0x40 - 1;
    }
    uVar12 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
    if (uVar13 == uVar12) {
      std::__ndk1::
      deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
      ::__add_back_capacity
                ((deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
                  *)(this + 0x30));
      lVar17 = *(long *)(this + 0x38);
      uVar12 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
    }
    *(undefined8 *)(*(long *)(lVar17 + (uVar12 >> 6 & 0x3fffffffffffff8)) + (uVar12 & 0x1ff) * 8) =
         *(undefined8 *)(lVar19 + (uVar15 & 0x1ff) * 8);
    lVar22 = lVar22 + lVar23 * 0x58;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
    }
    *puVar10 = 9;
    uVar4 = 0;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    puVar10[3] = local_110._4_2_;
    *(undefined4 *)(puVar10 + 1) = (undefined4)local_110;
    *(uint *)(puVar10 + 0xc) = uVar8;
    *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
    goto LAB_00f225a4;
  case 8:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    CreateArgumentsElementsTranslatedValues(this,param_1,param_5,uVar4,param_7);
    uVar4 = 0;
    goto LAB_00f225b0;
  case 9:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (*(long *)(*param_5 + -8) == 0x26) {
      uVar8 = *(int *)(*param_5 + -0x18) >> 1;
    }
    else {
      uVar8 = *(uint *)(this + 0x28);
    }
    if ((uVar4 & 0xff) == 2) {
      uVar8 = uVar8 - *(int *)(this + 0x28) &
              ((int)(uVar8 - *(int *)(this + 0x28)) >> 0x1f ^ 0xffffffffU);
    }
    if (param_7 != (__sFILE *)0x0) {
      PrintF(param_7,"arguments length field (type = %d, length = %d)",(ulong)(uVar4 & 0xff),
             (ulong)uVar8);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 != lVar17) goto LAB_00f21954;
LAB_00f222f4:
    puVar10 = (undefined2 *)0x0;
    goto LAB_00f222f8;
  case 10:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar15 = *(ulong *)(this + 0x58);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar13 = uVar15;
    if (param_7 != (__sFILE *)0x0) {
      PrintF(param_7,"captured object #%d (length = %d)",uVar15 & 0xffffffff,(ulong)uVar4);
      uVar13 = *(ulong *)(this + 0x58);
    }
    lVar17 = *(long *)(this + 0x38);
    uVar12 = 0;
    if (*(long *)(this + 0x40) - lVar17 != 0) {
      uVar12 = (*(long *)(this + 0x40) - lVar17) * 0x40 - 1;
    }
    uVar13 = uVar13 + *(long *)(this + 0x50);
    if (uVar12 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
      ::__add_back_capacity
                ((deque<v8::internal::TranslatedState::ObjectPosition,std::__ndk1::allocator<v8::internal::TranslatedState::ObjectPosition>>
                  *)(this + 0x30));
      lVar17 = *(long *)(this + 0x38);
      uVar13 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
    }
    *(ulong *)(*(long *)(lVar17 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8) =
         (ulong)param_1 | lVar19 << 0x20;
    lVar22 = lVar22 + lVar23 * 0x58;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar13 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar13 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar12 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar13 == uVar12) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar12 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20);
    }
    *puVar10 = 8;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(int *)(puVar10 + 0xc) = (int)uVar15;
    *(uint *)(puVar10 + 0xe) = uVar4;
    goto LAB_00f2259c;
  case 0xb:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (param_6 == (RegisterValues *)0x0) break;
    uVar15 = CONCAT44(*(undefined4 *)(this + 0x1c),*(undefined4 *)(param_6 + (ulong)uVar4 * 8));
    if (param_7 != (__sFILE *)0x0) {
      uVar20 = disasm::NameConverter::NameOfCPURegister((NameConverter *)&local_108,uVar4);
      PrintF(param_7,"0x%012lx ; %s ",uVar15,uVar20);
      local_110 = uVar15;
      Object::ShortPrint((Object *)&local_110,param_7);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar13 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar13 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar12 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar13 == uVar12) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar12 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 != lVar17) goto LAB_00f21798;
LAB_00f216a8:
    puVar10 = (undefined2 *)0x0;
    goto LAB_00f217ac;
  case 0xc:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (param_6 == (RegisterValues *)0x0) break;
    uVar20 = *(undefined8 *)(param_6 + (ulong)uVar4 * 8);
    if (param_7 != (__sFILE *)0x0) {
      uVar5 = disasm::NameConverter::NameOfCPURegister((NameConverter *)&local_108,uVar4);
      PrintF(param_7,"%ld ; %s (int32)",uVar20,uVar5);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
    }
    uVar11 = 2;
LAB_00f22588:
    uVar4 = 0;
    *puVar10 = uVar11;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(int *)(puVar10 + 0xc) = (int)uVar20;
    goto LAB_00f2259c;
  case 0xd:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (param_6 != (RegisterValues *)0x0) {
      uVar15 = *(ulong *)(param_6 + (ulong)uVar4 * 8);
      if (param_7 != (__sFILE *)0x0) {
        uVar20 = disasm::NameConverter::NameOfCPURegister((NameConverter *)&local_108,uVar4);
        PrintF(param_7,"%ld ; %s (int64)",uVar15,uVar20);
      }
      lVar22 = lVar22 + lVar23 * 0x58;
      lVar19 = *(long *)(lVar22 + 0x38);
      lVar17 = *(long *)(lVar22 + 0x30);
      uVar13 = 0;
      if (lVar19 - lVar17 != 0) {
        uVar13 = (lVar19 - lVar17) * 0x10 - 1;
      }
      uVar12 = *plVar21 + *(long *)(lVar22 + 0x48);
      if (uVar13 == uVar12) {
        std::__ndk1::
        deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
        __add_back_capacity(this_00);
        lVar17 = *(long *)(lVar22 + 0x30);
        lVar19 = *(long *)(lVar22 + 0x38);
        uVar12 = *(long *)(lVar22 + 0x48) + *plVar21;
      }
      if (lVar19 != lVar17) goto LAB_00f21e74;
LAB_00f21cbc:
      puVar10 = (undefined2 *)0x0;
      goto LAB_00f21e88;
    }
    break;
  case 0xe:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (param_6 != (RegisterValues *)0x0) {
      uVar20 = *(undefined8 *)(param_6 + (ulong)uVar4 * 8);
      if (param_7 != (__sFILE *)0x0) {
        uVar5 = disasm::NameConverter::NameOfCPURegister((NameConverter *)&local_108,uVar4);
        PrintF(param_7,"%lu ; %s (uint32)",uVar20,uVar5);
      }
      lVar22 = lVar22 + lVar23 * 0x58;
      lVar19 = *(long *)(lVar22 + 0x38);
      lVar17 = *(long *)(lVar22 + 0x30);
      uVar15 = 0;
      if (lVar19 - lVar17 != 0) {
        uVar15 = (lVar19 - lVar17) * 0x10 - 1;
      }
      uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
      if (uVar15 == uVar13) {
        std::__ndk1::
        deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
        __add_back_capacity(this_00);
        lVar17 = *(long *)(lVar22 + 0x30);
        lVar19 = *(long *)(lVar22 + 0x38);
        uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
      }
      if (lVar19 == lVar17) {
        puVar10 = (undefined2 *)0x0;
      }
      else {
        puVar10 = (undefined2 *)
                  (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
      }
      uVar11 = 4;
      goto LAB_00f22588;
    }
    break;
  case 0xf:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (param_6 != (RegisterValues *)0x0) {
      uVar20 = *(undefined8 *)(param_6 + (ulong)uVar4 * 8);
      if (param_7 != (__sFILE *)0x0) {
        uVar5 = disasm::NameConverter::NameOfCPURegister((NameConverter *)&local_108,uVar4);
        PrintF(param_7,"%ld ; %s (bool)",uVar20,uVar5);
      }
      lVar22 = lVar22 + lVar23 * 0x58;
      lVar19 = *(long *)(lVar22 + 0x38);
      lVar17 = *(long *)(lVar22 + 0x30);
      uVar15 = 0;
      if (lVar19 - lVar17 != 0) {
        uVar15 = (lVar19 - lVar17) * 0x10 - 1;
      }
      uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
      if (uVar15 == uVar13) {
        std::__ndk1::
        deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
        __add_back_capacity(this_00);
        lVar17 = *(long *)(lVar22 + 0x30);
        lVar19 = *(long *)(lVar22 + 0x38);
        uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
      }
      if (lVar19 == lVar17) {
        puVar10 = (undefined2 *)0x0;
      }
      else {
        puVar10 = (undefined2 *)
                  (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
      }
      uVar11 = 5;
      goto LAB_00f22588;
    }
    break;
  case 0x10:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    if (param_6 != (RegisterValues *)0x0) {
      uVar20 = RegisterValues::GetFloatRegister(param_6,uVar4);
      if (param_7 != (__sFILE *)0x0) {
        if (uVar4 == 0xffffffff) {
          pcVar6 = "invalid";
        }
        else {
          pcVar6 = (char *)(&RegisterName(v8::internal::VRegister)::Names)[(int)uVar4];
        }
        PrintF(param_7,"%e ; %s (float)",(double)(float)uVar20,pcVar6);
      }
      lVar22 = lVar22 + lVar23 * 0x58;
      lVar19 = *(long *)(lVar22 + 0x38);
      lVar17 = *(long *)(lVar22 + 0x30);
      uVar15 = 0;
      if (lVar19 - lVar17 != 0) {
        uVar15 = (lVar19 - lVar17) * 0x10 - 1;
      }
      uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
      if (uVar15 == uVar13) {
        std::__ndk1::
        deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
        __add_back_capacity(this_00);
        lVar17 = *(long *)(lVar22 + 0x30);
        lVar19 = *(long *)(lVar22 + 0x38);
        uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
      }
      if (lVar19 == lVar17) {
        puVar10 = (undefined2 *)0x0;
      }
      else {
        puVar10 = (undefined2 *)
                  (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
      }
      uVar11 = 6;
      goto LAB_00f22588;
    }
    break;
  case 0x11:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    if (param_6 != (RegisterValues *)0x0) {
      uVar4 = -(uVar18 >> 1);
      if ((uVar18 & 1) == 0) {
        uVar4 = uVar18 >> 1;
      }
      uVar20 = *(undefined8 *)(param_6 + (ulong)uVar4 * 8 + 0x100);
      if (param_7 != (__sFILE *)0x0) {
        if (uVar4 == 0xffffffff) {
          pcVar6 = "invalid";
        }
        else {
          pcVar6 = (char *)(&RegisterName(v8::internal::VRegister)::Names)[(int)uVar4];
        }
        PrintF(param_7,"%e ; %s (double)",uVar20,pcVar6);
      }
      lVar22 = lVar22 + lVar23 * 0x58;
      lVar19 = *(long *)(lVar22 + 0x38);
      lVar17 = *(long *)(lVar22 + 0x30);
      uVar15 = 0;
      if (lVar19 - lVar17 != 0) {
        uVar15 = (lVar19 - lVar17) * 0x10 - 1;
      }
      uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
      if (uVar15 == uVar13) {
        std::__ndk1::
        deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
        __add_back_capacity(this_00);
        lVar17 = *(long *)(lVar22 + 0x30);
        lVar19 = *(long *)(lVar22 + 0x38);
        uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
      }
      if (lVar19 != lVar17) goto LAB_00f21f70;
LAB_00f2265c:
      puVar10 = (undefined2 *)0x0;
      goto LAB_00f22660;
    }
    break;
  case 0x12:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    uVar15 = CONCAT44(*(undefined4 *)(this + 0x1c),*(undefined4 *)((long)param_5 + (long)(int)uVar4)
                     );
    if (param_7 != (__sFILE *)0x0) {
      uVar8 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar8 = 0x2b;
      }
      uVar7 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4;
      }
      PrintF(param_7,"0x%012lx ;  [fp %c %3d]  ",uVar15,(ulong)uVar8,(ulong)uVar7);
      local_110 = uVar15;
      Object::ShortPrint((Object *)&local_110,param_7);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar13 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar13 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar12 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar13 == uVar12) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar12 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) goto LAB_00f216a8;
LAB_00f21798:
    puVar10 = (undefined2 *)
              (*(long *)(lVar17 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20);
LAB_00f217ac:
    uVar11 = 1;
LAB_00f21e90:
    *puVar10 = uVar11;
    local_118 = (undefined4)local_110;
    local_114 = local_110._4_2_;
LAB_00f22488:
    uVar4 = 0;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    puVar10[3] = local_114;
    *(undefined4 *)(puVar10 + 1) = local_118;
    *(ulong *)(puVar10 + 0xc) = uVar15;
    goto LAB_00f225a4;
  case 0x13:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    uVar8 = *(uint *)((long)param_5 + (long)(int)uVar4);
    if (param_7 != (__sFILE *)0x0) {
      uVar7 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar7 = 0x2b;
      }
      uVar18 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar18 = uVar4;
      }
      PrintF(param_7,"%d ; (int32) [fp %c %3d] ",(ulong)uVar8,(ulong)uVar7,(ulong)uVar18);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) goto LAB_00f222f4;
LAB_00f21954:
    puVar10 = (undefined2 *)
              (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
LAB_00f222f8:
    uVar11 = 2;
    goto LAB_00f2237c;
  case 0x14:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    uVar15 = *(ulong *)((long)param_5 + (long)(int)uVar4);
    if (param_7 != (__sFILE *)0x0) {
      uVar8 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar8 = 0x2b;
      }
      uVar7 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4;
      }
      PrintF(param_7,"%ld ; (int64) [fp %c %3d] ",uVar15,(ulong)uVar8,(ulong)uVar7);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar13 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar13 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar12 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar13 == uVar12) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar12 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) goto LAB_00f21cbc;
LAB_00f21e74:
    puVar10 = (undefined2 *)
              (*(long *)(lVar17 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20);
LAB_00f21e88:
    uVar11 = 3;
    goto LAB_00f21e90;
  case 0x15:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    uVar8 = *(uint *)((long)param_5 + (long)(int)uVar4);
    if (param_7 != (__sFILE *)0x0) {
      uVar7 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar7 = 0x2b;
      }
      uVar18 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar18 = uVar4;
      }
      PrintF(param_7,"%u ; (uint32) [fp %c %3d] ",(ulong)uVar8,(ulong)uVar7,(ulong)uVar18);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
    }
    uVar11 = 4;
    goto LAB_00f2237c;
  case 0x16:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    uVar8 = *(uint *)((long)param_5 + (long)(int)uVar4);
    if (param_7 != (__sFILE *)0x0) {
      uVar7 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar7 = 0x2b;
      }
      uVar18 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar18 = uVar4;
      }
      PrintF(param_7,"%u ; (bool) [fp %c %3d] ",(ulong)uVar8,(ulong)uVar7,(ulong)uVar18);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
    }
    uVar11 = 5;
LAB_00f2237c:
    uVar4 = 0;
    *puVar10 = uVar11;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(uint *)(puVar10 + 0xc) = uVar8;
    goto LAB_00f2259c;
  case 0x17:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    fVar1 = *(float *)((long)param_5 + (long)(int)uVar4);
    if (param_7 != (__sFILE *)0x0) {
      uVar8 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar8 = 0x2b;
      }
      uVar7 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4;
      }
      PrintF(param_7,"%e ; (float) [fp %c %3d] ",(double)fVar1,(ulong)uVar8,(ulong)uVar7);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
    }
    *puVar10 = 6;
    uVar4 = 0;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    puVar10[3] = local_110._4_2_;
    *(undefined4 *)(puVar10 + 1) = (undefined4)local_110;
    *(float *)(puVar10 + 0xc) = fVar1;
    goto LAB_00f225a4;
  case 0x18:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    uVar4 = OptimizedFrame::StackSlotOffsetRelativeToFp(uVar4);
    uVar20 = *(undefined8 *)((long)param_5 + (long)(int)uVar4);
    if (param_7 != (__sFILE *)0x0) {
      uVar8 = 0x2d;
      if (-1 < (int)uVar4) {
        uVar8 = 0x2b;
      }
      uVar7 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4;
      }
      PrintF(param_7,"%e ; (double) [fp %c %d] ",uVar20,(ulong)uVar8,(ulong)uVar7);
    }
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar15 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar15 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar15 == uVar13) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) goto LAB_00f2265c;
LAB_00f21f70:
    puVar10 = (undefined2 *)
              (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
LAB_00f22660:
    *puVar10 = 7;
    uVar4 = 0;
    *(TranslatedState **)(puVar10 + 4) = this;
    *(undefined8 *)(puVar10 + 8) = 0;
    puVar10[3] = local_110._4_2_;
    *(undefined4 *)(puVar10 + 1) = (undefined4)local_110;
    *(undefined8 *)(puVar10 + 0xc) = uVar20;
    goto LAB_00f225a4;
  case 0x19:
    uVar4 = 0;
    uVar18 = 0;
    pbVar16 = (byte *)(lVar17 + (int)uVar7 + 7);
    do {
      *puVar9 = uVar8;
      bVar2 = *pbVar16;
      uVar8 = uVar8 + 1;
      uVar7 = uVar4 & 0x1f;
      uVar4 = uVar4 + 7;
      uVar18 = (uint)(bVar2 >> 1) << (ulong)uVar7 | uVar18;
      pbVar16 = pbVar16 + 1;
    } while ((bVar2 & 1) != 0);
    uVar4 = -(uVar18 >> 1);
    if ((uVar18 & 1) == 0) {
      uVar4 = uVar18 >> 1;
    }
    local_110 = param_4 & 0xffffffff00000000 |
                (ulong)*(uint *)(param_4 + (long)(int)(uVar4 << 2) + 7);
    if (param_7 != (__sFILE *)0x0) {
      PrintF(param_7,"0x%012lx ; (literal %2d) ",local_110,(ulong)uVar4);
      Object::ShortPrint((Object *)&local_110,param_7);
    }
    uVar15 = local_110;
    lVar22 = lVar22 + lVar23 * 0x58;
    lVar19 = *(long *)(lVar22 + 0x38);
    lVar17 = *(long *)(lVar22 + 0x30);
    uVar13 = 0;
    if (lVar19 - lVar17 != 0) {
      uVar13 = (lVar19 - lVar17) * 0x10 - 1;
    }
    uVar12 = *plVar21 + *(long *)(lVar22 + 0x48);
    if (uVar13 == uVar12) {
      std::__ndk1::
      deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
      __add_back_capacity(this_00);
      lVar17 = *(long *)(lVar22 + 0x30);
      lVar19 = *(long *)(lVar22 + 0x38);
      uVar12 = *(long *)(lVar22 + 0x48) + *plVar21;
    }
    if (lVar19 == lVar17) {
      puVar10 = (undefined2 *)0x0;
    }
    else {
      puVar10 = (undefined2 *)
                (*(long *)(lVar17 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20);
    }
    *puVar10 = 1;
    goto LAB_00f22488;
  }
  lVar22 = lVar22 + lVar23 * 0x58;
  lVar19 = *(long *)(lVar22 + 0x38);
  lVar17 = *(long *)(lVar22 + 0x30);
  uVar15 = 0;
  if (lVar19 - lVar17 != 0) {
    uVar15 = (lVar19 - lVar17) * 0x10 - 1;
  }
  uVar13 = *plVar21 + *(long *)(lVar22 + 0x48);
  if (uVar15 == uVar13) {
    std::__ndk1::
    deque<v8::internal::TranslatedValue,std::__ndk1::allocator<v8::internal::TranslatedValue>>::
    __add_back_capacity(this_00);
    lVar17 = *(long *)(lVar22 + 0x30);
    lVar19 = *(long *)(lVar22 + 0x38);
    uVar13 = *(long *)(lVar22 + 0x48) + *plVar21;
  }
  if (lVar19 == lVar17) {
    puVar10 = (undefined2 *)0x0;
  }
  else {
    puVar10 = (undefined2 *)
              (*(long *)(lVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) + (uVar13 & 0x7f) * 0x20);
  }
  *puVar10 = 0;
  uVar4 = 0;
  *(TranslatedState **)(puVar10 + 4) = this;
  *(undefined8 *)(puVar10 + 8) = 0;
LAB_00f2259c:
  puVar10[3] = local_110._4_2_;
  *(undefined4 *)(puVar10 + 1) = (undefined4)local_110;
LAB_00f225a4:
  *plVar21 = *plVar21 + 1;
LAB_00f225b0:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

