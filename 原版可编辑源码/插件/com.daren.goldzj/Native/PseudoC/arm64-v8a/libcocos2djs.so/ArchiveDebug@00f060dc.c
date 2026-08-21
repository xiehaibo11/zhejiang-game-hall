
/* v8::internal::Debug::ArchiveDebug(char*) */

char * __thiscall v8::internal::Debug::ArchiveDebug(Debug *this,char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)param_1 = uVar1;
  uVar6 = *(undefined8 *)(this + 0x68);
  uVar5 = *(undefined8 *)(this + 0x60);
  uVar2 = *(undefined8 *)(this + 0x78);
  uVar1 = *(undefined8 *)(this + 0x70);
  uVar4 = *(undefined8 *)(this + 0x58);
  uVar3 = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  return param_1 + 0x48;
}

