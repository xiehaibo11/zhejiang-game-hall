
/* tinyxml2::StrPair::GetStr() */

void __thiscall tinyxml2::StrPair::GetStr(StrPair *this)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int local_7c;
  char local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((byte)this[1] & 1) != 0) {
    **(undefined1 **)(this + 0x10) = 0;
    uVar5 = *(uint *)this ^ 0x100;
    *(uint *)this = uVar5;
    uVar6 = 0;
    if (uVar5 != 0) {
      pcVar4 = *(char **)(this + 8);
      pcVar9 = pcVar4;
      if (pcVar4 < *(char **)(this + 0x10)) {
        pcVar8 = pcVar4;
        pcVar10 = pcVar4;
        if ((uVar5 >> 1 & 1) != 0) goto LAB_00911a50;
        do {
          if (((uVar5 & 1) == 0) || (*pcVar4 != '&')) {
            pcVar9 = pcVar10 + 1;
            *pcVar10 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          }
          else {
            pcVar8 = pcVar4 + 1;
            pcVar9 = pcVar10;
            if (*pcVar8 == '#') {
              local_78[8] = '\0';
              local_78[9] = '\0';
              local_78[0] = '\0';
              local_78[1] = '\0';
              local_78[2] = '\0';
              local_78[3] = '\0';
              local_78[4] = '\0';
              local_78[5] = '\0';
              local_78[6] = '\0';
              local_78[7] = '\0';
              pcVar4 = (char *)XMLUtil::GetCharacterRef(pcVar4,local_78,&local_7c);
              if (0 < local_7c) {
                lVar7 = 0;
                do {
                  pcVar10[lVar7] = local_78[lVar7];
                  lVar7 = lVar7 + 1;
                } while (lVar7 < local_7c);
                pcVar9 = pcVar10 + lVar7;
              }
            }
            else {
              iVar3 = strncmp(pcVar8,"quot",4);
              if ((iVar3 == 0) && (pcVar4[5] == ';')) {
                uVar5 = 0;
                lVar7 = 6;
LAB_00911be0:
                pcVar4 = pcVar4 + lVar7;
                pcVar8 = pcVar4 + 1;
                *pcVar10 = (&DAT_01c68bd4)[(ulong)uVar5 * 0x10];
                pcVar9 = pcVar10 + 1;
              }
              else {
                iVar3 = strncmp(pcVar8,"amp",3);
                if ((iVar3 == 0) && (pcVar4[4] == ';')) {
                  uVar5 = 1;
                  lVar7 = 5;
                  goto LAB_00911be0;
                }
                iVar3 = strncmp(pcVar8,"apos",4);
                if ((iVar3 == 0) && (pcVar4[5] == ';')) {
                  uVar5 = 2;
                  lVar7 = 6;
                  goto LAB_00911be0;
                }
                iVar3 = strncmp(pcVar8,"lt",2);
                if ((iVar3 == 0) && (pcVar4[3] == ';')) {
                  uVar5 = 3;
LAB_00911bdc:
                  lVar7 = 4;
                  goto LAB_00911be0;
                }
                iVar3 = strncmp(pcVar8,"gt",2);
                if ((iVar3 == 0) && (pcVar4[3] == ';')) {
                  uVar5 = 4;
                  goto LAB_00911bdc;
                }
                uVar5 = 5;
              }
              if (uVar5 == 5) {
                pcVar9 = pcVar9 + 1;
                pcVar4 = pcVar8;
              }
            }
          }
          while( true ) {
            if (*(char **)(this + 0x10) <= pcVar4) goto LAB_00911c1c;
            uVar5 = *(uint *)this;
            pcVar8 = pcVar4;
            pcVar10 = pcVar9;
            if ((uVar5 >> 1 & 1) == 0) break;
LAB_00911a50:
            if (*pcVar8 == '\n') {
              pcVar4 = pcVar8 + 1;
              cVar1 = *pcVar4;
              pcVar9 = pcVar10 + 1;
              *pcVar10 = '\n';
              if (cVar1 == '\r') {
                pcVar4 = pcVar8 + 2;
              }
            }
            else {
              pcVar4 = pcVar8;
              if (*pcVar8 != '\r') break;
              pcVar4 = pcVar8 + 1;
              cVar1 = *pcVar4;
              pcVar9 = pcVar10 + 1;
              *pcVar10 = '\n';
              if (cVar1 == '\n') {
                pcVar4 = pcVar8 + 2;
              }
            }
          }
        } while( true );
      }
LAB_00911c1c:
      *pcVar9 = '\0';
      uVar6 = *(uint *)this;
      if ((uVar6 >> 2 & 1) != 0) {
        CollapseWhitespace(this);
        uVar6 = *(uint *)this;
      }
    }
    *(uint *)this = uVar6 & 0x200;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 8));
}

