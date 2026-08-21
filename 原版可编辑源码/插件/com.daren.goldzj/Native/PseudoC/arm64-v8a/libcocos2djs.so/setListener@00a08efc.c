
/* universe::MergeFile::setListener(std::__ndk1::function<void (int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&) */

void __thiscall universe::MergeFile::setListener(MergeFile *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a08f18 to 00b08f1b has its CatchHandler @ 00a09580 */
                    /* try { // try from 00a08f1c to 00b08f33 has its CatchHandler @ 00a08ed8 */
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 00a08f44 to 00b08f4f has its CatchHandler @ 00a096e0 */
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
                    /* try { // try from 00a08f50 to 00b08f57 has its CatchHandler @ 00a096d8 */
                    /* try { // try from 00a08f58 to 00b08f67 has its CatchHandler @ 00a09718 */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
                    /* try { // try from 00a08f34 to 00b08f43 has its CatchHandler @ 00a09720 */
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
                    /* try { // try from 00a08f68 to 00b08f6f has its CatchHandler @ 00a096d0 */
                    /* try { // try from 00a08f70 to 00b08f7f has its CatchHandler @ 00a09710 */
  FUN_0097b4bc(alStack_60,this + 0x30);
                    /* try { // try from 00a08f80 to 00b08f87 has its CatchHandler @ 00a096c8 */
  if (alStack_60 == local_40) {
                    /* try { // try from 00a08f98 to 00b08fa3 has its CatchHandler @ 00a096c0 */
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a08fa0;
                    /* try { // try from 00a08f88 to 00b08f97 has its CatchHandler @ 00a09708 */
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00a08fa0:
                    /* try { // try from 00a08fa4 to 00b08fb7 has its CatchHandler @ 00a096ac */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

