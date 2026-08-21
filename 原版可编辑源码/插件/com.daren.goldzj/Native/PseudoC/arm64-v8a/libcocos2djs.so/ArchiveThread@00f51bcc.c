
/* v8::internal::Isolate::ArchiveThread(char*) */

char * __thiscall v8::internal::Isolate::ArchiveThread(Isolate *this,char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(this + 0x2bd8);
  uVar3 = *(undefined8 *)(this + 0x2bf0);
  uVar2 = *(undefined8 *)(this + 0x2be8);
  uVar5 = *(undefined8 *)(this + 0x2bc0);
  uVar4 = *(undefined8 *)(this + 0x2bb8);
  uVar7 = *(undefined8 *)(this + 0x2bd0);
  uVar6 = *(undefined8 *)(this + 0x2bc8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x2be0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)param_1 = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar1 = *(undefined8 *)(this + 0x2c18);
  uVar3 = *(undefined8 *)(this + 0x2c30);
  uVar2 = *(undefined8 *)(this + 0x2c28);
  uVar5 = *(undefined8 *)(this + 0x2c00);
  uVar4 = *(undefined8 *)(this + 0x2bf8);
  uVar7 = *(undefined8 *)(this + 0x2c10);
  uVar6 = *(undefined8 *)(this + 0x2c08);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(this + 0x2c20);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  uVar1 = *(undefined8 *)(this + 0x2c58);
  uVar3 = *(undefined8 *)(this + 0x2c70);
  uVar2 = *(undefined8 *)(this + 0x2c68);
  uVar5 = *(undefined8 *)(this + 0x2c40);
  uVar4 = *(undefined8 *)(this + 0x2c38);
  uVar7 = *(undefined8 *)(this + 0x2c50);
  uVar6 = *(undefined8 *)(this + 0x2c48);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(this + 0x2c60);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  return param_1 + 0xc0;
}

