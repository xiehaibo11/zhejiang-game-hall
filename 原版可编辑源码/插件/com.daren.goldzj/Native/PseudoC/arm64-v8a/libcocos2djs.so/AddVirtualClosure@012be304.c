
/* v8::internal::compiler::Hints::AddVirtualClosure(v8::internal::compiler::VirtualClosure const&,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::Hints::AddVirtualClosure(Hints *this,VirtualClosure *param_1,Zone *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
    lVar5 = puVar4[2];
  }
  else {
    if ((Zone *)puVar4[5] != param_2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","zone == impl_->zone_");
    }
    lVar5 = puVar4[2];
  }
  if (lVar5 != 0) {
    do {
      if ((*(long *)(lVar5 + 8) == *(long *)(param_1 + 8)) &&
         (uVar1 = operator==((Hints *)(lVar5 + 0x10),(Hints *)(param_1 + 0x10)), (uVar1 & 1) != 0))
      {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x18);
    } while (lVar5 != 0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_2,0x28);
  }
  else {
    *(undefined8 **)(param_2 + 0x10) = puVar2 + 5;
  }
  lVar5 = puVar4[2];
  puVar2[1] = uVar7;
  *puVar2 = uVar6;
  puVar2[2] = uVar3;
  puVar2[3] = lVar5;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x20) + 1;
  }
  puVar2[4] = lVar5;
  puVar4[2] = puVar2;
  return;
}

