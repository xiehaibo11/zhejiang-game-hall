
/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char, char) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,
      char param_6,char param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  size_t sVar7;
  char local_a0;
  char local_9f;
  char local_9e;
  undefined1 local_9d;
  char acStack_9c [100];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_a0 = '%';
  local_9d = 0;
  local_9f = param_6;
  local_9e = param_7;
  if (param_7 != '\0') {
    local_9f = param_7;
    local_9e = param_6;
  }
  sVar7 = strftime(acStack_9c,100,&local_a0,param_5);
  if (sVar7 != 0) {
    pcVar1 = acStack_9c;
    plVar5 = param_2;
    do {
      param_2 = plVar5;
      if (plVar5 != (long *)0x0) {
        pcVar2 = (char *)plVar5[6];
        cVar3 = *pcVar1;
        if (pcVar2 == (char *)plVar5[7]) {
          iVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
          param_2 = (long *)0x0;
          if (iVar6 != -1) {
            param_2 = plVar5;
          }
        }
        else {
          plVar5[6] = (long)(pcVar2 + 1);
          *pcVar2 = cVar3;
        }
      }
      sVar7 = sVar7 - 1;
      pcVar1 = pcVar1 + 1;
      plVar5 = param_2;
    } while (sVar7 != 0);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

