
/* tinyxml2::XMLDocument::LoadFile(char const*) */

undefined4 __thiscall tinyxml2::XMLDocument::LoadFile(XMLDocument *this,char *param_1)

{
  undefined4 uVar1;
  FILE *__stream;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(this + 0x30);
  while (plVar4 != (long *)0x0) {
    lVar2 = plVar4[9];
    *(long *)(this + 0x30) = lVar2;
    if (*(long **)(this + 0x38) == plVar4) {
      lVar3 = plVar4[8];
      *(long *)(this + 0x38) = lVar3;
    }
    else {
      lVar3 = plVar4[8];
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x48) = lVar2;
      lVar2 = plVar4[9];
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x40) = lVar3;
    }
    plVar4[2] = 0;
    plVar5 = (long *)plVar4[10];
    (**(code **)(*plVar4 + 0x80))(plVar4);
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar4);
    plVar4 = *(long **)(this + 0x30);
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  *(undefined8 *)(this + 0x78) = 0;
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    uVar1 = 3;
    *(undefined4 *)(this + 0x5c) = 3;
    *(char **)(this + 0x68) = param_1;
    *(undefined8 *)(this + 0x70) = 0;
  }
  else {
    LoadFile(this,(__sFILE *)__stream);
    fclose(__stream);
    uVar1 = *(undefined4 *)(this + 0x5c);
  }
  return uVar1;
}

