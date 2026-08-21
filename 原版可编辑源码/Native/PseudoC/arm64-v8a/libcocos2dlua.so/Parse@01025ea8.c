
/* tinyxml2::XMLDocument::Parse(char const*, unsigned long) */

undefined4 __thiscall tinyxml2::XMLDocument::Parse(XMLDocument *this,char *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *__dest;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  XMLDocument *pXVar9;
  
  pXVar9 = this + 0x30;
  plVar7 = *(long **)pXVar9;
  while (plVar7 != (long *)0x0) {
    lVar5 = plVar7[9];
    *(long *)(this + 0x30) = lVar5;
    if (*(long **)(this + 0x38) == plVar7) {
      lVar6 = plVar7[8];
      *(long *)(this + 0x38) = lVar6;
    }
    else {
      lVar6 = plVar7[8];
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x48) = lVar5;
      lVar5 = plVar7[9];
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x40) = lVar6;
    }
    plVar7[2] = 0;
    plVar8 = (long *)plVar7[10];
    (**(code **)(*plVar7 + 0x80))(plVar7);
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar7);
    plVar7 = *(long **)pXVar9;
  }
  *(long *)pXVar9 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  *(undefined8 *)(this + 0x78) = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
LAB_01026024:
    uVar3 = 0xf;
    *(undefined4 *)(this + 0x5c) = 0xf;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  else {
    if (param_2 == 0xffffffffffffffff) {
      param_2 = strlen(param_1);
    }
    __dest = operator_new__(param_2 + 1);
    *(void **)(this + 0x78) = __dest;
    memcpy(__dest,param_1,param_2);
    *(undefined1 *)((long)__dest + param_2) = 0;
    uVar4 = (uint)*param_1;
    if (-1 < *param_1) {
      do {
        iVar2 = isspace(uVar4 & 0xff);
        if (iVar2 == 0) break;
        param_1 = param_1 + 1;
        uVar4 = (uint)*param_1;
      } while (-1 < (int)uVar4);
    }
    this[0x58] = (XMLDocument)0x0;
    cVar1 = *param_1;
    if (cVar1 == -0x11) {
      if ((param_1[1] == -0x45) && (param_1[2] == -0x41)) {
        this[0x58] = (XMLDocument)0x1;
        cVar1 = param_1[3];
        goto LAB_01026000;
      }
    }
    else {
LAB_01026000:
      if (cVar1 == '\0') goto LAB_01026024;
    }
    (**(code **)(*(long *)this + 0x78))(this,*(undefined8 *)(this + 0x78),0);
    uVar3 = *(undefined4 *)(this + 0x5c);
  }
  return uVar3;
}

