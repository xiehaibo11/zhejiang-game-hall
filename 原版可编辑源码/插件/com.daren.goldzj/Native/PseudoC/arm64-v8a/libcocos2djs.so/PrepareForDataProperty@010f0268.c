
/* v8::internal::Map::PrepareForDataProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::InternalIndex,
   v8::internal::PropertyConstness, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::Map::PrepareForDataProperty
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  MapUpdater aMStack_b8 [136];
  
  if ((*(uint *)(*param_2 + 0xb) >> 0x18 & 1) != 0) {
    MapUpdater::MapUpdater(aMStack_b8,param_1);
    param_2 = (long *)MapUpdater::Update(aMStack_b8);
  }
  FUN_010f02e0(param_1,param_2,param_3,param_4,param_5);
  return;
}

