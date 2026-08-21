
/* std::__ndk1::__time_put::__do_put(wchar_t*, wchar_t*&, tm const*, char, char) const */

void __thiscall
std::__ndk1::__time_put::__do_put
          (__time_put *this,wchar_t *param_1,wchar_t **param_2,tm *param_3,char param_4,char param_5
          )

{
  long lVar1;
  mbstate_t mVar2;
  __locale_t __dataset;
  size_t sVar3;
  wchar_t *pwVar4;
  char *local_c0;
  mbstate_t local_b8;
  char acStack_ac [100];
  long local_48;
  
  mVar2 = local_b8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b8.__count._0_2_ = CONCAT11(param_4,0x25);
  local_b8.__count._0_3_ = CONCAT12(param_5,(undefined2)local_b8.__count);
  local_b8.__value = mVar2.__value;
  local_b8.__count = (int)(uint3)local_b8.__count;
  mVar2 = local_b8;
  if (param_5 != '\0') {
    local_b8.__count._1_1_ = param_5;
    local_b8.__count._0_1_ = 0x25;
    local_b8._3_5_ = mVar2._3_5_;
    local_b8.__count._2_1_ = param_4;
  }
  strftime(acStack_ac,100,(char *)&local_b8,param_3);
  local_b8.__count = 0;
  local_b8.__value = (_union_27)0x0;
  pwVar4 = *param_2;
  local_c0 = acStack_ac;
  __dataset = uselocale(*(__locale_t *)this);
  sVar3 = mbsrtowcs(param_1,&local_c0,(long)pwVar4 - (long)param_1 >> 2,&local_b8);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (sVar3 == 0xffffffffffffffff) {
    __throw_runtime_error("locale not supported");
  }
  else {
    *param_2 = param_1 + sVar3;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

