
/* v8::internal::compiler::CodeGenerator::ComputeBranchInfo(v8::internal::compiler::BranchInfo*,
   v8::internal::compiler::Instruction*) */

ulong __thiscall
v8::internal::compiler::CodeGenerator::ComputeBranchInfo
          (CodeGenerator *this,BranchInfo *param_1,Instruction *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar6 = (ulong)(*(uint *)(param_2 + 4) >> 8) & 0xffff;
  uVar8 = (ulong)*(uint *)(param_2 + 4) & 0xff;
  uVar10 = *(ulong *)(param_2 + (uVar8 + uVar6) * 8 + 0x18);
  lVar4 = *(long *)(this + 0x28);
  if ((uVar10 & 7) == 3) {
    if (((uint)uVar10 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_40,(int)(uVar10 >> 0x20));
      lVar4 = *(long *)(this + 0x28);
      uVar6 = (ulong)(*(uint *)(param_2 + 4) >> 8) & 0xffff;
      uVar8 = (ulong)*(uint *)(param_2 + 4) & 0xff;
      uVar10 = uStack_38;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x60) + ((long)uVar10 >> 0x20) * 0x10);
      uVar10 = puVar1[1];
      local_40 = *puVar1;
      uStack_38 = uVar10;
    }
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    plVar9 = (long *)*plVar5;
    if (plVar9 == (long *)0x0) {
LAB_0162d3bc:
      plVar7 = plVar5;
    }
    else {
      plVar7 = plVar5;
      do {
        iVar11 = (int)(uVar10 >> 3);
        if (iVar11 <= (int)plVar9[4]) {
          plVar7 = plVar9;
        }
        plVar9 = (long *)plVar9[(int)plVar9[4] < iVar11];
      } while (plVar9 != (long *)0x0);
      if ((plVar7 == plVar5) || (iVar11 < (int)plVar7[4])) goto LAB_0162d3bc;
    }
    uVar10 = plVar7[6];
  }
  uVar6 = *(ulong *)(param_2 + (uVar8 + uVar6) * 8 + 0x20);
  iVar11 = (int)uVar10;
  if ((uVar6 & 7) == 3) {
    if (((uint)uVar6 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_40,(int)(uVar6 >> 0x20));
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x60) + ((long)uVar6 >> 0x20) * 0x10);
      uStack_38 = puVar1[1];
      local_40 = *puVar1;
    }
    iVar3 = (int)uStack_38;
    uVar6 = uStack_38;
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    plVar9 = (long *)*plVar5;
    if (plVar9 == (long *)0x0) {
LAB_0162d444:
      plVar7 = plVar5;
    }
    else {
      plVar7 = plVar5;
      do {
        iVar3 = (int)(uVar6 >> 3);
        if (iVar3 <= (int)plVar9[4]) {
          plVar7 = plVar9;
        }
        plVar9 = (long *)plVar9[(int)plVar9[4] < iVar3];
      } while (plVar9 != (long *)0x0);
      if ((plVar7 == plVar5) || (iVar3 < (int)plVar7[4])) goto LAB_0162d444;
    }
    iVar3 = (int)plVar7[6];
    uVar6 = plVar7[6];
  }
  if (iVar11 != iVar3) {
    lVar4 = **(long **)(*(long *)(this + 0x28) + 0x10);
    uVar8 = (*(long **)(*(long *)(this + 0x28) + 0x10))[1] - lVar4 >> 3;
    if (((ulong)(long)*(int *)(this + 0xb8) < uVar8) && ((ulong)(long)iVar11 < uVar8)) {
      bVar2 = *(int *)(*(long *)(lVar4 + (long)*(int *)(this + 0xb8) * 8) + 0x60) + 1 ==
              *(int *)(*(long *)(lVar4 + (long)iVar11 * 8) + 0x60);
      *(uint *)param_1 = *(uint *)param_2 >> 0x11 & 0x1f ^ (uint)bVar2;
      uVar8 = uVar6;
      if (!bVar2) {
        uVar8 = uVar10;
      }
      *(long *)(param_1 + 8) = *(long *)(this + 0xa8) + ((long)(uVar8 << 0x20) >> 0x1d);
      uVar8 = uVar10;
      if (!bVar2) {
        uVar8 = uVar6;
      }
      *(long *)(param_1 + 0x10) = *(long *)(this + 0xa8) + ((long)(uVar8 << 0x20) >> 0x1d);
      lVar4 = **(long **)(*(long *)(this + 0x28) + 0x10);
      uVar6 = (*(long **)(*(long *)(this + 0x28) + 0x10))[1] - lVar4 >> 3;
      if (((ulong)(long)*(int *)(this + 0xb8) < uVar6) && ((ulong)(long)(int)uVar8 < uVar6)) {
        uVar10 = 0xffffffff;
        param_1[0x18] =
             (BranchInfo)
             (*(int *)(*(long *)(lVar4 + (long)*(int *)(this + 0xb8) * 8) + 0x60) + 1 ==
             *(int *)(*(long *)(lVar4 + (long)(int)uVar8 * 8) + 0x60));
        goto LAB_0162d544;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_0162d544:
  return uVar10 & 0xffffffff;
}

