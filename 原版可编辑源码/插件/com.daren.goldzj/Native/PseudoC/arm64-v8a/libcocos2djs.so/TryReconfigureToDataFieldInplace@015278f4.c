
/* v8::internal::MapUpdater::TryReconfigureToDataFieldInplace() */

undefined4 __thiscall v8::internal::MapUpdater::TryReconfigureToDataFieldInplace(MapUpdater *this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MapUpdater MVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long local_68;
  
  local_68 = **(long **)(this + 8);
  if (((*(uint *)(local_68 + 0xb) >> 0x18 & 1) == 0) &&
     (MVar4 = this[0x70], MVar4 != (MapUpdater)0x0)) {
    lVar10 = *(long *)(this + 0x58);
    uVar9 = lVar10 * 0xc00000000 + 0x1000000000 >> 0x20;
    uVar1 = *(int *)((uVar9 | 3) + **(ulong **)(this + 0x10)) >> 1;
    uVar5 = uVar1 >> 6 & 7;
    if (uVar5 == 0) {
      if (MVar4 != (MapUpdater)0x2) goto LAB_0152798c;
    }
    else if (((MVar4 == (MapUpdater)0x4) && ((uVar5 - 1 & 0xff) < 3)) &&
            (FLAG_modify_field_representation_inplace != '\0')) {
LAB_0152798c:
      if (FLAG_trace_generalization != '\0') {
        uVar7 = **(ulong **)(this + 0x10);
        uVar11 = *(undefined8 *)this;
        uVar2 = *(undefined4 *)(this + 0x30);
        uVar3 = *(undefined4 *)(this + 0x68);
        uVar9 = Map::UnwrapFieldType
                          (uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + uVar7 + 7));
        pIVar8 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar9;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar9);
        }
        Map::PrintGeneralization
                  ((Map *)&local_68,uVar11,waitpid,"uninitialized field",lVar10,uVar2,uVar2,0,uVar5,
                   MVar4,uVar1 >> 2 & 1,uVar3,puVar6,0,*(undefined8 *)(this + 0x78),0);
        lVar10 = *(long *)(this + 0x58);
        local_68 = **(long **)(this + 8);
      }
      uVar9 = Map::FindFieldOwner((Map *)&local_68,*(undefined8 *)this,lVar10);
      pIVar8 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar9;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar9);
      }
      Map::GeneralizeField
                (*(undefined8 *)this,puVar6,*(undefined8 *)(this + 0x58),
                 *(undefined4 *)(this + 0x68),this[0x70],*(undefined8 *)(this + 0x78));
      *(undefined4 *)(this + 0x50) = 4;
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 8);
      return 4;
    }
  }
  return *(undefined4 *)(this + 0x50);
}

