
/* v8::internal::compiler::GraphC1Visualizer::PrintLiveRange(v8::internal::compiler::LiveRange
   const*, char const*, int) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintLiveRange
          (GraphC1Visualizer *this,LiveRange *param_1,char *param_2,int param_3)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  
  if ((param_1 == (LiveRange *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    return;
  }
  if (0 < *(int *)(this + 8)) {
    iVar9 = 0;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"  ",2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(this + 8));
  }
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)this,param_3);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,":",1);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*(int *)param_1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1," ",1);
  sVar2 = strlen(param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,param_2,sVar2);
  if ((*(uint *)(param_1 + 4) & 0x1f80) == 0x1000) {
    if ((*(uint *)(param_1 + 4) & 1) == 0) goto LAB_016cdbb4;
    lVar7 = *(long *)(param_1 + 0x20);
    if ((*(uint *)(lVar7 + 4) >> 6 & 1) != 0) goto LAB_016cdbb4;
    uVar4 = **(ulong **)(lVar7 + 0x70);
    if ((uVar4 & 7) == 2) {
      this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (*(basic_ostream **)this," \"const(nostack):",0x11);
      iVar9 = (int)(**(ulong **)(lVar7 + 0x70) >> 3);
    }
    else {
      if ((*(uint *)(lVar7 + 4) >> 0xd & 0xff) < 0xb) {
        pcVar8 = " \"stack:";
        uVar3 = 8;
      }
      else {
        pcVar8 = " \"fp_stack:";
        uVar3 = 0xb;
      }
      this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (*(basic_ostream **)this,pcVar8,uVar3);
      iVar9 = (int)((long)uVar4 >> 0x23);
    }
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       (this_00,iVar9);
  }
  else {
    uVar4 = LiveRange::GetAssignedOperand(param_1);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this," \"",2);
    iVar9 = (int)((long)uVar4 >> 0x23);
    if (((uVar4 & 0x1c) == 4) && (((uint)(uVar4 >> 5) & 0xff) < 0xb)) {
      if (iVar9 != -1) {
        puVar5 = &RegisterName(v8::internal::Register)::Names;
        goto LAB_016cdb7c;
      }
LAB_016cdb84:
      pcVar8 = "invalid";
    }
    else {
      if (iVar9 == -1) goto LAB_016cdb84;
      puVar5 = &RegisterName(v8::internal::VRegister)::Names;
LAB_016cdb7c:
      pcVar8 = (char *)puVar5[(long)uVar4 >> 0x23];
    }
    sVar2 = strlen(pcVar8);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,pcVar8,sVar2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\"",1);
LAB_016cdbb4:
  piVar6 = *(int **)(*(int **)(param_1 + 0x20) + 0x1a);
  piVar10 = *(int **)(param_1 + 0x20);
  if (piVar6 != (int *)0x0) {
    piVar10 = piVar6;
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this," ",1);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,piVar10[0x17]);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,":",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*piVar10);
  if (*(long *)(param_1 + 0x50) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (*(basic_ostream **)this," unknown",8);
    piVar10 = *(int **)(param_1 + 0x10);
  }
  else {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this," B",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
               *(int *)(*(long *)(param_1 + 0x50) + 0x40));
    piVar10 = *(int **)(param_1 + 0x10);
  }
  for (; piVar10 != (int *)0x0; piVar10 = *(int **)(piVar10 + 2)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this," [",2);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*piVar10);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,", ",2);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,piVar10[1]);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"[",1);
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
LAB_016cdd04:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (*(basic_ostream **)this," \"\"\n",4);
    return;
  }
  if ((*(byte *)(lVar7 + 0x1c) >> 5 & 1) == 0) goto LAB_016cdcf8;
  do {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this," ",1);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        *(int *)(lVar7 + 0x18));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1," M",2);
    do {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) goto LAB_016cdd04;
      if ((*(byte *)(lVar7 + 0x1c) >> 5 & 1) != 0) break;
LAB_016cdcf8:
    } while (FLAG_trace_all_uses == '\0');
  } while( true );
}

