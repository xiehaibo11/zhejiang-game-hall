
/* tinyxml2::XMLElement::ParseDeep(char*, tinyxml2::StrPair*) */

char * __thiscall tinyxml2::XMLElement::ParseDeep(XMLElement *this,char *param_1,StrPair *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = (uint)*param_1;
  pbVar4 = (byte *)param_1;
  if (-1 < *param_1) {
    do {
      param_1 = (char *)(pbVar4 + 1);
      iVar2 = isspace(uVar5 & 0xff);
      if (iVar2 == 0) {
        if ((uVar5 & 0xff) == 0x2f) {
          *(undefined4 *)(this + 0x58) = 2;
          uVar5 = (uint)(byte)*param_1;
          uVar1 = uVar5;
        }
        else {
          param_1 = (char *)pbVar4;
          uVar1 = uVar5 & 0xff;
        }
        pbVar4 = (byte *)param_1;
        if (uVar1 == 0) goto LAB_009158c8;
        break;
      }
      uVar5 = (uint)*param_1;
      pbVar4 = (byte *)param_1;
    } while (-1 < (int)uVar5);
  }
  do {
    if (-1 < (char)uVar5) {
      uVar1 = uVar5 & 0xff;
      iVar2 = isalnum(uVar1);
      if (((iVar2 == 0) && (uVar1 != 0x5f)) && (uVar1 != 0x3a)) {
        if (uVar1 == 0x2d) {
          if (param_1 <= pbVar4) break;
        }
        else if ((param_1 <= pbVar4) || ((uVar5 & 0xff) != 0x2e)) break;
      }
    }
    param_1 = param_1 + 1;
    uVar5 = (uint)(byte)*param_1;
  } while (uVar5 != 0);
  if (pbVar4 < param_1) {
    if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(byte **)(this + 0x20) = pbVar4;
    *(char **)(this + 0x28) = param_1;
    *(undefined4 *)(this + 0x18) = 0x100;
  }
  else {
LAB_009158c8:
    param_1 = (char *)0x0;
  }
  if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = (char *)ParseAttributes(this,param_1);
    if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) && (*(int *)(this + 0x58) == 0)) {
      pcVar3 = (char *)XMLNode::ParseDeep((XMLNode *)this,pcVar3,param_2);
      return pcVar3;
    }
  }
  return pcVar3;
}

