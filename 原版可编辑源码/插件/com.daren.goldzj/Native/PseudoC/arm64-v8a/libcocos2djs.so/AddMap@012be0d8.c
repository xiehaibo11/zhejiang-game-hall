
/* v8::internal::compiler::Hints::AddMap(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Zone*, bool) */

void __thiscall
v8::internal::compiler::Hints::AddMap(Hints *this,long param_2,Zone *param_3,uint param_4)

{
  Zone *this_00;
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)this;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar3) < 0x30) {
      puVar3 = (undefined8 *)Zone::NewExpand(param_3,0x30);
    }
    else {
      *(undefined8 **)(param_3 + 0x10) = puVar3 + 6;
    }
    puVar3[4] = 0;
    puVar3[5] = param_3;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *(undefined8 **)this = puVar3;
  }
  else if (((param_4 & 1) != 0) && ((Zone *)puVar3[5] != param_3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","zone == impl_->zone_");
  }
  plVar2 = (long *)puVar3[1];
  this_00 = (Zone *)puVar3[5];
  while( true ) {
    if (plVar2 == (long *)0x0) {
      plVar2 = *(long **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar2) < 0x18) {
        plVar2 = (long *)Zone::NewExpand(this_00,0x18);
      }
      else {
        *(long **)(this_00 + 0x10) = plVar2 + 3;
      }
      lVar1 = puVar3[1];
      *plVar2 = param_2;
      plVar2[1] = lVar1;
      if (lVar1 == 0) {
        lVar1 = 1;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x10) + 1;
      }
      plVar2[2] = lVar1;
      puVar3[1] = plVar2;
      return;
    }
    if (*plVar2 == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  return;
}

