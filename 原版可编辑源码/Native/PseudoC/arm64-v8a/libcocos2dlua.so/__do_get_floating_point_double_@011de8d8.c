
/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_floating_point<double>(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, double&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_floating_point<double>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  char local_184 [4];
  bool local_180 [4];
  uint local_17c;
  uint *local_178;
  char *local_170;
  ulong local_168;
  ulong local_160;
  char *local_158;
  basic_string local_150 [8];
  ulong local_148;
  void *local_140;
  char local_138 [4];
  char local_134 [4];
  uint local_130 [40];
  ios_base aiStack_90 [32];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __num_get<char>::__stage2_float_prep(param_4,aiStack_90,local_134,local_138,(char *)param_5);
  local_160 = 0;
  local_158 = (char *)0x0;
  local_168 = 0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_168,0x16,'\0');
  local_180[0] = true;
  pcVar7 = (char *)((ulong)&local_168 | 1);
  if ((local_168 & 1) != 0) {
    pcVar7 = local_158;
  }
  local_17c = 0;
  local_184[0] = 'E';
  plVar6 = param_2;
  local_178 = local_130;
  local_170 = pcVar7;
  if (param_2 != (long *)0x0) goto LAB_011de998;
LAB_011de9a4:
  if (param_3 == (long *)0x0) goto LAB_011de9f0;
  while( true ) {
    if ((param_3[3] == param_3[4]) && (iVar3 = (**(code **)(*param_3 + 0x48))(param_3), iVar3 == -1)
       ) goto LAB_011de9f0;
    if (param_2 != (long *)0x0) break;
    while( true ) {
      uVar5 = local_168 >> 1 & 0x7f;
      uVar4 = uVar5;
      if ((local_168 & 1) != 0) {
        uVar4 = local_160;
      }
      if (local_170 == pcVar7 + uVar4) {
        if ((local_168 & 1) != 0) {
          uVar5 = local_160;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_168,uVar5 << 1,'\0');
        if ((local_168 & 1) == 0) {
          uVar4 = 0x16;
        }
        else {
          uVar4 = (local_168 & 0xfffffffffffffffe) - 1;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_168,uVar4,'\0');
        pcVar7 = (char *)((ulong)&local_168 | 1);
        if ((local_168 & 1) != 0) {
          pcVar7 = local_158;
        }
        local_170 = pcVar7 + uVar5;
      }
      if ((char *)param_2[3] == (char *)param_2[4]) {
        cVar2 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        cVar2 = *(char *)param_2[3];
      }
      iVar3 = __num_get<char>::__stage2_float_loop
                        (cVar2,local_180,local_184,pcVar7,&local_170,local_134[0],local_138[0],
                         local_150,local_130,&local_178,&local_17c,(char *)aiStack_90);
      if (iVar3 != 0) goto LAB_011deae4;
      if (param_2[3] == param_2[4]) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        param_2[3] = param_2[3] + 1;
      }
      plVar6 = param_2;
      if (param_2 == (long *)0x0) goto LAB_011de9a4;
LAB_011de998:
      param_2 = plVar6;
      if (plVar6[3] != plVar6[4]) goto LAB_011de9a4;
      iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
      param_2 = (long *)0x0;
      if (iVar3 != -1) {
        param_2 = plVar6;
      }
      if (param_3 != (long *)0x0) break;
LAB_011de9f0:
      param_3 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_011deae4;
    }
  }
LAB_011deae4:
  uVar4 = (ulong)((byte)local_150[0] >> 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar4 = local_148;
  }
  if (((local_180[0] != false) && (uVar4 != 0)) && ((long)local_178 - (long)local_130 < 0xa0)) {
    *local_178 = local_17c;
    local_178 = local_178 + 1;
  }
  uVar8 = FUN_01208e8c(pcVar7,local_170,param_5);
  *param_6 = uVar8;
  __check_grouping(local_150,local_130,local_178,param_5);
  plVar6 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 != (long *)0x0) goto LAB_011deb68;
LAB_011dec10:
    if (plVar6 != (long *)0x0) goto LAB_011deb9c;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar6 = (long *)0x0;
    if (iVar3 != -1) {
      plVar6 = param_2;
    }
    if (param_3 == (long *)0x0) goto LAB_011dec10;
LAB_011deb68:
    if ((param_3[3] == param_3[4]) && (iVar3 = (**(code **)(*param_3 + 0x48))(param_3), iVar3 == -1)
       ) goto LAB_011dec10;
    if (plVar6 == (long *)0x0) goto LAB_011deb9c;
  }
  *param_5 = *param_5 | 2;
LAB_011deb9c:
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}

