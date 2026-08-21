
/* v8::internal::SafepointTable::SafepointTable(unsigned long, unsigned long, unsigned int, bool) */

void __thiscall
v8::internal::SafepointTable::SafepointTable
          (SafepointTable *this,ulong param_1,ulong param_2,uint param_3,bool param_4)

{
  int *piVar1;
  int iVar2;
  
  *(ulong *)this = param_1;
  *(uint *)(this + 8) = param_3;
  piVar1 = (int *)(param_2 + param_1);
  this[0x28] = (SafepointTable)param_4;
  iVar2 = *piVar1;
  *(int *)(this + 0xc) = iVar2;
  *(int *)(this + 0x10) = piVar1[1];
  *(int **)(this + 0x18) = piVar1 + 2;
  *(ulong *)(this + 0x20) = (long)(piVar1 + 2) + (ulong)(uint)(iVar2 * 0xc);
  return;
}

