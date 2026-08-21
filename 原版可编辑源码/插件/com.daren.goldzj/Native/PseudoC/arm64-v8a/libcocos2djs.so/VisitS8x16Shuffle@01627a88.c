
/* v8::internal::compiler::InstructionSelector::VisitS8x16Shuffle(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitS8x16Shuffle
          (InstructionSelector *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  Node *pNVar12;
  InstructionSequence *pIVar13;
  Node *pNVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  byte local_98 [4];
  bool local_94 [4];
  Constant aCStack_90 [20];
  uchar auStack_7c [4];
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  byte local_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  CanonicalizeShuffle(this,param_1,&local_78,local_94);
  lVar11 = 0;
  bVar9 = 0x1f;
  if (local_94[0] != false) {
    bVar9 = 0xf;
  }
  do {
    if (((((((bVar9 & ((&DAT_01a56854)[lVar11] ^ local_78)) == 0) &&
           ((bVar9 & (local_77 ^ (&DAT_01a56855)[lVar11])) == 0)) &&
          ((bVar9 & (local_76 ^ (&DAT_01a56856)[lVar11])) == 0)) &&
         ((((bVar9 & (local_75 ^ (&DAT_01a56857)[lVar11])) == 0 &&
           ((bVar9 & (local_74 ^ (&DAT_01a56858)[lVar11])) == 0)) &&
          (((bVar9 & (local_73 ^ (&DAT_01a56859)[lVar11])) == 0 &&
           (((bVar9 & (local_72 ^ (&DAT_01a5685a)[lVar11])) == 0 &&
            ((bVar9 & (local_71 ^ (&DAT_01a5685b)[lVar11])) == 0)))))))) &&
        ((bVar9 & (local_70 ^ (&DAT_01a5685c)[lVar11])) == 0)) &&
       (((((((bVar9 & (local_6f ^ (&DAT_01a5685d)[lVar11])) == 0 &&
            ((bVar9 & (local_6e ^ (&DAT_01a5685e)[lVar11])) == 0)) &&
           ((bVar9 & (local_6d ^ (&DAT_01a5685f)[lVar11])) == 0)) &&
          (((bVar9 & (local_6c ^ (&DAT_01a56860)[lVar11])) == 0 &&
           ((bVar9 & (local_6b ^ (&DAT_01a56861)[lVar11])) == 0)))) &&
         ((bVar9 & (local_6a ^ (&DAT_01a56862)[lVar11])) == 0)) &&
        ((bVar9 & (local_69 ^ (&DAT_01a56863)[lVar11])) == 0)))) {
      FUN_0161f6a4(this,*(undefined4 *)((long)&DAT_01a56864 + lVar11),param_1);
      goto LAB_01628160;
    }
    lVar11 = lVar11 + 0x14;
  } while (lVar11 != 0x1e0);
  pNVar12 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
  }
  pNVar14 = *(Node **)pNVar12;
  pNVar12 = *(Node **)(pNVar12 + 8);
  uVar3 = TryMatchConcat(&local_78,local_98);
  if ((uVar3 & 1) == 0) {
    uVar3 = TryMatch32x4Shuffle(&local_78,auStack_7c);
    uVar17 = (uint)local_78;
    if ((uVar3 & 1) == 0) {
      uVar18 = (uint)local_78;
      uVar10 = (uint)local_77;
      if (((((local_78 & 1) == 0) && (uVar18 + 1 == (uint)local_77)) &&
          ((((uVar18 == local_76 && (((uint)local_77 == (uint)local_75 && (uVar18 == local_74)))) &&
            (local_77 == local_73)) &&
           ((((uVar18 == local_72 && (local_77 == local_71)) && (uVar18 == local_70)) &&
            ((local_77 == local_6f && (uVar18 == local_6e)))))))) &&
         (((local_77 == local_6d && ((uVar18 == local_6c && (uVar10 == local_6b)))) &&
          ((uVar17 == local_6a && (uVar10 == local_69)))))) {
        uVar3 = GetVirtualRegister(this,param_1);
        uVar15 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
        MarkAsDefined(this,param_1);
        uVar3 = GetVirtualRegister(this,pNVar14);
        uVar16 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
        MarkAsUsed(this,pNVar14);
        pIVar13 = *(InstructionSequence **)(this + 0x10);
        Constant::Constant(aCStack_90,8);
        uVar3 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
        pIVar13 = *(InstructionSequence **)(this + 0x10);
        uVar17 = local_78 >> 1 & 7;
      }
      else {
        if (((((uVar17 != uVar10) || (uVar17 != local_76)) || (uVar18 != local_75)) ||
            (((((uVar18 != local_74 || (uVar18 != local_73)) ||
               ((uVar18 != local_72 || ((uVar18 != local_71 || (uVar18 != local_70)))))) ||
              (uVar18 != local_6f)) ||
             ((((uVar18 != local_6e || (uVar17 != local_6d)) || (uVar17 != local_6c)) ||
              ((uVar17 != local_6b || (uVar17 != local_6a)))))))) || (uVar17 != local_69)) {
          uVar3 = GetVirtualRegister(this,pNVar14);
          uVar3 = (uVar3 & 0xffffffff) << 3;
          if (pNVar14 == pNVar12) {
            uVar3 = uVar3 | 0x5800000001;
            uVar15 = uVar3;
          }
          else {
            uVar3 = uVar3 | 0x38c800000001;
            MarkAsUsed(this,pNVar14);
            uVar15 = GetVirtualRegister(this,pNVar12);
            pNVar14 = pNVar12;
            uVar15 = (uVar15 & 0xffffffff) << 3 | 0x3ac800000001;
          }
          MarkAsUsed(this,pNVar14);
          uVar16 = GetVirtualRegister(this,param_1);
          MarkAsDefined(this,param_1);
          iVar2 = Pack4Lanes(&local_78);
          pIVar13 = *(InstructionSequence **)(this + 0x10);
          Constant::Constant(aCStack_90,iVar2);
          uVar5 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
          iVar2 = Pack4Lanes(&local_74);
          pIVar13 = *(InstructionSequence **)(this + 0x10);
          Constant::Constant(aCStack_90,iVar2);
          uVar8 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
          iVar2 = Pack4Lanes(&local_70);
          pIVar13 = *(InstructionSequence **)(this + 0x10);
          Constant::Constant(aCStack_90,iVar2);
          uVar6 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
          iVar2 = Pack4Lanes(&local_6c);
          pIVar13 = *(InstructionSequence **)(this + 0x10);
          Constant::Constant(aCStack_90,iVar2);
          uVar7 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
          Emit(this,0x1a7,(uVar16 & 0xffffffff) << 3 | 0xd800000001,uVar3,uVar15,uVar5,uVar8,uVar6,
               uVar7,0,0);
          goto LAB_01628160;
        }
        uVar3 = GetVirtualRegister(this,param_1);
        uVar15 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
        MarkAsDefined(this,param_1);
        uVar3 = GetVirtualRegister(this,pNVar14);
        uVar16 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
        MarkAsUsed(this,pNVar14);
        pIVar13 = *(InstructionSequence **)(this + 0x10);
        Constant::Constant(aCStack_90,0x10);
        uVar3 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
        pIVar13 = *(InstructionSequence **)(this + 0x10);
        uVar17 = uVar17 & 0xf;
      }
    }
    else {
      if (((((((local_78 & 3) != 0) || (local_78 + 1 != (uint)local_77)) ||
            (((uVar17 + 2 != (uint)local_76 ||
              (((uVar17 + 3 != (uint)local_75 || (uVar17 != local_74)) ||
               ((uint)local_77 != (uint)local_73)))) ||
             ((((uint)local_76 != (uint)local_72 || ((uint)local_75 != (uint)local_71)) ||
              (uVar17 != local_70)))))) || ((local_77 != local_6f || (local_76 != local_6e)))) ||
          ((local_75 != local_6d ||
           (((uVar17 != local_6c || (local_77 != local_6b)) || (local_76 != local_6a)))))) ||
         (local_75 != local_69)) {
        uVar3 = TryMatchIdentity(&local_78);
        if ((uVar3 & 1) != 0) {
          EmitIdentity(this,param_1);
          goto LAB_01628160;
        }
        uVar3 = GetVirtualRegister(this,param_1);
        MarkAsDefined(this,param_1);
        uVar15 = GetVirtualRegister(this,pNVar14);
        MarkAsUsed(this,pNVar14);
        uVar4 = GetVirtualRegister(this,pNVar12);
        MarkAsUsed(this,pNVar12);
        iVar2 = Pack4Lanes(auStack_7c);
        pIVar13 = *(InstructionSequence **)(this + 0x10);
        Constant::Constant(aCStack_90,iVar2);
        uVar5 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
        uVar8 = 0x198;
        goto LAB_01627d48;
      }
      uVar3 = GetVirtualRegister(this,param_1);
      uVar15 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
      MarkAsDefined(this,param_1);
      uVar3 = GetVirtualRegister(this,pNVar14);
      uVar16 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
      MarkAsUsed(this,pNVar14);
      pIVar13 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant(aCStack_90,4);
      uVar3 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
      pIVar13 = *(InstructionSequence **)(this + 0x10);
      uVar17 = local_78 >> 2 & 3;
    }
    Constant::Constant(aCStack_90,uVar17);
    uVar5 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
    uVar8 = 0x18c;
  }
  else {
    uVar3 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar15 = GetVirtualRegister(this,pNVar14);
    MarkAsUsed(this,pNVar14);
    uVar4 = GetVirtualRegister(this,pNVar12);
    MarkAsUsed(this,pNVar12);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_90,(uint)local_98[0]);
    uVar5 = InstructionSequence::AddImmediate(pIVar13,aCStack_90);
    uVar8 = 0x1a5;
LAB_01627d48:
    uVar16 = (uVar15 & 0xffffffff) << 3 | 0x5800000001;
    uVar15 = (uVar3 & 0xffffffff) << 3 | 0xd800000001;
    uVar3 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
  }
  Emit(this,uVar8,uVar15,uVar16,uVar3,uVar5,0,0);
LAB_01628160:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

