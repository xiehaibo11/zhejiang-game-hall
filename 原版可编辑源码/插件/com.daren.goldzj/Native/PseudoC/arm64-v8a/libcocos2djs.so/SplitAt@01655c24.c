
/* v8::internal::compiler::LiveRange::SplitAt(v8::internal::compiler::LifetimePosition,
   v8::internal::Zone*) */

int * __thiscall
v8::internal::compiler::LiveRange::SplitAt(LiveRange *this,undefined4 param_2,Zone *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(this + 0x20);
  do {
    lVar5 = lVar3;
    lVar3 = *(long *)(lVar5 + 0x68);
  } while (*(long *)(lVar5 + 0x68) != 0);
  iVar1 = *(int *)(lVar5 + 0x60) + 1;
  *(int *)(lVar5 + 0x60) = iVar1;
  piVar4 = *(int **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)piVar4) < 0x60) {
    piVar4 = (int *)Zone::NewExpand(param_3,0x60);
  }
  else {
    *(int **)(param_3 + 0x10) = piVar4 + 0x18;
  }
  uVar6 = *(undefined8 *)(this + 0x20);
  uVar2 = *(uint *)(this + 4);
  piVar4[6] = 0;
  piVar4[7] = 0;
  *(undefined8 *)(piVar4 + 8) = uVar6;
  piVar4[0x16] = -1;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0x10] = 0;
  piVar4[0x11] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[0x14] = 0;
  piVar4[0x15] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0;
  *piVar4 = iVar1;
  piVar4[1] = uVar2 & 0x1fe000 | 0x8001000;
  *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(this + 0x50);
  DetachAt(this,param_2,piVar4,param_3,0);
  *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(this + 0x28);
  *(int **)(this + 0x28) = piVar4;
  return piVar4;
}

