
/* v8::internal::compiler::LinearScanAllocator::PickRegisterThatIsAvailableLongest(v8::internal::compiler::LiveRange*,
   int, v8::internal::Vector<v8::internal::compiler::LifetimePosition> const&) */

ulong __thiscall
v8::internal::compiler::LinearScanAllocator::PickRegisterThatIsAvailableLongest
          (LinearScanAllocator *this,LiveRange *param_1,int param_2,Vector *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  
  uVar12 = (ulong)*(uint *)(this + 0x10);
  puVar13 = *(uint **)(this + 0x18);
  uVar14 = param_2;
  if (param_2 == 0x20) {
    uVar14 = *puVar13;
  }
  uVar11 = (ulong)uVar14;
  if (0 < (int)*(uint *)(this + 0x10)) {
    uVar14 = 0xffffffff;
    do {
      uVar2 = *puVar13;
      iVar3 = *(int *)(*(long *)param_3 + (long)(int)uVar2 * 4);
      iVar10 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar10 = iVar3;
      }
      uVar1 = iVar10 >> 2;
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        pcVar5 = "unassigned";
        if (uVar2 != 0x20) {
          if (*(int *)(this + 8) == 0) {
            if (uVar2 == 0xffffffff) goto LAB_01663cec;
            puVar8 = &RegisterName(v8::internal::Register)::Names;
          }
          else {
            if (uVar2 == 0xffffffff) {
LAB_01663cec:
              pcVar5 = "invalid";
              goto LAB_01663cf4;
            }
            puVar8 = &RegisterName(v8::internal::VRegister)::Names;
          }
          pcVar5 = (char *)puVar8[(int)uVar2];
        }
LAB_01663cf4:
        PrintF("Register %s in free until %d\n",pcVar5,(ulong)uVar1);
      }
      if ((int)uVar14 < (int)uVar1) {
LAB_01663c6c:
        uVar11 = (ulong)uVar2;
        uVar14 = uVar1;
      }
      else {
        iVar10 = (int)uVar11;
        if ((iVar10 != param_2) && (uVar1 == uVar14)) {
          lVar6 = *(long *)this;
          uVar4 = *(uint *)(param_1 + 4) >> 0xd & 0xff;
          if ((uVar4 == 0xd) || ((uVar4 == 0xc || (uVar4 == 0xb)))) {
            lVar9 = *(long *)(lVar6 + 0x180);
          }
          else {
            lVar9 = *(long *)(lVar6 + 0x178);
          }
          puVar7 = (ulong *)(lVar9 + 8);
          if (*(int *)(lVar9 + 4) != 1) {
            iVar3 = iVar10 + 0x3f;
            if (-1 < iVar10) {
              iVar3 = iVar10;
            }
            puVar7 = (ulong *)(*puVar7 + (long)(iVar3 >> 6) * 8);
          }
          if ((*puVar7 >> (uVar11 & 0x3f) & 1) != 0) {
            if (((uVar4 == 0xd) || (uVar4 == 0xc)) || (uVar4 == 0xb)) {
              lVar6 = *(long *)(lVar6 + 0x180);
            }
            else {
              lVar6 = *(long *)(lVar6 + 0x178);
            }
            puVar7 = (ulong *)(lVar6 + 8);
            if (*(int *)(lVar6 + 4) != 1) {
              uVar4 = uVar2 + 0x3f;
              if (-1 < (int)uVar2) {
                uVar4 = uVar2;
              }
              puVar7 = (ulong *)(*puVar7 + (long)((int)uVar4 >> 6) * 8);
            }
            if ((*puVar7 >> ((ulong)uVar2 & 0x3f) & 1) == 0) goto LAB_01663c6c;
          }
        }
      }
      uVar12 = uVar12 - 1;
      puVar13 = puVar13 + 1;
    } while (uVar12 != 0);
  }
  return uVar11;
}

