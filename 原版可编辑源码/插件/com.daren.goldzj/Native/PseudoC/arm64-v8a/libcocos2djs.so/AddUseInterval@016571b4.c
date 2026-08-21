
/* v8::internal::compiler::TopLevelLiveRange::AddUseInterval(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LifetimePosition, v8::internal::Zone*, bool) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::AddUseInterval
          (TopLevelLiveRange *this,uint param_2,uint param_3,Zone *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_5 & 1) != 0) {
    PrintF("Add to live range %d interval [%d %d[\n",(ulong)*(uint *)(this + 0x5c),(ulong)param_2,
           (ulong)param_3);
  }
  puVar2 = *(uint **)(this + 0x10);
  if (puVar2 == (uint *)0x0) {
    puVar2 = *(uint **)(param_4 + 0x10);
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar2) < 0x10) {
      puVar2 = (uint *)Zone::NewExpand(param_4,0x10);
    }
    else {
      *(uint **)(param_4 + 0x10) = puVar2 + 4;
    }
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint **)(this + 8) = puVar2;
    *(uint **)(this + 0x10) = puVar2;
  }
  else {
    uVar1 = *puVar2;
    if (uVar1 == param_3) {
      *puVar2 = param_2;
    }
    else if ((int)param_3 < (int)uVar1) {
      puVar2 = *(uint **)(param_4 + 0x10);
      if ((ulong)(*(long *)(param_4 + 0x18) - (long)puVar2) < 0x10) {
        puVar2 = (uint *)Zone::NewExpand(param_4,0x10);
      }
      else {
        *(uint **)(param_4 + 0x10) = puVar2 + 4;
      }
      *puVar2 = param_2;
      puVar2[1] = param_3;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(this + 0x10);
      *(uint **)(this + 0x10) = puVar2;
    }
    else {
      if ((int)uVar1 <= (int)param_2) {
        param_2 = uVar1;
      }
      *puVar2 = param_2;
      uVar1 = *(uint *)(*(long *)(this + 0x10) + 4);
      if ((int)uVar1 <= (int)param_3) {
        uVar1 = param_3;
      }
      *(uint *)(*(long *)(this + 0x10) + 4) = uVar1;
    }
  }
  return;
}

