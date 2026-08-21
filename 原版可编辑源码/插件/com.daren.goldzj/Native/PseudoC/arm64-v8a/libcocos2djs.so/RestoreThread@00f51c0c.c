
/* v8::internal::Isolate::RestoreThread(char*) */

char * __thiscall v8::internal::Isolate::RestoreThread(Isolate *this,char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x2bc0) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x2bb8) = uVar1;
  *(undefined8 *)(this + 0x2bd0) = uVar3;
  *(undefined8 *)(this + 0x2bc8) = uVar2;
  *(undefined8 *)(this + 0x2be0) = uVar5;
  *(undefined8 *)(this + 0x2bd8) = uVar4;
  *(undefined8 *)(this + 0x2bf0) = uVar7;
  *(undefined8 *)(this + 0x2be8) = uVar6;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x2c20) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x2c18) = uVar1;
  *(undefined8 *)(this + 0x2c30) = uVar3;
  *(undefined8 *)(this + 0x2c28) = uVar2;
  *(undefined8 *)(this + 0x2c00) = uVar5;
  *(undefined8 *)(this + 0x2bf8) = uVar4;
  *(undefined8 *)(this + 0x2c10) = uVar7;
  *(undefined8 *)(this + 0x2c08) = uVar6;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x2c60) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x2c58) = uVar1;
  *(undefined8 *)(this + 0x2c70) = uVar3;
  *(undefined8 *)(this + 0x2c68) = uVar2;
  *(undefined8 *)(this + 0x2c40) = uVar5;
  *(undefined8 *)(this + 0x2c38) = uVar4;
  *(undefined8 *)(this + 0x2c50) = uVar7;
  *(undefined8 *)(this + 0x2c48) = uVar6;
  return param_1 + 0xc0;
}

