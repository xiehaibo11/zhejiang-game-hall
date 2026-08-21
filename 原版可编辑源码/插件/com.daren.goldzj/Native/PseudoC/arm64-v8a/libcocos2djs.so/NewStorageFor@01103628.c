
/* v8::internal::Object::NewStorageFor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Representation) */

ulong * v8::internal::Object::NewStorageFor(Factory *param_1,ulong *param_2,char param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  if (param_3 != '\x02') {
    return param_2;
  }
  puVar1 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>(param_1);
  *(undefined8 *)(*puVar1 + 3) = 0xfff7fffffff7ffff;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    uVar3 = *puVar1;
    dVar4 = (double)((int)uVar2 >> 1);
  }
  else {
    if ((int)uVar2 == *(int *)(param_1 + 0x98)) {
      *(undefined8 *)(*puVar1 + 3) = 0xfff7fffffff7ffff;
      return puVar1;
    }
    uVar3 = *puVar1;
    if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42) {
      *(undefined8 *)(uVar3 + 3) = *(undefined8 *)(uVar2 + 3);
      return puVar1;
    }
    dVar4 = *(double *)(uVar2 + 3);
  }
  *(double *)(uVar3 + 3) = dVar4;
  return puVar1;
}

