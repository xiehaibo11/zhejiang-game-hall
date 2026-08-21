
/* v8::internal::compiler::Hints::Reset(v8::internal::compiler::Hints*, v8::internal::Zone*) */

void __thiscall v8::internal::compiler::Hints::Reset(Hints *this,Hints *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
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
    *(undefined8 **)param_1 = puVar1;
  }
  *(undefined8 **)this = puVar1;
  return;
}

