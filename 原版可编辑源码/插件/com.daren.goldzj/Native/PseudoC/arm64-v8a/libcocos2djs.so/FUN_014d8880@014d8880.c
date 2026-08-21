
void FUN_014d8880(long *param_1,Isolate *param_2,undefined8 param_3)

{
  uint uVar1;
  String *this;
  char *pcVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  
  *param_1 = (long)(param_1 + 1);
  param_1[0xe] = 0;
  this = (String *)v8::internal::String::Flatten(param_2,param_3,0);
  uVar3 = *(ulong *)this;
  if ((*(byte *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) >> 3 & 1) == 0) {
    uVar1 = v8::String::Utf8Length(this,param_2);
    if ((int)uVar1 < 100) {
      if ((int)uVar1 < 1) goto LAB_014d899c;
      pcVar2 = (char *)*param_1;
    }
    else {
      pcVar2 = operator_new__((long)(int)(uVar1 + 1));
      pvVar4 = (void *)param_1[0xe];
      param_1[0xe] = (long)pcVar2;
      if (pvVar4 == (void *)0x0) {
        *param_1 = (long)pcVar2;
      }
      else {
        operator_delete(pvVar4);
        pcVar2 = (char *)param_1[0xe];
        *param_1 = (long)pcVar2;
      }
    }
    v8::String::WriteUtf8(this,param_2,pcVar2,-1,(int *)0x0,0);
  }
  else {
    uVar1 = *(uint *)(uVar3 + 7);
    if ((int)uVar1 < 100) {
      if ((int)uVar1 < 1) goto LAB_014d899c;
      pvVar4 = (void *)*param_1;
    }
    else {
      pvVar4 = operator_new__((long)(int)uVar1 + 1);
      pvVar5 = (void *)param_1[0xe];
      param_1[0xe] = (long)pvVar4;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
        pvVar4 = (void *)param_1[0xe];
      }
      *param_1 = (long)pvVar4;
      uVar3 = *(ulong *)this;
    }
    memcpy(pvVar4,(void *)(uVar3 + 0xb),(ulong)uVar1);
  }
LAB_014d899c:
  *(undefined1 *)(*param_1 + (long)(int)uVar1) = 0;
  return;
}

