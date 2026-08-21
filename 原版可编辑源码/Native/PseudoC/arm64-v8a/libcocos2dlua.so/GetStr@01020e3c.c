
/* tinyxml2::StrPair::GetStr() */

void __thiscall tinyxml2::StrPair::GetStr(StrPair *this)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
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
    uVar4 = *(uint *)this ^ 0x100;
    *(uint *)this = uVar4;
    uVar5 = 0;
    if (uVar4 != 0) {
      pcVar8 = *(char **)(this + 8);
      pcVar10 = pcVar8;
      if (pcVar8 < *(char **)(this + 0x10)) {
        pcVar7 = pcVar8;
        pcVar9 = pcVar8;
        if ((uVar4 >> 1 & 1) == 0) goto LAB_01020f08;
        do {
          if (*pcVar8 == '\n') {
            pcVar7 = pcVar8 + 1;
            cVar1 = *pcVar7;
            pcVar10 = pcVar9 + 1;
            *pcVar9 = '\n';
            if (cVar1 == '\r') {
              pcVar7 = pcVar8 + 2;
            }
          }
          else {
            pcVar7 = pcVar8;
            if (*pcVar8 != '\r') goto LAB_01020f08;
            pcVar7 = pcVar8 + 1;
            cVar1 = *pcVar7;
            pcVar10 = pcVar9 + 1;
            *pcVar9 = '\n';
            if (cVar1 == '\n') {
              pcVar7 = pcVar8 + 2;
            }
          }
          while( true ) {
            if (*(char **)(this + 0x10) <= pcVar7) goto LAB_01021094;
            uVar4 = *(uint *)this;
            pcVar8 = pcVar7;
            pcVar9 = pcVar10;
            if ((uVar4 >> 1 & 1) != 0) break;
LAB_01020f08:
            if (((uVar4 & 1) == 0) || (*pcVar7 != '&')) {
              pcVar10 = pcVar9 + 1;
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            }
            else {
              pcVar8 = pcVar7 + 1;
              pcVar10 = pcVar9;
              if (*pcVar8 == '#') {
                local_78[8] = '\0';
                local_78[9] = '\0';
                    /* catch() { ... } // from try @ 01020fbc with catch @ 01020f30 */
                local_78[0] = '\0';
                local_78[1] = '\0';
                local_78[2] = '\0';
                local_78[3] = '\0';
                local_78[4] = '\0';
                local_78[5] = '\0';
                local_78[6] = '\0';
                local_78[7] = '\0';
                pcVar7 = (char *)XMLUtil::GetCharacterRef(pcVar7,local_78,&local_7c);
                if (0 < local_7c) {
                  lVar6 = 0;
                  do {
                    pcVar9[lVar6] = local_78[lVar6];
                    lVar6 = lVar6 + 1;
                  } while (lVar6 < local_7c);
                  pcVar10 = pcVar9 + lVar6;
                }
              }
              else {
                iVar3 = strncmp(pcVar8,"quot",4);
                if ((iVar3 == 0) && (pcVar7[5] == ';')) {
                  uVar4 = 0;
                  lVar6 = 6;
LAB_0102105c:
                  pcVar7 = pcVar7 + lVar6;
                  *pcVar9 = (&DAT_0172732c)[(ulong)uVar4 * 0x10];
                  pcVar10 = pcVar9 + 1;
                }
                else {
                    /* try { // try from 01020fb4 to 01120fbb has its CatchHandler @ 0102103c */
                  iVar3 = strncmp(pcVar8,"amp",3);
                    /* try { // try from 01020fbc to 01121057 has its CatchHandler @ 01020f30 */
                  if ((iVar3 == 0) && (pcVar7[4] == ';')) {
                    uVar4 = 1;
                    lVar6 = 5;
                    goto LAB_0102105c;
                  }
                  iVar3 = strncmp(pcVar8,"apos",4);
                  if ((iVar3 == 0) && (pcVar7[5] == ';')) {
                    uVar4 = 2;
                    lVar6 = 6;
                    goto LAB_0102105c;
                  }
                  iVar3 = strncmp(pcVar8,"lt",2);
                  if ((iVar3 == 0) && (pcVar7[3] == ';')) {
                    uVar4 = 3;
LAB_01021058:
                    /* catch() { ... } // from try @ 01021084 with catch @ 01021058 */
                    lVar6 = 4;
                    goto LAB_0102105c;
                  }
                    /* catch() { ... } // from try @ 01020fb4 with catch @ 0102103c */
                  iVar3 = strncmp(pcVar8,"gt",2);
                  if ((iVar3 == 0) && (pcVar7[3] == ';')) {
                    uVar4 = 4;
                    goto LAB_01021058;
                  }
                  uVar4 = 5;
                }
                    /* try { // try from 0102107c to 01121083 has its CatchHandler @ 010210d0 */
                if (uVar4 == 5) {
                  pcVar7 = pcVar7 + 1;
                    /* try { // try from 01021084 to 011210eb has its CatchHandler @ 01021058 */
                  pcVar10 = pcVar10 + 1;
                }
              }
            }
          }
        } while( true );
      }
LAB_01021094:
      *pcVar10 = '\0';
      uVar5 = *(uint *)this;
      if ((uVar5 >> 2 & 1) != 0) {
        CollapseWhitespace(this);
        uVar5 = *(uint *)this;
      }
    }
    *(uint *)this = uVar5 & 0x200;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 0102107c with catch @ 010210d0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 8));
}

