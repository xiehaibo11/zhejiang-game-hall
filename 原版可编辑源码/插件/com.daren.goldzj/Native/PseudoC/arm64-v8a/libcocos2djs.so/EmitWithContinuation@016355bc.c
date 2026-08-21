
/* v8::internal::compiler::InstructionSelector::EmitWithContinuation(unsigned int, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*, v8::internal::compiler::FlagsContinuation*) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitWithContinuation
          (InstructionSelector *this,uint param_1,ulong param_2,InstructionOperand *param_3,
          ulong param_4,InstructionOperand *param_5,ulong param_6,InstructionOperand *param_7,
          FlagsContinuation *param_8)

{
  InstructionOperand *pIVar1;
  InstructionOperand *pIVar2;
  InstructionOperand *pIVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  Zone *pZVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  ulong uVar21;
  vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
  *this_00;
  long lVar22;
  InstructionSequence *this_01;
  vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
  *this_02;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  
  uVar14 = param_1 | *(int *)param_8 << 0xe;
  if (*(int *)param_8 != 0) {
    uVar14 = uVar14 | *(int *)(param_8 + 4) << 0x11;
  }
  this_00 = (vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
             *)(this + 0x58);
  puVar15 = *(undefined8 **)this_00;
  puVar9 = *(undefined8 **)(this + 0x60);
  if (*(undefined8 **)(this + 0x60) != puVar15) {
    *(undefined8 **)(this + 0x60) = puVar15;
    puVar9 = puVar15;
  }
  uVar21 = param_4;
  if (param_4 != 0) {
    while( true ) {
      if (puVar9 == *(undefined8 **)(this + 0x68)) {
        std::__ndk1::
        vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
        ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>(this_00,param_5);
      }
      else {
        *puVar9 = *(undefined8 *)param_5;
        *(long *)(this + 0x60) = *(long *)(this + 0x60) + 8;
      }
      if (uVar21 - 1 == 0) break;
      puVar9 = *(undefined8 **)(this + 0x60);
      param_5 = param_5 + 8;
      uVar21 = uVar21 - 1;
    }
  }
  this_02 = (vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
             *)(this + 0x78);
  puVar15 = *(undefined8 **)this_02;
  puVar9 = *(undefined8 **)(this + 0x80);
  if (*(undefined8 **)(this + 0x80) != puVar15) {
    *(undefined8 **)(this + 0x80) = puVar15;
    puVar9 = puVar15;
  }
  if (param_2 != 0) {
    while( true ) {
      param_2 = param_2 - 1;
      if (puVar9 == *(undefined8 **)(this + 0x88)) {
        std::__ndk1::
        vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
        ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>(this_02,param_3);
      }
      else {
        *puVar9 = *(undefined8 *)param_3;
        *(long *)(this + 0x80) = *(long *)(this + 0x80) + 8;
      }
      if (param_2 == 0) break;
      puVar9 = *(undefined8 **)(this + 0x80);
      param_3 = param_3 + 8;
    }
  }
  puVar15 = *(undefined8 **)(this + 0x98);
  puVar9 = *(undefined8 **)(this + 0xa0);
  if (*(undefined8 **)(this + 0xa0) != puVar15) {
    *(undefined8 **)(this + 0xa0) = puVar15;
    puVar9 = puVar15;
  }
  if (param_6 != 0) {
    while( true ) {
      param_6 = param_6 - 1;
      if (puVar9 == *(undefined8 **)(this + 0xa8)) {
        std::__ndk1::
        vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
        ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                  ((vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
                    *)(this + 0x98),param_7);
      }
      else {
        *puVar9 = *(undefined8 *)param_7;
        *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 8;
      }
      if (param_6 == 0) break;
      puVar9 = *(undefined8 **)(this + 0xa0);
      param_7 = param_7 + 8;
    }
  }
  iVar5 = *(int *)param_8;
  if (iVar5 - 1U < 2) {
    local_68 = (long)*(int *)(*(long *)(param_8 + 0x28) + 4);
    local_70 = 7;
    local_6c = 0x13;
    uVar8 = InstructionSequence::AddImmediate
                      (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
    puVar9 = *(undefined8 **)(this + 0x60);
    if (puVar9 < *(undefined8 **)(this + 0x68)) {
      *puVar9 = uVar8;
      *(long *)(this + 0x60) = *(long *)(this + 0x60) + 8;
    }
    else {
      lVar22 = (long)puVar9 - *(long *)this_00 >> 3;
      uVar21 = lVar22 + 1;
      if (uVar21 >> 0x1c != 0) goto LAB_01635bec;
      lVar10 = (long)*(undefined8 **)(this + 0x68) - *(long *)this_00;
      uVar17 = lVar10 >> 2;
      if (uVar21 <= uVar17) {
        uVar21 = uVar17;
      }
      if (0x7fffffe < (ulong)(lVar10 >> 3)) {
        uVar21 = 0xfffffff;
      }
      if (uVar21 == 0) {
        lVar10 = 0;
      }
      else {
        pZVar11 = *(Zone **)(this + 0x70);
        uVar17 = uVar21 * 8;
        lVar10 = *(long *)(pZVar11 + 0x10);
        if (uVar17 < (ulong)(*(long *)(pZVar11 + 0x18) - lVar10) ||
            uVar17 - (*(long *)(pZVar11 + 0x18) - lVar10) == 0) {
          *(ulong *)(pZVar11 + 0x10) = lVar10 + uVar17;
        }
        else {
          lVar10 = Zone::NewExpand(pZVar11,uVar17);
        }
      }
      puVar9 = (undefined8 *)(lVar10 + lVar22 * 8);
      puVar12 = puVar9 + 1;
      *puVar9 = uVar8;
      puVar15 = *(undefined8 **)(this + 0x58);
      puVar19 = *(undefined8 **)(this + 0x60);
      while (puVar19 != puVar15) {
        puVar19 = puVar19 + -1;
        puVar9 = puVar9 + -1;
        *puVar9 = *puVar19;
      }
      *(undefined8 **)(this + 0x58) = puVar9;
      *(undefined8 **)(this + 0x60) = puVar12;
      *(ulong *)(this + 0x68) = lVar10 + uVar21 * 8;
    }
    local_68 = (long)*(int *)(*(long *)(param_8 + 0x30) + 4);
    local_70 = 7;
    local_6c = 0x13;
    uVar8 = InstructionSequence::AddImmediate
                      (*(InstructionSequence **)(this + 0x10),(Constant *)&local_70);
    puVar9 = *(undefined8 **)(this + 0x60);
    if (*(undefined8 **)(this + 0x68) <= puVar9) {
      lVar22 = (long)puVar9 - *(long *)this_00 >> 3;
      uVar21 = lVar22 + 1;
      if (uVar21 >> 0x1c != 0) goto LAB_01635bec;
      lVar10 = (long)*(undefined8 **)(this + 0x68) - *(long *)this_00;
      uVar17 = lVar10 >> 2;
      if (uVar21 <= uVar17) {
        uVar21 = uVar17;
      }
      if (0x7fffffe < (ulong)(lVar10 >> 3)) {
        uVar21 = 0xfffffff;
      }
      if (uVar21 == 0) {
        lVar10 = 0;
      }
      else {
        pZVar11 = *(Zone **)(this + 0x70);
        uVar17 = uVar21 * 8;
        lVar10 = *(long *)(pZVar11 + 0x10);
        if (uVar17 < (ulong)(*(long *)(pZVar11 + 0x18) - lVar10) ||
            uVar17 - (*(long *)(pZVar11 + 0x18) - lVar10) == 0) {
          *(ulong *)(pZVar11 + 0x10) = lVar10 + uVar17;
        }
        else {
          lVar10 = Zone::NewExpand(pZVar11,uVar17);
        }
      }
      puVar9 = (undefined8 *)(lVar10 + lVar22 * 8);
      *puVar9 = uVar8;
      puVar15 = *(undefined8 **)(this + 0x58);
      puVar19 = *(undefined8 **)(this + 0x60);
      lVar10 = lVar10 + uVar21 * 8;
      puVar12 = puVar9;
      while (puVar19 != puVar15) {
        puVar19 = puVar19 + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *puVar19;
      }
LAB_016359f8:
      *(undefined8 **)(this + 0x58) = puVar12;
      *(undefined8 **)(this + 0x60) = puVar9 + 1;
      *(long *)(this + 0x68) = lVar10;
      goto LAB_01635a00;
    }
  }
  else {
    if (iVar5 - 3U < 2) {
      uVar14 = uVar14 | (int)param_4 << 0x16;
      AppendDeoptimizeArguments
                (this,this_00,param_8[8],param_8[9],param_8 + 0x10,*(undefined8 *)(param_8 + 0x20));
      goto LAB_01635a00;
    }
    if (iVar5 != 6) {
      if (iVar5 == 5) {
        lVar22 = *(long *)(param_8 + 0x20);
        uVar21 = (ulong)*(uint *)(lVar22 + 0x14) & 0xffffff;
        uVar7 = *(uint *)(*(long *)(this + 0x118) + uVar21 * 4);
        if (uVar7 == 0xffffffff) {
          uVar7 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
          *(uint *)(*(long *)(this + 0x118) + uVar21 * 4) = uVar7;
          uVar21 = (ulong)*(uint *)(lVar22 + 0x14) & 0xffffff;
        }
        uVar17 = uVar21 >> 3 & 0x1ffff8;
        *(ulong *)(*(long *)(this + 0xb8) + uVar17) =
             *(ulong *)(*(long *)(this + 0xb8) + uVar17) | 1L << (uVar21 & 0x3f);
        puVar13 = *(ulong **)(this + 0x80);
        uVar21 = (ulong)uVar7 << 3 | 0xd800000001;
        if (puVar13 < *(ulong **)(this + 0x88)) {
          *puVar13 = uVar21;
          *(long *)(this + 0x80) = *(long *)(this + 0x80) + 8;
        }
        else {
          lVar22 = (long)puVar13 - *(long *)this_02 >> 3;
          uVar17 = lVar22 + 1;
          if (uVar17 >> 0x1c != 0) goto LAB_01635bec;
          lVar10 = (long)*(ulong **)(this + 0x88) - *(long *)this_02;
          uVar18 = lVar10 >> 2;
          if (uVar17 <= uVar18) {
            uVar17 = uVar18;
          }
          if (0x7fffffe < (ulong)(lVar10 >> 3)) {
            uVar17 = 0xfffffff;
          }
          if (uVar17 == 0) {
            lVar10 = 0;
          }
          else {
            pZVar11 = *(Zone **)(this + 0x90);
            uVar18 = uVar17 * 8;
            lVar10 = *(long *)(pZVar11 + 0x10);
            if (uVar18 < (ulong)(*(long *)(pZVar11 + 0x18) - lVar10) ||
                uVar18 - (*(long *)(pZVar11 + 0x18) - lVar10) == 0) {
              *(ulong *)(pZVar11 + 0x10) = lVar10 + uVar18;
            }
            else {
              lVar10 = Zone::NewExpand(pZVar11,uVar18);
            }
          }
          puVar13 = (ulong *)(lVar10 + lVar22 * 8);
          puVar16 = puVar13 + 1;
          *puVar13 = uVar21;
          puVar4 = *(ulong **)(this + 0x78);
          puVar20 = *(ulong **)(this + 0x80);
          while (puVar20 != puVar4) {
            puVar20 = puVar20 + -1;
            puVar13 = puVar13 + -1;
            *puVar13 = *puVar20;
          }
          *(ulong **)(this + 0x78) = puVar13;
          *(ulong **)(this + 0x80) = puVar16;
          *(ulong *)(this + 0x88) = lVar10 + uVar17 * 8;
        }
      }
      goto LAB_01635a00;
    }
    this_01 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant((Constant *)&local_70,*(int *)(param_8 + 0x38));
    uVar8 = InstructionSequence::AddImmediate(this_01,(Constant *)&local_70);
    puVar9 = *(undefined8 **)(this + 0x60);
    if (*(undefined8 **)(this + 0x68) <= puVar9) {
      lVar22 = (long)puVar9 - *(long *)this_00 >> 3;
      uVar21 = lVar22 + 1;
      if (uVar21 >> 0x1c != 0) {
LAB_01635bec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = (long)*(undefined8 **)(this + 0x68) - *(long *)this_00;
      uVar17 = lVar10 >> 2;
      if (uVar21 <= uVar17) {
        uVar21 = uVar17;
      }
      if (0x7fffffe < (ulong)(lVar10 >> 3)) {
        uVar21 = 0xfffffff;
      }
      if (uVar21 == 0) {
        lVar10 = 0;
      }
      else {
        pZVar11 = *(Zone **)(this + 0x70);
        uVar17 = uVar21 * 8;
        lVar10 = *(long *)(pZVar11 + 0x10);
        if (uVar17 < (ulong)(*(long *)(pZVar11 + 0x18) - lVar10) ||
            uVar17 - (*(long *)(pZVar11 + 0x18) - lVar10) == 0) {
          *(ulong *)(pZVar11 + 0x10) = lVar10 + uVar17;
        }
        else {
          lVar10 = Zone::NewExpand(pZVar11,uVar17);
        }
      }
      puVar9 = (undefined8 *)(lVar10 + lVar22 * 8);
      *puVar9 = uVar8;
      puVar15 = *(undefined8 **)(this + 0x58);
      puVar19 = *(undefined8 **)(this + 0x60);
      lVar10 = lVar10 + uVar21 * 8;
      puVar12 = puVar9;
      while (puVar19 != puVar15) {
        puVar19 = puVar19 + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *puVar19;
      }
      goto LAB_016359f8;
    }
  }
  *puVar9 = uVar8;
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + 8;
LAB_01635a00:
  lVar22 = *(long *)(this + 0x60) - (long)*(InstructionOperand **)(this + 0x58);
  pIVar1 = (InstructionOperand *)0x0;
  if (lVar22 != 0) {
    pIVar1 = *(InstructionOperand **)(this + 0x58);
  }
  lVar10 = *(long *)(this + 0x80) - (long)*(InstructionOperand **)(this + 0x78);
  pIVar2 = (InstructionOperand *)0x0;
  if (lVar10 != 0) {
    pIVar2 = *(InstructionOperand **)(this + 0x78);
  }
  lVar6 = *(long *)(this + 0xa0) - (long)*(InstructionOperand **)(this + 0x98);
  pIVar3 = (InstructionOperand *)0x0;
  if (lVar6 != 0) {
    pIVar3 = *(InstructionOperand **)(this + 0x98);
  }
  Emit(this,uVar14,lVar10 >> 3,pIVar2,lVar22 >> 3,pIVar1,lVar6 >> 3,pIVar3);
  return;
}

