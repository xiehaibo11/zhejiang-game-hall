
/* std::__ndk1::vector<v8::internal::compiler::SpecialRPONumberer::LoopInfo,
   v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::LoopInfo>
   >::__append(unsigned long, v8::internal::compiler::SpecialRPONumberer::LoopInfo const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::SpecialRPONumberer::LoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::LoopInfo>>
::__append(vector<v8::internal::compiler::SpecialRPONumberer::LoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::LoopInfo>>
           *this,ulong param_1,LoopInfo *param_2)

{
  ulong uVar1;
  long lVar2;
  Zone *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 4) * -0x5555555555555555) < param_1) {
    lVar2 = (long)puVar6 - *(long *)this >> 4;
    uVar1 = lVar2 * -0x5555555555555555 + param_1;
    if (0x2aaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0x2aaaaaa;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar7 = uVar1 * 0x30;
      lVar5 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar5 + uVar7;
      }
      else {
        lVar5 = v8::internal::Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar6 = (undefined8 *)(lVar5 + lVar2 * 0x10);
    puVar3 = puVar6;
    do {
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar3[3] = *(undefined8 *)(param_2 + 0x18);
      puVar3[2] = uVar13;
      puVar3[5] = uVar10;
      puVar3[4] = uVar9;
      puVar4 = puVar3 + 6;
      puVar3[1] = uVar12;
      *puVar3 = uVar11;
      puVar3 = puVar4;
    } while (param_1 != 0);
    lVar2 = *(long *)this;
    for (lVar8 = *(long *)(this + 8); lVar8 != lVar2; lVar8 = lVar8 + -0x30) {
      uVar13 = *(undefined8 *)(lVar8 + -0x20);
      uVar10 = *(undefined8 *)(lVar8 + -8);
      uVar9 = *(undefined8 *)(lVar8 + -0x10);
      uVar12 = *(undefined8 *)(lVar8 + -0x28);
      uVar11 = *(undefined8 *)(lVar8 + -0x30);
      puVar6[-3] = *(undefined8 *)(lVar8 + -0x18);
      puVar6[-4] = uVar13;
      puVar6[-1] = uVar10;
      puVar6[-2] = uVar9;
      puVar6[-5] = uVar12;
      puVar6[-6] = uVar11;
      puVar6 = puVar6 + -6;
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar4;
    *(ulong *)(this + 0x10) = lVar5 + uVar1 * 0x30;
  }
  else {
    do {
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar6[3] = *(undefined8 *)(param_2 + 0x18);
      puVar6[2] = uVar13;
      puVar6[5] = uVar10;
      puVar6[4] = uVar9;
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      puVar6 = (undefined8 *)(*(long *)(this + 8) + 0x30);
      *(undefined8 **)(this + 8) = puVar6;
    } while (param_1 != 0);
  }
  return;
}

