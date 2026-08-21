
/* v8::internal::compiler::UseInterval::SplitAt(v8::internal::compiler::LifetimePosition,
   v8::internal::Zone*) */

undefined4 * __thiscall
v8::internal::compiler::UseInterval::SplitAt(UseInterval *this,undefined4 param_2,Zone *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined4 *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(undefined4 **)(param_3 + 0x10) = puVar2 + 4;
  }
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined8 *)(puVar2 + 2) = 0;
  *puVar2 = param_2;
  puVar2[1] = uVar1;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = param_2;
  return puVar2;
}

