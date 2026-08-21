
/* v8::internal::TurboAssembler::TryOneInstrMoveImmediate(v8::internal::Register const&, long) */

undefined8 __thiscall
v8::internal::TurboAssembler::TryOneInstrMoveImmediate
          (TurboAssembler *this,Register *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint local_2c;
  uint uStack_28;
  uint local_24;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar6 = 0;
  uVar5 = uVar2 >> 4;
  uVar7 = param_2;
  for (uVar3 = uVar5; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((uVar7 & 0xffff) == 0) {
      uVar6 = uVar6 + 1;
    }
    uVar7 = uVar7 >> 0x10;
  }
  uVar3 = uVar5 - 1;
  if ((uVar6 < uVar3) || ((*(int *)(param_1 + 8) == 0 && (*(int *)param_1 == 0x3f)))) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar7 = ~param_2;
      do {
        if ((uVar7 & 0xffff) == 0) {
          uVar6 = uVar6 + 1;
        }
        uVar5 = uVar5 - 1;
        uVar7 = uVar7 >> 0x10;
      } while (uVar5 != 0);
    }
    if ((uVar6 < uVar3) || ((*(int *)(param_1 + 8) == 0 && (*(int *)param_1 == 0x3f)))) {
      uVar7 = Assembler::IsImmLogical(param_2,uVar2,&local_24,&uStack_28,&local_2c);
      if ((uVar7 & 1) != 0) {
        puVar1 = &DAT_019f4018;
        if (*(int *)(param_1 + 4) != 0x40) {
          puVar1 = &DAT_019f4000;
        }
        Assembler::LogicalImmediate
                  ((Assembler *)this,param_1,puVar1,local_24,uStack_28,local_2c,0x20000000);
        return 1;
      }
      return 0;
    }
    uVar7 = ~param_2 & 0xffffffff;
    if (uVar2 == 0x40) {
      uVar7 = ~param_2;
    }
    uVar4 = 0;
    param_2 = uVar7;
  }
  else {
    uVar4 = 0x40000000;
  }
  Assembler::MoveWide((Assembler *)this,param_1,param_2,0xffffffff,uVar4);
  return 1;
}

