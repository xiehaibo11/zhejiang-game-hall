
/* v8::internal::Profiler::Disengage() */

void __thiscall v8::internal::Profiler::Disengage(Profiler *this)

{
  uint uVar1;
  Profiler *pPVar2;
  int iVar3;
  long lVar4;
  Logger *this_00;
  Sampler *this_01;
  undefined1 auStack_1068 [4084];
  undefined6 local_74;
  undefined2 uStack_6e;
  undefined6 uStack_6c;
  undefined2 uStack_66;
  undefined6 uStack_64;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pPVar2 = this + 0x81438;
  this_01 = *(Sampler **)(*(long *)(*(long *)(this + 0x30) + 0x9558) + 0x10);
  *(undefined8 *)(this_01 + 0x30) = 0;
  if (((byte)this_01[0x20] & 1) != 0) {
    sampler::Sampler::Stop(this_01);
  }
  base::Thread::Join(*(Thread **)(this_01 + 0x38));
  *(undefined4 *)(this + 0x81454) = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  iVar3 = *(int *)pPVar2;
  uVar1 = iVar3 + 0x80;
  if (-1 < iVar3 + 1) {
    uVar1 = iVar3 + 1;
  }
  if ((iVar3 + 1) - (uVar1 & 0xffffff80) == *(int *)(this + 0x8143c)) {
    this[0x81440] = (Profiler)0x1;
  }
  else {
    *(undefined4 *)(this + (long)iVar3 * 0x1028 + 0x38) = 5;
    *(undefined4 *)(this + (long)iVar3 * 0x1028 + 0x4c) = 0;
    *(undefined8 *)(this + (long)iVar3 * 0x1028 + 0x44) = 0;
    *(ulong *)(this + (long)iVar3 * 0x1028 + 0x3c) = (ulong)local_5c;
    memcpy(this + (long)iVar3 * 0x1028 + 0x50,auStack_1068,0xff0);
    *(undefined8 *)(this + (long)iVar3 * 0x1028 + 0x1040) = 0;
    *(undefined2 *)(this + (long)iVar3 * 0x1028 + 0x1048) = 0x200;
    *(ulong *)(this + (long)iVar3 * 0x1028 + 0x1052) = CONCAT26(uStack_66,uStack_6c);
    *(ulong *)(this + (long)iVar3 * 0x1028 + 0x104a) = CONCAT26(uStack_6e,local_74);
    *(ulong *)(this + (long)iVar3 * 0x1028 + 0x1058) = CONCAT62(uStack_64,uStack_66);
    iVar3 = *(int *)pPVar2;
    uVar1 = iVar3 + 0x80;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    *(uint *)pPVar2 = (iVar3 + 1) - (uVar1 & 0xffffff80);
    base::Semaphore::Signal((Semaphore *)(this + 0x81444));
  }
  base::Thread::Join((Thread *)this);
  this_00 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  if ((*(char *)(*(long *)(this_00 + 8) + 0xb7fc) == '\0') && (this_00[0x20] != (Logger)0x0)) {
    Logger::UncheckedStringEvent(this_00,"profiler","end");
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

