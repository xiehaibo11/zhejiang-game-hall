
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_ERE_dupl_symbol<char const*>(char const*, char const*,
   std::__ndk1::__owns_one_state<char>*, unsigned int, unsigned int) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_ERE_dupl_symbol<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __owns_one_state *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  cVar3 = *param_1;
  uVar1 = *(uint *)(this + 0x18) & 0x1f0;
  if (cVar3 < '?') {
    if (cVar3 != '*') {
      if (cVar3 != '+') {
        return param_1;
      }
      pbVar11 = (byte *)(param_1 + 1);
      if (((pbVar11 == (byte *)param_2) || (uVar1 != 0)) || (*pbVar11 != 0x3f)) {
        uVar6 = 1;
LAB_00ea9c04:
        bVar8 = true;
        uVar7 = 0xffffffffffffffff;
        goto LAB_00ea9c34;
      }
      pbVar11 = (byte *)(param_1 + 2);
      uVar6 = 1;
LAB_00ea9a80:
      bVar8 = false;
      uVar7 = 0xffffffffffffffff;
      goto LAB_00ea9c34;
    }
    if (((param_1 + 1 != param_2) && (uVar1 == 0)) && (param_1[1] == '?')) {
      uVar7 = 0xffffffffffffffff;
LAB_00ea9bec:
      pbVar11 = (byte *)(param_1 + 2);
      uVar6 = 0;
      bVar8 = false;
      goto LAB_00ea9c34;
    }
    uVar7 = 0xffffffffffffffff;
  }
  else {
    if (cVar3 != '?') {
      if (cVar3 != '{') {
        return param_1;
      }
      pbVar11 = (byte *)(param_1 + 1);
      if ((pbVar11 != (byte *)param_2) &&
         (((bVar2 = *pbVar11, (bVar2 & 0xf8) == 0x30 || ((bVar2 & 0xfe) == 0x38)) &&
          (iVar4 = bVar2 - 0x30, iVar4 != -1)))) {
        for (pbVar10 = (byte *)(param_1 + 2);
            ((pbVar9 = (byte *)param_2, pbVar10 != (byte *)param_2 &&
             ((bVar2 = *pbVar10, pbVar9 = pbVar10, (bVar2 & 0xf8) == 0x30 ||
              ((bVar2 & 0xfe) == 0x38)))) && (bVar2 - 0x30 != -1)); pbVar10 = pbVar10 + 1) {
          if (0xccccccb < iVar4) goto LAB_00ea9dac;
          iVar4 = (bVar2 - 0x30) + iVar4 * 10;
        }
        if (pbVar9 != pbVar11) {
          if (pbVar9 == (byte *)param_2) goto LAB_00ea9db0;
          if (*pbVar9 == 0x2c) {
            pbVar11 = pbVar9 + 1;
            if (pbVar11 != (byte *)param_2) {
              bVar2 = *pbVar11;
              if (bVar2 == 0x7d) {
                pbVar11 = pbVar9 + 2;
                if (((uVar1 != 0) || (pbVar11 == (byte *)param_2)) || (*pbVar11 != 0x3f)) {
                  uVar6 = (ulong)iVar4;
                  goto LAB_00ea9c04;
                }
                pbVar11 = pbVar9 + 3;
                uVar6 = (ulong)iVar4;
                goto LAB_00ea9a80;
              }
              if ((((bVar2 & 0xf8) != 0x30) && ((bVar2 & 0xfe) != 0x38)) ||
                 (iVar5 = bVar2 - 0x30, iVar5 == -1)) goto LAB_00ea9db0;
              for (pbVar9 = pbVar9 + 2;
                  ((pbVar10 = (byte *)param_2, pbVar9 != (byte *)param_2 &&
                   ((bVar2 = *pbVar9, pbVar10 = pbVar9, (bVar2 & 0xf8) == 0x30 ||
                    ((bVar2 & 0xfe) == 0x38)))) && (bVar2 - 0x30 != -1)); pbVar9 = pbVar9 + 1) {
                if (0xccccccb < iVar5) goto LAB_00ea9dac;
                iVar5 = (bVar2 - 0x30) + iVar5 * 10;
              }
              if (((pbVar10 == pbVar11) || (pbVar10 == (byte *)param_2)) || (*pbVar10 != 0x7d))
              goto LAB_00ea9db0;
              if (iVar4 <= iVar5) {
                pbVar11 = pbVar10 + 1;
                if (((uVar1 == 0) && (pbVar11 != (byte *)param_2)) && (*pbVar11 == 0x3f)) {
                  pbVar11 = pbVar10 + 2;
                  uVar6 = (ulong)iVar4;
                  uVar7 = (ulong)iVar5;
                  bVar8 = false;
                }
                else {
                  uVar6 = (ulong)iVar4;
                  uVar7 = (ulong)iVar5;
                  bVar8 = true;
                }
                goto LAB_00ea9c34;
              }
            }
          }
          else if (*pbVar9 == 0x7d) {
            pbVar11 = pbVar9 + 1;
            if (((uVar1 == 0) && (pbVar11 != (byte *)param_2)) && (*pbVar11 == 0x3f)) {
              uVar6 = (ulong)iVar4;
              pbVar11 = pbVar9 + 2;
              bVar8 = false;
              uVar7 = uVar6;
            }
            else {
              uVar6 = (ulong)iVar4;
              bVar8 = true;
              uVar7 = uVar6;
            }
            goto LAB_00ea9c34;
          }
        }
      }
LAB_00ea9dac:
      FUN_00eafb98();
LAB_00ea9db0:
                    /* WARNING: Subroutine does not return */
      FUN_00eafbe4();
    }
    if (((param_1 + 1 != param_2) && (uVar1 == 0)) && (param_1[1] == '?')) {
      uVar7 = 1;
      goto LAB_00ea9bec;
    }
    uVar7 = 1;
  }
  pbVar11 = (byte *)(param_1 + 1);
  bVar8 = true;
  uVar6 = 0;
LAB_00ea9c34:
  __push_loop(this,uVar6,uVar7,param_3,(ulong)param_4,(ulong)param_5,bVar8);
  return (char *)pbVar11;
}

