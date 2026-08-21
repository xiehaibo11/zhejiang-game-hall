
/* v8::internal::compiler::BytecodeLoopAssignments::BytecodeLoopAssignments(int, int,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::BytecodeLoopAssignments::BytecodeLoopAssignments
          (BytecodeLoopAssignments *this,int param_1,int param_2,Zone *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  *(int *)this = param_1;
  piVar4 = *(int **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)piVar4) < 0x10) {
    piVar4 = (int *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(int **)(param_3 + 0x10) = piVar4 + 4;
  }
  iVar2 = param_2 + param_1;
  *piVar4 = iVar2;
  if (iVar2 < 0x41) {
    piVar4[1] = 1;
    piVar4[2] = 0;
    piVar4[3] = 0;
  }
  else {
    iVar3 = iVar2 + 0x3e;
    if (-1 < iVar2 + -1) {
      iVar3 = iVar2 + -1;
    }
    uVar1 = (iVar3 >> 6) + 1;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[1] = uVar1;
    puVar5 = *(undefined8 **)(param_3 + 0x10);
    uVar6 = (ulong)uVar1 * 8;
    if (uVar6 < (ulong)(*(long *)(param_3 + 0x18) - (long)puVar5) ||
        uVar6 - (*(long *)(param_3 + 0x18) - (long)puVar5) == 0) {
      *(undefined8 **)(param_3 + 0x10) = puVar5 + uVar1;
    }
    else {
      puVar5 = (undefined8 *)Zone::NewExpand(param_3,uVar6);
    }
    *(undefined8 **)(piVar4 + 2) = puVar5;
    if (piVar4[1] == 1) {
      piVar4[2] = 0;
      piVar4[3] = 0;
    }
    else if ((0 < piVar4[1]) && (*puVar5 = 0, 1 < piVar4[1])) {
      lVar7 = 1;
      do {
        *(undefined8 *)(*(long *)(piVar4 + 2) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < piVar4[1]);
    }
  }
  *(int **)(this + 8) = piVar4;
  return;
}

