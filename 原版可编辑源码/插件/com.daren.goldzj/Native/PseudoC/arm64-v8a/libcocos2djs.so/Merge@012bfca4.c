
/* v8::internal::compiler::Hints::Merge(v8::internal::compiler::Hints const&, v8::internal::Zone*)
    */

void __thiscall v8::internal::compiler::Hints::Merge(Hints *this,Hints *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  
  if (*(long *)this != *(long *)param_1) {
    if (*(long *)this != 0) {
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
      *puVar1 = **(undefined8 **)this;
      puVar1[1] = *(undefined8 *)(*(long *)this + 8);
      puVar1[3] = *(undefined8 *)(*(long *)this + 0x18);
      puVar1[2] = *(undefined8 *)(*(long *)this + 0x10);
      puVar1[4] = *(undefined8 *)(*(long *)this + 0x20);
      *(undefined8 **)this = puVar1;
      Union(this,param_1);
      return;
    }
    if (*(long *)param_1 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = *(undefined8 **)(param_2 + 0x10);
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar1) < 0x30) {
        puVar1 = (undefined8 *)Zone::NewExpand(param_2,0x30);
      }
      else {
        *(undefined8 **)(param_2 + 0x10) = puVar1 + 6;
      }
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = param_2;
      *puVar1 = **(undefined8 **)param_1;
      puVar1[1] = *(undefined8 *)(*(long *)param_1 + 8);
      puVar1[3] = *(undefined8 *)(*(long *)param_1 + 0x18);
      puVar1[2] = *(undefined8 *)(*(long *)param_1 + 0x10);
      puVar1[4] = *(undefined8 *)(*(long *)param_1 + 0x20);
    }
    *(undefined8 **)this = puVar1;
  }
  return;
}

