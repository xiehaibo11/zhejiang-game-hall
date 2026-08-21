
/* v8::internal::JSTypedArray::Validate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, char const*) */

ulong * v8::internal::JSTypedArray::Validate(Factory *param_1,ulong *param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *local_30;
  size_t sStack_28;
  
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x41b)) {
    uVar3 = 99;
    lVar1 = 0;
  }
  else {
    if ((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 2 & 1) ==
        0) {
      return param_2;
    }
    sStack_28 = strlen(param_3);
    local_30 = param_3;
    lVar1 = Factory::NewStringFromOneByte(param_1,&local_30,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar3 = 0x31;
  }
  puVar2 = (undefined8 *)Factory::NewTypeError(param_1,uVar3,lVar1,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar2,0);
  return (ulong *)0x0;
}

