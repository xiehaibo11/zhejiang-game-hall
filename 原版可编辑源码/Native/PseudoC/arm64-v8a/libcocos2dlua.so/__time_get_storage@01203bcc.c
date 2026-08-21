
/* std::__ndk1::__time_get_storage<char>::__time_get_storage(char const*) */

void __thiscall
std::__ndk1::__time_get_storage<char>::__time_get_storage
          (__time_get_storage<char> *this,char *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **local_60 [2];
  void *local_50;
  char local_48;
  __locale_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __time_get::__time_get((__time_get *)this,param_1);
  memset(this + 8,0,0x420);
  ctype_byname<char>::ctype_byname((ctype_byname<char> *)local_60,param_1,1);
  local_60[0] = &PTR__ctype_byname_01730760;
  init((ctype *)this);
  local_60[0] = &PTR__ctype_byname_0172e4b0;
  freelocale(local_40);
  local_60[0] = &PTR__ctype_0172e448;
  ppuVar2 = &PTR__ctype_0172e448;
  if ((local_50 != (void *)0x0) && (ppuVar2 = local_60[0], local_48 != '\0')) {
    local_60[0] = &PTR__ctype_0172e448;
    operator_delete__(local_50);
    ppuVar2 = local_60[0];
  }
  local_60[0] = ppuVar2;
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

