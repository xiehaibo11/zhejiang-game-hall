
/* v8::internal::compiler::Hints::AddVirtualBoundFunction(v8::internal::compiler::VirtualBoundFunction
   const&, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::Hints::AddVirtualBoundFunction
          (Hints *this,VirtualBoundFunction *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 == (undefined8 *)0x0) {
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
    param_2 = (Zone *)puVar1[5];
  }
  else if ((Zone *)puVar1[5] != param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","zone == impl_->zone_");
  }
  FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
  ::Add((FunctionalSet<v8::internal::compiler::VirtualBoundFunction,std::__ndk1::equal_to<v8::internal::compiler::VirtualBoundFunction>>
         *)(puVar1 + 4),param_1,param_2);
  return;
}

