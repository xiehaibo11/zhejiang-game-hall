
/* std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >
   std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__do_get_signed<long>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, unsigned int&, long&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_signed<long>
          (undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,uint *param_5,
          undefined8 *param_6)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  uint local_174;
  uint *local_170;
  char *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  basic_string local_148 [8];
  ulong local_140;
  void *local_138;
  char local_130 [4];
  uint local_12c [40];
  ios_base aiStack_8c [28];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else if (uVar1 == 0x40) {
    iVar5 = 8;
  }
  else if (uVar1 == 8) {
    iVar5 = 0x10;
  }
  else {
    iVar5 = 10;
  }
  __num_get<char>::__stage2_int_prep(param_4,aiStack_8c,local_130,(char *)param_4);
  local_158 = 0;
  local_150 = (char *)0x0;
  local_160 = 0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_160,0x16,'\0');
  local_170 = local_12c;
  pcVar10 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    pcVar10 = local_150;
  }
  local_174 = 0;
  plVar9 = param_2;
  local_168 = pcVar10;
  if (param_2 != (long *)0x0) goto LAB_011dd03c;
LAB_011dd048:
  if (param_3 == (long *)0x0) goto LAB_011dd094;
  while( true ) {
    if ((param_3[3] == param_3[4]) && (iVar4 = (**(code **)(*param_3 + 0x48))(param_3), iVar4 == -1)
       ) goto LAB_011dd094;
    if (param_2 != (long *)0x0) break;
    while( true ) {
      uVar8 = local_160 >> 1 & 0x7f;
      uVar7 = uVar8;
      if ((local_160 & 1) != 0) {
        uVar7 = local_158;
      }
      if (local_168 == pcVar10 + uVar7) {
        if ((local_160 & 1) != 0) {
          uVar8 = local_158;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_160,uVar8 << 1,'\0');
        if ((local_160 & 1) == 0) {
          uVar7 = 0x16;
        }
        else {
          uVar7 = (local_160 & 0xfffffffffffffffe) - 1;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_160,uVar7,'\0');
        pcVar10 = (char *)((ulong)&local_160 | 1);
        if ((local_160 & 1) != 0) {
          pcVar10 = local_150;
        }
        local_168 = pcVar10 + uVar8;
      }
      if ((char *)param_2[3] == (char *)param_2[4]) {
        cVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        cVar3 = *(char *)param_2[3];
      }
      iVar4 = __num_get<char>::__stage2_int_loop
                        (cVar3,iVar5,pcVar10,&local_168,&local_174,local_130[0],local_148,local_12c,
                         &local_170,(char *)aiStack_8c);
      if (iVar4 != 0) goto LAB_011dd184;
      if (param_2[3] == param_2[4]) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        param_2[3] = param_2[3] + 1;
      }
      plVar9 = param_2;
      if (param_2 == (long *)0x0) goto LAB_011dd048;
LAB_011dd03c:
      param_2 = plVar9;
      if (plVar9[3] != plVar9[4]) goto LAB_011dd048;
      iVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
      param_2 = (long *)0x0;
      if (iVar4 != -1) {
        param_2 = plVar9;
      }
      if (param_3 != (long *)0x0) break;
LAB_011dd094:
      param_3 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_011dd184;
    }
  }
LAB_011dd184:
  uVar7 = (ulong)((byte)local_148[0] >> 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar7 = local_140;
  }
  if ((uVar7 != 0) && ((long)local_170 - (long)local_12c < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
  uVar6 = FUN_01208584(pcVar10,local_168,param_5,iVar5);
  *param_6 = uVar6;
  __check_grouping(local_148,local_12c,local_170,param_5);
  plVar9 = param_2;
  if ((param_2 == (long *)0x0) || (param_2[3] != param_2[4])) {
    if (param_3 != (long *)0x0) goto LAB_011dd204;
LAB_011dd2a8:
    if (plVar9 != (long *)0x0) goto LAB_011dd238;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    plVar9 = (long *)0x0;
    if (iVar5 != -1) {
      plVar9 = param_2;
    }
    if (param_3 == (long *)0x0) goto LAB_011dd2a8;
LAB_011dd204:
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_011dd2a8;
    if (plVar9 == (long *)0x0) goto LAB_011dd238;
  }
  *param_5 = *param_5 | 2;
LAB_011dd238:
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}

