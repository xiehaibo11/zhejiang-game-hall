
/* v8::internal::MemoryAllocator::ZapBlock(unsigned long, unsigned long, unsigned long) */

void __thiscall
v8::internal::MemoryAllocator::ZapBlock
          (MemoryAllocator *this,ulong param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar1 = (undefined4)param_3;
  uVar2 = param_2 >> 2;
  if (uVar2 != 0) {
    if (param_2 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar2 & 0x3ffffffffffffff8;
      puVar6 = (undefined8 *)(param_1 + 0x10);
      uVar7 = uVar4;
      do {
        puVar6[-1] = CONCAT44(uVar1,uVar1);
        puVar6[-2] = CONCAT44(uVar1,uVar1);
        puVar6[1] = CONCAT44(uVar1,uVar1);
        *puVar6 = CONCAT44(uVar1,uVar1);
        uVar7 = uVar7 - 8;
        puVar6 = puVar6 + 4;
      } while (uVar7 != 0);
      if (uVar2 == uVar4) {
        return;
      }
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (undefined4 *)(param_1 + uVar4 * 4);
    do {
      lVar3 = lVar3 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  return;
}

