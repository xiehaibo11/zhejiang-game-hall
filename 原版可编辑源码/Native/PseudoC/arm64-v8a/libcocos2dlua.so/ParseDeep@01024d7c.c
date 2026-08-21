
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
        if (uVar1 == 0) goto LAB_01024e84;
        break;
      }
      uVar5 = (uint)*param_1;
      pbVar4 = (byte *)param_1;
    } while (-1 < (int)uVar5);
  }
  pbVar4 = (byte *)param_1;
  if (-1 < (char)uVar5) goto LAB_01024e1c;
  do {
    while( true ) {
      do {
        do {
                    /* try { // try from 01024e0c to 01124e13 has its CatchHandler @ 01024e18 */
          pbVar4 = pbVar4 + 1;
          uVar5 = (uint)*pbVar4;
          if (uVar5 == 0) goto LAB_01024e58;
                    /* catch() { ... } // from try @ 01024e04 with catch @ 01024e14
                       try { // try from 01024e14 to 01124f07 has its CatchHandler @ 01024a94 */
                    /* catch() { ... } // from try @ 01024b7c with catch @ 01024e18
                       catch() { ... } // from try @ 01024e0c with catch @ 01024e18 */
        } while ((char)*pbVar4 < '\0');
LAB_01024e1c:
                    /* catch() { ... } // from try @ 01024c4c with catch @ 01024e1c */
        uVar1 = uVar5 & 0xff;
                    /* catch() { ... } // from try @ 01024d10 with catch @ 01024e20
                       catch() { ... } // from try @ 01024d54 with catch @ 01024e20 */
        iVar2 = isalnum(uVar1);
      } while (((iVar2 != 0) ||
               (uVar1 == 0x5f
                    /* catch() { ... } // from try @ 01024d5c with catch @ 01024e30 */)) ||
              (uVar1 == 0x3a));
      if (uVar1 == 0x2d) break;
      if ((pbVar4 <= param_1) || ((uVar5 & 0xff) != 0x2e)) goto LAB_01024e58;
    }
                    /* try { // try from 01024e04 to 01124e07 has its CatchHandler @ 01024e14 */
                    /* try { // try from 01024e08 to 01124e0b has its CatchHandler @ 01024a94 */
  } while (param_1 < pbVar4);
LAB_01024e58:
  if (param_1 < pbVar4) {
    if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(char **)(this + 0x20) = param_1;
    *(byte **)(this + 0x28) = pbVar4;
    *(undefined4 *)(this + 0x18) = 0x100;
  }
  else {
LAB_01024e84:
    pbVar4 = (byte *)0x0;
  }
  if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
    pcVar3 = (char *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 01024cec with catch @ 01024e98
                       catch() { ... } // from try @ 01024d30 with catch @ 01024e98 */
                    /* catch() { ... } // from try @ 01024c7c with catch @ 01024e9c */
    pcVar3 = (char *)ParseAttributes(this,(char *)pbVar4);
    if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) && (*(int *)(this + 0x58) == 0)) {
                    /* catch() { ... } // from try @ 01024c90 with catch @ 01024eb8 */
      pcVar3 = (char *)XMLNode::ParseDeep((XMLNode *)this,pcVar3,param_2);
      return pcVar3;
    }
  }
  return pcVar3;
}

