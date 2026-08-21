
/* v8::internal::Parser::Parser(v8::internal::ParseInfo*) */

void __thiscall v8::internal::Parser::Parser(Parser *this,ParseInfo *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  ParseInfo PVar4;
  AstValueFactory *pAVar5;
  void *pvVar6;
  undefined8 uVar7;
  Parser PVar8;
  undefined8 uVar9;
  Zone *pZVar10;
  undefined8 uVar11;
  int iVar12;
  
  pZVar10 = *(Zone **)param_1;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  pAVar5 = (AstValueFactory *)ParseInfo::GetOrCreateAstValueFactory(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  if (*(long **)(param_1 + 0x50) == (long *)0x0) {
    iVar12 = -1;
  }
  else {
    iVar12 = *(int *)(**(long **)(param_1 + 0x50) + 0x1f) >> 1;
  }
  PVar4 = param_1[8];
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar9;
  FuncNameInferrer::FuncNameInferrer((FuncNameInferrer *)(this + 0x20),pAVar5);
  *(AstValueFactory **)(this + 0x60) = pAVar5;
  AstNodeFactory::AstNodeFactory((AstNodeFactory *)(this + 0x68),pAVar5,pZVar10);
  *(undefined8 *)(this + 0x90) = uVar7;
  *(undefined8 *)(this + 0x98) = uVar1;
  *(undefined8 *)(this + 0xa8) = uVar11;
  *(ParseInfo **)(this + 0xb0) = param_1 + 0xb0;
  *(Zone **)(this + 0xb8) = pZVar10;
  *(undefined8 *)(this + 0xc0) = 0;
  this[0xa1] = (Parser)((byte)PVar4 >> 6 & 1);
  *(Scanner **)(this + 0xf8) = (Scanner *)(this + 0x140);
  *(undefined4 *)(this + 0x100) = 0;
  *(int *)(this + 0x104) = iVar12;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0xa0] = (Parser)0x1;
  this[0x108] = (Parser)0x1;
  *(undefined8 *)(this + 0x118) = 0xffffffff;
  this[0x130] = (Parser)0x1;
  *(undefined4 *)(this + 0x131) = 0;
  *(undefined2 *)(this + 0x135) = 0x100;
  pvVar6 = operator_new(0x100);
  *(void **)(this + 200) = pvVar6;
  *(void **)(this + 0xd0) = pvVar6;
  *(long *)(this + 0xd8) = (long)pvVar6 + 0x100;
  pvVar6 = operator_new(0x200);
  *(void **)(this + 0xe0) = pvVar6;
  *(void **)(this + 0xe8) = pvVar6;
  *(long *)(this + 0xf0) = (long)pvVar6 + 0x200;
  *(ParseInfo **)(this + 0x138) = param_1;
  Scanner::Scanner((Scanner *)(this + 0x140),*(Utf16CharacterStream **)(param_1 + 0x60),
                   (bool)((byte)(*(uint *)(param_1 + 8) >> 6) & 1));
  Zone::Zone((Zone *)(this + 0x2a8),*(AccountingAllocator **)(*(long *)param_1 + 0x20),
             "../../src/parsing/parser.cc:395");
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 0x2f0) = 1;
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x2f8) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x488) = uVar7;
  *(undefined4 *)(this + 0x4a8) = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 8);
  this[0x108] = (Parser)((uVar2 & 0x20002) == 0x20000);
  PVar8 = (Parser)0x0;
  if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 0x20080) == 0) {
    PVar8 = (Parser)((uVar2 & 0x20002) == 0x20000 && *(long *)(param_1 + 0x10) == 0);
  }
  this[0x484] = PVar8;
  this[0x131] = (Parser)((byte)(*(uint *)(param_1 + 8) >> 0x12) & 1);
  this[0x132] = (Parser)((byte)(*(uint *)(param_1 + 8) >> 0x15) & 1);
  this[0x133] = (Parser)((byte)(*(uint *)(param_1 + 8) >> 0x16) & 1);
  *(byte *)(*(long *)(this + 0xf8) + 0x11a) = (byte)((uint)*(undefined4 *)(param_1 + 8) >> 0x1c) & 1
  ;
  *(byte *)(*(long *)(this + 0xf8) + 0x119) = (byte)(*(uint *)(param_1 + 8) >> 0x17) & 1;
  this[0x134] = (Parser)((byte)((uint)*(undefined4 *)(param_1 + 8) >> 0x19) & 1);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  this[0x135] = (Parser)((byte)((uint)uVar3 >> 0x1d) & 1);
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  return;
}

