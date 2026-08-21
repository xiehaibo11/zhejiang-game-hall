
void FUN_00f3cf10(basic_ostream *param_1,long param_2,uint param_3)

{
  char *pcVar1;
  long lVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  byte local_1b0 [8];
  ulong local_1a8;
  char *local_1a0;
  undefined **local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined **local_180;
  locale alStack_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    if (*(long *)(param_2 + 7) == -0x8000000080001) {
      dVar10 = NAN;
    }
    else {
      dVar10 = *(double *)(param_2 + 7);
    }
    if (0 < (int)param_3) {
      uVar9 = 0;
      uVar5 = (ulong)param_3;
      dVar11 = 0.0;
      uVar8 = 1;
      uVar7 = 8;
      if (uVar5 < 2) goto LAB_00f3d078;
      do {
        uVar4 = uVar7 & 0xfffffff8 | 7;
        if (*(long *)(uVar4 + param_2) == -0x8000000080001) {
          dVar11 = NAN;
        }
        else {
          dVar11 = *(double *)(param_2 + uVar4);
        }
LAB_00f3d078:
        do {
          iVar6 = (int)uVar7;
          if (((uVar5 == uVar8) || (dVar10 != dVar11 && (!NAN(dVar10) || !NAN(dVar11)))) ||
             ((*(long *)(param_2 + (iVar6 + -1)) == -0x8000000080001) !=
              (*(long *)(param_2 + (ulong)(iVar6 + 7)) == -0x8000000080001))) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar9);
            uVar4 = (ulong)uVar9;
            uVar9 = (uint)uVar8;
            if (uVar8 - 1 != uVar4) {
              local_1b0[0] = 0x2d;
              pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 ((basic_ostream *)&local_188,(char *)local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar9 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar1 = (char *)((ulong)local_1b0 | 1);
            uVar4 = (ulong)(local_1b0[0] >> 1);
            if ((local_1b0[0] & 1) != 0) {
              pcVar1 = local_1a0;
              uVar4 = local_1a8;
            }
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1,pcVar1,uVar4);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar3,": ",2);
            if ((local_1b0[0] & 1) != 0) {
              operator_delete(local_1a0);
            }
            if (*(long *)(param_2 + (iVar6 + -1)) == -0x8000000080001) {
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"<the_hole>",10);
            }
            else {
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,dVar10);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            dVar10 = dVar11;
          }
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 + 8;
          if (param_3 + 1 == uVar8) goto LAB_00f3d26c;
        } while (uVar5 <= uVar8);
      } while( true );
    }
  }
LAB_00f3d26c:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

