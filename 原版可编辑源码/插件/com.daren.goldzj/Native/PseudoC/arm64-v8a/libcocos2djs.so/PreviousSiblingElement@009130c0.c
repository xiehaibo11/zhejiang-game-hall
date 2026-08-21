
/* tinyxml2::XMLNode::PreviousSiblingElement(char const*) const */

undefined8 __thiscall tinyxml2::XMLNode::PreviousSiblingElement(XMLNode *this,char *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0x40);
  do {
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)*puVar7)(puVar7);
    if (lVar2 != 0) {
      if ((param_1 == (char *)0x0) ||
         (pcVar3 = (char *)StrPair::GetStr((StrPair *)(puVar7 + 3)), pcVar3 == param_1))
      goto LAB_00913174;
      cVar6 = *param_1;
      if (cVar6 != '\0') {
        lVar2 = 0;
        do {
          iVar5 = (int)lVar2;
          if (((iVar5 == 0x7fffffff) || (pcVar3[lVar2] == '\0')) || (pcVar3[lVar2] != cVar6)) {
            bVar1 = false;
            goto joined_r0x00913170;
          }
          cVar6 = param_1[lVar2 + 1];
          lVar2 = lVar2 + 1;
        } while (cVar6 != '\0');
        bVar1 = true;
        iVar5 = (int)lVar2;
joined_r0x00913170:
        if (iVar5 == 0x7fffffff) goto LAB_00913174;
        pcVar3 = pcVar3 + lVar2;
        if (!bVar1) goto LAB_00913158;
      }
      if (*pcVar3 == '\0') {
LAB_00913174:
                    /* WARNING: Could not recover jumptable at 0x0091318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)*puVar7)(puVar7);
        return uVar4;
      }
    }
LAB_00913158:
    puVar7 = (undefined8 *)puVar7[8];
  } while( true );
}

