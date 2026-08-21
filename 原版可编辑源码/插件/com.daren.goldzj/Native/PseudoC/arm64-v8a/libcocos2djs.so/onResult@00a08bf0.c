
/* universe::MergeFile::onResult(universe::MergeFileTask&) */

void __thiscall universe::MergeFile::onResult(MergeFile *this,MergeFileTask *param_1)

{
  MergeFileTask MVar1;
  long lVar2;
  char *pcVar3;
  size_t __n;
  MergeFileTask *pMVar4;
  long *plVar5;
  void *__dest;
  ulong uVar6;
  ulong local_88;
  size_t local_80;
  void *local_78;
  int local_6c;
  long local_68;
  
                    /* try { // try from 00a08bfc to 00b08c1f has its CatchHandler @ 00a08bfc
                       catch() { ... } // from try @ 00a08bfc with catch @ 00a08bfc
                       catch() { ... } // from try @ 00a08c24 with catch @ 00a08bfc */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a08c20 to 00b08c23 has its CatchHandler @ 00a08c38 */
                    /* try { // try from 00a08c24 to 00b08c4b has its CatchHandler @ 00a08bfc */
  if (param_1[0x58] != (MergeFileTask)0x0) {
    pcVar3 = (char *)Translated::getInstance();
                    /* catch() { ... } // from try @ 00a08c20 with catch @ 00a08c38 */
    if (((byte)param_1[0x38] & 1) == 0) {
      pMVar4 = param_1 + 0x39;
    }
    else {
      pMVar4 = *(MergeFileTask **)(param_1 + 0x48);
    }
                    /* catch() { ... } // from try @ 00a08e0c with catch @ 00a08c4c */
    Translated::log(pcVar3,"MergeFile: failed %s",pMVar4);
  }
  plVar5 = *(long **)(this + 0x50);
  if (plVar5 == (long *)0x0) goto LAB_00a08d1c;
  MVar1 = param_1[0x58];
  if ((byte)MVar1 < 4) {
    pcVar3 = (&PTR_s_SUCCESS_01c6cd50)[(int)(char)MVar1];
  }
  else {
    pcVar3 = "";
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00a08d5c to 00b08d87 has its CatchHandler @ 00a08eac */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
                    /* try { // try from 00a08ca4 to 00b08caf has its CatchHandler @ 00a08e9c */
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00a08cdc;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_88 = uVar6 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00a08cdc:
    memcpy(__dest,pcVar3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00a08cfc to 00b08d13 has its CatchHandler @ 00a08e98 */
  local_6c = (int)(char)MVar1;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_6c,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00a08d1c:
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
                    /* try { // try from 00a08d30 to 00b08d37 has its CatchHandler @ 00a08e60 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

