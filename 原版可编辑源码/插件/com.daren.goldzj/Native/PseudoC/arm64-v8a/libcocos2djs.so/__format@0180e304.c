
/* std::__ndk1::__money_put<char>::__format(char*, char*&, char*&, unsigned int, char const*, char
   const*, std::__ndk1::ctype<char> const&, bool, std::__ndk1::money_base::pattern const&, char,
   char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void std::__ndk1::__money_put<char>::__format
               (char *param_1,char **param_2,char **param_3,uint param_4,char *param_5,char *param_6
               ,ctype *param_7,bool param_8,pattern *param_9,char param_10,char param_11,
               basic_string *param_12,basic_string *param_13,basic_string *param_14,int param_15)

{
  byte bVar1;
  basic_string bVar2;
  int iVar3;
  basic_string *pbVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  basic_string *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  basic_string *pbVar12;
  uint uVar14;
  byte *pbVar15;
  basic_string *pbVar16;
  basic_string *pbVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  basic_string *pbVar13;
  
  *param_3 = param_1;
  iVar3 = param_15 + -1;
  lVar22 = 0;
  do {
    switch(param_9[lVar22]) {
    case (pattern)0x0:
      *param_2 = *param_3;
      break;
    case (pattern)0x1:
      *param_2 = *param_3;
      cVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x20);
      pcVar8 = *param_3;
      *param_3 = pcVar8 + 1;
      *pcVar8 = cVar6;
      break;
    case (pattern)0x2:
      bVar2 = *param_13;
      uVar10 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        uVar10 = *(ulong *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (uVar10 != 0)) {
        pbVar17 = (basic_string *)*param_3;
        pbVar9 = param_13 + 1;
        if (((byte)bVar2 & 1) != 0) {
          pbVar9 = *(basic_string **)(param_13 + 0x10);
        }
        pbVar13 = pbVar9 + uVar10;
        if ((uVar10 < 0x20) || ((pbVar17 < pbVar13 && (pbVar9 < pbVar17 + uVar10)))) {
LAB_0180e4a8:
          do {
            pbVar12 = pbVar9 + 1;
            pbVar16 = pbVar17 + 1;
            *pbVar17 = *pbVar9;
            pbVar17 = pbVar16;
            pbVar9 = pbVar12;
          } while (pbVar13 != pbVar12);
        }
        else {
          uVar18 = uVar10 & 0xffffffffffffffe0;
          pbVar12 = pbVar9 + 0x10;
          pbVar16 = pbVar17 + uVar18;
          pbVar9 = pbVar9 + uVar18;
          pbVar17 = pbVar17 + 0x10;
          uVar21 = uVar18;
          do {
            pbVar4 = pbVar12 + -8;
            uVar25 = *(undefined8 *)(pbVar12 + -0x10);
            uVar27 = *(undefined8 *)(pbVar12 + 8);
            uVar26 = *(undefined8 *)pbVar12;
            pbVar12 = pbVar12 + 0x20;
            uVar21 = uVar21 - 0x20;
            *(undefined8 *)(pbVar17 + -8) = *(undefined8 *)pbVar4;
            *(undefined8 *)(pbVar17 + -0x10) = uVar25;
            *(undefined8 *)(pbVar17 + 8) = uVar27;
            *(undefined8 *)pbVar17 = uVar26;
            pbVar17 = pbVar17 + 0x20;
          } while (uVar21 != 0);
          pbVar17 = pbVar16;
          if (uVar10 != uVar18) goto LAB_0180e4a8;
        }
        *param_3 = (char *)pbVar16;
      }
      break;
    case (pattern)0x3:
      bVar5 = ((byte)*param_14 & 1) != 0;
      uVar10 = (ulong)((byte)*param_14 >> 1);
      if (bVar5) {
        uVar10 = *(ulong *)(param_14 + 8);
      }
      if (uVar10 != 0) {
        pbVar9 = (basic_string *)*param_3;
        pbVar17 = param_14 + 1;
        if (bVar5) {
          pbVar17 = *(basic_string **)(param_14 + 0x10);
        }
        bVar2 = *pbVar17;
        *param_3 = (char *)(pbVar9 + 1);
        *pbVar9 = bVar2;
      }
      break;
    case (pattern)0x4:
      pbVar20 = (byte *)*param_3;
      pbVar15 = (byte *)param_5;
      if (param_8) {
        pbVar15 = (byte *)(param_5 + 1);
        param_5 = (char *)pbVar15;
      }
      while (((pbVar15 < param_6 && (-1 < (char)*pbVar15)) &&
             (((uint)*(undefined8 *)(*(long *)(param_7 + 0x10) + (ulong)*pbVar15 * 8) >> 6 & 1) != 0
             ))) {
        pbVar15 = pbVar15 + 1;
      }
      if (param_15 < 1) {
        if (pbVar15 == (byte *)param_5) goto LAB_0180e5dc;
LAB_0180e6ac:
        bVar2 = *param_12;
        uVar10 = (ulong)((byte)bVar2 >> 1);
        if (((byte)bVar2 & 1) != 0) {
          uVar10 = *(ulong *)(param_12 + 8);
        }
        if (uVar10 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          pbVar17 = param_12 + 1;
          if (((byte)bVar2 & 1) != 0) {
            pbVar17 = *(basic_string **)(param_12 + 0x10);
          }
          uVar7 = (uint)(byte)*pbVar17;
        }
        uVar10 = 0;
        uVar14 = 0;
        do {
          if (uVar14 == uVar7) {
            pcVar8 = *param_3;
            uVar10 = (ulong)((int)uVar10 + 1);
            *param_3 = pcVar8 + 1;
            *pcVar8 = param_11;
            bVar2 = *param_12;
            uVar21 = (ulong)((byte)bVar2 >> 1);
            if (((byte)bVar2 & 1) != 0) {
              uVar21 = *(ulong *)(param_12 + 8);
            }
            if (uVar10 < uVar21) {
              uVar14 = 0;
              pbVar17 = param_12 + 1;
              if (((byte)bVar2 & 1) != 0) {
                pbVar17 = *(basic_string **)(param_12 + 0x10);
              }
              uVar7 = (uint)(byte)pbVar17[uVar10];
              if (uVar7 == 0xff) {
                uVar7 = 0xffffffff;
              }
            }
            else {
              uVar14 = 0;
            }
          }
          pbVar15 = pbVar15 + -1;
          bVar1 = *pbVar15;
          pbVar23 = (byte *)*param_3;
          uVar14 = uVar14 + 1;
          *param_3 = (char *)(pbVar23 + 1);
          *pbVar23 = bVar1;
        } while ((byte *)param_5 != pbVar15);
      }
      else {
        iVar24 = param_15;
        if (param_5 < pbVar15) {
          pbVar23 = pbVar15 + -1;
          bVar1 = *pbVar23;
          *param_3 = (char *)(pbVar20 + 1);
          *pbVar20 = bVar1;
          iVar24 = iVar3;
          if (iVar3 < 1) {
            pbVar15 = pbVar23;
            if (0 < iVar3) goto LAB_0180e628;
          }
          else {
            bVar5 = 0 < iVar3;
            if (param_5 < pbVar23) {
              pbVar15 = pbVar15 + -2;
              do {
                pbVar23 = pbVar15;
                pbVar15 = (byte *)*param_3;
                bVar1 = *pbVar23;
                iVar24 = iVar24 + -1;
                bVar5 = 0 < iVar24;
                *param_3 = (char *)(pbVar15 + 1);
                *pbVar15 = bVar1;
                if (iVar24 < 1) break;
                pbVar15 = pbVar23 + -1;
              } while (param_5 < pbVar23);
            }
            pbVar15 = pbVar23;
            if (bVar5) goto LAB_0180e628;
          }
          iVar24 = 0;
          cVar6 = '\0';
          pbVar15 = pbVar23;
        }
        else {
LAB_0180e628:
          cVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
        }
        pcVar8 = *param_3;
        *param_3 = pcVar8 + 1;
        for (; 0 < iVar24; iVar24 = iVar24 + -1) {
          *pcVar8 = cVar6;
          pcVar8 = *param_3;
          *param_3 = pcVar8 + 1;
        }
        *pcVar8 = param_10;
        if (pbVar15 != (byte *)param_5) goto LAB_0180e6ac;
LAB_0180e5dc:
        cVar6 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
        pcVar8 = *param_3;
        *param_3 = pcVar8 + 1;
        *pcVar8 = cVar6;
      }
      if ((pbVar20 != (byte *)*param_3) && (pbVar15 = (byte *)(*param_3 + -1), pbVar20 < pbVar15)) {
        do {
          pbVar11 = pbVar20 + 1;
          bVar1 = *pbVar20;
          *pbVar20 = *pbVar15;
          pbVar23 = pbVar15 + -1;
          *pbVar15 = bVar1;
          pbVar15 = pbVar23;
          pbVar20 = pbVar11;
        } while (pbVar11 < pbVar23);
      }
    }
    lVar22 = lVar22 + 1;
  } while (lVar22 != 4);
  bVar2 = *param_14;
  uVar10 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar10 = *(ulong *)(param_14 + 8);
  }
  uVar21 = uVar10 - 1;
  if (uVar10 == 0 || uVar21 == 0) goto LAB_0180e85c;
  pbVar17 = (basic_string *)*param_3;
  pbVar9 = param_14 + 1;
  if (((byte)bVar2 & 1) != 0) {
    pbVar9 = *(basic_string **)(param_14 + 0x10);
  }
  pbVar13 = pbVar9 + 1;
  if ((uVar21 < 0x20) || ((pbVar17 < pbVar9 + uVar10 && (pbVar13 < pbVar17 + (uVar10 - 1))))) {
LAB_0180e848:
    do {
      pbVar12 = pbVar13 + 1;
      pbVar16 = pbVar17 + 1;
      *pbVar17 = *pbVar13;
      pbVar13 = pbVar12;
      pbVar17 = pbVar16;
    } while (pbVar9 + uVar10 != pbVar12);
  }
  else {
    uVar19 = uVar21 & 0xffffffffffffffe0;
    pbVar12 = pbVar9 + 0x11;
    pbVar16 = pbVar17 + uVar19;
    pbVar13 = pbVar13 + uVar19;
    pbVar17 = pbVar17 + 0x10;
    uVar18 = uVar19;
    do {
      pbVar4 = pbVar12 + -8;
      uVar25 = *(undefined8 *)(pbVar12 + -0x10);
      uVar27 = *(undefined8 *)(pbVar12 + 8);
      uVar26 = *(undefined8 *)pbVar12;
      pbVar12 = pbVar12 + 0x20;
      uVar18 = uVar18 - 0x20;
      *(undefined8 *)(pbVar17 + -8) = *(undefined8 *)pbVar4;
      *(undefined8 *)(pbVar17 + -0x10) = uVar25;
      *(undefined8 *)(pbVar17 + 8) = uVar27;
      *(undefined8 *)pbVar17 = uVar26;
      pbVar17 = pbVar17 + 0x20;
    } while (uVar18 != 0);
    pbVar17 = pbVar16;
    if (uVar21 != uVar19) goto LAB_0180e848;
  }
  *param_3 = (char *)pbVar16;
LAB_0180e85c:
  if ((param_4 & 0xb0) != 0x10) {
    if ((param_4 & 0xb0) == 0x20) {
      param_1 = *param_3;
    }
    *param_2 = param_1;
  }
  return;
}

