
/* dragonBones::AnimationState::removeBoneMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::AnimationState::removeBoneMask(AnimationState *this,basic_string *param_1,bool param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  basic_string *__s2;
  undefined8 *puVar4;
  byte *__s2_00;
  basic_string bVar5;
  byte bVar6;
  int iVar7;
  Bone *this_00;
  ulong uVar8;
  basic_string *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  basic_string *pbVar14;
  byte *pbVar15;
  Bone *pBVar16;
  void *__dest;
  byte *pbVar17;
  void *__src;
  basic_string *pbVar18;
  basic_string *pbVar19;
  ulong uVar20;
  basic_string *pbVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  pbVar18 = *(basic_string **)(this + 0xa0);
  pbVar21 = *(basic_string **)(this + 0xa8);
  pbVar19 = pbVar18;
  if (pbVar18 != pbVar21) {
    sVar2 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      sVar2 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar5 = *pbVar18;
      sVar1 = (ulong)((byte)bVar5 >> 1);
      if (((byte)bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar18 + 8);
      }
      if (sVar1 == sVar2) {
        pbVar14 = *(basic_string **)(pbVar18 + 0x10);
        if (((byte)bVar5 & 1) == 0) {
          pbVar14 = pbVar18 + 1;
        }
        pbVar19 = pbVar18;
        if (((byte)bVar5 & 1) == 0) {
          if (sVar2 == 0) break;
          lVar12 = -(ulong)((byte)bVar5 >> 1);
          pbVar14 = __s2;
          pbVar9 = pbVar18;
          while (pbVar9 = pbVar9 + 1, *pbVar9 == *pbVar14) {
            lVar12 = lVar12 + 1;
            pbVar14 = pbVar14 + 1;
            if (lVar12 == 0) goto LAB_00d2149c;
          }
        }
        else if ((sVar2 == 0) || (iVar7 = memcmp(pbVar14,__s2,sVar2), iVar7 == 0)) break;
      }
      pbVar18 = pbVar18 + 0x18;
      pbVar19 = pbVar21;
    } while (pbVar18 != pbVar21);
  }
LAB_00d2149c:
  if (pbVar19 == pbVar21) goto LAB_00d2153c;
  if (pbVar19 + 0x18 == pbVar21) {
LAB_00d2151c:
    do {
      pbVar18 = pbVar21 + -0x18;
      if (((byte)*pbVar18 & 1) != 0) {
        operator_delete(*(void **)(pbVar21 + -8));
      }
      pbVar21 = pbVar18;
    } while (pbVar19 != pbVar18);
  }
  else {
    pbVar18 = pbVar19;
    do {
      if (((byte)*pbVar18 & 1) == 0) {
        *(undefined2 *)pbVar18 = 0;
      }
      else {
        **(undefined1 **)(pbVar18 + 0x10) = 0;
        *(undefined8 *)(pbVar18 + 8) = 0;
        if (((byte)*pbVar18 & 1) != 0) {
          operator_delete(*(void **)(pbVar18 + 0x10));
          *(undefined8 *)pbVar18 = 0;
        }
      }
      uVar24 = *(undefined8 *)(pbVar18 + 0x20);
      uVar23 = *(undefined8 *)(pbVar18 + 0x18);
      pbVar19 = pbVar18 + 0x18;
      *(undefined8 *)(pbVar18 + 0x18) = 0;
      *(undefined8 *)(pbVar18 + 0x20) = 0;
      *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar18 + 0x28);
      *(undefined8 *)(pbVar18 + 8) = uVar24;
      *(undefined8 *)pbVar18 = uVar23;
      *(undefined8 *)(pbVar18 + 0x28) = 0;
      pbVar18 = pbVar19;
    } while (pbVar21 + -0x18 != pbVar19);
    pbVar21 = *(basic_string **)(this + 0xa8);
    if (pbVar21 != pbVar19) goto LAB_00d2151c;
  }
  *(basic_string **)(this + 0xa8) = pbVar19;
LAB_00d2153c:
  if ((param_2) &&
     (this_00 = (Bone *)Armature::getBone(*(Armature **)(this + 0x130),param_1),
     this_00 != (Bone *)0x0)) {
    pbVar11 = *(byte **)(this + 0xa0);
    pbVar13 = *(byte **)(this + 0xa8);
    puVar22 = *(undefined8 **)(*(long *)(this + 0x130) + 0x60);
    puVar4 = *(undefined8 **)(*(long *)(this + 0x130) + 0x68);
    if (pbVar11 == pbVar13) {
      for (; puVar22 != puVar4; puVar22 = puVar22 + 1) {
        pBVar16 = (Bone *)*puVar22;
        if ((pBVar16 != this_00) && (uVar8 = Bone::contains(this_00,pBVar16), (uVar8 & 1) == 0)) {
          puVar3 = *(ulong **)(this + 0xa8);
          lVar12 = *(long *)(pBVar16 + 0xa8);
          pbVar18 = (basic_string *)(lVar12 + 0x18);
          if (puVar3 == *(ulong **)(this + 0xb0)) {
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)(this + 0xa0),pbVar18);
          }
          else {
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = 0;
            if (((byte)*pbVar18 & 1) == 0) {
              uVar20 = *(ulong *)(lVar12 + 0x20);
              uVar8 = *(ulong *)pbVar18;
              puVar3[2] = *(ulong *)(lVar12 + 0x28);
              puVar3[1] = uVar20;
              *puVar3 = uVar8;
            }
            else {
              uVar8 = *(ulong *)(lVar12 + 0x20);
              if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              __src = *(void **)(lVar12 + 0x28);
              if (uVar8 < 0x17) {
                __dest = (void *)((long)puVar3 + 1);
                *(char *)puVar3 = (char)((int)uVar8 << 1);
                if (uVar8 != 0) goto LAB_00d2179c;
              }
              else {
                uVar20 = uVar8 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar20);
                puVar3[1] = uVar8;
                puVar3[2] = (ulong)__dest;
                *puVar3 = uVar20 | 1;
LAB_00d2179c:
                memcpy(__dest,__src,uVar8);
              }
              *(undefined1 *)((long)__dest + uVar8) = 0;
            }
            *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x18;
          }
        }
      }
    }
    else if (puVar22 != puVar4) {
      do {
        pBVar16 = (Bone *)*puVar22;
        pbVar17 = pbVar11;
        if (pbVar11 != pbVar13) {
          lVar12 = *(long *)(pBVar16 + 0xa8);
          sVar2 = *(size_t *)(lVar12 + 0x20);
          __s2_00 = *(byte **)(lVar12 + 0x28);
          if ((*(byte *)(lVar12 + 0x18) & 1) == 0) {
            __s2_00 = (byte *)(lVar12 + 0x19);
            sVar2 = (ulong)(*(byte *)(lVar12 + 0x18) >> 1);
          }
          do {
            bVar6 = *pbVar11;
            sVar1 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar11 + 8);
            }
            if (sVar1 == sVar2) {
              pbVar15 = *(byte **)(pbVar11 + 0x10);
              if ((bVar6 & 1) == 0) {
                pbVar15 = pbVar11 + 1;
              }
              pbVar17 = pbVar11;
              if ((bVar6 & 1) == 0) {
                if (sVar2 == 0) break;
                lVar12 = -(ulong)(bVar6 >> 1);
                pbVar15 = __s2_00;
                pbVar10 = pbVar11;
                while (pbVar10 = pbVar10 + 1, *pbVar10 == *pbVar15) {
                  lVar12 = lVar12 + 1;
                  pbVar15 = pbVar15 + 1;
                  if (lVar12 == 0) goto LAB_00d21628;
                }
              }
              else if ((sVar2 == 0) || (iVar7 = memcmp(pbVar15,__s2_00,sVar2), iVar7 == 0)) break;
            }
            pbVar11 = pbVar11 + 0x18;
            pbVar17 = pbVar13;
          } while (pbVar11 != pbVar13);
        }
LAB_00d21628:
        if ((pbVar17 != pbVar13) && (uVar8 = Bone::contains(this_00,pBVar16), (uVar8 & 1) != 0)) {
          pbVar13 = *(byte **)(this + 0xa8);
          pbVar11 = pbVar17 + 0x18;
          if (pbVar11 == pbVar13) {
LAB_00d216bc:
            do {
              pbVar13 = pbVar11 + -0x18;
              if ((*pbVar13 & 1) != 0) {
                operator_delete(*(void **)(pbVar11 + -8));
              }
              pbVar11 = pbVar13;
            } while (pbVar17 != pbVar13);
          }
          else {
            pbVar11 = pbVar17;
            do {
              if ((*pbVar11 & 1) == 0) {
                pbVar11[0] = 0;
                pbVar11[1] = 0;
              }
              else {
                **(undefined1 **)(pbVar11 + 0x10) = 0;
                pbVar11[8] = 0;
                pbVar11[9] = 0;
                pbVar11[10] = 0;
                pbVar11[0xb] = 0;
                pbVar11[0xc] = 0;
                pbVar11[0xd] = 0;
                pbVar11[0xe] = 0;
                pbVar11[0xf] = 0;
                if ((*pbVar11 & 1) != 0) {
                  operator_delete(*(void **)(pbVar11 + 0x10));
                  pbVar11[0] = 0;
                  pbVar11[1] = 0;
                  pbVar11[2] = 0;
                  pbVar11[3] = 0;
                  pbVar11[4] = 0;
                  pbVar11[5] = 0;
                  pbVar11[6] = 0;
                  pbVar11[7] = 0;
                }
              }
              uVar24 = *(undefined8 *)(pbVar11 + 0x20);
              uVar23 = *(undefined8 *)(pbVar11 + 0x18);
              pbVar17 = pbVar11 + 0x18;
              pbVar11[0x18] = 0;
              pbVar11[0x19] = 0;
              pbVar11[0x1a] = 0;
              pbVar11[0x1b] = 0;
              pbVar11[0x1c] = 0;
              pbVar11[0x1d] = 0;
              pbVar11[0x1e] = 0;
              pbVar11[0x1f] = 0;
              pbVar11[0x20] = 0;
              pbVar11[0x21] = 0;
              pbVar11[0x22] = 0;
              pbVar11[0x23] = 0;
              pbVar11[0x24] = 0;
              pbVar11[0x25] = 0;
              pbVar11[0x26] = 0;
              pbVar11[0x27] = 0;
              *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar11 + 0x28);
              *(undefined8 *)(pbVar11 + 8) = uVar24;
              *(undefined8 *)pbVar11 = uVar23;
              pbVar11[0x28] = 0;
              pbVar11[0x29] = 0;
              pbVar11[0x2a] = 0;
              pbVar11[0x2b] = 0;
              pbVar11[0x2c] = 0;
              pbVar11[0x2d] = 0;
              pbVar11[0x2e] = 0;
              pbVar11[0x2f] = 0;
              pbVar11 = pbVar17;
            } while (pbVar13 + -0x18 != pbVar17);
            pbVar11 = *(byte **)(this + 0xa8);
            if (pbVar11 != pbVar17) goto LAB_00d216bc;
          }
          *(byte **)(this + 0xa8) = pbVar17;
        }
        puVar22 = puVar22 + 1;
        if (puVar22 == puVar4) break;
        pbVar11 = *(byte **)(this + 0xa0);
        pbVar13 = *(byte **)(this + 0xa8);
      } while( true );
    }
  }
  *(undefined4 *)(this + 0x90) = 1;
  return;
}

