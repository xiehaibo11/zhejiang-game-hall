
/* v8::internal::Map::ReconfigureExistingProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::InternalIndex, v8::internal::PropertyKind,
   v8::internal::PropertyAttributes, v8::internal::PropertyConstness) */

void v8::internal::Map::ReconfigureExistingProperty
               (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_c8 [17];
  
  uVar2 = *param_2;
  uVar3 = uVar2 & 0xffffffff00000000;
  if (((*(uint *)(uVar2 + 0x13) & 1) == 0) ||
     (uVar4 = uVar3 | *(uint *)(uVar2 + 0x13),
     *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0xa2)) {
    uVar4 = *(ulong *)(uVar3 + 0xa0);
  }
  if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0xa2) {
    if (FLAG_trace_generalization != '\0') {
      local_c8[0] = uVar2;
      PrintReconfiguration((Map *)local_c8,param_1,waitpid,param_3,param_4,param_5);
    }
    MapUpdater::MapUpdater((MapUpdater *)local_c8,param_1,param_2);
    uVar1 = FieldType::None(param_1);
    MapUpdater::ReconfigureToDataField((MapUpdater *)local_c8,param_3,param_5,param_6,0,uVar1);
    return;
  }
  Normalize(param_1,param_2,*(byte *)(uVar2 + 10) >> 3,0,"Normalize_AttributesMismatchProtoMap");
  return;
}

