
/* tinyxml2::XMLNode::FirstChildElement(char const*) const */

long __thiscall tinyxml2::XMLNode::FirstChildElement(XMLNode *this,char *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)*puVar7)(puVar7);
    if (lVar2 != 0) {
      if (param_1 == (char *)0x0) {
        return lVar2;
      }
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x18));
      if (pcVar3 == param_1) {
        return lVar2;
      }
      cVar5 = *pcVar3;
      pcVar6 = param_1;
      if (cVar5 != '\0') {
        lVar4 = 0;
        do {
          if ((((int)lVar4 == 0x7fffffff) || (param_1[lVar4] == '\0')) || (param_1[lVar4] != cVar5))
          {
            bVar1 = false;
            if ((int)lVar4 == 0x7fffffff) {
              return lVar2;
            }
            goto LAB_00912ec0;
          }
          cVar5 = pcVar3[lVar4 + 1];
          lVar4 = lVar4 + 1;
        } while (cVar5 != '\0');
        bVar1 = true;
        if ((int)lVar4 == 0x7fffffff) {
          return lVar2;
        }
LAB_00912ec0:
        pcVar6 = param_1 + lVar4;
        if (!bVar1) goto LAB_00912ecc;
      }
      if (*pcVar6 == '\0') {
        return lVar2;
      }
    }
LAB_00912ecc:
    puVar7 = (undefined8 *)puVar7[9];
  } while( true );
}

