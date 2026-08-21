
/* v8::internal::TurboAssembler::PrintfNoPreserve(char const*, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::CPURegister const&, v8::internal::CPURegister
   const&) */

void __thiscall
v8::internal::TurboAssembler::PrintfNoPreserve
          (TurboAssembler *this,char *param_1,CPURegister *param_2,CPURegister *param_3,
          CPURegister *param_4,CPURegister *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  int extraout_var;
  int extraout_var_00;
  undefined8 uVar21;
  int iVar22;
  undefined8 uVar23;
  long lVar24;
  int *piVar25;
  ulong *puVar26;
  ulong *puVar27;
  long lVar28;
  undefined8 local_158;
  ulong local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  int aiStack_128 [10];
  undefined8 local_100;
  int local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
  Assembler *local_c0;
  ulong local_b8 [3];
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  local_f8 = *(int *)(param_2 + 8);
  local_100 = *(undefined8 *)param_2;
  local_ec = *(undefined4 *)(param_3 + 8);
  local_f4 = *(undefined8 *)param_3;
  local_e8 = *(undefined8 *)param_4;
  local_e0 = *(undefined4 *)(param_4 + 8);
  local_dc = *(undefined8 *)param_5;
  local_d4 = *(undefined4 *)(param_5 + 8);
  aiStack_128[0] = 2;
  aiStack_128[1] = -1;
  local_130 = 0xffffffff;
  aiStack_128[4] = -1;
  aiStack_128[5] = 0;
  aiStack_128[2] = 0;
  aiStack_128[3] = 2;
  aiStack_128[8] = 0;
  aiStack_128[9] = 2;
  aiStack_128[6] = 2;
  aiStack_128[7] = -1;
  if (((DAT_01d418c0 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_01d418c0), iVar16 != 0)) {
    DAT_01d418b8 = 0x40;
    DAT_01d418b0 = 0x1e;
    __cxa_guard_release(&DAT_01d418c0);
  }
  if (((DAT_01d418d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_01d418d8), iVar16 != 0)) {
    DAT_01d418d0 = 0x100000040;
    DAT_01d418c8 = 0xf;
    __cxa_guard_release(&DAT_01d418d8);
  }
  uVar17 = CPURegList::GetCallerSaved(0x40);
  uVar19 = uVar17 & 0xfffffffffffffffe;
  if (extraout_var != 0) {
    uVar19 = uVar17;
  }
  uVar17 = 0xffffffffffffffff;
  if (DAT_01d418b8._4_4_ == extraout_var) {
    uVar17 = ~DAT_01d418b0;
  }
  uVar2 = 0xffffffffffffffff;
  if (*(int *)(param_2 + 8) == extraout_var && *(int *)(param_2 + 8) != 2) {
    uVar2 = ~(1L << ((ulong)*(uint *)param_2 & 0x3f));
  }
  uVar3 = 0xffffffffffffffff;
  if (*(int *)(param_3 + 8) == extraout_var && *(int *)(param_3 + 8) != 2) {
    uVar3 = ~(1L << ((ulong)*(uint *)param_3 & 0x3f));
  }
  uVar4 = 0xffffffffffffffff;
  if (*(int *)(param_4 + 8) == extraout_var && *(int *)(param_4 + 8) != 2) {
    uVar4 = ~(1L << ((ulong)*(uint *)param_4 & 0x3f));
  }
  uVar5 = 0xffffffffffffffff;
  if (*(int *)(param_5 + 8) == extraout_var && *(int *)(param_5 + 8) != 2) {
    uVar5 = ~(1L << ((ulong)*(uint *)param_5 & 0x3f));
  }
  uVar18 = CPURegList::GetCallerSavedV(0x40);
  uVar6 = 0xffffffffffffffff;
  if (DAT_01d418d0._4_4_ == extraout_var_00) {
    uVar6 = ~DAT_01d418c8;
  }
  uVar7 = 0xffffffffffffffff;
  if (*(int *)(param_2 + 8) == extraout_var_00 && *(int *)(param_2 + 8) != 2) {
    uVar7 = ~(1L << ((ulong)*(uint *)param_2 & 0x3f));
  }
  iVar16 = *(int *)(param_4 + 8);
  uVar8 = 0xffffffffffffffff;
  if (*(int *)(param_3 + 8) == extraout_var_00 && *(int *)(param_3 + 8) != 2) {
    uVar8 = ~(1L << ((ulong)*(uint *)param_3 & 0x3f));
  }
  uVar14 = *(uint *)param_4;
  uVar21 = *(undefined8 *)(this + 0x198);
  uVar23 = *(undefined8 *)(this + 0x1a8);
  iVar9 = *(int *)(param_5 + 8);
  uVar10 = *(uint *)param_5;
  *(ulong *)(this + 0x198) = uVar19 & uVar17 & uVar2 & uVar3 & uVar4 & uVar5;
  uVar19 = 0xffffffffffffffff;
  if (iVar16 == extraout_var_00 && iVar16 != 2) {
    uVar19 = ~(1L << ((ulong)uVar14 & 0x3f));
  }
  uVar17 = 0xffffffffffffffff;
  if (iVar9 == extraout_var_00 && iVar9 != 2) {
    uVar17 = ~(1L << ((ulong)uVar10 & 0x3f));
  }
  *(ulong *)(this + 0x1a8) = uVar6 & uVar18 & uVar7 & uVar8 & uVar19 & uVar17;
  uStack_138 = DAT_01d418b8;
  local_140 = DAT_01d418b0;
  lVar24 = 0;
  uStack_148 = DAT_01d418d0;
  local_150 = DAT_01d418c8;
  lVar28 = 0;
  do {
    iVar16 = *(int *)((long)&local_f8 + lVar24);
    if (iVar16 == 0) {
      uVar14 = CPURegList::PopLowestIndex((CPURegList *)&local_140);
      iVar9 = *(int *)((long)&local_100 + lVar24 + 4);
      uVar19 = 0x400000003f;
      if (uVar14 != 0x3f) {
        uVar19 = (ulong)uVar14 | 0x4000000000;
      }
      iVar22 = 0;
      *(ulong *)((long)&local_130 + lVar24) = uVar19;
      *(undefined4 *)((long)aiStack_128 + lVar24) = 0;
      if (iVar9 == 0x20) {
        bVar13 = uVar19 != 0x400000003f;
        uVar17 = uVar19 & 0xffffffff;
        uVar19 = 0x200000003f;
        if (bVar13) {
          uVar19 = uVar17 | 0x2000000000;
        }
        *(ulong *)((long)&local_130 + lVar24) = uVar19;
        *(undefined4 *)((long)aiStack_128 + lVar24) = 0;
      }
    }
    else {
      if (iVar16 != 1) {
        if ((int)lVar24 == 0) {
LAB_0127be3c:
          local_d0 = 0;
          Assembler::adr((Assembler *)this,(Register *)&DAT_019f4150,(Label *)&local_d0);
          local_c0 = (Assembler *)this;
          ConstantPool::BlockScope::BlockScope((BlockScope *)local_b8,(Assembler *)this,0);
          Assembler::CheckVeneerPool(local_c0,false,true,0);
          Assembler::StartBlockVeneerPool(local_c0);
          local_158 = 0;
          Assembler::b((Assembler *)this,(Label *)&local_158);
          Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
          Assembler::bind((Label *)this);
          Assembler::EmitStringData((Assembler *)this,param_1);
          Assembler::Emit((Assembler *)this,0xd63f03e0);
          Assembler::bind((Label *)this);
          Assembler::EndBlockVeneerPool(local_c0);
          ConstantPool::BlockScope::~BlockScope((BlockScope *)local_b8);
          uVar20 = ExternalReference::printf_function();
          Call(this,uVar20);
          *(undefined8 *)(this + 0x198) = uVar21;
          *(undefined8 *)(this + 0x1a8) = uVar23;
          if (*(long *)(lVar11 + 0x28) == local_78) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        goto LAB_0127bd30;
      }
      uVar19 = CPURegList::PopLowestIndex((CPURegList *)&local_150);
      iVar22 = 1;
      uVar19 = uVar19 & 0xffffffff | 0x4000000000;
      *(ulong *)((long)&local_130 + lVar24) = uVar19;
      *(undefined4 *)((long)aiStack_128 + lVar24) = 1;
    }
    uVar14 = *(uint *)((long)&local_100 + lVar24);
    if ((uVar14 != (uint)uVar19) || (iVar16 != iVar22)) {
      uVar19 = 0;
      if (uVar14 != 0xffffffff) {
        uVar19 = 1L << ((ulong)uVar14 & 0x3f);
      }
      uVar17 = uVar19;
      if (iVar16 != DAT_01d418b8._4_4_) {
        uVar17 = 0;
      }
      if ((uVar17 & DAT_01d418b0) == 0) {
        if (iVar16 != DAT_01d418d0._4_4_) {
          uVar19 = 0;
        }
        if ((uVar19 & DAT_01d418c8) == 0) goto LAB_0127bb54;
      }
      uVar10 = *(uint *)((long)&local_100 + lVar24 + 4);
      if (iVar16 == 0) {
        if (*(long *)(this + 0x198) == 0) goto LAB_0127bfc8;
        uVar19 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
        local_d0 = uVar19 & 0xffffffff | (ulong)uVar10 << 0x20;
        local_90 = CONCAT44(uVar10,uVar14);
        local_c8 = local_c8 & 0xffffffff00000000;
        local_c0 = (Assembler *)((ulong)local_c0 & 0xffffffffffffff00);
        local_b8[0] = local_b8[0] & 0xffffffffffffff00;
        local_a0 = 0;
        local_98 = 0x13;
        uStack_80 = 0xffffffff;
        local_88 = 0;
        Mov(this,&local_d0,&local_c0,0);
        uVar12 = (undefined4)local_c8;
        *(ulong *)((long)&local_100 + lVar24) = local_d0;
        *(undefined4 *)((long)&local_f8 + lVar24) = uVar12;
      }
      else {
        if (*(long *)(this + 0x1a8) == 0) {
LAB_0127bfc8:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!available->IsEmpty()");
        }
        uVar15 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x1a8));
        local_c0 = (Assembler *)CONCAT44(uVar10,uVar15);
        local_b8[0] = 0x100000001;
        local_d0 = CONCAT44(uVar10,uVar14);
        local_c8 = 0x100000001;
        if ((uVar10 != 0x40) || (uVar14 != uVar15)) {
          Assembler::fmov((Assembler *)this,(VRegister *)&local_c0,(VRegister *)&local_d0);
        }
        *(Assembler **)((long)&local_100 + lVar24) = (Assembler *)CONCAT44(uVar10,uVar15);
        *(undefined4 *)((long)&local_f8 + lVar24) = 1;
      }
    }
LAB_0127bb54:
    lVar24 = lVar24 + 0xc;
    lVar28 = lVar28 + 1;
  } while (lVar24 != 0x30);
  lVar28 = 4;
LAB_0127bd30:
  piVar25 = (int *)&local_100;
  puVar26 = &local_130;
  if (aiStack_128[0] != 0) goto LAB_0127bda0;
  do {
    local_d0 = *puVar26;
    local_90 = *(undefined8 *)piVar25;
    local_c8 = local_c8 & 0xffffffff00000000;
    local_c0 = (Assembler *)((ulong)local_c0 & 0xffffffffffffff00);
    local_b8[0] = local_b8[0] & 0xffffffffffffff00;
    local_a0 = 0;
    local_98 = 0x13;
    uStack_80 = 0xffffffff;
    local_88 = 0;
    Mov(this,&local_d0,&local_c0,1);
    puVar27 = puVar26;
    while( true ) {
      piVar25 = piVar25 + 3;
      lVar28 = lVar28 + -1;
      puVar26 = (ulong *)((long)puVar27 + 0xc);
      if (lVar28 == 0) goto LAB_0127be3c;
      if (*(int *)((long)puVar27 + 0x14) == 0) break;
LAB_0127bda0:
      iVar9 = *(int *)((long)puVar26 + 4);
      iVar22 = piVar25[1];
      iVar16 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar16 = iVar9;
      }
      iVar1 = iVar22 + 7;
      if (-1 < iVar22) {
        iVar1 = iVar22;
      }
      puVar27 = puVar26;
      if (iVar16 >> 3 == iVar1 >> 3) {
        local_c0 = (Assembler *)CONCAT44(iVar9,(int)*puVar26);
        local_b8[0] = 0x100000001;
        local_d0 = CONCAT44(iVar22,*piVar25);
        local_c8 = 0x100000001;
        if ((((int)*puVar26 != *piVar25) || (iVar9 != 0x40)) || (iVar22 != 0x40)) {
          Assembler::fmov((Assembler *)this,(VRegister *)&local_c0,(VRegister *)&local_d0);
        }
      }
      else {
        local_c0 = (Assembler *)CONCAT44(iVar9,(int)*puVar26);
        local_d0 = CONCAT44(iVar22,*piVar25);
        local_b8[0] = 0x100000001;
        local_c8 = 0x100000001;
        Assembler::fcvt((Assembler *)this,(VRegister *)&local_c0,(VRegister *)&local_d0);
      }
    }
  } while( true );
}

