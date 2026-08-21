
/* dragonBones::AnimationConfig::addBoneMask(dragonBones::Armature*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::AnimationConfig::addBoneMask
          (AnimationConfig *this,Armature *param_1,basic_string *param_2,bool param_3)

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
  byte *pbVar18;
  byte *pbVar19;
  basic_string *pbVar20;
  basic_string *pbVar21;
  
  this_00 = (Bone *)Armature::getBone(param_1,param_2);
  if (this_00 != (Bone *)0x0) {
    this_01 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               *)(this + 0x90);
    pbVar20 = *(basic_string **)this_01;
    pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x98);
    pbVar21 = pbVar20;
    if (pbVar20 != (basic_string *)pbVar16) {
      sVar2 = *(size_t *)(param_2 + 8);
      __s2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        __s2 = param_2 + 1;
        sVar2 = (ulong)((byte)*param_2 >> 1);
      }
      do {
        bVar5 = *pbVar20;
        sVar13 = (size_t)((byte)bVar5 >> 1);
        sVar1 = sVar13;
        if (((byte)bVar5 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar20 + 8);
        }
        if (sVar1 == sVar2) {
          __s1 = *(basic_string **)(pbVar20 + 0x10);
          if (((byte)bVar5 & 1) == 0) {
            __s1 = pbVar20 + 1;
          }
          pbVar7 = pbVar20;
          pbVar8 = __s2;
          sVar1 = sVar2;
          pbVar21 = pbVar20;
          if (((byte)bVar5 & 1) == 0) {
            while( true ) {
              if (sVar1 == 0) goto LAB_00d86754;
              if (pbVar7[1] != *pbVar8) break;
              sVar13 = sVar13 - 1;
              pbVar7 = pbVar7 + 1;
              pbVar8 = pbVar8 + 1;
              sVar1 = sVar13;
            }
          }
          else if ((sVar2 == 0) || (iVar11 = memcmp(__s1,__s2,sVar2), iVar11 == 0)) break;
        }
        pbVar20 = pbVar20 + 0x18;
        pbVar21 = (basic_string *)pbVar16;
      } while (pbVar20 != (basic_string *)pbVar16);
    }
LAB_00d86754:
    if (pbVar21 == (basic_string *)pbVar16) {
      if (*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0xa0) == pbVar16) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (this_01,param_2);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar16,param_2);
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x98) = pbVar16 + 0x18;
      }
    }
    if (param_3) {
      puVar17 = *(undefined8 **)(param_1 + 0x60);
      puVar3 = *(undefined8 **)(param_1 + 0x68);
joined_r0x00d86768:
      if (puVar17 != puVar3) {
        do {
          pbVar19 = *(byte **)(this + 0x90);
          pbVar4 = *(byte **)(this + 0x98);
          pBVar15 = (Bone *)*puVar17;
          pbVar18 = pbVar19;
          if (pbVar19 != pbVar4) {
            lVar14 = *(long *)(pBVar15 + 0xa8);
            sVar2 = *(size_t *)(lVar14 + 0x20);
            __s2_00 = *(byte **)(lVar14 + 0x28);
            if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
              __s2_00 = (byte *)(lVar14 + 0x19);
              sVar2 = (ulong)(*(byte *)(lVar14 + 0x18) >> 1);
            }
            do {
              bVar6 = *pbVar19;
              sVar13 = (size_t)(bVar6 >> 1);
              sVar1 = sVar13;
              if ((bVar6 & 1) != 0) {
                sVar1 = *(size_t *)(pbVar19 + 8);
              }
              if (sVar1 == sVar2) {
                __s1_00 = *(byte **)(pbVar19 + 0x10);
                if ((bVar6 & 1) == 0) {
                  __s1_00 = pbVar19 + 1;
                }
                pbVar9 = pbVar19;
                pbVar10 = __s2_00;
                sVar1 = sVar2;
                pbVar18 = pbVar19;
                if ((bVar6 & 1) == 0) {
                  while( true ) {
                    if (sVar1 == 0) goto LAB_00d86774;
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
              pbVar19 = pbVar19 + 0x18;
              pbVar18 = pbVar4;
            } while (pbVar19 != pbVar4);
          }
LAB_00d86774:
          if ((pbVar18 == pbVar4) && (uVar12 = Bone::contains(this_00,pBVar15), (uVar12 & 1) != 0))
          {
            pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(this + 0x98);
            if (pbVar16 !=
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0xa0)) goto code_r0x00d86860;
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      (this_01,(basic_string *)(*(long *)(pBVar15 + 0xa8) + 0x18));
          }
          puVar17 = puVar17 + 1;
          if (puVar17 == puVar3) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
code_r0x00d86860:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar16,(basic_string *)(*(long *)(pBVar15 + 0xa8) + 0x18));
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 0x98)
       = pbVar16 + 0x18;
  puVar17 = puVar17 + 1;
  goto joined_r0x00d86768;
}

