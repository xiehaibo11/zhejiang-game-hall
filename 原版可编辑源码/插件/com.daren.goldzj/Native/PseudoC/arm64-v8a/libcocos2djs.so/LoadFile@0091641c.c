
/* tinyxml2::XMLDocument::LoadFile(__sFILE*) */

undefined4 __thiscall tinyxml2::XMLDocument::LoadFile(XMLDocument *this,__sFILE *param_1)

{
  char cVar1;
  int iVar2;
  size_t __n;
  void *__ptr;
  size_t sVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = *(long **)(this + 0x30);
  while (plVar9 != (long *)0x0) {
    lVar6 = plVar9[9];
    *(long *)(this + 0x30) = lVar6;
    if (*(long **)(this + 0x38) == plVar9) {
      lVar7 = plVar9[8];
      *(long *)(this + 0x38) = lVar7;
    }
    else {
      lVar7 = plVar9[8];
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x48) = lVar6;
      lVar6 = plVar9[9];
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x40) = lVar7;
    }
    plVar9[2] = 0;
    plVar10 = (long *)plVar9[10];
    (**(code **)(*plVar9 + 0x80))(plVar9);
    (**(code **)(*plVar10 + 0x20))(plVar10,plVar9);
    plVar9 = *(long **)(this + 0x30);
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  *(undefined8 *)(this + 0x78) = 0;
  fseek((FILE *)param_1,0,2);
  __n = ftell((FILE *)param_1);
  fseek((FILE *)param_1,0,0);
  if (__n == 0) goto LAB_009165c4;
  __ptr = operator_new__(__n + 1);
  *(void **)(this + 0x78) = __ptr;
  sVar3 = fread(__ptr,1,__n,(FILE *)param_1);
  if (sVar3 == __n) {
    *(undefined1 *)(*(long *)(this + 0x78) + __n) = 0;
    pcVar8 = *(char **)(this + 0x78);
    uVar4 = (uint)*pcVar8;
    if (-1 < *pcVar8) {
      do {
        iVar2 = isspace(uVar4 & 0xff);
        if (iVar2 == 0) break;
        pcVar8 = pcVar8 + 1;
        uVar4 = (uint)*pcVar8;
      } while (-1 < (int)uVar4);
    }
    this[0x58] = (XMLDocument)0x0;
    cVar1 = *pcVar8;
    if (cVar1 == -0x11) {
      if ((pcVar8[1] == -0x45) && (pcVar8[2] == -0x41)) {
        this[0x58] = (XMLDocument)0x1;
        pcVar8 = pcVar8 + 3;
        cVar1 = *pcVar8;
        goto joined_r0x00916598;
      }
LAB_0091659c:
      (**(code **)(*(long *)this + 0x78))(this,pcVar8,0);
      goto LAB_009165c4;
    }
    if (pcVar8 != (char *)0x0) {
joined_r0x00916598:
      if (cVar1 != '\0') goto LAB_0091659c;
    }
    uVar5 = 0xf;
  }
  else {
    uVar5 = 5;
  }
  *(undefined4 *)(this + 0x5c) = uVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
LAB_009165c4:
  return *(undefined4 *)(this + 0x5c);
}

