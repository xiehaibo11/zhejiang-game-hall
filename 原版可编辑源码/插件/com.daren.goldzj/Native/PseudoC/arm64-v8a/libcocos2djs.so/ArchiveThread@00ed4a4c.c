
/* v8::internal::HandleScopeImplementer::ArchiveThread(char*) */

char * __thiscall
v8::internal::HandleScopeImplementer::ArchiveThread(HandleScopeImplementer *this,char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)this;
  uVar6 = *(undefined8 *)(this + 0x40);
  uVar8 = *(undefined8 *)(this + 0x58);
  uVar7 = *(undefined8 *)(this + 0x50);
  uVar2 = *(undefined8 *)(lVar1 + 0x95b0);
  uVar4 = *(undefined8 *)(lVar1 + 0x95a8);
  uVar3 = *(undefined8 *)(lVar1 + 0x95a0);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(lVar1 + 0x95b8);
  *(undefined8 *)(this + 0x88) = uVar2;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined8 *)(this + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x28);
  uVar2 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined8 *)(this + 0x38);
  uVar4 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar2 = *(undefined8 *)this;
  uVar4 = *(undefined8 *)(this + 0x18);
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar7 = *(undefined8 *)(this + 0x78);
  uVar6 = *(undefined8 *)(this + 0x70);
  uVar3 = *(undefined8 *)(this + 0x88);
  uVar2 = *(undefined8 *)(this + 0x80);
  uVar5 = *(undefined8 *)(this + 0x68);
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(lVar1 + 0x95b8) = 0;
  *(undefined8 *)(lVar1 + 0x95b0) = 0;
  *(undefined8 *)(lVar1 + 0x95a8) = 0;
  *(undefined8 *)(lVar1 + 0x95a0) = 0;
  return param_1 + 0x98;
}

