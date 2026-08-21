
void FUN_0090bd24(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 local_38 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[2] < 1) {
    puVar4 = (ulong *)(*(long *)(*param_1 + 8) + 0xa0);
  }
  else {
    puVar4 = (ulong *)param_1[1];
  }
  uVar5 = *puVar4;
  if (((uVar5 & 3) == 1) &&
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (long)*(int *)(uVar5 - 1)) < 0x40)) {
    uVar2 = v8::Isolate::GetCurrent();
    if ((int)param_1[2] < 1) {
      lVar3 = *(long *)(*param_1 + 8) + 0xa0;
    }
    else {
      lVar3 = param_1[1];
    }
    v8::String::Utf8Value::Utf8Value((Utf8Value *)local_38,uVar2,lVar3);
    __android_log_print(3,"jswrapper","JS: %s\n",local_38[0]);
    v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

