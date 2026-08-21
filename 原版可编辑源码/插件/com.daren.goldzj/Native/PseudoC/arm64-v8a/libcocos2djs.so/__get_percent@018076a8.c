
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_percent(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_percent(undefined8 param_1_00,long *param_1,long *param_3,uint *param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if ((plVar4 == (long *)0x0) || (plVar4[3] != plVar4[4])) {
joined_r0x018076e0:
    if (param_3 == (long *)0x0) goto LAB_01807730;
LAB_018076e4:
    if ((param_3[3] == param_3[4]) && (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1)
       ) goto LAB_01807730;
    if (plVar4 == (long *)0x0) goto LAB_01807738;
  }
  else {
    iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (iVar2 == -1) {
      plVar4 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x018076e0;
    }
    plVar4 = (long *)*param_1;
    if (param_3 != (long *)0x0) goto LAB_018076e4;
LAB_01807730:
    if (plVar4 != (long *)0x0) {
      param_3 = (long *)0x0;
LAB_01807738:
      plVar4 = (long *)*param_1;
      if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x48))();
      }
      else {
        uVar3 = (uint)*(byte *)plVar4[3];
      }
      cVar1 = (**(code **)(*param_5 + 0x48))(param_5,uVar3,0);
      if (cVar1 != '%') {
        uVar3 = *param_4 | 4;
        goto LAB_01807854;
      }
      plVar4 = (long *)*param_1;
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))(plVar4);
        plVar4 = (long *)*param_1;
        if (plVar4 != (long *)0x0) goto LAB_018077cc;
joined_r0x018077d8:
        if (param_3 == (long *)0x0) goto LAB_01807848;
LAB_018077dc:
        if ((param_3[3] == param_3[4]) &&
           (iVar2 = (**(code **)(*param_3 + 0x48))(param_3), iVar2 == -1)) goto LAB_01807848;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      else {
        plVar4[3] = plVar4[3] + 1;
LAB_018077cc:
        if (plVar4[3] != plVar4[4]) goto joined_r0x018077d8;
        iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (iVar2 != -1) {
          plVar4 = (long *)*param_1;
          goto joined_r0x018077d8;
        }
        plVar4 = (long *)0x0;
        *param_1 = 0;
        if (param_3 != (long *)0x0) goto LAB_018077dc;
LAB_01807848:
        if (plVar4 != (long *)0x0) {
          return;
        }
      }
      uVar3 = *param_4 | 2;
      goto LAB_01807854;
    }
  }
  uVar3 = *param_4 | 6;
LAB_01807854:
  *param_4 = uVar3;
  return;
}

