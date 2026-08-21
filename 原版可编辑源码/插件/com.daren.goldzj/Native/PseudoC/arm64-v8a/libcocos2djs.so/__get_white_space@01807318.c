
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_white_space(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_white_space(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  do {
    if ((plVar3 != (long *)0x0) && (plVar3[3] == plVar3[4])) {
      iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (iVar2 == -1) {
        plVar3 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar3 = (long *)*param_1;
      }
    }
    if ((param_3 == (long *)0x0) ||
       ((param_3[3] == param_3[4] && (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1))
       )) {
      param_3 = (long *)0x0;
      if (plVar3 == (long *)0x0) {
LAB_01807430:
        plVar3 = (long *)*param_1;
        if ((plVar3 != (long *)0x0) && (plVar3[3] == plVar3[4])) {
          iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
          if (iVar2 == -1) {
            plVar3 = (long *)0x0;
            *param_1 = 0;
          }
          else {
            plVar3 = (long *)*param_1;
          }
        }
        if ((param_3 == (long *)0x0) ||
           ((param_3[3] == param_3[4] &&
            (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1)))) {
          if (plVar3 != (long *)0x0) {
            return;
          }
        }
        else if (plVar3 == (long *)0x0) {
          return;
        }
        *param_4 = *param_4 | 2;
        return;
      }
    }
    else if (plVar3 != (long *)0x0) goto LAB_01807430;
    plVar3 = (long *)*param_1;
    if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
      bVar1 = (**(code **)(*plVar3 + 0x48))();
    }
    else {
      bVar1 = *(byte *)plVar3[3];
    }
    if (((char)bVar1 < '\0') ||
       ((*(ulong *)(*(long *)(param_5 + 0x10) + (ulong)bVar1 * 8) & 1) == 0)) goto LAB_01807430;
    plVar3 = (long *)*param_1;
    if (plVar3[3] == plVar3[4]) {
      (**(code **)(*plVar3 + 0x50))();
      plVar3 = (long *)*param_1;
    }
    else {
      plVar3[3] = plVar3[3] + 1;
      plVar3 = (long *)*param_1;
    }
  } while( true );
}

