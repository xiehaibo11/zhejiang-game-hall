
/* universe::MergeFile::onResult(universe::MergeFileTask&) */

void __thiscall universe::MergeFile::onResult(MergeFile *this,MergeFileTask *param_1)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  MergeFileTask *pMVar4;
  int iVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[0x58] != (MergeFileTask)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    if (((byte)param_1[0x38] & 1) == 0) {
      pMVar4 = param_1 + 0x39;
    }
    else {
      pMVar4 = *(MergeFileTask **)(param_1 + 0x48);
    }
    Translated::log(pcVar2,"MergeFile: failed %s",pMVar4);
  }
  if (*(long *)(this + 0x50) != 0) {
    iVar5 = (int)(char)param_1[0x58];
    if ((byte)param_1[0x58] < 4) {
      pcVar2 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a1218)[iVar5];
    }
    else {
      pcVar2 = "";
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_58,pcVar2);
    plVar3 = *(long **)(this + 0x50);
    local_3c = iVar5;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_3c,local_58);
    if (((byte)local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

