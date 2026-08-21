
/* universe::Http::onResult(universe::HttpTask&) */

void __thiscall universe::Http::onResult(Http *this,HttpTask *param_1)

{
  HttpTask *pHVar1;
  HttpTask HVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_58;
  int local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  HVar2 = param_1[0x68];
  pcVar4 = (char *)Translated::getInstance();
  if (HVar2 == (HttpTask)0x0) {
    pHVar1 = param_1 + 0x21;
    if (((byte)param_1[0x20] & 1) != 0) {
      pHVar1 = *(HttpTask **)(param_1 + 0x30);
    }
    Translated::log(pcVar4,"Http: success %s",pHVar1);
                    /* try { // try from 009f0a00 to 00af0a4f has its CatchHandler @ 009f0a00
                       catch() { ... } // from try @ 009f0a00 with catch @ 009f0a00
                       catch() { ... } // from try @ 009f0a78 with catch @ 009f0a00
                       catch() { ... } // from try @ 009f0ae4 with catch @ 009f0a00 */
    pcVar4 = (char *)Translated::getInstance();
    pHVar1 = param_1 + 0x81;
    if (((byte)param_1[0x80] & 1) != 0) {
      pHVar1 = *(HttpTask **)(param_1 + 0x90);
    }
    Translated::log(pcVar4,&DAT_012f5245,pHVar1);
    plVar5 = *(long **)(this + 0x60);
  }
  else {
    if ((ulong)(long)(char)param_1[0x68] < 3) {
      puVar6 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a11b8)[(char)param_1[0x68]];
    }
    else {
      puVar6 = &DAT_013c996e;
    }
    pHVar1 = param_1 + 0x21;
    if (((byte)param_1[0x20] & 1) != 0) {
      pHVar1 = *(HttpTask **)(param_1 + 0x30);
    }
                    /* try { // try from 009f0a50 to 00af0a77 has its CatchHandler @ 009f0aec */
    Translated::log(pcVar4,0x12f5257,puVar6,pHVar1);
    plVar5 = *(long **)(this + 0x60);
  }
  if (plVar5 != (long *)0x0) {
    local_4c = (int)(char)param_1[0x68];
    if ((byte)param_1[0x68] < 3) {
      local_58 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a11b8)[local_4c];
                    /* try { // try from 009f0a78 to 00af0acf has its CatchHandler @ 009f0a00 */
    }
    else {
      local_58 = &DAT_013c996e;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x50,param_1 + 0x80,&local_4c,&local_58);
  }
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 009f0ad0 to 00af0ae3 has its CatchHandler @ 009f0aec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

