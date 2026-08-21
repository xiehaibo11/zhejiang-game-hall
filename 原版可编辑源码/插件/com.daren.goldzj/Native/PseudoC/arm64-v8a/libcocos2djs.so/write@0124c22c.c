
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(char const*, long) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    if ((param_2 != 0) &&
       (lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x60))
                          (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,
                           param_2), lVar3 != param_2)) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
    }
  }
  lVar3 = *(long *)(*(long *)this + -0x18);
  if ((((*(long *)(this + lVar3 + 0x28) != 0) && (*(int *)(this + lVar3 + 0x20) == 0)) &&
      (((byte)this[lVar3 + 9] >> 5 & 1) != 0)) &&
     ((uVar2 = uncaught_exception(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x30))(),
      iVar1 == -1)))) {
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
  }
  return this;
}

