
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_RE_dupl_symbol<char const*>(char const*, char const*,
   std::__ndk1::__owns_one_state<char>*, unsigned int, unsigned int) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_RE_dupl_symbol<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __owns_one_state *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (*param_1 == '*') {
    puVar3 = operator_new(0x10);
    lVar5 = *(long *)(this + 0x38);
    uVar7 = *(undefined8 *)(lVar5 + 8);
    *puVar3 = &PTR____owns_one_state_01c66590;
    puVar3[1] = uVar7;
    *(undefined8 *)(lVar5 + 8) = 0;
    puVar4 = operator_new(0x38);
    iVar6 = *(int *)(this + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 8);
    puVar4[2] = puVar3;
    *(uint *)((long)puVar4 + 0x2c) = param_4;
    *(uint *)(puVar4 + 6) = param_5;
    *(undefined1 *)((long)puVar4 + 0x34) = 1;
    *puVar4 = &PTR____owns_two_states_01c66a28;
    puVar4[1] = uVar7;
    *(int *)(puVar4 + 5) = iVar6;
    puVar4[4] = 0xffffffffffffffff;
    puVar4[3] = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    puVar3 = operator_new(0x10);
    iVar6 = iVar6 + 1;
    pbVar11 = (byte *)(param_1 + 1);
    goto LAB_00869cc4;
  }
  if (param_1 + 1 == param_2) {
    return param_1;
  }
  if (*param_1 != '\\') {
    return param_1;
  }
  pbVar8 = (byte *)(param_1 + 2);
  if (param_1[1] != '{') {
    pbVar8 = (byte *)param_1;
  }
  if (pbVar8 == (byte *)param_1) {
    return param_1;
  }
  if ((pbVar8 != (byte *)param_2) &&
     (((bVar1 = param_1[(ulong)(param_1[1] == '{') * 2], (bVar1 & 0xf8) == 0x30 ||
       ((bVar1 & 0xfe) == 0x38)) && (iVar2 = bVar1 - 0x30, pbVar11 = pbVar8, iVar2 != -1)))) {
    while ((pbVar11 = pbVar11 + 1, pbVar10 = (byte *)param_2, pbVar11 != (byte *)param_2 &&
           (((bVar1 = *pbVar11, pbVar10 = pbVar11, (bVar1 & 0xf8) == 0x30 ||
             ((bVar1 & 0xfe) == 0x38)) && (bVar1 - 0x30 != -1))))) {
      if (0xccccccb < iVar2) goto LAB_0086a058;
      iVar2 = (bVar1 - 0x30) + iVar2 * 10;
    }
    if (pbVar10 != pbVar8) {
      if (pbVar10 == (byte *)param_2) goto LAB_0086a05c;
      pbVar8 = pbVar10 + 1;
      if (*pbVar10 == 0x2c) {
        if (pbVar8 == (byte *)param_2) goto LAB_0086a05c;
        bVar1 = *pbVar8;
        if ((((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) &&
           (iVar9 = bVar1 - 0x30, iVar9 != -1)) {
          for (pbVar8 = pbVar10 + 2; pbVar8 != (byte *)param_2; pbVar8 = pbVar8 + 1) {
            bVar1 = *pbVar8;
            if ((((bVar1 & 0xf8) != 0x30) && ((bVar1 & 0xfe) != 0x38)) || (bVar1 - 0x30 == -1))
            goto LAB_00869f00;
            if (0xccccccb < iVar9) goto LAB_0086a058;
            iVar9 = (bVar1 - 0x30) + iVar9 * 10;
          }
          goto LAB_0086a05c;
        }
        iVar9 = -1;
LAB_00869f00:
        if (((pbVar8 == (byte *)param_2) || (pbVar8 + 1 == (byte *)param_2)) || (*pbVar8 != 0x5c))
        goto LAB_0086a05c;
        pbVar11 = pbVar8 + 2;
        if (pbVar8[1] != 0x7d) {
          pbVar11 = pbVar8;
        }
        if (pbVar11 == pbVar8) goto LAB_0086a05c;
        if (iVar9 != -1) {
          if (iVar2 <= iVar9) {
            puVar3 = operator_new(0x10);
            lVar5 = *(long *)(this + 0x38);
            uVar7 = *(undefined8 *)(lVar5 + 8);
            *puVar3 = &PTR____owns_one_state_01c66590;
            puVar3[1] = uVar7;
            *(undefined8 *)(lVar5 + 8) = 0;
            puVar4 = operator_new(0x38);
            iVar6 = *(int *)(this + 0x20);
            uVar7 = *(undefined8 *)(param_3 + 8);
            puVar4[2] = puVar3;
            puVar4[3] = (long)iVar2;
            puVar4[4] = (long)iVar9;
            *(uint *)((long)puVar4 + 0x2c) = param_4;
            *(uint *)(puVar4 + 6) = param_5;
            *(undefined1 *)((long)puVar4 + 0x34) = 1;
            *puVar4 = &PTR____owns_two_states_01c66a28;
            puVar4[1] = uVar7;
            *(int *)(puVar4 + 5) = iVar6;
            *(undefined8 *)(param_3 + 8) = 0;
            puVar3 = operator_new(0x10);
            iVar6 = iVar6 + 1;
            goto LAB_00869cc4;
          }
          goto LAB_0086a058;
        }
        puVar3 = operator_new(0x10);
        lVar5 = *(long *)(this + 0x38);
        uVar7 = *(undefined8 *)(lVar5 + 8);
        *puVar3 = &PTR____owns_one_state_01c66590;
        puVar3[1] = uVar7;
        *(undefined8 *)(lVar5 + 8) = 0;
        puVar4 = operator_new(0x38);
        iVar6 = *(int *)(this + 0x20);
        uVar7 = *(undefined8 *)(param_3 + 8);
        puVar4[2] = puVar3;
        puVar4[3] = (long)iVar2;
        *(uint *)(puVar4 + 6) = param_5;
        puVar4[4] = 0xffffffffffffffff;
        *(undefined1 *)((long)puVar4 + 0x34) = 1;
      }
      else {
        if ((*pbVar10 != 0x5c) || (pbVar8 == (byte *)param_2)) goto LAB_0086a05c;
        pbVar11 = pbVar10 + 2;
        if (pbVar10[1] != 0x7d) {
          pbVar11 = pbVar10;
        }
        if (pbVar11 == pbVar10) goto LAB_0086a05c;
        puVar3 = operator_new(0x10);
        lVar5 = *(long *)(this + 0x38);
        uVar7 = *(undefined8 *)(lVar5 + 8);
        *puVar3 = &PTR____owns_one_state_01c66590;
        puVar3[1] = uVar7;
        *(undefined8 *)(lVar5 + 8) = 0;
        puVar4 = operator_new(0x38);
        iVar6 = *(int *)(this + 0x20);
        uVar7 = *(undefined8 *)(param_3 + 8);
        puVar4[2] = puVar3;
        puVar4[3] = (long)iVar2;
        puVar4[4] = (long)iVar2;
        *(uint *)(puVar4 + 6) = param_5;
        *(undefined1 *)((long)puVar4 + 0x34) = 1;
      }
      *puVar4 = &PTR____owns_two_states_01c66a28;
      puVar4[1] = uVar7;
      *(int *)(puVar4 + 5) = iVar6;
      *(uint *)((long)puVar4 + 0x2c) = param_4;
      *(undefined8 *)(param_3 + 8) = 0;
      puVar3 = operator_new(0x10);
      iVar6 = iVar6 + 1;
LAB_00869cc4:
      *puVar3 = &PTR_FUN_01c66ab8;
      puVar3[1] = puVar4;
      *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar3;
      *(undefined8 *)(this + 0x38) = puVar4[2];
      *(undefined8 **)(param_3 + 8) = puVar4;
      *(int *)(this + 0x20) = iVar6;
      return (char *)pbVar11;
    }
  }
LAB_0086a058:
  FUN_00869504();
LAB_0086a05c:
                    /* WARNING: Subroutine does not return */
  FUN_00869510();
}

