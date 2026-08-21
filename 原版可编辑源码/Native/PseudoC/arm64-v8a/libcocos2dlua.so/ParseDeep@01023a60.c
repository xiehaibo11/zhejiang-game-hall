
/* tinyxml2::XMLAttribute::ParseDeep(char*, bool) */

void __thiscall tinyxml2::XMLAttribute::ParseDeep(XMLAttribute *this,char *param_1,bool param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  char local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_1 != (char *)0x0) && (bVar1 = *param_1, bVar1 != 0)) {
    pbVar5 = (byte *)param_1;
    if (-1 < (char)bVar1) goto LAB_01023ac8;
    do {
      while( true ) {
        do {
          do {
            pbVar5 = pbVar5 + 1;
            bVar1 = *pbVar5;
            if (bVar1 == 0) goto LAB_01023b04;
          } while ((char)bVar1 < '\0');
LAB_01023ac8:
          uVar6 = (uint)bVar1;
          iVar3 = isalnum(uVar6);
        } while (((iVar3 != 0) || (uVar6 == 0x5f)) || (uVar6 == 0x3a));
        if (uVar6 == 0x2d) break;
        if ((pbVar5 <= param_1) || (uVar6 != 0x2e)) goto LAB_01023b04;
      }
    } while (param_1 < pbVar5);
LAB_01023b04:
    if (param_1 < pbVar5) {
      if ((((byte)this[9] >> 1 & 1) != 0) && (*(void **)(this + 0x10) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(char **)(this + 0x10) = param_1;
      *(byte **)(this + 0x18) = pbVar5;
      *(undefined4 *)(this + 8) = 0x100;
      uVar6 = (uint)(char)*pbVar5;
      if ('\0' < (char)*pbVar5) {
        do {
          pbVar5 = pbVar5 + 1;
          iVar3 = isspace(uVar6 & 0xff);
          if (iVar3 == 0) {
            if ((uVar6 & 0xff) == 0x3d) {
              uVar6 = (uint)(char)*pbVar5;
              if ((char)*pbVar5 < '\0') goto LAB_01023b7c;
              goto LAB_01023b68;
            }
            break;
          }
          uVar6 = (uint)(char)*pbVar5;
        } while (-1 < (int)uVar6);
      }
    }
  }
  goto LAB_01023bb8;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    uVar6 = (uint)(char)*pbVar5;
    if ((int)uVar6 < 0) break;
LAB_01023b68:
    iVar3 = isspace(uVar6 & 0xff);
    if (iVar3 == 0) break;
  }
LAB_01023b7c:
  if (((uVar6 & 0xff) == 0x27) || ((uVar6 & 0xff) == 0x22)) {
    iVar3 = 2;
    if (param_2) {
      iVar3 = 3;
    }
    local_5c[0] = (char)uVar6;
    local_5c[1] = 0;
    uVar4 = StrPair::ParseText((StrPair *)(this + 0x20),(char *)(pbVar5 + 1),local_5c,iVar3);
    goto LAB_01023bbc;
  }
LAB_01023bb8:
  uVar4 = 0;
LAB_01023bbc:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

