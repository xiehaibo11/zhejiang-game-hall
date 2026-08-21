
/* tinyxml2::XMLElement::FindOrCreateAttribute(char const*) */

undefined8 * __thiscall tinyxml2::XMLElement::FindOrCreateAttribute(XMLElement *this,char *param_1)

{
  XMLElement *pXVar1;
  bool bVar2;
  char *pcVar3;
  size_t sVar4;
  void *__dest;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  char cVar8;
  char *pcVar9;
  undefined8 *puVar10;
  
  puVar6 = *(undefined8 **)(this + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar10 = puVar6;
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(puVar10 + 1));
      if (pcVar3 == param_1) {
        return puVar10;
      }
      cVar8 = *pcVar3;
      pcVar9 = param_1;
      if (cVar8 == '\0') {
LAB_009151c0:
        if (*pcVar9 == '\0') {
          return puVar10;
        }
      }
      else {
        lVar7 = 0;
        do {
          iVar5 = (int)lVar7;
          if (((iVar5 == 0x7fffffff) || (param_1[lVar7] == '\0')) || (param_1[lVar7] != cVar8)) {
            bVar2 = false;
            goto joined_r0x009151e0;
          }
          cVar8 = pcVar3[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (cVar8 != '\0');
        bVar2 = true;
        iVar5 = (int)lVar7;
joined_r0x009151e0:
        if (iVar5 == 0x7fffffff) {
          return puVar10;
        }
        pcVar9 = param_1 + lVar7;
        if (bVar2) goto LAB_009151c0;
      }
      puVar6 = (undefined8 *)puVar10[7];
    } while ((undefined8 *)puVar10[7] != (undefined8 *)0x0);
  }
  puVar6 = (undefined8 *)MemPoolT<72>::Alloc((MemPoolT<72> *)(*(long *)(this + 8) + 0x100));
  *(undefined4 *)(puVar6 + 1) = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[5] = 0;
  *puVar6 = &PTR__XMLAttribute_01c691a0;
  pXVar1 = this + 0x60;
  if (puVar10 != (undefined8 *)0x0) {
    pXVar1 = (XMLElement *)(puVar10 + 7);
  }
  puVar6[8] = *(long *)(this + 8) + 0x100;
  *(undefined8 **)pXVar1 = puVar6;
  *(undefined4 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  sVar4 = strlen(param_1);
  __dest = operator_new__(sVar4 + 1);
  puVar6[2] = __dest;
  memcpy(__dest,param_1,sVar4 + 1);
  puVar6[3] = (long)__dest + sVar4;
  *(undefined4 *)(puVar6 + 1) = 0x200;
  (**(code **)(*(long *)puVar6[8] + 0x28))();
  return puVar6;
}

