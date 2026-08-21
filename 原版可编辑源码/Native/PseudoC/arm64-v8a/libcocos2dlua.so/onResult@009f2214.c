
/* universe::Unzipper::onResult(universe::UnzipTask&) */

void __thiscall universe::Unzipper::onResult(Unzipper *this,UnzipTask *param_1)

{
  UnzipTask UVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined1 *puVar5;
  UnzipTask *pUVar6;
  undefined4 local_5c;
  undefined1 *local_58;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  UVar1 = param_1[0x88];
  pcVar3 = (char *)Translated::getInstance();
  if (UVar1 == (UnzipTask)0x0) {
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
      puVar5 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a1300)[(char)param_1[0x88]];
    }
    else {
      puVar5 = &DAT_013c996e;
    }
    if (((byte)param_1[0x20] & 1) == 0) {
      pUVar6 = param_1 + 0x21;
    }
    else {
      pUVar6 = *(UnzipTask **)(param_1 + 0x30);
    }
    Translated::log(pcVar3,"Unzipper: failed %s, %s",puVar5,pUVar6);
    plVar4 = *(long **)(this + 0x50);
  }
  if (plVar4 != (long *)0x0) {
    local_4c = (int)(char)param_1[0x88];
    if ((byte)param_1[0x88] < 0xc) {
      local_58 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a1300)[local_4c];
    }
    else {
      local_58 = &DAT_013c996e;
    }
    local_5c = 0xc1200000;
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 0x50,&local_4c,&local_58,&local_5c);
  }
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

