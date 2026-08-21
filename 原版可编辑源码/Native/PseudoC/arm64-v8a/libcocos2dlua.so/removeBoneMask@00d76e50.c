
/* dragonBones::AnimationState::removeBoneMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::AnimationState::removeBoneMask(AnimationState *this,basic_string *param_1,bool param_2)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  basic_string bVar6;
  byte bVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  Bone *this_01;
  ulong uVar13;
  size_t sVar14;
  undefined8 uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  basic_string *__s1;
  byte *__s1_00;
  Bone *pBVar19;
  undefined8 *puVar20;
  basic_string *pbVar21;
  basic_string *pbVar22;
  basic_string *pbVar23;
  byte *pbVar24;
  undefined8 uVar25;
  
  pbVar21 = *(basic_string **)(this + 0xa0);
  pbVar23 = *(basic_string **)(this + 0xa8);
  pbVar22 = pbVar21;
  if (pbVar21 != pbVar23) {
    sVar2 = *(size_t *)(param_1 + 8);
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar6 = *pbVar21;
      sVar14 = (size_t)((byte)bVar6 >> 1);
      sVar1 = sVar14;
      if (((byte)bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar21 + 8);
      }
      if (sVar1 == sVar2) {
        __s1 = *(basic_string **)(pbVar21 + 0x10);
        if (((byte)bVar6 & 1) == 0) {
          __s1 = pbVar21 + 1;
        }
        pbVar8 = pbVar21;
        pbVar9 = pbVar3;
        sVar1 = sVar2;
        pbVar22 = pbVar21;
        if (((byte)bVar6 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00d76f2c;
            if (pbVar8[1] != *pbVar9) break;
            sVar14 = sVar14 - 1;
            pbVar8 = pbVar8 + 1;
            pbVar9 = pbVar9 + 1;
            sVar1 = sVar14;
          }
        }
        else if ((sVar2 == 0) || (iVar12 = memcmp(__s1,pbVar3,sVar2), iVar12 == 0)) break;
      }
      pbVar21 = pbVar21 + 0x18;
      pbVar22 = pbVar23;
    } while (pbVar21 != pbVar23);
  }
LAB_00d76f2c:
  if (pbVar22 == pbVar23) goto LAB_00d76fd8;
  if (pbVar22 + 0x18 == pbVar23) {
LAB_00d76fa8:
    bVar6 = pbVar23[-0x18];
    pbVar21 = pbVar23 + -0x18;
    while( true ) {
      pbVar3 = pbVar21;
      if (((byte)bVar6 & 1) != 0) {
        operator_delete(*(void **)(pbVar23 + -8));
      }
      if (pbVar22 == pbVar3) break;
      bVar6 = pbVar3[-0x18];
      pbVar21 = pbVar3 + -0x18;
      pbVar23 = pbVar3;
    }
  }
  else {
    pbVar21 = pbVar22;
    do {
      if (((byte)*pbVar21 & 1) == 0) {
        *(undefined2 *)pbVar21 = 0;
      }
      else {
        **(undefined1 **)(pbVar21 + 0x10) = 0;
        *(undefined8 *)(pbVar21 + 8) = 0;
        if (((byte)*pbVar21 & 1) != 0) {
          operator_delete(*(void **)(pbVar21 + 0x10));
          *(undefined8 *)pbVar21 = 0;
        }
      }
      uVar25 = *(undefined8 *)(pbVar21 + 0x20);
      uVar15 = *(undefined8 *)(pbVar21 + 0x28);
      pbVar22 = pbVar21 + 0x18;
      *(undefined8 *)(pbVar21 + 0x20) = 0;
      *(undefined8 *)(pbVar21 + 0x28) = 0;
      *(undefined8 *)(pbVar21 + 8) = uVar25;
      *(undefined8 *)pbVar21 = *(undefined8 *)(pbVar21 + 0x18);
      *(undefined8 *)(pbVar21 + 0x10) = uVar15;
      *(undefined8 *)(pbVar21 + 0x18) = 0;
      pbVar21 = pbVar22;
    } while (pbVar23 + -0x18 != pbVar22);
    pbVar23 = *(basic_string **)(this + 0xa8);
    if (pbVar23 != pbVar22) goto LAB_00d76fa8;
  }
  *(basic_string **)(this + 0xa8) = pbVar22;
LAB_00d76fd8:
  if ((param_2) &&
     (this_01 = (Bone *)Armature::getBone(*(Armature **)(this + 0x130),param_1),
     this_01 != (Bone *)0x0)) {
    pbVar17 = *(byte **)(this + 0xa0);
    pbVar18 = *(byte **)(this + 0xa8);
    puVar20 = *(undefined8 **)(*(long *)(this + 0x130) + 0x60);
    puVar4 = *(undefined8 **)(*(long *)(this + 0x130) + 0x68);
    if (pbVar17 == pbVar18) {
      for (; puVar20 != puVar4; puVar20 = puVar20 + 1) {
        pBVar19 = (Bone *)*puVar20;
        if ((pBVar19 != this_01) && (uVar13 = Bone::contains(this_01,pBVar19), (uVar13 & 1) == 0)) {
          this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(this + 0xa8);
          if (this_00 ==
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0xb0)) {
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)(this + 0xa0),(basic_string *)(*(long *)(pBVar19 + 0xa8) + 0x18));
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(this_00,(basic_string *)(*(long *)(pBVar19 + 0xa8) + 0x18));
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0xa8) = this_00 + 0x18;
          }
        }
      }
    }
    else if (puVar20 != puVar4) {
      do {
        pBVar19 = (Bone *)*puVar20;
        pbVar24 = pbVar17;
        if (pbVar17 != pbVar18) {
          lVar16 = *(long *)(pBVar19 + 0xa8);
          sVar2 = *(size_t *)(lVar16 + 0x20);
          pbVar5 = *(byte **)(lVar16 + 0x28);
          if ((*(byte *)(lVar16 + 0x18) & 1) == 0) {
            pbVar5 = (byte *)(lVar16 + 0x19);
            sVar2 = (ulong)(*(byte *)(lVar16 + 0x18) >> 1);
          }
          do {
            bVar7 = *pbVar17;
                    /* try { // try from 00d77050 to 00e77063 has its CatchHandler @ 00d780bc */
            sVar14 = (size_t)(bVar7 >> 1);
            sVar1 = sVar14;
            if ((bVar7 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar17 + 8);
            }
            if (sVar1 == sVar2) {
              __s1_00 = *(byte **)(pbVar17 + 0x10);
              if ((bVar7 & 1) == 0) {
                __s1_00 = pbVar17 + 1;
              }
              pbVar10 = pbVar17;
              pbVar11 = pbVar5;
              sVar1 = sVar2;
              pbVar24 = pbVar17;
              if ((bVar7 & 1) == 0) {
                while( true ) {
                    /* try { // try from 00d77074 to 00e7707b has its CatchHandler @ 00d780e4 */
                  if (sVar1 == 0) goto LAB_00d770c0;
                    /* try { // try from 00d77080 to 00e77097 has its CatchHandler @ 00d780dc */
                  if (pbVar10[1] != *pbVar11) break;
                  sVar14 = sVar14 - 1;
                    /* try { // try from 00d77098 to 00e770a7 has its CatchHandler @ 00d780d4 */
                  pbVar10 = pbVar10 + 1;
                  pbVar11 = pbVar11 + 1;
                  sVar1 = sVar14;
                }
              }
              else if ((sVar2 == 0) || (iVar12 = memcmp(__s1_00,pbVar5,sVar2), iVar12 == 0)) break;
            }
            pbVar17 = pbVar17 + 0x18;
                    /* try { // try from 00d77040 to 00e7704b has its CatchHandler @ 00d780c0 */
            pbVar24 = pbVar18;
          } while (pbVar17 != pbVar18);
        }
LAB_00d770c0:
        if ((pbVar24 != pbVar18) && (uVar13 = Bone::contains(this_01,pBVar19), (uVar13 & 1) != 0)) {
          pbVar18 = *(byte **)(this + 0xa8);
          pbVar17 = pbVar24 + 0x18;
          if (pbVar17 == pbVar18) {
LAB_00d77150:
            bVar7 = pbVar17[-0x18];
            pbVar18 = pbVar17 + -0x18;
            while( true ) {
              pbVar5 = pbVar18;
              if ((bVar7 & 1) != 0) {
                operator_delete(*(void **)(pbVar17 + -8));
              }
              if (pbVar24 == pbVar5) break;
              bVar7 = pbVar5[-0x18];
              pbVar18 = pbVar5 + -0x18;
              pbVar17 = pbVar5;
            }
          }
          else {
            pbVar17 = pbVar24;
            do {
              if ((*pbVar17 & 1) == 0) {
                pbVar17[0] = 0;
                pbVar17[1] = 0;
              }
              else {
                **(undefined1 **)(pbVar17 + 0x10) = 0;
                pbVar17[8] = 0;
                pbVar17[9] = 0;
                pbVar17[10] = 0;
                pbVar17[0xb] = 0;
                pbVar17[0xc] = 0;
                pbVar17[0xd] = 0;
                pbVar17[0xe] = 0;
                pbVar17[0xf] = 0;
                if ((*pbVar17 & 1) != 0) {
                  operator_delete(*(void **)(pbVar17 + 0x10));
                  pbVar17[0] = 0;
                  pbVar17[1] = 0;
                  pbVar17[2] = 0;
                  pbVar17[3] = 0;
                  pbVar17[4] = 0;
                  pbVar17[5] = 0;
                  pbVar17[6] = 0;
                  pbVar17[7] = 0;
                }
              }
              uVar25 = *(undefined8 *)(pbVar17 + 0x20);
              uVar15 = *(undefined8 *)(pbVar17 + 0x28);
              pbVar24 = pbVar17 + 0x18;
              pbVar17[0x20] = 0;
              pbVar17[0x21] = 0;
              pbVar17[0x22] = 0;
              pbVar17[0x23] = 0;
              pbVar17[0x24] = 0;
              pbVar17[0x25] = 0;
              pbVar17[0x26] = 0;
              pbVar17[0x27] = 0;
              pbVar17[0x28] = 0;
              pbVar17[0x29] = 0;
              pbVar17[0x2a] = 0;
              pbVar17[0x2b] = 0;
              pbVar17[0x2c] = 0;
              pbVar17[0x2d] = 0;
              pbVar17[0x2e] = 0;
              pbVar17[0x2f] = 0;
              *(undefined8 *)(pbVar17 + 8) = uVar25;
              *(undefined8 *)pbVar17 = *(undefined8 *)(pbVar17 + 0x18);
              *(undefined8 *)(pbVar17 + 0x10) = uVar15;
              pbVar17[0x18] = 0;
              pbVar17[0x19] = 0;
              pbVar17[0x1a] = 0;
              pbVar17[0x1b] = 0;
              pbVar17[0x1c] = 0;
              pbVar17[0x1d] = 0;
              pbVar17[0x1e] = 0;
              pbVar17[0x1f] = 0;
              pbVar17 = pbVar24;
            } while (pbVar18 + -0x18 != pbVar24);
            pbVar17 = *(byte **)(this + 0xa8);
            if (pbVar17 != pbVar24) goto LAB_00d77150;
          }
          *(byte **)(this + 0xa8) = pbVar24;
        }
        puVar20 = puVar20 + 1;
        if (puVar20 == puVar4) break;
        pbVar17 = *(byte **)(this + 0xa0);
        pbVar18 = *(byte **)(this + 0xa8);
      } while( true );
    }
  }
  *(undefined4 *)(this + 0x90) = 1;
  return;
}

