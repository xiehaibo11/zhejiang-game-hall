
/* v8::internal::compiler::Hints::Add(v8::internal::compiler::Hints const&, v8::internal::Zone*) */

void __thiscall v8::internal::compiler::Hints::Add(Hints *this,Hints *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)this;
  plVar3 = *(long **)param_1;
  if (((plVar2 != plVar3) && (plVar3 != (long *)0x0)) &&
     (((*plVar3 != 0 || (((plVar3[1] != 0 || (plVar3[2] != 0)) || (plVar3[3] != 0)))) ||
      (plVar3[4] != 0)))) {
    if (plVar2 == (long *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x30) {
        puVar1 = (undefined8 *)Zone::NewExpand(param_2,0x30);
      }
      else {
        *(undefined8 **)(param_2 + 0x10) = puVar1 + 6;
      }
      puVar1[4] = 0;
      puVar1[5] = param_2;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *(undefined8 **)this = puVar1;
    }
    else if ((Zone *)plVar2[5] != param_2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","zone == impl_->zone_");
    }
    Union(this,param_1);
    return;
  }
  return;
}

