
/* v8::internal::compiler::Hints::AddVirtualContext(v8::internal::compiler::VirtualContext const&,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::Hints::AddVirtualContext(Hints *this,VirtualContext *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar4) < 0x30) {
      puVar4 = (undefined8 *)Zone::NewExpand(param_2,0x30);
    }
    else {
      *(undefined8 **)(param_2 + 0x10) = puVar4 + 6;
    }
    puVar4[4] = 0;
    puVar4[5] = param_2;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined8 **)this = puVar4;
    param_2 = (Zone *)puVar4[5];
    piVar2 = (int *)puVar4[3];
  }
  else {
    if ((Zone *)puVar4[5] != param_2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","zone == impl_->zone_");
    }
    piVar2 = (int *)puVar4[3];
  }
  if (piVar2 == (int *)0x0) {
    lVar6 = *(long *)(param_1 + 8);
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    do {
      if ((*(long *)(piVar2 + 2) == lVar6) && (*piVar2 == *(int *)param_1)) {
        return;
      }
      piVar2 = *(int **)(piVar2 + 4);
    } while (piVar2 != (int *)0x0);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  uVar5 = *(undefined8 *)param_1;
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x20) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_2,0x20);
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar1 + 4;
  }
  lVar3 = puVar4[3];
  *puVar1 = uVar5;
  puVar1[1] = lVar6;
  puVar1[2] = lVar3;
  if (lVar3 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x18) + 1;
  }
  puVar1[3] = lVar6;
  puVar4[3] = puVar1;
  return;
}

