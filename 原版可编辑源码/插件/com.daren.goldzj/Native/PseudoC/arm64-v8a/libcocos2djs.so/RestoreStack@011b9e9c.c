
/* v8::internal::RegExpStack::RestoreStack(char*) */

char * __thiscall v8::internal::RegExpStack::RestoreStack(RegExpStack *this,char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x220) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x208) = uVar2;
  *(undefined8 *)(this + 0x200) = uVar1;
  *(undefined8 *)(this + 0x218) = uVar4;
  *(undefined8 *)(this + 0x210) = uVar3;
  return param_1 + 0x28;
}

