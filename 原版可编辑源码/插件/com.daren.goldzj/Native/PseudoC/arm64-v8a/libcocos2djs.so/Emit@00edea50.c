
/* v8::internal::CodeCommentsWriter::Emit(v8::internal::Assembler*) */

void __thiscall v8::internal::CodeCommentsWriter::Emit(CodeCommentsWriter *this,Assembler *param_1)

{
  uchar *puVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  BlockScope aBStack_58 [8];
  
  Assembler::dc32(param_1,*(int *)this + 4);
  puVar6 = *(uint **)(this + 8);
  if (puVar6 != *(uint **)(this + 0x10)) {
    do {
      Assembler::dc32(param_1,*puVar6);
      bVar2 = (byte)puVar6[2];
      if ((bVar2 & 1) == 0) {
        uVar5 = (uint)(bVar2 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)(puVar6 + 4);
      }
      Assembler::dc32(param_1,uVar5 + 1);
      bVar2 = (byte)puVar6[2];
      if ((bVar2 & 1) == 0) {
        puVar1 = (uchar *)((long)puVar6 + 9);
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(puVar6 + 4);
        puVar1 = *(uchar **)(puVar6 + 6);
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar3 = *puVar1;
        ConstantPool::BlockScope::BlockScope(aBStack_58,param_1,0);
        Assembler::CheckVeneerPool(param_1,false,true,0);
        Assembler::StartBlockVeneerPool(param_1);
        iVar4 = Assembler::buffer_space(param_1);
        if (iVar4 < 0x40) {
          Assembler::GrowBuffer(param_1);
        }
        Assembler::dc8(param_1,uVar3);
        Assembler::EndBlockVeneerPool(param_1);
        ConstantPool::BlockScope::~BlockScope(aBStack_58);
        puVar1 = puVar1 + 1;
      }
      Assembler::dc8(param_1,'\0');
      puVar6 = puVar6 + 8;
    } while (puVar6 != *(uint **)(this + 0x10));
  }
  return;
}

