
/* v8::internal::IC::CopyICToMegamorphicCache(v8::internal::Handle<v8::internal::Name>) */

void __thiscall v8::internal::IC::CopyICToMegamorphicCache(IC *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  FeedbackNexus::ExtractMapsAndHandlers
            ((FeedbackNexus *)(this + 0x50),(vector *)&local_58,(vector *)&local_70);
  pvVar2 = local_58;
  if (local_50 != local_58) {
    lVar7 = 0;
    uVar8 = 0;
    pvVar5 = local_50;
    do {
      if ((ulong)((long)local_68 - (long)local_70 >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(int *)(this + 0x1c) != 9) {
        uVar3 = **(undefined8 **)((long)pvVar2 + uVar8 * 8);
        puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x9560);
        if (3 < *(int *)(this + 0x1c) - 5U) {
          puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x9568);
        }
        puVar6 = *(ulong **)((int *)((long)local_70 + lVar7) + 2);
        if (*(int *)((long)local_70 + lVar7) == 0) {
          if (puVar6 == (ulong *)0x0) goto LAB_014fc4a0;
          uVar4 = *puVar6 | 2;
        }
        else {
          if (puVar6 == (ulong *)0x0) {
LAB_014fc4a0:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr",uVar3);
          }
          uVar4 = *puVar6;
        }
        StubCache::Set((StubCache *)*puVar1,*param_2,uVar3,uVar4);
        pvVar2 = local_58;
        pvVar5 = local_50;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar8 < (ulong)((long)pvVar5 - (long)pvVar2 >> 3));
  }
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
    pvVar2 = local_58;
  }
  if (pvVar2 != (void *)0x0) {
    local_50 = pvVar2;
    operator_delete(pvVar2);
  }
  return;
}

