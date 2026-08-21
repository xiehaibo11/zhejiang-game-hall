
/* universe::Unzipper::onResult(universe::UnzipTask&) */

void __thiscall universe::Unzipper::onResult(Unzipper *this,UnzipTask *param_1)

{
  UnzipTask UVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined1 *puVar5;
  UnzipTask *pUVar6;
  undefined4 local_4c;
  undefined1 *local_48;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a09cc8 to 00b09cdb has its CatchHandler @ 00a09f58 */
  UVar1 = param_1[0x88];
  pcVar3 = (char *)Translated::getInstance();
  if (UVar1 == (UnzipTask)0x0) {
                    /* try { // try from 00a09cf8 to 00b09cff has its CatchHandler @ 00a09f04 */
    if (((byte)param_1[0x20] & 1) == 0) {
      pUVar6 = param_1 + 0x21;
    }
    else {
      pUVar6 = *(UnzipTask **)(param_1 + 0x30);
    }
    Translated::log(pcVar3,"Unzipper: success %s",pUVar6);
    plVar4 = *(long **)(this + 0x50);
  }
  else {
    if ((ulong)(long)(char)param_1[0x88] < 0xc) {
      puVar5 = (&PTR_s_SUCCESS_01c6ce38)[(char)param_1[0x88]];
    }
    else {
                    /* try { // try from 00a09d10 to 00b09d1f has its CatchHandler @ 00a09f14 */
      puVar5 = &DAT_0189703a;
    }
    if (((byte)param_1[0x20] & 1) == 0) {
      pUVar6 = param_1 + 0x21;
    }
    else {
      pUVar6 = *(UnzipTask **)(param_1 + 0x30);
    }
                    /* try { // try from 00a09d2c to 00b09d33 has its CatchHandler @ 00a09f04 */
    Translated::log(pcVar3,"Unzipper: failed %s, %s",puVar5,pUVar6);
                    /* try { // try from 00a09d38 to 00b09d3b has its CatchHandler @ 00a09edc */
    plVar4 = *(long **)(this + 0x50);
  }
                    /* try { // try from 00a09d58 to 00b09d83 has its CatchHandler @ 00a09f68 */
  if (plVar4 != (long *)0x0) {
    local_3c = (int)(char)param_1[0x88];
    if ((byte)param_1[0x88] < 0xc) {
      local_48 = (&PTR_s_SUCCESS_01c6ce38)[local_3c];
    }
    else {
      local_48 = &DAT_0189703a;
    }
                    /* try { // try from 00a09d84 to 00b09da3 has its CatchHandler @ 00a09f40 */
    local_4c = 0xc1200000;
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 0x50,&local_3c,&local_48,&local_4c);
  }
                    /* try { // try from 00a09db0 to 00b09e03 has its CatchHandler @ 00a09f68 */
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

