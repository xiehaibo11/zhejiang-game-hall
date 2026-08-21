
/* universe::DownloadTask::onProgress(long) */

undefined8 __thiscall universe::DownloadTask::onProgress(DownloadTask *this,long param_1)

{
  long lVar1;
  Service *this_00;
  void *__dest;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_c0;
  ulong uStack_b8;
  void *local_b0;
  long local_a8;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0xe0) == 0) ||
     ((fVar7 = (float)*(ulong *)(this + 0x110) / (float)param_1,
      fVar7 <= *(float *)(this + 0x118) + 0.009 && (fVar7 <= 0.98)))) goto LAB_00a072a0;
  *(float *)(this + 0x118) = fVar7;
  this_00 = (Service *)core::Service::getInstance();
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  if (((byte)this[0x78] & 1) == 0) {
    local_b0 = *(void **)(this + 0x88);
    uStack_b8 = *(ulong *)(this + 0x80);
    local_c0 = *(ulong *)(this + 0x78);
  }
  else {
    uVar4 = *(ulong *)(this + 0x80);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = *(void **)(this + 0x88);
    if (uVar4 < 0x17) {
      __dest = (void *)((long)&local_c0 + 1);
      local_c0 = (ulong)(byte)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00a07200;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      local_c0 = uVar6 | 1;
      uStack_b8 = uVar4;
      local_b0 = __dest;
LAB_00a07200:
      memcpy(__dest,pvVar5,uVar4);
    }
    *(undefined1 *)((long)__dest + uVar4) = 0;
  }
  lVar3 = *(long *)(this + 0xe0);
  local_80 = (long *)0x0;
  local_a8 = lVar3;
  local_80 = operator_new(0x30);
  pvVar5 = local_b0;
  uVar6 = uStack_b8;
  uVar4 = local_c0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0;
  *local_80 = (long)&PTR_FUN_01c6ca68;
  *(float *)(local_80 + 1) = fVar7;
  local_80[3] = uVar6;
  local_80[2] = uVar4;
  local_80[4] = (long)pvVar5;
  local_80[5] = lVar3;
  core::Service::performInMainThread(this_00,(function *)alStack_a0);
                    /* try { // try from 00a07270 to 00b072c7 has its CatchHandler @ 00a07270
                       catch() { ... } // from try @ 00a07270 with catch @ 00a07270
                       catch() { ... } // from try @ 00a0731c with catch @ 00a07270
                       catch() { ... } // from try @ 00a07434 with catch @ 00a07270 */
  if (alStack_a0 == local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
LAB_00a0728c:
    (*pcVar2)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar2 = *(code **)(*local_80 + 0x28);
    goto LAB_00a0728c;
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_00a072a0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00a072c8 to 00b072f7 has its CatchHandler @ 00a07498 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

