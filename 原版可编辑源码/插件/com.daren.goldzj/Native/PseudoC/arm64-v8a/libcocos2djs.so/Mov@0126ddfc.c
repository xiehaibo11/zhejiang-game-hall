
/* v8::internal::TurboAssembler::Mov(v8::internal::Register const&, unsigned long) */

void __thiscall
v8::internal::TurboAssembler::Mov(TurboAssembler *this,Register *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong local_70;
  undefined4 local_68;
  
  uVar4 = TryOneInstrMoveImmediate(this,param_1,param_2);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar10 = 0;
    uVar9 = uVar2 >> 4;
    if (uVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar4 = ~param_2;
      uVar11 = uVar9;
      do {
        if ((uVar4 & 0xffff) == 0) {
          uVar10 = uVar10 + 1;
        }
        uVar11 = uVar11 - 1;
        uVar4 = uVar4 >> 0x10;
      } while (uVar11 != 0);
      uVar11 = 0;
      uVar4 = param_2;
      do {
        if ((uVar4 & 0xffff) == 0) {
          uVar11 = uVar11 + 1;
        }
        uVar9 = uVar9 - 1;
        uVar4 = uVar4 >> 0x10;
      } while (uVar9 != 0);
    }
    lVar12 = *(long *)(this + 0x198);
    uVar13 = *(undefined8 *)(this + 0x1a8);
    uVar4 = 0xffff;
    if (uVar10 <= uVar11) {
      uVar4 = 0;
    }
    if ((*(int *)(param_1 + 8) == 0) && (*(int *)param_1 == 0x3f)) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!available->IsEmpty()");
      }
      uVar5 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
      uVar2 = *(uint *)(param_1 + 4);
      local_68 = 0;
      local_70 = uVar5 & 0xffffffff | (ulong)uVar2 << 0x20;
    }
    else {
      local_68 = *(undefined4 *)(param_1 + 8);
      local_70 = *(ulong *)param_1;
    }
    if (0xf < (int)uVar2) {
      uVar5 = 0;
      lVar14 = 0;
      bVar8 = false;
      do {
        uVar6 = param_2 >> (uVar5 & 0x3f) & 0xffff;
        if (uVar6 != uVar4) {
          if (bVar8) {
            uVar7 = 0x60000000;
          }
          else if (uVar11 < uVar10) {
            uVar6 = uVar6 ^ 0xffff;
            uVar7 = 0;
          }
          else {
            uVar7 = 0x40000000;
          }
          Assembler::MoveWide((Assembler *)this,&local_70,uVar6,uVar5 & 0xffffffff,uVar7);
          bVar8 = true;
        }
        iVar3 = *(int *)(param_1 + 4);
        lVar14 = lVar14 + 1;
        uVar5 = uVar5 + 0x10;
        iVar1 = iVar3 + 0xf;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
      } while (lVar14 < iVar1 >> 4);
    }
    if ((*(int *)(param_1 + 8) == 0) && (*(int *)param_1 == 0x3f)) {
      Assembler::mov((Assembler *)this,param_1,(Register *)&local_70);
    }
    *(long *)(this + 0x198) = lVar12;
    *(undefined8 *)(this + 0x1a8) = uVar13;
  }
  return;
}

