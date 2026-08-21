
/* v8::debug::Coverage::CollectPrecise(v8::Isolate*) */

void __thiscall v8::debug::Coverage::CollectPrecise(Coverage *this,Isolate *param_1)

{
  undefined8 *puVar1;
  long *in_x8;
  long local_28;
  
  internal::Coverage::CollectPrecise((Isolate *)this);
  if (local_28 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x20);
    puVar1[2] = 0;
    puVar1[3] = local_28;
    *puVar1 = &PTR____shared_weak_count_01c98550;
    puVar1[1] = 0;
  }
  *in_x8 = local_28;
  in_x8[1] = (long)puVar1;
  return;
}

