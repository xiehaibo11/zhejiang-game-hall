
void FUN_00e3a7e0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *__src;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t __n;
  void *__dest;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  long lVar17;
  undefined4 local_6c;
  undefined1 local_68;
  int local_64;
  
  lVar17 = param_2[4];
  puVar12 = *(undefined8 **)(param_1 + 0x310);
  lVar11 = *param_2;
  pcVar9 = (char *)param_2[2];
  iVar7 = (*(code *)param_2[9])(param_2);
  if (iVar7 < 0) {
    local_64 = 3;
  }
  else {
    lVar11 = (long)pcVar9 - lVar11 >> 3;
    iVar4 = (int)lVar11;
    if (iVar7 <= lVar11) {
      iVar4 = iVar7;
    }
    if (iVar4 == 0) {
      return;
    }
    plVar13 = param_2 + 3;
    if ((int)*plVar13 != 0) {
      return;
    }
    plVar1 = param_2 + 0x32;
    plVar2 = param_2 + 0x26;
    plVar3 = param_2 + 0x3e;
    if ((int)param_2[0x25] == 0) {
      local_64 = (**(code **)*puVar12)(plVar1,iVar4 + 6,lVar17);
      if (((local_64 != 0) ||
          (local_64 = (**(code **)*puVar12)(plVar2,iVar4 + 6,lVar17), local_64 != 0)) ||
         (local_64 = (**(code **)*puVar12)(plVar3,4,lVar17), local_64 != 0)) goto LAB_00e3ab68;
      local_64 = 0;
    }
    (*(code *)param_2[7])(param_2);
    pcVar14 = (char *)*param_2;
    if (pcVar14 < pcVar9) {
      iVar7 = 0;
      bVar5 = false;
      iVar6 = 0;
      do {
        if (pcVar14 + 3 < pcVar9) {
          switch(pcVar14[3]) {
          case '\0':
          case '\t':
          case '\n':
          case '\f':
          case '\r':
          case ' ':
          case '%':
          case '(':
          case ')':
          case '/':
          case '<':
          case '>':
          case '[':
          case ']':
          case '{':
          case '}':
            if (*pcVar14 == 'e') {
              if ((pcVar14[1] == 'n') && (pcVar14[2] == 'd')) goto LAB_00e3ac0c;
            }
            else if (((*pcVar14 == 'd') && ((pcVar14[1] == 'e' && (iVar7 != 0)))) &&
                    (pcVar14[2] == 'f')) goto LAB_00e3ac10;
          }
        }
        (*(code *)param_2[8])(param_2);
        pcVar15 = (char *)*param_2;
        if (pcVar9 <= pcVar15) goto LAB_00e3ad7c;
        if ((int)*plVar13 != 0) {
          return;
        }
        if (*pcVar14 == '/') {
          if (pcVar9 <= pcVar14 + 2) {
LAB_00e3ad88:
            local_64 = 3;
            goto LAB_00e3ab68;
          }
          lVar11 = *(long *)(*(long *)(param_1 + 0xf0) + 0x68);
          pbVar16 = (byte *)param_2[2];
          (*(code *)param_2[7])(param_2);
          if ((pbVar16 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_00e3abf8:
            if (lVar11 != 0) {
              return;
            }
            *(undefined4 *)plVar13 = 3;
            return;
          }
          __n = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          if ((long)__n < 0) goto LAB_00e3abf8;
          __src = (void *)(*param_2 + 1);
          if ((long)pbVar16 - (long)__src <= (long)__n) goto LAB_00e3abf8;
          *param_2 = *param_2 + __n + 1;
          if ((int)param_2[3] != 0) {
            return;
          }
          if ((int)param_2[0x25] == 0) {
            pcVar14 = pcVar14 + 1;
            uVar10 = (int)pcVar15 - (int)pcVar14;
            local_64 = (*(code *)param_2[0x30])(plVar2,iVar7,pcVar14,uVar10 + 1);
            if (local_64 != 0) goto LAB_00e3ab68;
            *(undefined1 *)(*(long *)(param_2[0x2b] + (long)iVar7 * 8) + (ulong)uVar10) = 0;
            if ((*pcVar14 == '.') &&
               (iVar8 = strcmp(".notdef",*(char **)(param_2[0x2b] + (long)iVar7 * 8)), iVar8 == 0))
            {
              bVar5 = true;
              iVar6 = iVar7;
            }
            if ((iVar7 < iVar4 + 5) && (-1 < *(int *)(param_1 + 0x13c))) {
              if (__n <= (ulong)(long)*(int *)(param_1 + 0x13c)) goto LAB_00e3ad88;
              __dest = (void *)FUN_00e1388c(lVar17,__n,&local_64);
              if (local_64 != 0) goto LAB_00e3ab68;
              memcpy(__dest,__src,__n);
              (*(code *)puVar12[4])(__dest,__n,0x10ea);
              local_64 = (*(code *)param_2[0x3c])
                                   (plVar1,iVar7,(long)__dest + (long)*(int *)(param_1 + 0x13c),
                                    (int)__n - *(int *)(param_1 + 0x13c));
              FUN_00e139fc(lVar17,__dest);
            }
            else {
              local_64 = (*(code *)param_2[0x3c])(plVar1,iVar7,__src,__n & 0xffffffff);
            }
            if (local_64 != 0) goto LAB_00e3ab68;
            iVar7 = iVar7 + 1;
            local_64 = 0;
          }
        }
        (*(code *)param_2[7])(param_2);
        pcVar14 = (char *)*param_2;
      } while (pcVar14 < pcVar9);
LAB_00e3ac0c:
      if (iVar7 != 0) {
LAB_00e3ac10:
        *(int *)(param_2 + 0x25) = iVar7;
        if (bVar5) {
          pcVar9 = *(char **)param_2[0x2b];
          iVar7 = strcmp(".notdef",pcVar9);
          if (iVar7 == 0) {
            return;
          }
          local_64 = (*(code *)param_2[0x48])(plVar3,0,pcVar9,*(undefined4 *)param_2[0x2c]);
          if ((((local_64 == 0) &&
               (local_64 = (*(code *)param_2[0x48])
                                     (plVar3,1,*(undefined8 *)param_2[0x37],
                                      *(undefined4 *)param_2[0x38]), local_64 == 0)) &&
              ((local_64 = (*(code *)param_2[0x48])
                                     (plVar3,2,*(undefined8 *)(param_2[0x2b] + (long)iVar6 * 8),
                                      *(undefined4 *)(param_2[0x2c] + (long)iVar6 * 4)),
               local_64 == 0 &&
               (((local_64 = (*(code *)param_2[0x48])
                                       (plVar3,3,*(undefined8 *)(param_2[0x37] + (long)iVar6 * 8),
                                        *(undefined4 *)(param_2[0x38] + (long)iVar6 * 4)),
                 local_64 == 0 &&
                 (local_64 = (*(code *)param_2[0x30])
                                       (plVar2,iVar6,*(undefined8 *)param_2[0x43],
                                        *(undefined4 *)param_2[0x44]), local_64 == 0)) &&
                (local_64 = (*(code *)param_2[0x3c])
                                      (plVar1,iVar6,*(undefined8 *)(param_2[0x43] + 8),
                                       *(undefined4 *)(param_2[0x44] + 4)), local_64 == 0)))))) &&
             ((local_64 = (*(code *)param_2[0x30])
                                    (plVar2,0,*(undefined8 *)(param_2[0x43] + 0x10),
                                     *(undefined4 *)(param_2[0x44] + 8)), local_64 == 0 &&
              (local_64 = (*(code *)param_2[0x3c])
                                    (plVar1,0,*(undefined8 *)(param_2[0x43] + 0x18),
                                     *(undefined4 *)(param_2[0x44] + 0xc)), local_64 == 0)))) {
            return;
          }
        }
        else {
          local_68 = 0xe;
          local_6c = 0xde1f78b;
          local_64 = (*(code *)param_2[0x48])
                               (plVar3,0,*(undefined8 *)param_2[0x2b],*(undefined4 *)param_2[0x2c]);
          if (((((local_64 == 0) &&
                (local_64 = (*(code *)param_2[0x48])
                                      (plVar3,1,*(undefined8 *)param_2[0x37],
                                       *(undefined4 *)param_2[0x38]), local_64 == 0)) &&
               (local_64 = (*(code *)param_2[0x30])(plVar2,0,".notdef",8), local_64 == 0)) &&
              ((local_64 = (*(code *)param_2[0x3c])(plVar1,0,&local_6c,5), local_64 == 0 &&
               (local_64 = (*(code *)param_2[0x30])
                                     (plVar2,iVar7,*(undefined8 *)param_2[0x43],
                                      *(undefined4 *)param_2[0x44]), local_64 == 0)))) &&
             (local_64 = (*(code *)param_2[0x3c])
                                   (plVar1,iVar7,*(undefined8 *)(param_2[0x43] + 8),
                                    *(undefined4 *)(param_2[0x44] + 4)), local_64 == 0)) {
            *(int *)(param_2 + 0x25) = (int)param_2[0x25] + 1;
            return;
          }
        }
        goto LAB_00e3ab68;
      }
    }
LAB_00e3ad7c:
    local_64 = 3;
  }
LAB_00e3ab68:
  *(int *)(param_2 + 3) = local_64;
  return;
}

