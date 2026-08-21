
/* dragonBones::AnimationState::addBoneMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::AnimationState::addBoneMask(AnimationState *this,basic_string *param_1,bool param_2)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *__s2_00;
  basic_string bVar5;
  byte bVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  Bone *this_00;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  basic_string *__s1;
  byte *__s1_00;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_01;
  Bone *pBVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar16;
  undefined8 *puVar17;
  basic_string *pbVar18;
  basic_string *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  this_00 = (Bone *)Armature::getBone(*(Armature **)(this + 0x130),param_1);
  if (this_00 != (Bone *)0x0) {
    this_01 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               *)(this + 0xa0);
    pbVar18 = *(basic_string **)this_01;
    pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0xa8);
    pbVar19 = pbVar18;
    if (pbVar18 != (basic_string *)pbVar16) {
      sVar2 = *(size_t *)(param_1 + 8);
      __s2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        __s2 = param_1 + 1;
        sVar2 = (ulong)((byte)*param_1 >> 1);
      }
      do {
        bVar5 = *pbVar18;
        sVar13 = (size_t)((byte)bVar5 >> 1);
        sVar1 = sVar13;
        if (((byte)bVar5 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar18 + 8);
        }
        if (sVar1 == sVar2) {
          __s1 = *(basic_string **)(pbVar18 + 0x10);
          if (((byte)bVar5 & 1) == 0) {
            __s1 = pbVar18 + 1;
          }
          pbVar7 = pbVar18;
          pbVar8 = __s2;
          sVar1 = sVar2;
          pbVar19 = pbVar18;
          if (((byte)bVar5 & 1) == 0) {
            while( true ) {
              if (sVar1 == 0) goto LAB_00d76cb8;
              if (pbVar7[1] != *pbVar8) break;
              sVar13 = sVar13 - 1;
              pbVar7 = pbVar7 + 1;
              pbVar8 = pbVar8 + 1;
              sVar1 = sVar13;
            }
          }
          else if ((sVar2 == 0) || (iVar11 = memcmp(__s1,__s2,sVar2), iVar11 == 0)) break;
        }
        pbVar18 = pbVar18 + 0x18;
        pbVar19 = (basic_string *)pbVar16;
      } while (pbVar18 != (basic_string *)pbVar16);
    }
LAB_00d76cb8:
    if (pbVar19 == (basic_string *)pbVar16) {
      if (*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0xb0) == pbVar16) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (this_01,param_1);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar16,param_1);
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0xa8) = pbVar16 + 0x18;
      }
    }
    if (param_2) {
      puVar17 = *(undefined8 **)(*(long *)(this + 0x130) + 0x60);
      puVar3 = *(undefined8 **)(*(long *)(this + 0x130) + 0x68);
joined_r0x00d76cd0:
      if (puVar17 != puVar3) {
        do {
          pbVar21 = *(byte **)(this + 0xa0);
          pbVar4 = *(byte **)(this + 0xa8);
          pBVar15 = (Bone *)*puVar17;
          pbVar20 = pbVar21;
          if (pbVar21 != pbVar4) {
            lVar14 = *(long *)(pBVar15 + 0xa8);
            sVar2 = *(size_t *)(lVar14 + 0x20);
            __s2_00 = *(byte **)(lVar14 + 0x28);
            if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
              __s2_00 = (byte *)(lVar14 + 0x19);
              sVar2 = (ulong)(*(byte *)(lVar14 + 0x18) >> 1);
            }
            do {
              bVar6 = *pbVar21;
              sVar13 = (size_t)(bVar6 >> 1);
              sVar1 = sVar13;
              if ((bVar6 & 1) != 0) {
                sVar1 = *(size_t *)(pbVar21 + 8);
              }
              if (sVar1 == sVar2) {
                __s1_00 = *(byte **)(pbVar21 + 0x10);
                if ((bVar6 & 1) == 0) {
                  __s1_00 = pbVar21 + 1;
                }
                pbVar9 = pbVar21;
                pbVar10 = __s2_00;
                sVar1 = sVar2;
                pbVar20 = pbVar21;
                if ((bVar6 & 1) == 0) {
                  while( true ) {
                    if (sVar1 == 0) goto LAB_00d76cdc;
                    if (pbVar9[1] != *pbVar10) break;
                    sVar13 = sVar13 - 1;
                    pbVar9 = pbVar9 + 1;
                    pbVar10 = pbVar10 + 1;
                    sVar1 = sVar13;
                  }
                }
                else if ((sVar2 == 0) || (iVar11 = memcmp(__s1_00,__s2_00,sVar2), iVar11 == 0))
                break;
              }
              pbVar21 = pbVar21 + 0x18;
              pbVar20 = pbVar4;
            } while (pbVar21 != pbVar4);
          }
LAB_00d76cdc:
          if ((pbVar20 == pbVar4) && (uVar12 = Bone::contains(this_00,pBVar15), (uVar12 & 1) != 0))
          {
            pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(this + 0xa8);
            if (pbVar16 !=
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0xb0)) goto code_r0x00d76dc8;
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      (this_01,(basic_string *)(*(long *)(pBVar15 + 0xa8) + 0x18));
          }
          puVar17 = puVar17 + 1;
          if (puVar17 == puVar3) break;
        } while( true );
      }
    }
    *(undefined4 *)(this + 0x90) = 1;
  }
  return;
code_r0x00d76dc8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar16,(basic_string *)(*(long *)(pBVar15 + 0xa8) + 0x18));
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 0xa8)
       = pbVar16 + 0x18;
  puVar17 = puVar17 + 1;
  goto joined_r0x00d76cd0;
}

