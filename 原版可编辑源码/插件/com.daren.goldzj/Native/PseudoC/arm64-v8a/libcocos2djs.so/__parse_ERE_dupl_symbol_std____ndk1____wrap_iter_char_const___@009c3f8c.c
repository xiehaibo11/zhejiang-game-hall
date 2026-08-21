
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::__owns_one_state<char>*, unsigned int, unsigned int) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_ERE_dupl_symbol<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          __owns_one_state *param_4,ulong param_5,ulong param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar3 = *param_2;
  uVar2 = *(uint *)(this + 0x18) & 0x1f0;
  if ((char)bVar3 < '?') {
    if (bVar3 == 0x2a) {
      if (((param_2 + 1 == param_3) || (uVar2 != 0)) || (param_2[1] != 0x3f)) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_009c413c;
      }
      uVar6 = 0xffffffffffffffff;
      goto LAB_009c40fc;
    }
    if (bVar3 != 0x2b) {
      return param_2;
    }
    if (((param_2 + 1 == param_3) || (uVar2 != 0)) || (param_2[1] != 0x3f)) {
      uVar5 = 1;
      uVar6 = 0xffffffffffffffff;
      goto LAB_009c4144;
    }
    param_2 = param_2 + 2;
    uVar5 = 1;
LAB_009c3ff4:
    bVar7 = false;
    uVar6 = 0xffffffffffffffff;
    goto LAB_009c4314;
  }
  if (bVar3 == 0x3f) {
    if (((param_2 + 1 == param_3) || (uVar2 != 0)) || (param_2[1] != 0x3f)) {
      uVar6 = 1;
LAB_009c413c:
      uVar5 = 0;
LAB_009c4144:
      __push_loop(this,uVar5,uVar6,param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,true);
      return param_2 + 1;
    }
    uVar6 = 1;
LAB_009c40fc:
    param_2 = param_2 + 2;
    uVar5 = 0;
    bVar7 = false;
    goto LAB_009c4314;
  }
  if (bVar3 != 0x7b) {
    return param_2;
  }
  pbVar1 = param_2 + 1;
  iVar8 = 0x7b;
  pbVar9 = param_3;
  if (pbVar1 == param_3) {
LAB_009c4154:
    if (pbVar9 != pbVar1) {
      if (pbVar9 == param_3) goto LAB_009c432c;
      if (*pbVar9 == 0x2c) {
        pbVar1 = pbVar9 + 1;
        if (pbVar1 != param_3) {
          bVar3 = *pbVar1;
          if (bVar3 == 0x7d) {
            param_2 = pbVar9 + 2;
            if (((uVar2 == 0) && (param_2 != param_3)) && (*param_2 == 0x3f)) {
              param_2 = pbVar9 + 3;
              uVar5 = (ulong)iVar8;
              goto LAB_009c3ff4;
            }
            uVar6 = 0xffffffffffffffff;
          }
          else {
            if ((((bVar3 & 0xf8) != 0x30) && ((bVar3 & 0xfe) != 0x38)) ||
               (iVar4 = bVar3 - 0x30, iVar4 == -1)) goto LAB_009c432c;
            for (pbVar9 = pbVar9 + 2;
                ((pbVar10 = param_3, pbVar9 != param_3 &&
                 ((bVar3 = *pbVar9, pbVar10 = pbVar9, (bVar3 & 0xf8) == 0x30 ||
                  ((bVar3 & 0xfe) == 0x38)))) && (bVar3 - 0x30 != -1)); pbVar9 = pbVar9 + 1) {
              if (0xccccccb < iVar4) goto LAB_009c4328;
              iVar4 = (bVar3 - 0x30) + iVar4 * 10;
            }
            if (((pbVar10 == pbVar1) || (pbVar10 == param_3)) || (*pbVar10 != 0x7d))
            goto LAB_009c432c;
            if (iVar4 < iVar8) goto LAB_009c4328;
            param_2 = pbVar10 + 1;
            if (((uVar2 == 0) && (param_2 != param_3)) && (*param_2 == 0x3f)) {
              param_2 = pbVar10 + 2;
              uVar5 = (ulong)iVar8;
              uVar6 = (ulong)iVar4;
              bVar7 = false;
              goto LAB_009c4314;
            }
            uVar6 = (ulong)iVar4;
          }
          uVar5 = (ulong)iVar8;
          bVar7 = true;
LAB_009c4314:
          __push_loop(this,uVar5,uVar6,param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,bVar7);
          return param_2;
        }
      }
      else if (*pbVar9 == 0x7d) {
        param_2 = pbVar9 + 1;
        if (((uVar2 == 0) && (param_2 != param_3)) && (*param_2 == 0x3f)) {
          uVar5 = (ulong)iVar8;
          param_2 = pbVar9 + 2;
          bVar7 = false;
          uVar6 = uVar5;
        }
        else {
          uVar5 = (ulong)iVar8;
          bVar7 = true;
          uVar6 = uVar5;
        }
        goto LAB_009c4314;
      }
    }
  }
  else {
    bVar3 = *pbVar1;
    if ((((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) &&
       (iVar8 = bVar3 - 0x30, iVar8 != -1)) {
      for (param_2 = param_2 + 2;
          (pbVar9 = param_3, param_2 != param_3 &&
          (((bVar3 = *param_2, pbVar9 = param_2, (bVar3 & 0xf8) == 0x30 || ((bVar3 & 0xfe) == 0x38))
           && (bVar3 - 0x30 != -1)))); param_2 = param_2 + 1) {
        if (0xccccccb < iVar8) goto LAB_009c4328;
        iVar8 = (bVar3 - 0x30) + iVar8 * 10;
      }
      goto LAB_009c4154;
    }
  }
LAB_009c4328:
  FUN_00869504();
LAB_009c432c:
                    /* WARNING: Subroutine does not return */
  FUN_00869510();
}

