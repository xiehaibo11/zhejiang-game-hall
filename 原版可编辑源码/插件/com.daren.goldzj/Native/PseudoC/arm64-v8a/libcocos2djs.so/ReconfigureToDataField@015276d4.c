
/* v8::internal::MapUpdater::ReconfigureToDataField(v8::internal::InternalIndex,
   v8::internal::PropertyAttributes, v8::internal::PropertyConstness, v8::internal::Representation,
   v8::internal::Handle<v8::internal::FieldType>) */

undefined8 __thiscall
v8::internal::MapUpdater::ReconfigureToDataField
          (MapUpdater *this,long param_2,undefined4 param_3,int param_4,MapUpdater param_5,
          undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_28;
  
  puVar8 = *(ulong **)(this + 0x10);
  *(long *)(this + 0x58) = param_2;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = param_3;
  *(undefined4 *)(this + 0x6c) = 0;
  uVar10 = param_2 * 0xc00000000 + 0x1000000000 >> 0x20;
  uVar3 = *(uint *)(*puVar8 + (uVar10 | 3));
  uVar11 = (uint)(char)param_5;
  if ((uVar3 >> 1 & 1) == 0) {
    uVar1 = (int)uVar3 >> 1;
    uVar4 = uVar1 >> 6 & 7;
    uVar2 = 0;
    if (param_4 != 0) {
      uVar2 = uVar1 >> 2 & 1;
    }
    bVar5 = (uVar1 >> 6 & 7) == 0;
    if (uVar11 != 3) {
      bVar5 = (int)uVar4 < (int)uVar11;
    }
    *(uint *)(this + 0x68) = uVar2;
    if ((uVar11 != uVar4) && (!bVar5)) {
      bVar5 = uVar11 == 0;
      if (uVar4 != 3) {
        bVar5 = (int)uVar11 < (int)uVar4;
      }
      uVar11 = uVar4;
      if (!bVar5) {
        uVar11 = 4;
      }
    }
    this[0x70] = SUB41(uVar11,0);
    if ((uVar3 >> 2 & 1) == 0) {
      uVar10 = Map::UnwrapFieldType
                         (*puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + *puVar8 + 7));
      pIVar9 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar10;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
      }
    }
    else {
      local_28 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + *puVar8 + 7);
      puVar8 = (ulong *)Object::OptimalType((Object *)&local_28,*(undefined8 *)this,uVar11 & 0xff);
    }
    param_6 = Map::GeneralizeFieldType(uVar4,puVar8,this[0x70],param_6,*(undefined8 *)this);
  }
  else {
    *(undefined4 *)(this + 0x68) = 0;
    this[0x70] = param_5;
  }
  *(undefined8 *)(this + 0x78) = param_6;
  uVar11 = *(ushort *)(**(long **)(this + 8) + 7) - 0x411;
  if ((uVar11 < 0x13) && ((1 << (ulong)(uVar11 & 0x1f) & 0x60001U) != 0)) {
    uVar7 = FieldType::Any(*(Isolate **)this);
    *(undefined8 *)(this + 0x78) = uVar7;
    this[0x70] = (MapUpdater)0x4;
  }
  iVar6 = TryReconfigureToDataFieldInplace(this);
  if ((((iVar6 != 4) && (iVar6 = FindRootMap(this), iVar6 != 4)) &&
      (iVar6 = FindTargetMap(this), iVar6 != 4)) && (iVar6 = ConstructNewMap(this), iVar6 == 3)) {
    ConstructNewMapWithIntegrityLevelTransition(this);
  }
  return *(undefined8 *)(this + 0x28);
}

