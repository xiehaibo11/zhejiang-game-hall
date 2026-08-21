
/* v8::internal::DependentCode::MarkCodeForDeoptimization(v8::internal::Isolate*,
   v8::internal::DependentCode::DependencyGroup) */

uint __thiscall
v8::internal::DependentCode::MarkCodeForDeoptimization
          (DependentCode *this,undefined8 param_1,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong local_58;
  
  uVar3 = *(ulong *)this;
  if ((*(uint *)(uVar3 + 3) < 2) || ((int)param_3 < (int)(*(uint *)(uVar3 + 0xb) >> 1 & 7))) {
    uVar2 = 0;
  }
  else if ((int)(*(uint *)(uVar3 + 0xb) >> 1 & 7) < (int)param_3) {
    local_58 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7);
    uVar2 = MarkCodeForDeoptimization((DependentCode *)&local_58,param_1,param_3);
  }
  else {
    uVar9 = (ulong)(*(uint *)(uVar3 + 0xb) >> 4) & 0x7ffffff;
    if ((int)uVar9 == 0) {
      uVar2 = 0;
    }
    else {
      lVar7 = 0;
      uVar2 = 0;
      do {
        uVar1 = *(uint *)(uVar3 + lVar7 + 0xf);
        if (uVar1 != 3) {
          local_58 = uVar3 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd;
          if ((*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(local_58 + 0xf)) + 7) & 1)
              == 0) {
            if (6 < param_3) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            Code::SetMarkedForDeoptimization
                      ((Code *)&local_58,(&PTR_s_transition_018a5e62_0x18_01cb27a8)[(int)param_3]);
            uVar2 = 1;
          }
        }
        uVar3 = *(ulong *)this;
        lVar7 = lVar7 + 4;
      } while (uVar9 * 4 - lVar7 != 0);
      if ((int)uVar9 != 0) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          uVar5 = *(ulong *)((uVar3 & 0xffffffff00000000) + 0xa0);
          *(int *)(uVar3 + lVar7 + 0xf) = (int)uVar5;
          uVar3 = *(ulong *)this;
          if (((int)uVar5 != 3) && ((uVar5 & 1) != 0)) {
            uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar4 >> 0x12 & 1) == 0) {
              lVar6 = uVar3 + lVar8 * 4;
            }
            else {
              Heap_MarkingBarrierSlow(uVar3,lVar7 + uVar3 + 0xf,uVar5 & 0xfffffffffffffffd);
              uVar3 = *(ulong *)this;
              uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
              lVar6 = lVar7 + uVar3;
            }
            if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar3,lVar6 + 0xf,uVar5 & 0xfffffffffffffffd);
              uVar3 = *(ulong *)this;
            }
          }
          lVar7 = lVar7 + 4;
          lVar8 = lVar8 + 1;
        } while (uVar9 * 4 - lVar7 != 0);
      }
    }
    *(uint *)(uVar3 + 0xb) = *(uint *)(uVar3 + 0xb) & 0x8000000e;
  }
  return uVar2 & 1;
}

