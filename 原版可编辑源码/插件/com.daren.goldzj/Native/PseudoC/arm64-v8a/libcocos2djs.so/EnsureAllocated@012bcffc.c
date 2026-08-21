
/* v8::internal::compiler::Hints::EnsureAllocated(v8::internal::Zone*, bool) */

void __thiscall
v8::internal::compiler::Hints::EnsureAllocated(Hints *this,Zone *param_1,bool param_2)

{
  undefined8 *puVar1;
  
  if (*(long *)this == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x30) {
      puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x30);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 6;
    }
    puVar1[4] = 0;
    puVar1[5] = param_1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined8 **)this = puVar1;
  }
  else if ((param_2) && (*(Zone **)(*(long *)this + 0x28) != param_1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","zone == impl_->zone_");
  }
  return;
}

