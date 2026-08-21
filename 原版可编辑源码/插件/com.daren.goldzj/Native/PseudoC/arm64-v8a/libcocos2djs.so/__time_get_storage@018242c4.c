
/* std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(char const*) */

void __thiscall
std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
          (__time_get_storage<wchar_t> *this,char *param_1)

{
  long lVar1;
  undefined **local_50 [2];
  __locale_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __time_get::__time_get((__time_get *)this,param_1);
  memset(this + 8,0,0x420);
  ctype_byname<wchar_t>::ctype_byname((ctype_byname<wchar_t> *)local_50,param_1,1);
  local_50[0] = &PTR__ctype_byname_01cdde20;
  init((ctype *)this);
  local_50[0] = &PTR__ctype_byname_01cdbb58;
  freelocale(local_40);
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

