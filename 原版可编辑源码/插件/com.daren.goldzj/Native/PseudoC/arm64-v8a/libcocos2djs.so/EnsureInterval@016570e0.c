
/* v8::internal::compiler::TopLevelLiveRange::EnsureInterval(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LifetimePosition, v8::internal::Zone*, bool) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::EnsureInterval
          (TopLevelLiveRange *this,uint param_2,uint param_3,Zone *param_4,uint param_5)

{
  uint unaff_10000012;
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  if ((param_5 & 1) != 0) {
    PrintF("Ensure live range %d in interval [%d %d[\n",(ulong)*(uint *)(this + 0x5c),(ulong)param_2
           ,(ulong)param_3);
  }
  piVar3 = *(int **)(this + 0x10);
  uVar1 = param_3;
  while ((piVar3 != (int *)0x0 && (unaff_10000012 = uVar1, *piVar3 <= (int)param_3))) {
    puVar2 = (uint *)(piVar3 + 1);
    piVar3 = *(int **)(piVar3 + 2);
    unaff_10000012 = *puVar2;
    if ((int)*puVar2 <= (int)param_3) {
      unaff_10000012 = uVar1;
    }
    *(int **)(this + 0x10) = piVar3;
    uVar1 = unaff_10000012;
  }
  puVar2 = *(uint **)(param_4 + 0x10);
  if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (uint *)Zone::NewExpand(param_4,0x10);
  }
  else {
    *(uint **)(param_4 + 0x10) = puVar2 + 4;
  }
  *puVar2 = param_2;
  puVar2[1] = unaff_10000012;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(this + 0x10);
  *(uint **)(this + 0x10) = puVar2;
  if (*(long *)(puVar2 + 2) == 0) {
    *(uint **)(this + 8) = puVar2;
  }
  return;
}

