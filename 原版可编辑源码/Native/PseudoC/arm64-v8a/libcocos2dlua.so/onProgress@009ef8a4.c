
/* universe::DownloadTask::onProgress(long) */

undefined8 __thiscall universe::DownloadTask::onProgress(DownloadTask *this,long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  Service *this_00;
  code *pcVar5;
  long lVar6;
  float fVar7;
  ulong local_a0;
  long lStack_98;
  void *local_90;
  long local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
                    /* try { // try from 009ef8b0 to 00aef8fb has its CatchHandler @ 009ef970 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009ef8fc to 00aef953 has its CatchHandler @ 009ef860 */
  if ((*(long *)(this + 0xe0) == 0) ||
     ((fVar7 = (float)*(ulong *)(this + 0x110) / (float)param_1,
      fVar7 <= *(float *)(this + 0x118) + 0.009 && (fVar7 <= 0.98)))) goto LAB_009ef9c4;
  *(float *)(this + 0x118) = fVar7;
  this_00 = (Service *)core::Service::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,(basic_string *)(this + 0x78));
  lVar6 = *(long *)(this + 0xe0);
  local_60 = (long *)0x0;
  local_88 = lVar6;
  local_60 = operator_new(0x30);
  pvVar4 = local_90;
  lVar3 = lStack_98;
  uVar2 = local_a0;
                    /* try { // try from 009ef954 to 00aef967 has its CatchHandler @ 009ef970 */
  lStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
                    /* try { // try from 009ef968 to 00aef98b has its CatchHandler @ 009ef860 */
  *local_60 = (long)&PTR_FUN_016a0f78;
  *(float *)(local_60 + 1) = fVar7;
                    /* catch() { ... } // from try @ 009ef8b0 with catch @ 009ef970
                       catch() { ... } // from try @ 009ef954 with catch @ 009ef970 */
  local_60[3] = lVar3;
  local_60[2] = uVar2;
  local_60[4] = (long)pvVar4;
  local_60[5] = lVar6;
  core::Service::performInMainThread(this_00,(function *)alStack_80);
                    /* try { // try from 009ef98c to 00aef9db has its CatchHandler @ 009ef98c
                       catch() { ... } // from try @ 009ef98c with catch @ 009ef98c
                       catch() { ... } // from try @ 009efa10 with catch @ 009ef98c
                       catch() { ... } // from try @ 009efa58 with catch @ 009ef98c */
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_009ef9b0:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_009ef9b0;
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_009ef9c4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009ef9dc to 00aef9f3 has its CatchHandler @ 009efa9c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

