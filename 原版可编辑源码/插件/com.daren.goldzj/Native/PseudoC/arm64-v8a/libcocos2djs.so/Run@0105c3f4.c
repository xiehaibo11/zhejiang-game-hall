
/* v8::internal::Profiler::Run() */

void __thiscall v8::internal::Profiler::Run(Profiler *this)

{
  uint uVar1;
  Profiler *pPVar2;
  int iVar3;
  Profiler PVar4;
  Logger *this_00;
  undefined4 local_1078 [2];
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  local_1078[0] = 5;
  local_68 = 0x200;
  local_70 = 0;
  uStack_1068 = 0;
  local_1070 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  pPVar2 = this + 0x8143c;
  base::Semaphore::Wait((Semaphore *)(this + 0x81444));
  memcpy(local_1078,this + (long)*(int *)pPVar2 * 0x1028 + 0x38,0x1028);
  PVar4 = this[0x81440];
  iVar3 = *(int *)pPVar2;
  uVar1 = iVar3 + 0x80;
  if (-1 < iVar3 + 1) {
    uVar1 = iVar3 + 1;
  }
  *(uint *)pPVar2 = (iVar3 + 1) - (uVar1 & 0xffffff80);
  this[0x81440] = (Profiler)0x0;
  iVar3 = *(int *)(this + 0x81454);
  while (iVar3 != 0) {
    this_00 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
    if ((*(char *)(*(long *)(this_00 + 8) + 0xb7fc) == '\0') && (this_00[0x20] != (Logger)0x0)) {
      Logger::TickEvent(this_00,(TickSample *)local_1078,PVar4 != (Profiler)0x0);
    }
    base::Semaphore::Wait((Semaphore *)(this + 0x81444));
    memcpy(local_1078,this + (long)*(int *)pPVar2 * 0x1028 + 0x38,0x1028);
    PVar4 = this[0x81440];
    iVar3 = *(int *)pPVar2;
    uVar1 = iVar3 + 0x80;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    *(uint *)pPVar2 = (iVar3 + 1) - (uVar1 & 0xffffff80);
    this[0x81440] = (Profiler)0x0;
    iVar3 = *(int *)(this + 0x81454);
  }
  return;
}

