
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
  basic_string *pbVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  basic_string bVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  basic_string *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  char *pcVar16;
  int iVar17;
  byte *pbVar18;
  
  iVar5 = param_15 + -1;
  *param_3 = param_1;
  lVar15 = 0;
  do {
    switch(param_9[lVar15]) {
    case (pattern)0x0:
      *param_2 = *param_3;
      break;
    case (pattern)0x1:
      *param_2 = *param_3;
      cVar7 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x20);
      pcVar16 = *param_3;
      *param_3 = pcVar16 + 1;
      *pcVar16 = cVar7;
      break;
    case (pattern)0x2:
      bVar4 = *param_13;
      __n = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        __n = *(size_t *)(param_13 + 8);
      }
      if (((param_4 >> 9 & 1) != 0) && (__n != 0)) {
        pcVar16 = *param_3;
        pbVar1 = param_13 + 1;
        if (((byte)bVar4 & 1) != 0) {
          pbVar1 = *(basic_string **)(param_13 + 0x10);
        }
        memmove(pcVar16,pbVar1,__n);
        *param_3 = pcVar16 + __n;
      }
      break;
    case (pattern)0x3:
      bVar6 = ((byte)*param_14 & 1) != 0;
      uVar10 = (ulong)((byte)*param_14 >> 1);
      if (bVar6) {
        uVar10 = *(ulong *)(param_14 + 8);
      }
      if (uVar10 != 0) {
        pbVar9 = (basic_string *)*param_3;
        pbVar1 = param_14 + 1;
        if (bVar6) {
          pbVar1 = *(basic_string **)(param_14 + 0x10);
        }
        bVar4 = *pbVar1;
        *param_3 = (char *)(pbVar9 + 1);
        *pbVar9 = bVar4;
      }
      break;
    case (pattern)0x4:
      pbVar14 = (byte *)*param_3;
      if (param_8) {
        param_5 = param_5 + 1;
      }
      pbVar13 = (byte *)param_5;
      pbVar18 = (byte *)param_5;
      if (param_5 < param_6) {
        do {
          pbVar13 = pbVar18;
          if (((char)*pbVar18 < '\0') ||
             (((uint)*(undefined8 *)(*(long *)(param_7 + 0x10) + (ulong)*pbVar18 * 8) >> 6 & 1) == 0
             )) break;
          pbVar18 = pbVar18 + 1;
          pbVar13 = (byte *)param_6;
        } while ((byte *)param_6 != pbVar18);
      }
      if (0 < param_15) {
        pbVar18 = pbVar13;
        iVar17 = param_15;
        if (param_5 < pbVar13) {
          pbVar18 = pbVar13 + -1;
          bVar3 = *pbVar18;
          *param_3 = (char *)(pbVar14 + 1);
          *pbVar14 = bVar3;
          iVar17 = iVar5;
          if (iVar5 < 1) {
            if (0 < iVar5) goto LAB_011f1070;
          }
          else {
            bVar6 = 0 < iVar5;
            if (param_5 < pbVar18) {
              pbVar13 = pbVar13 + -2;
              do {
                pbVar18 = pbVar13;
                pbVar13 = (byte *)*param_3;
                bVar3 = *pbVar18;
                iVar17 = iVar17 + -1;
                bVar6 = 0 < iVar17;
                *param_3 = (char *)(pbVar13 + 1);
                *pbVar13 = bVar3;
                if (iVar17 < 1) break;
                pbVar13 = pbVar18 + -1;
              } while (param_5 < pbVar18);
            }
            if (bVar6) goto LAB_011f1070;
          }
          iVar17 = 0;
          cVar7 = '\0';
        }
        else {
LAB_011f1070:
          cVar7 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
        }
        pcVar16 = *param_3;
        *param_3 = pcVar16 + 1;
        for (; 0 < iVar17; iVar17 = iVar17 + -1) {
          *pcVar16 = cVar7;
          pcVar16 = *param_3;
          *param_3 = pcVar16 + 1;
        }
        *pcVar16 = param_10;
        pbVar13 = pbVar18;
      }
      if (pbVar13 != (byte *)param_5) {
        bVar4 = *param_12;
        uVar10 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          uVar10 = *(ulong *)(param_12 + 8);
        }
        if (uVar10 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          pbVar1 = param_12 + 1;
          if (((byte)bVar4 & 1) != 0) {
            pbVar1 = *(basic_string **)(param_12 + 0x10);
          }
          uVar8 = (uint)(byte)*pbVar1;
        }
        uVar10 = 0;
        uVar12 = 0;
        if (uVar8 != 0) goto LAB_011f1138;
        do {
          pcVar16 = *param_3;
          uVar10 = (ulong)((int)uVar10 + 1);
          *param_3 = pcVar16 + 1;
          *pcVar16 = param_11;
          bVar4 = *param_12;
          uVar2 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            uVar2 = *(ulong *)(param_12 + 8);
          }
          if (uVar10 < uVar2) {
            uVar12 = 0;
            pbVar1 = param_12 + 1;
            if (((byte)bVar4 & 1) != 0) {
              pbVar1 = *(basic_string **)(param_12 + 0x10);
            }
            uVar8 = (uint)(byte)pbVar1[uVar10];
            if (uVar8 == 0xff) {
              uVar8 = 0xffffffff;
            }
          }
          else {
            uVar12 = 0;
          }
LAB_011f1138:
          do {
            pbVar13 = pbVar13 + -1;
            bVar3 = *pbVar13;
            pbVar18 = (byte *)*param_3;
            uVar12 = uVar12 + 1;
            *param_3 = (char *)(pbVar18 + 1);
            *pbVar18 = bVar3;
            if ((byte *)param_5 == pbVar13) goto LAB_011f1198;
          } while (uVar12 != uVar8);
        } while( true );
      }
      cVar7 = (**(code **)(*(long *)param_7 + 0x38))(param_7,0x30);
      pcVar16 = *param_3;
      *param_3 = pcVar16 + 1;
      *pcVar16 = cVar7;
LAB_011f1198:
      if ((pbVar14 != (byte *)*param_3) && (pbVar18 = (byte *)(*param_3 + -1), pbVar14 < pbVar18)) {
        do {
          pbVar11 = pbVar14 + 1;
          bVar3 = *pbVar14;
          *pbVar14 = *pbVar18;
          pbVar13 = pbVar18 + -1;
          *pbVar18 = bVar3;
          pbVar18 = pbVar13;
          pbVar14 = pbVar11;
        } while (pbVar11 < pbVar13);
      }
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 4) {
      bVar4 = *param_14;
      uVar10 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar10 = *(ulong *)(param_14 + 8);
      }
      if (1 < uVar10) {
        pcVar16 = *param_3;
        pbVar1 = param_14 + 2;
        pbVar9 = param_14 + 1;
        if (((byte)bVar4 & 1) != 0) {
          pbVar1 = *(basic_string **)(param_14 + 0x10) + 1;
          pbVar9 = *(basic_string **)(param_14 + 0x10);
        }
        pbVar9 = pbVar9 + (uVar10 - (long)pbVar1);
        if (pbVar9 != (basic_string *)0x0) {
          memmove(pcVar16,pbVar1,(size_t)pbVar9);
        }
        *param_3 = pcVar16 + (long)pbVar9;
      }
      if ((param_4 & 0xb0) != 0x10) {
        if ((param_4 & 0xb0) == 0x20) {
          *param_2 = *param_3;
        }
        else {
          *param_2 = param_1;
        }
      }
      return;
    }
  } while( true );
}

