
/* fairygui::UIObjectFactory::setLoaderExtension(std::__ndk1::function<fairygui::GLoader* ()>) */

void fairygui::UIObjectFactory::setLoaderExtension(long *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
                    /* try { // try from 00a9e1d8 to 00b9e1db has its CatchHandler @ 00a9e264 */
  local_40 = alStack_60;
                    /* try { // try from 00a9e1dc to 00b9e207 has its CatchHandler @ 00a9e10c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_1[4];
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if (param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
                    /* try { // try from 00a9e208 to 00b9e217 has its CatchHandler @ 00a9e278 */
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))();
                    /* try { // try from 00a9e218 to 00b9e2af has its CatchHandler @ 00a9e10c */
  }
  FUN_00a9edb0(alStack_60,_loaderCreator);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a9e278;
                    /* catch() { ... } // from try @ 00a9e1d8 with catch @ 00a9e264 */
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00a9e278:
                    /* catch() { ... } // from try @ 00a9e208 with catch @ 00a9e278 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00a9e188 with catch @ 00a9e294 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

