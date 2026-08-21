
/* v8::internal::DynamicBitSet::Set(unsigned int, v8::internal::Zone*) */

void __thiscall v8::internal::DynamicBitSet::Set(DynamicBitSet *this,uint param_1,Zone *param_2)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  
  if (param_1 < 0x20) {
    *(uint *)this = *(uint *)this | 1 << (ulong)(param_1 & 0x1f);
  }
  else {
    plVar8 = *(long **)(this + 8);
    if (plVar8 == (long *)0x0) {
      plVar8 = *(long **)(param_2 + 0x10);
      lVar6 = *(long *)(param_2 + 0x18);
      if ((ulong)(lVar6 - (long)plVar8) < 0x10) {
        plVar8 = (long *)Zone::NewExpand(param_2,0x10);
        plVar2 = *(long **)(param_2 + 0x10);
        lVar6 = *(long *)(param_2 + 0x18);
      }
      else {
        plVar2 = plVar8 + 2;
        *(long **)(param_2 + 0x10) = plVar2;
      }
      if ((ulong)(lVar6 - (long)plVar2) < 8) {
        plVar2 = (long *)Zone::NewExpand(param_2,8);
      }
      else {
        *(long **)(param_2 + 0x10) = plVar2 + 1;
      }
      *plVar8 = (long)plVar2;
      plVar8[1] = 1;
      *(long **)(this + 8) = plVar8;
    }
    uVar1 = *(uint *)((long)plVar8 + 0xc);
    uVar5 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      puVar7 = (uint *)*plVar8;
      do {
        if (*puVar7 == param_1) {
          return;
        }
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    uVar4 = *(uint *)(plVar8 + 1);
    if ((int)uVar1 < (int)uVar4) {
      *(uint *)((long)plVar8 + 0xc) = uVar1 + 1;
      *(uint *)(*plVar8 + (long)(int)uVar1 * 4) = param_1;
    }
    else {
      pvVar3 = *(void **)(param_2 + 0x10);
      uVar1 = uVar4 << 1 | 1;
      uVar5 = (-(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + 7
              & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar3) < uVar5) {
        pvVar3 = (void *)Zone::NewExpand(param_2,uVar5);
      }
      else {
        *(ulong *)(param_2 + 0x10) = (long)pvVar3 + uVar5;
      }
      uVar4 = *(uint *)((long)plVar8 + 0xc);
      if (0 < (int)uVar4) {
        MemCopy(pvVar3,(void *)*plVar8,(ulong)uVar4 << 2);
        uVar4 = *(uint *)((long)plVar8 + 0xc);
      }
      *plVar8 = (long)pvVar3;
      *(uint *)(plVar8 + 1) = uVar1;
      *(uint *)((long)plVar8 + 0xc) = uVar4 + 1;
      *(uint *)((long)pvVar3 + (long)(int)uVar4 * 4) = param_1;
    }
  }
  return;
}

