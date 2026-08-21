
/* universe::Http::onResult(universe::HttpTask&) */

void __thiscall universe::Http::onResult(Http *this,HttpTask *param_1)

{
  HttpTask *pHVar1;
  HttpTask HVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_48;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a0825c to 00b083b7 has its CatchHandler @ 00a0825c
                       catch() { ... } // from try @ 00a0825c with catch @ 00a0825c
                       catch() { ... } // from try @ 00a083c0 with catch @ 00a0825c */
  HVar2 = param_1[0x68];
  pcVar4 = (char *)Translated::getInstance();
  if (HVar2 == (HttpTask)0x0) {
    pHVar1 = param_1 + 0x21;
    if (((byte)param_1[0x20] & 1) != 0) {
      pHVar1 = *(HttpTask **)(param_1 + 0x30);
    }
    Translated::log(pcVar4,"Http: success %s",pHVar1);
    pcVar4 = (char *)Translated::getInstance();
    pHVar1 = param_1 + 0x81;
    if (((byte)param_1[0x80] & 1) != 0) {
      pHVar1 = *(HttpTask **)(param_1 + 0x90);
    }
    Translated::log(pcVar4,"Http: header = %s",pHVar1);
    plVar5 = *(long **)(this + 0x60);
  }
  else {
    if ((ulong)(long)(char)param_1[0x68] < 3) {
      puVar6 = (&PTR_s_SUCCESS_01c6ccb8)[(char)param_1[0x68]];
    }
    else {
      puVar6 = &DAT_0189703a;
    }
    pHVar1 = param_1 + 0x21;
    if (((byte)param_1[0x20] & 1) != 0) {
      pHVar1 = *(HttpTask **)(param_1 + 0x30);
    }
    Translated::log(pcVar4,"Http: failed %s, %s",puVar6,pHVar1);
    plVar5 = *(long **)(this + 0x60);
  }
  if (plVar5 != (long *)0x0) {
    local_3c = (int)(char)param_1[0x68];
    if ((byte)param_1[0x68] < 3) {
      local_48 = (&PTR_s_SUCCESS_01c6ccb8)[local_3c];
    }
    else {
      local_48 = &DAT_0189703a;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x50,param_1 + 0x80,&local_3c,&local_48);
  }
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

