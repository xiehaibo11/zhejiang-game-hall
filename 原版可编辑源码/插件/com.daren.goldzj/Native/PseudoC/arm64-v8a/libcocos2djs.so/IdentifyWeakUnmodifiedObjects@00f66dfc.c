
/* v8::internal::GlobalHandles::IdentifyWeakUnmodifiedObjects(bool
   (*)(v8::internal::FullObjectSlot)) */

void __thiscall
v8::internal::GlobalHandles::IdentifyWeakUnmodifiedObjects
          (GlobalHandles *this,_func_bool_FullObjectSlot *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  code *pcVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long local_28;
  
  plVar9 = *(long **)(this + 0x30);
  plVar1 = *(long **)(this + 0x38);
  if (plVar9 != plVar1) {
    lVar10 = *(long *)(*(long *)this + 0x90c0);
    do {
      lVar8 = *plVar9;
      if (((*(byte *)(lVar8 + 0xb) & 3) != 0) && (bVar2 = (*param_1)((char)lVar8), bVar2)) {
        plVar3 = *(long **)(lVar10 + 8);
        local_28 = lVar8;
        if ((*(byte *)(lVar8 + 0xb) >> 4 & 1) == 0) {
          if (plVar3 != (long *)0x0) {
            pcVar6 = *(code **)(*plVar3 + 0x40);
            goto LAB_00f66e9c;
          }
LAB_00f66e30:
          bVar5 = *(byte *)(lVar8 + 0xb) & 0xf7;
LAB_00f66e34:
          bVar7 = 8;
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_00f66e30;
          pcVar6 = *(code **)(*plVar3 + 0x48);
LAB_00f66e9c:
          uVar4 = (*pcVar6)(plVar3,&local_28);
          bVar5 = *(byte *)(lVar8 + 0xb) & 0xf7;
          if ((uVar4 & 1) != 0) goto LAB_00f66e34;
          bVar7 = 0;
        }
        *(byte *)(lVar8 + 0xb) = bVar7 | bVar5;
      }
      plVar9 = plVar9 + 1;
    } while (plVar1 != plVar9);
  }
  return;
}

