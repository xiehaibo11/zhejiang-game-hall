
/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char, char) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,
      char param_6,char param_7)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  char local_a0;
  char local_9f;
  char local_9e;
  undefined1 local_9d;
  char local_9c [100];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_a0 = '%';
  local_9d = 0;
  local_9f = param_6;
  local_9e = param_7;
  if (param_7 != '\0') {
    local_9f = param_7;
    local_9e = param_6;
  }
  sVar5 = strftime(local_9c,100,&local_a0,param_5);
  if (sVar5 != 0) {
    pcVar7 = local_9c;
    plVar6 = param_2;
    do {
      param_2 = plVar6;
      if (plVar6 != (long *)0x0) {
        pcVar1 = (char *)plVar6[6];
        cVar2 = *pcVar7;
        if (pcVar1 == (char *)plVar6[7]) {
          iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
          param_2 = (long *)0x0;
          if (iVar4 != -1) {
            param_2 = plVar6;
          }
        }
        else {
          plVar6[6] = (long)(pcVar1 + 1);
          *pcVar1 = cVar2;
        }
      }
      sVar5 = sVar5 - 1;
      pcVar7 = pcVar7 + 1;
      plVar6 = param_2;
    } while (sVar5 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

