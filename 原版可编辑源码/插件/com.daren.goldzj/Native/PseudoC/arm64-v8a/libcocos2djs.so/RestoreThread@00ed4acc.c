
/* v8::internal::HandleScopeImplementer::RestoreThread(char*) */

char * __thiscall
v8::internal::HandleScopeImplementer::RestoreThread(HandleScopeImplementer *this,char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar2;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x58) = uVar4;
  *(undefined8 *)(this + 0x50) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x38) = uVar8;
  *(undefined8 *)(this + 0x30) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x78) = uVar7;
  *(undefined8 *)(this + 0x70) = uVar6;
  *(undefined8 *)(this + 0x88) = uVar3;
  *(undefined8 *)(this + 0x80) = uVar2;
  lVar1 = *(long *)this;
  uVar2 = *(undefined8 *)(this + 0x88);
  uVar6 = *(undefined8 *)(this + 0x80);
  uVar3 = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x68) = uVar5;
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(lVar1 + 0x95b8) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(lVar1 + 0x95b0) = uVar2;
  *(undefined8 *)(lVar1 + 0x95a8) = uVar6;
  *(undefined8 *)(lVar1 + 0x95a0) = uVar3;
  return param_1 + 0x98;
}

