
/* tinyxml2::XMLAttribute::ParseDeep(char*, bool) */

void __thiscall tinyxml2::XMLAttribute::ParseDeep(XMLAttribute *this,char *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  size_t __n;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  char local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (char *)0x0) &&
     (uVar7 = (uint)(byte)*param_1, pbVar6 = (byte *)param_1, *param_1 != 0)) {
    do {
      if ((-1 < (char)uVar7) &&
         (((iVar2 = isalnum(uVar7), iVar2 == 0 && (uVar7 != 0x5f)) && (uVar7 != 0x3a)))) {
        if (uVar7 == 0x2d) {
          if (pbVar6 <= param_1) break;
        }
        else if ((pbVar6 <= param_1) || (uVar7 != 0x2e)) break;
      }
      pbVar6 = pbVar6 + 1;
      uVar7 = (uint)*pbVar6;
    } while (uVar7 != 0);
    if (param_1 < pbVar6) {
      if ((((byte)this[9] >> 1 & 1) != 0) && (*(void **)(this + 0x10) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(char **)(this + 0x10) = param_1;
      *(byte **)(this + 0x18) = pbVar6;
      *(undefined4 *)(this + 8) = 0x100;
      uVar7 = (uint)(char)*pbVar6;
      if ('\0' < (char)*pbVar6) {
        do {
          pbVar6 = pbVar6 + 1;
          iVar2 = isspace(uVar7 & 0xff);
          if (iVar2 == 0) {
            if ((uVar7 & 0xff) == 0x3d) {
              uVar7 = (uint)(char)*pbVar6;
              if ((char)*pbVar6 < '\0') goto LAB_009143b8;
              goto LAB_009143a4;
            }
            break;
          }
          uVar7 = (uint)(char)*pbVar6;
        } while (-1 < (int)uVar7);
      }
    }
  }
  goto LAB_00914414;
  while( true ) {
    pbVar6 = pbVar6 + 1;
    uVar7 = (uint)(char)*pbVar6;
    if ((int)uVar7 < 0) break;
LAB_009143a4:
    iVar2 = isspace(uVar7 & 0xff);
    if (iVar2 == 0) break;
  }
LAB_009143b8:
  if (((uVar7 & 0xff) == 0x27) || ((uVar7 & 0xff) == 0x22)) {
    local_5c[0] = (char)uVar7;
    local_5c[1] = 0;
    __n = strlen(local_5c);
    pbVar6 = pbVar6 + 1;
    uVar4 = (uint)*pbVar6;
    pbVar3 = pbVar6;
    if (*pbVar6 != 0) {
      do {
        if ((uVar4 == (uVar7 & 0xff)) && (iVar2 = strncmp((char *)pbVar3,local_5c,__n), iVar2 == 0))
        {
          if ((((byte)this[0x21] >> 1 & 1) != 0) && (*(void **)(this + 0x28) != (void *)0x0)) {
            operator_delete__(*(void **)(this + 0x28));
          }
          uVar5 = 0x102;
          if (param_2) {
            uVar5 = 0x103;
          }
          *(byte **)(this + 0x28) = pbVar6;
          *(byte **)(this + 0x30) = pbVar3;
          *(undefined4 *)(this + 0x20) = uVar5;
          pbVar3 = pbVar3 + __n;
          goto LAB_00914418;
        }
        uVar4 = (uint)pbVar3[1];
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
  }
LAB_00914414:
  pbVar3 = (byte *)0x0;
LAB_00914418:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar3);
  }
  return;
}

