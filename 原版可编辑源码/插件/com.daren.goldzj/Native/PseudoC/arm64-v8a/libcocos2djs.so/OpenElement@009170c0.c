
/* tinyxml2::XMLPrinter::OpenElement(char const*) */

void __thiscall tinyxml2::XMLPrinter::OpenElement(XMLPrinter *this,char *param_1)

{
  uint uVar1;
  ulong uVar2;
  void *__dest;
  XMLPrinter *__src;
  int iVar3;
  
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  iVar3 = *(int *)(this + 0x104);
  if (iVar3 < *(int *)(this + 0x100)) {
    __dest = *(void **)(this + 0xa8);
  }
  else {
    uVar1 = iVar3 * 2 + 2;
    uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar2);
    __src = *(XMLPrinter **)(this + 0xa8);
    memcpy(__dest,__src,(long)iVar3 << 3);
    if ((__src != (XMLPrinter *)0x0) && (this + 0xb0 != __src)) {
      operator_delete__(__src);
      iVar3 = *(int *)(this + 0x104);
    }
    *(void **)(this + 0xa8) = __dest;
    *(uint *)(this + 0x100) = uVar1;
  }
  *(int *)(this + 0x104) = iVar3 + 1;
  *(char **)((long)__dest + (long)iVar3 * 8) = param_1;
  if (((*(int *)(this + 0x1c) < 0) && (this[9] == (XMLPrinter)0x0)) &&
     (this[0x21] == (XMLPrinter)0x0)) {
    Print((char *)this,&DAT_018938a8);
    iVar3 = *(int *)(this + 0x18);
    if (0 < iVar3) {
      do {
        Print((char *)this,"    ");
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  Print((char *)this,&DAT_01868b85,param_1);
  *(undefined2 *)(this + 8) = 1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return;
}

