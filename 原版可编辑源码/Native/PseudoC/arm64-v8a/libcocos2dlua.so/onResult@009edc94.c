
/* universe::Decompressor::onResult(universe::DecompressTask&) */

void __thiscall universe::Decompressor::onResult(Decompressor *this,DecompressTask *param_1)

{
  DecompressTask *pDVar1;
  DecompressTask DVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_58;
  int local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  DVar2 = param_1[0x68];
  pcVar4 = (char *)Translated::getInstance();
                    /* try { // try from 009edcd4 to 00aedcfb has its CatchHandler @ 009edd70 */
  pDVar1 = param_1 + 0x21;
  if (((byte)param_1[0x20] & 1) != 0) {
    pDVar1 = *(DecompressTask **)(param_1 + 0x30);
  }
  if (DVar2 == (DecompressTask)0x0) {
                    /* try { // try from 009edcfc to 00aedd53 has its CatchHandler @ 009edc84 */
    Translated::log(pcVar4,"Decompressor: success %s",pDVar1);
    plVar5 = *(long **)(this + 0x60);
  }
  else {
    if ((ulong)(long)(char)param_1[0x68] < 4) {
      puVar6 = (&PTR_s_success_016a0ec8)[(char)param_1[0x68]];
    }
    else {
      puVar6 = &DAT_013c996e;
    }
    Translated::log(pcVar4,"Decompressor: failed %s. err: %s",pDVar1,puVar6);
    plVar5 = *(long **)(this + 0x60);
  }
  if (plVar5 != (long *)0x0) {
    local_4c = (int)(char)param_1[0x68];
    if ((byte)param_1[0x68] < 4) {
      local_58 = (&PTR_s_success_016a0ec8)[local_4c];
    }
    else {
      local_58 = &DAT_013c996e;
    }
                    /* try { // try from 009edd54 to 00aedd67 has its CatchHandler @ 009edd70 */
                    /* try { // try from 009edd68 to 00aedd8b has its CatchHandler @ 009edc84 */
    (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x50,&local_4c,&local_58);
  }
                    /* catch() { ... } // from try @ 009edcd4 with catch @ 009edd70
                       catch() { ... } // from try @ 009edd54 with catch @ 009edd70 */
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 009edd8c to 00aedddb has its CatchHandler @ 009edd8c
                       catch() { ... } // from try @ 009edd8c with catch @ 009edd8c
                       catch() { ... } // from try @ 009ede10 with catch @ 009edd8c
                       catch() { ... } // from try @ 009ede58 with catch @ 009edd8c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

