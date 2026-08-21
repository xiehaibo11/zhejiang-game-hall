
/* dragonBones::AnimationConfig::addBoneMask(dragonBones::Armature*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::AnimationConfig::addBoneMask
          (AnimationConfig *this,Armature *param_1,basic_string *param_2,bool param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  basic_string *__s2;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *__s2_00;
  basic_string bVar7;
  byte bVar8;
  int iVar9;
  Bone *this_00;
  ulong uVar10;
  basic_string *pbVar11;
  byte *pbVar12;
  long lVar13;
  basic_string *pbVar14;
  byte *pbVar15;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_01;
  Bone *pBVar16;
  void *__dest;
  basic_string *pbVar17;
  void *pvVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  basic_string *pbVar22;
  basic_string *pbVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  this_00 = (Bone *)Armature::getBone(param_1,param_2);
  if (this_00 == (Bone *)0x0) {
    return;
  }
  this_01 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x90);
  pbVar22 = *(basic_string **)this_01;
  pbVar17 = *(basic_string **)(this + 0x98);
  pbVar23 = pbVar22;
  if (pbVar22 != pbVar17) {
    sVar2 = *(size_t *)(param_2 + 8);
    __s2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      sVar2 = (ulong)((byte)*param_2 >> 1);
    }
    do {
      bVar7 = *pbVar22;
      sVar1 = (ulong)((byte)bVar7 >> 1);
      if (((byte)bVar7 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar22 + 8);
      }
      if (sVar1 == sVar2) {
        pbVar14 = *(basic_string **)(pbVar22 + 0x10);
        if (((byte)bVar7 & 1) == 0) {
          pbVar14 = pbVar22 + 1;
        }
        pbVar23 = pbVar22;
        if (((byte)bVar7 & 1) == 0) {
          if (sVar2 == 0) break;
          lVar13 = -(ulong)((byte)bVar7 >> 1);
          pbVar14 = __s2;
          pbVar11 = pbVar22;
          while (pbVar11 = pbVar11 + 1, *pbVar11 == *pbVar14) {
            lVar13 = lVar13 + 1;
            pbVar14 = pbVar14 + 1;
            if (lVar13 == 0) goto LAB_00d332d0;
          }
        }
        else if ((sVar2 == 0) || (iVar9 = memcmp(pbVar14,__s2,sVar2), iVar9 == 0)) break;
      }
      pbVar22 = pbVar22 + 0x18;
      pbVar23 = pbVar17;
    } while (pbVar22 != pbVar17);
  }
LAB_00d332d0:
  if (pbVar23 != pbVar17) goto joined_r0x00d334bc;
  if (*(basic_string **)(this + 0xa0) == pbVar17) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this_01,param_2);
    goto joined_r0x00d334bc;
  }
  *(undefined8 *)(pbVar17 + 8) = 0;
  *(undefined8 *)(pbVar17 + 0x10) = 0;
  *(undefined8 *)pbVar17 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uVar25 = *(undefined8 *)(param_2 + 8);
    uVar24 = *(undefined8 *)param_2;
    *(undefined8 *)(pbVar17 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(pbVar17 + 8) = uVar25;
    *(undefined8 *)pbVar17 = uVar24;
  }
  else {
    uVar10 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar10) {
LAB_00d3354c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar18 = *(void **)(param_2 + 0x10);
    if (uVar10 < 0x17) {
      pbVar22 = pbVar17 + 1;
      *pbVar17 = SUB41((int)uVar10 << 1,0);
      if (uVar10 != 0) goto LAB_00d3350c;
    }
    else {
      uVar21 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pbVar22 = operator_new(uVar21);
      *(ulong *)(pbVar17 + 8) = uVar10;
      *(basic_string **)(pbVar17 + 0x10) = pbVar22;
      *(ulong *)pbVar17 = uVar21 | 1;
LAB_00d3350c:
      memcpy(pbVar22,pvVar18,uVar10);
    }
    pbVar22[uVar10] = (basic_string)0x0;
  }
  *(long *)(this + 0x98) = *(long *)(this + 0x98) + 0x18;
joined_r0x00d334bc:
  if (!param_3) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  puVar5 = *(undefined8 **)(param_1 + 0x68);
joined_r0x00d332e4:
  do {
    if (puVar3 == puVar5) {
      return;
    }
    pbVar19 = *(byte **)(this + 0x90);
    pbVar6 = *(byte **)(this + 0x98);
    pBVar16 = (Bone *)*puVar3;
    pbVar20 = pbVar19;
    if (pbVar19 != pbVar6) {
      lVar13 = *(long *)(pBVar16 + 0xa8);
      sVar2 = *(size_t *)(lVar13 + 0x20);
      __s2_00 = *(byte **)(lVar13 + 0x28);
      if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
        __s2_00 = (byte *)(lVar13 + 0x19);
        sVar2 = (ulong)(*(byte *)(lVar13 + 0x18) >> 1);
      }
      do {
        bVar8 = *pbVar19;
        sVar1 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar19 + 8);
        }
        if (sVar1 == sVar2) {
          pbVar15 = *(byte **)(pbVar19 + 0x10);
          if ((bVar8 & 1) == 0) {
            pbVar15 = pbVar19 + 1;
          }
          pbVar20 = pbVar19;
          if ((bVar8 & 1) == 0) {
            if (sVar2 == 0) break;
            lVar13 = -(ulong)(bVar8 >> 1);
            pbVar15 = __s2_00;
            pbVar12 = pbVar19;
            while (pbVar12 = pbVar12 + 1, *pbVar12 == *pbVar15) {
              lVar13 = lVar13 + 1;
              pbVar15 = pbVar15 + 1;
              if (lVar13 == 0) goto LAB_00d333ac;
            }
          }
          else if ((sVar2 == 0) || (iVar9 = memcmp(pbVar15,__s2_00,sVar2), iVar9 == 0)) break;
        }
        pbVar19 = pbVar19 + 0x18;
        pbVar20 = pbVar6;
      } while (pbVar19 != pbVar6);
    }
LAB_00d333ac:
    if ((pbVar20 != pbVar6) || (uVar10 = Bone::contains(this_00,pBVar16), (uVar10 & 1) == 0)) {
LAB_00d332ec:
      puVar3 = puVar3 + 1;
      goto joined_r0x00d332e4;
    }
    puVar4 = *(ulong **)(this + 0x98);
    lVar13 = *(long *)(pBVar16 + 0xa8);
    pbVar22 = (basic_string *)(lVar13 + 0x18);
    if (puVar4 == *(ulong **)(this + 0xa0)) {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                (this_01,pbVar22);
      goto LAB_00d332ec;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (((byte)*pbVar22 & 1) == 0) {
      uVar21 = *(ulong *)(lVar13 + 0x20);
      uVar10 = *(ulong *)pbVar22;
      puVar4[2] = *(ulong *)(lVar13 + 0x28);
      puVar4[1] = uVar21;
      *puVar4 = uVar10;
    }
    else {
      uVar10 = *(ulong *)(lVar13 + 0x20);
      if (0xffffffffffffffef < uVar10) goto LAB_00d3354c;
      pvVar18 = *(void **)(lVar13 + 0x28);
      if (uVar10 < 0x17) {
        __dest = (void *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uVar10 << 1);
        if (uVar10 != 0) goto LAB_00d33450;
      }
      else {
        uVar21 = uVar10 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar21);
        puVar4[1] = uVar10;
        puVar4[2] = (ulong)__dest;
        *puVar4 = uVar21 | 1;
LAB_00d33450:
        memcpy(__dest,pvVar18,uVar10);
      }
      *(undefined1 *)((long)__dest + uVar10) = 0;
    }
    puVar3 = puVar3 + 1;
    *(long *)(this + 0x98) = *(long *)(this + 0x98) + 0x18;
  } while( true );
}

