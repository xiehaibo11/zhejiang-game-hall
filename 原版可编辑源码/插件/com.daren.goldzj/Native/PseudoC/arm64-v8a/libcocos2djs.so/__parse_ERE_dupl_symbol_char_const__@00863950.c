
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
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  cVar3 = *param_1;
  uVar1 = *(uint *)(this + 0x18) & 0x1f0;
  if (cVar3 < '?') {
    if (cVar3 == '*') {
      if (((param_1 + 1 == param_2) || (uVar1 != 0)) || (param_1[1] != '?')) {
        puVar6 = operator_new(0x10);
        lVar8 = *(long *)(this + 0x38);
        uVar9 = *(undefined8 *)(lVar8 + 8);
        *puVar6 = &PTR____owns_one_state_01c66590;
        puVar6[1] = uVar9;
        *(undefined8 *)(lVar8 + 8) = 0;
        puVar7 = operator_new(0x38);
        iVar13 = *(int *)(this + 0x20);
        uVar9 = *(undefined8 *)(param_3 + 8);
        puVar7[2] = puVar6;
        uVar15 = 0xffffffffffffffff;
        uVar14 = 0;
        goto LAB_00863d40;
      }
      puVar6 = operator_new(0x10);
      lVar8 = *(long *)(this + 0x38);
      uVar9 = *(undefined8 *)(lVar8 + 8);
      *puVar6 = &PTR____owns_one_state_01c66590;
      puVar6[1] = uVar9;
      *(undefined8 *)(lVar8 + 8) = 0;
      puVar7 = operator_new(0x38);
      iVar13 = *(int *)(this + 0x20);
      uVar9 = *(undefined8 *)(param_3 + 8);
      puVar7[2] = puVar6;
      uVar15 = 0xffffffffffffffff;
      uVar14 = 0;
      goto LAB_00863c40;
    }
    if (cVar3 != '+') {
      return param_1;
    }
    if (((param_1 + 1 != param_2) && (uVar1 == 0)) && (param_1[1] == '?')) {
      puVar6 = operator_new(0x10);
      lVar8 = *(long *)(this + 0x38);
      uVar9 = *(undefined8 *)(lVar8 + 8);
      *puVar6 = &PTR____owns_one_state_01c66590;
      puVar6[1] = uVar9;
      *(undefined8 *)(lVar8 + 8) = 0;
      puVar7 = operator_new(0x38);
      iVar13 = *(int *)(this + 0x20);
      uVar9 = *(undefined8 *)(param_3 + 8);
      puVar7[2] = puVar6;
      uVar15 = 0xffffffffffffffff;
      uVar14 = 1;
      goto LAB_00863c40;
    }
    puVar6 = operator_new(0x10);
    lVar8 = *(long *)(this + 0x38);
    uVar9 = *(undefined8 *)(lVar8 + 8);
    *puVar6 = &PTR____owns_one_state_01c66590;
    puVar6[1] = uVar9;
    *(undefined8 *)(lVar8 + 8) = 0;
    puVar7 = operator_new(0x38);
    iVar13 = *(int *)(this + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 8);
    puVar7[2] = puVar6;
    uVar15 = 0xffffffffffffffff;
    uVar14 = 1;
LAB_00863d40:
    pbVar12 = (byte *)(param_1 + 1);
    *(uint *)(puVar7 + 6) = param_5;
    *(undefined1 *)((long)puVar7 + 0x34) = 1;
  }
  else {
    if (cVar3 != '?') {
      if (cVar3 != '{') {
        return param_1;
      }
      pbVar12 = (byte *)(param_1 + 1);
      if (((pbVar12 != (byte *)param_2) &&
          ((bVar2 = *pbVar12, (bVar2 & 0xf8) == 0x30 || ((bVar2 & 0xfe) == 0x38)))) &&
         (iVar4 = bVar2 - 0x30, iVar4 != -1)) {
        for (pbVar11 = (byte *)(param_1 + 2);
            ((pbVar10 = (byte *)param_2, pbVar11 != (byte *)param_2 &&
             ((bVar2 = *pbVar11, pbVar10 = pbVar11, (bVar2 & 0xf8) == 0x30 ||
              ((bVar2 & 0xfe) == 0x38)))) && (bVar2 - 0x30 != -1)); pbVar11 = pbVar11 + 1) {
          if (0xccccccb < iVar4) goto LAB_008640f0;
          iVar4 = (bVar2 - 0x30) + iVar4 * 10;
        }
        if (pbVar10 != pbVar12) {
          if (pbVar10 == (byte *)param_2) goto LAB_008640f4;
          if (*pbVar10 == 0x2c) {
            pbVar12 = pbVar10 + 1;
            if (pbVar12 != (byte *)param_2) {
              bVar2 = *pbVar12;
              if (bVar2 == 0x7d) {
                pbVar12 = pbVar10 + 2;
                if (((uVar1 == 0) && (pbVar12 != (byte *)param_2)) && (*pbVar12 == 0x3f)) {
                  pbVar12 = pbVar10 + 3;
                  puVar6 = operator_new(0x10);
                  lVar8 = *(long *)(this + 0x38);
                  uVar9 = *(undefined8 *)(lVar8 + 8);
                  *puVar6 = &PTR____owns_one_state_01c66590;
                  puVar6[1] = uVar9;
                  *(undefined8 *)(lVar8 + 8) = 0;
                  puVar7 = operator_new(0x38);
                  iVar13 = *(int *)(this + 0x20);
                  uVar9 = *(undefined8 *)(param_3 + 8);
                  puVar7[2] = puVar6;
                  puVar7[3] = (long)iVar4;
                  *(uint *)(puVar7 + 6) = param_5;
                  *(undefined1 *)((long)puVar7 + 0x34) = 0;
                  puVar7[4] = 0xffffffffffffffff;
                }
                else {
                  puVar6 = operator_new(0x10);
                  lVar8 = *(long *)(this + 0x38);
                  uVar9 = *(undefined8 *)(lVar8 + 8);
                  *puVar6 = &PTR____owns_one_state_01c66590;
                  puVar6[1] = uVar9;
                  *(undefined8 *)(lVar8 + 8) = 0;
                  puVar7 = operator_new(0x38);
                  iVar13 = *(int *)(this + 0x20);
                  uVar9 = *(undefined8 *)(param_3 + 8);
                  puVar7[2] = puVar6;
                  puVar7[3] = (long)iVar4;
                  *(uint *)(puVar7 + 6) = param_5;
                  puVar7[4] = 0xffffffffffffffff;
                  *(undefined1 *)((long)puVar7 + 0x34) = 1;
                }
                goto LAB_00864044;
              }
              if ((((bVar2 & 0xf8) != 0x30) && ((bVar2 & 0xfe) != 0x38)) ||
                 (iVar5 = bVar2 - 0x30, iVar5 == -1)) goto LAB_008640f4;
              for (pbVar10 = pbVar10 + 2;
                  ((pbVar11 = (byte *)param_2, pbVar10 != (byte *)param_2 &&
                   ((bVar2 = *pbVar10, pbVar11 = pbVar10, (bVar2 & 0xf8) == 0x30 ||
                    ((bVar2 & 0xfe) == 0x38)))) && (bVar2 - 0x30 != -1)); pbVar10 = pbVar10 + 1) {
                if (0xccccccb < iVar5) goto LAB_008640f0;
                iVar5 = (bVar2 - 0x30) + iVar5 * 10;
              }
              if (((pbVar11 == pbVar12) || (pbVar11 == (byte *)param_2)) || (*pbVar11 != 0x7d))
              goto LAB_008640f4;
              if (iVar4 <= iVar5) {
                pbVar12 = pbVar11 + 1;
                if (((uVar1 == 0) && (pbVar12 != (byte *)param_2)) && (*pbVar12 == 0x3f)) {
                  pbVar12 = pbVar11 + 2;
                  puVar6 = operator_new(0x10);
                  lVar8 = *(long *)(this + 0x38);
                  uVar9 = *(undefined8 *)(lVar8 + 8);
                  *puVar6 = &PTR____owns_one_state_01c66590;
                  puVar6[1] = uVar9;
                  *(undefined8 *)(lVar8 + 8) = 0;
                  puVar7 = operator_new(0x38);
                  iVar13 = *(int *)(this + 0x20);
                  uVar9 = *(undefined8 *)(param_3 + 8);
                  puVar7[2] = puVar6;
                  puVar7[3] = (long)iVar4;
                  puVar7[4] = (long)iVar5;
                  *(uint *)(puVar7 + 6) = param_5;
                  *(undefined1 *)((long)puVar7 + 0x34) = 0;
                }
                else {
                  puVar6 = operator_new(0x10);
                  lVar8 = *(long *)(this + 0x38);
                  uVar9 = *(undefined8 *)(lVar8 + 8);
                  *puVar6 = &PTR____owns_one_state_01c66590;
                  puVar6[1] = uVar9;
                  *(undefined8 *)(lVar8 + 8) = 0;
                  puVar7 = operator_new(0x38);
                  iVar13 = *(int *)(this + 0x20);
                  uVar9 = *(undefined8 *)(param_3 + 8);
                  puVar7[2] = puVar6;
                  puVar7[3] = (long)iVar4;
                  puVar7[4] = (long)iVar5;
                  *(uint *)(puVar7 + 6) = param_5;
                  *(undefined1 *)((long)puVar7 + 0x34) = 1;
                }
                *puVar7 = &PTR____owns_two_states_01c66a28;
                puVar7[1] = uVar9;
                *(int *)(puVar7 + 5) = iVar13;
                *(uint *)((long)puVar7 + 0x2c) = param_4;
                *(undefined8 *)(param_3 + 8) = 0;
                puVar6 = operator_new(0x10);
                iVar13 = iVar13 + 1;
                goto LAB_00863d78;
              }
            }
          }
          else if (*pbVar10 == 0x7d) {
            pbVar12 = pbVar10 + 1;
            if (((uVar1 == 0) && (pbVar12 != (byte *)param_2)) && (*pbVar12 == 0x3f)) {
              pbVar12 = pbVar10 + 2;
              puVar6 = operator_new(0x10);
              lVar8 = *(long *)(this + 0x38);
              uVar9 = *(undefined8 *)(lVar8 + 8);
              *puVar6 = &PTR____owns_one_state_01c66590;
              puVar6[1] = uVar9;
              *(undefined8 *)(lVar8 + 8) = 0;
              puVar7 = operator_new(0x38);
              iVar13 = *(int *)(this + 0x20);
              uVar9 = *(undefined8 *)(param_3 + 8);
              puVar7[2] = puVar6;
              puVar7[3] = (long)iVar4;
              puVar7[4] = (long)iVar4;
              *(uint *)(puVar7 + 6) = param_5;
              *(undefined1 *)((long)puVar7 + 0x34) = 0;
            }
            else {
              puVar6 = operator_new(0x10);
              lVar8 = *(long *)(this + 0x38);
              uVar9 = *(undefined8 *)(lVar8 + 8);
              *puVar6 = &PTR____owns_one_state_01c66590;
              puVar6[1] = uVar9;
              *(undefined8 *)(lVar8 + 8) = 0;
              puVar7 = operator_new(0x38);
              iVar13 = *(int *)(this + 0x20);
              uVar9 = *(undefined8 *)(param_3 + 8);
              puVar7[2] = puVar6;
              puVar7[3] = (long)iVar4;
              puVar7[4] = (long)iVar4;
              *(uint *)(puVar7 + 6) = param_5;
              *(undefined1 *)((long)puVar7 + 0x34) = 1;
            }
LAB_00864044:
            *puVar7 = &PTR____owns_two_states_01c66a28;
            puVar7[1] = uVar9;
            *(int *)(puVar7 + 5) = iVar13;
            *(uint *)((long)puVar7 + 0x2c) = param_4;
            *(undefined8 *)(param_3 + 8) = 0;
            puVar6 = operator_new(0x10);
            iVar13 = iVar13 + 1;
            goto LAB_00863d78;
          }
        }
      }
LAB_008640f0:
      FUN_00869504();
LAB_008640f4:
                    /* WARNING: Subroutine does not return */
      FUN_00869510();
    }
    if (((param_1 + 1 == param_2) || (uVar1 != 0)) || (param_1[1] != '?')) {
      puVar6 = operator_new(0x10);
      lVar8 = *(long *)(this + 0x38);
      uVar9 = *(undefined8 *)(lVar8 + 8);
      *puVar6 = &PTR____owns_one_state_01c66590;
      puVar6[1] = uVar9;
      *(undefined8 *)(lVar8 + 8) = 0;
      puVar7 = operator_new(0x38);
      iVar13 = *(int *)(this + 0x20);
      uVar9 = *(undefined8 *)(param_3 + 8);
      puVar7[2] = puVar6;
      uVar15 = 1;
      uVar14 = 0;
      goto LAB_00863d40;
    }
    puVar6 = operator_new(0x10);
    lVar8 = *(long *)(this + 0x38);
    uVar9 = *(undefined8 *)(lVar8 + 8);
    *puVar6 = &PTR____owns_one_state_01c66590;
    puVar6[1] = uVar9;
    *(undefined8 *)(lVar8 + 8) = 0;
    puVar7 = operator_new(0x38);
    iVar13 = *(int *)(this + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 8);
    puVar7[2] = puVar6;
    uVar15 = 1;
    uVar14 = 0;
LAB_00863c40:
    pbVar12 = (byte *)(param_1 + 2);
    *(uint *)(puVar7 + 6) = param_5;
    *(undefined1 *)((long)puVar7 + 0x34) = 0;
  }
  *puVar7 = &PTR____owns_two_states_01c66a28;
  puVar7[1] = uVar9;
  *(int *)(puVar7 + 5) = iVar13;
  *(uint *)((long)puVar7 + 0x2c) = param_4;
  puVar7[4] = uVar15;
  puVar7[3] = uVar14;
  *(undefined8 *)(param_3 + 8) = 0;
  puVar6 = operator_new(0x10);
  iVar13 = iVar13 + 1;
LAB_00863d78:
  *puVar6 = &PTR_FUN_01c66ab8;
  puVar6[1] = puVar7;
  *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar6;
  *(undefined8 *)(this + 0x38) = puVar7[2];
  *(undefined8 **)(param_3 + 8) = puVar7;
  *(int *)(this + 0x20) = iVar13;
  return (char *)pbVar12;
}

