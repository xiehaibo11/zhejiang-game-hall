
/* v8::internal::BoyerMooreLookahead::BoyerMooreLookahead(int, v8::internal::RegExpCompiler*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::BoyerMooreLookahead::BoyerMooreLookahead
          (BoyerMooreLookahead *this,int param_1,RegExpCompiler *param_2,Zone *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  void *pvVar9;
  
  *(int *)this = param_1;
  *(RegExpCompiler **)(this + 8) = param_2;
  uVar6 = 0xffff;
  if (param_2[0x30] != (RegExpCompiler)0x0) {
    uVar6 = 0xff;
  }
  *(undefined4 *)(this + 0x10) = uVar6;
  plVar8 = *(long **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)plVar8) < 0x10) {
    plVar8 = (long *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(long **)(param_3 + 0x10) = plVar8 + 2;
  }
  if (param_1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x10);
    uVar5 = (ulong)(uint)param_1 * 8;
    if (uVar5 < (ulong)(*(long *)(param_3 + 0x18) - lVar4) ||
        uVar5 - (*(long *)(param_3 + 0x18) - lVar4) == 0) {
      *(ulong *)(param_3 + 0x10) = lVar4 + uVar5;
    }
    else {
      lVar4 = Zone::NewExpand(param_3,uVar5);
    }
  }
  *plVar8 = lVar4;
  *(int *)(plVar8 + 1) = param_1;
  *(undefined4 *)((long)plVar8 + 0xc) = 0;
  *(long **)(this + 0x18) = plVar8;
  if (0 < param_1) {
    while( true ) {
      param_1 = param_1 + -1;
      puVar3 = *(undefined8 **)(param_3 + 0x10);
      if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar3) < 0x18) {
        puVar3 = (undefined8 *)Zone::NewExpand(param_3,0x18);
      }
      else {
        *(undefined8 **)(param_3 + 0x10) = puVar3 + 3;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      uVar2 = *(uint *)(plVar8 + 1);
      uVar7 = *(uint *)((long)plVar8 + 0xc);
      if ((int)uVar7 < (int)uVar2) {
        pvVar9 = (void *)*plVar8;
      }
      else {
        pvVar9 = *(void **)(param_3 + 0x10);
        uVar1 = uVar2 << 1 | 1;
        uVar5 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar9) < uVar5) {
          pvVar9 = (void *)Zone::NewExpand(param_3,uVar5);
        }
        else {
          *(ulong *)(param_3 + 0x10) = (long)pvVar9 + uVar5;
        }
        uVar7 = *(uint *)((long)plVar8 + 0xc);
        if (0 < (int)uVar7) {
          MemCopy(pvVar9,(void *)*plVar8,(ulong)uVar7 << 3);
          uVar7 = *(uint *)((long)plVar8 + 0xc);
        }
        *plVar8 = (long)pvVar9;
        *(uint *)(plVar8 + 1) = uVar1;
      }
      *(uint *)((long)plVar8 + 0xc) = uVar7 + 1;
      *(undefined8 **)((long)pvVar9 + (long)(int)uVar7 * 8) = puVar3;
      if (param_1 == 0) break;
      plVar8 = *(long **)(this + 0x18);
    }
  }
  return;
}

