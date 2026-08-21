
/* v8::internal::compiler::GraphAssembler::GraphAssembler(v8::internal::compiler::JSGraph*,
   v8::internal::Zone*, v8::internal::compiler::Schedule*) */

void __thiscall
v8::internal::compiler::GraphAssembler::GraphAssembler
          (GraphAssembler *this,JSGraph *param_1,Zone *param_2,Schedule *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(Zone **)(this + 0x10) = param_2;
  *(JSGraph **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__GraphAssembler_01cccf58;
  *(undefined8 *)(this + 8) = 0;
  if (param_3 == (Schedule *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = operator_new(0xa0);
    lVar3 = *(long *)param_1;
    *puVar2 = param_2;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[5] = param_3;
    puVar2[6] = lVar3;
    uVar4 = *(undefined8 *)param_3;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0;
    puVar2[0x10] = 0;
    *(undefined1 *)(puVar2 + 0x11) = 0;
    puVar2[9] = 0;
    puVar2[10] = uVar4;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar4;
    uVar1 = *(uint *)(lVar3 + 0x1c);
    *(undefined4 *)(puVar2 + 0x13) = 0;
    puVar2[0x12] = (ulong)uVar1;
  }
  *(undefined8 **)(this + 0x30) = puVar2;
  return;
}

