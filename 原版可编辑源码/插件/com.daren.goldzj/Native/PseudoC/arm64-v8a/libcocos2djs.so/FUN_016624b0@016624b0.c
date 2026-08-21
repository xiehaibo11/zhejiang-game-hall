
bool FUN_016624b0(undefined8 *param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  Zone *this;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar5 = (long *)*param_1;
  if ((*(byte *)(*plVar5 + 0x1d0) >> 2 & 1) != 0) {
    v8::internal::PrintF("Using information from B%d\n",(ulong)param_2);
  }
  iVar1 = *(int *)(param_1[1] + 100);
  if (param_2 + 1 != iVar1) {
    lVar4 = *plVar5;
    lVar6 = *(long *)(lVar4 + 0x1b0);
    plVar5 = (long *)(lVar6 + ((long)((ulong)param_2 << 0x20) >> 0x1b));
    if ((*(byte *)(lVar4 + 0x1d0) >> 2 & 1) != 0) {
      v8::internal::PrintF
                ("Not a fallthrough. Adding %zu elements...\n",
                 *(long *)(lVar6 + (long)(int)param_2 * 0x20 + 8) - *plVar5 >> 3);
    }
    plVar7 = *(long **)(lVar6 + (long)(int)param_2 * 0x20 + 8);
    for (plVar5 = (long *)*plVar5; plVar5 != plVar7; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((*(uint *)(lVar4 + 4) & 0x1f80) != 0x1000) {
        this = *(Zone **)(param_3 + 0x20);
        puVar3 = *(undefined8 **)(this + 0x10);
        if ((ulong)(*(long *)(this + 0x18) - (long)puVar3) < 0x20) {
          puVar3 = (undefined8 *)v8::internal::Zone::NewExpand(this,0x20);
        }
        else {
          *(undefined8 **)(this + 0x10) = puVar3 + 4;
        }
        lVar6 = *(long *)(lVar4 + 0x20);
        puVar3[2] = lVar6;
        *(uint *)(puVar3 + 3) = *(uint *)(lVar4 + 4) >> 7 & 0x3f;
        iVar2 = *(int *)(lVar6 + 0x5c);
        *puVar3 = 0;
        puVar3[1] = (long)iVar2;
        FUN_01666c04(param_3);
      }
    }
  }
  return param_2 + 1 == iVar1;
}

