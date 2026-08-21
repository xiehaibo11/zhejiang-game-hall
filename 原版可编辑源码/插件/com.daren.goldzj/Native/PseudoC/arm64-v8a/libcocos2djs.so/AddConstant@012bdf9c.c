
/* v8::internal::compiler::Hints::AddConstant(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Zone*) */

void __thiscall v8::internal::compiler::Hints::AddConstant(Hints *this,long param_2,Zone *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)plVar3) < 0x30) {
      plVar3 = (long *)Zone::NewExpand(param_3,0x30);
    }
    else {
      *(long **)(param_3 + 0x10) = plVar3 + 6;
    }
    plVar3[4] = 0;
    plVar3[5] = (long)param_3;
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    *(long **)this = plVar3;
    param_3 = (Zone *)plVar3[5];
    plVar1 = (long *)*plVar3;
  }
  else {
    if ((Zone *)plVar3[5] != param_3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","zone == impl_->zone_");
    }
    plVar1 = (long *)*plVar3;
  }
  while( true ) {
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_3 + 0x10);
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)plVar1) < 0x18) {
        plVar1 = (long *)Zone::NewExpand(param_3,0x18);
      }
      else {
        *(long **)(param_3 + 0x10) = plVar1 + 3;
      }
      lVar2 = *plVar3;
      *plVar1 = param_2;
      plVar1[1] = lVar2;
      if (lVar2 == 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x10) + 1;
      }
      plVar1[2] = lVar2;
      *plVar3 = (long)plVar1;
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[1];
  }
  return;
}

