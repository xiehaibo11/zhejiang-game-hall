
/* v8::internal::RegExpStack::ArchiveStack(char*) */

char * __thiscall v8::internal::RegExpStack::ArchiveStack(RegExpStack *this,char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (this[0x220] == (RegExpStack)0x0) {
    EnsureCapacity(this,*(long *)(this + 0x210) + 1);
  }
  uVar2 = *(undefined8 *)(this + 0x208);
  uVar1 = *(undefined8 *)(this + 0x200);
  uVar4 = *(undefined8 *)(this + 0x218);
  uVar3 = *(undefined8 *)(this + 0x210);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x220);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)param_1 = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(RegExpStack **)(this + 0x208) = this + 0x200;
  *(RegExpStack **)(this + 0x200) = this;
  *(undefined8 *)(this + 0x210) = 0x200;
  *(RegExpStack **)(this + 0x218) = this + 0x100;
  this[0x220] = (RegExpStack)0x0;
  return param_1 + 0x28;
}

