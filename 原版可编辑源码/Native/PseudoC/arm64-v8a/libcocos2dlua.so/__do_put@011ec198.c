
/* std::__ndk1::__time_put::__do_put(char*, char*&, tm const*, char, char) const */

void __thiscall
std::__ndk1::__time_put::__do_put
          (__time_put *this,char *param_1,char **param_2,tm *param_3,char param_4,char param_5)

{
  long lVar1;
  size_t sVar2;
  char local_3c;
  char local_3b;
  char local_3a;
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = '%';
  local_39 = 0;
  local_3b = param_4;
  local_3a = param_5;
  if (param_5 != '\0') {
    local_3b = param_5;
    local_3a = param_4;
  }
  sVar2 = strftime(param_1,(long)*param_2 - (long)param_1,&local_3c,param_3);
  *param_2 = param_1 + sVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

