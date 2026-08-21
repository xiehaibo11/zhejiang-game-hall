
void FUN_014b8f00(Isolate *param_1,int param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  Logger *this;
  ulong local_60;
  char *local_58;
  
  uVar3 = v8::internal::Logger::is_logging(*(Logger **)(param_1 + 0x9558));
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x95a0);
    lVar2 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    if (((param_2 < 6) || (uVar3 = *(ulong *)(param_3 + -8), (uVar3 & 1) == 0)) ||
       (0x3f < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
      pcVar4 = (char *)0x0;
      local_58 = "default";
    }
    else {
      local_60 = uVar3;
      v8::internal::String::ToCString(&local_58,&local_60,1,1,0);
      pcVar4 = local_58;
    }
    this = *(Logger **)(param_1 + 0x9558);
    uVar3 = v8::internal::Logger::is_logging(this);
    if ((uVar3 & 1) != 0) {
      v8::internal::Logger::TimerEvent(this,param_4,local_58);
    }
    if (pcVar4 != (char *)0x0) {
      operator_delete__(pcVar4);
    }
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_1);
    }
  }
  return;
}

