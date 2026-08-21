
/* v8::internal::StringStream::OutputToFile(__sFILE*) */

void __thiscall v8::internal::StringStream::OutputToFile(StringStream *this,__sFILE *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = *(long *)(this + 0x18);
  if (*(uint *)(this + 0x10) < 0x801) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = (ulong)(uVar5 + 0x800);
      uVar2 = *(undefined1 *)(lVar3 + uVar4);
      *(undefined1 *)(lVar3 + uVar4) = 0;
      PrintF(param_1,"%s",*(long *)(this + 0x18) + (ulong)uVar5);
      uVar1 = uVar5 + 0x1000;
      *(undefined1 *)(*(long *)(this + 0x18) + uVar4) = uVar2;
      lVar3 = *(long *)(this + 0x18);
      uVar5 = uVar5 + 0x800;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  PrintF(param_1,"%s",lVar3 + uVar4);
  return;
}

