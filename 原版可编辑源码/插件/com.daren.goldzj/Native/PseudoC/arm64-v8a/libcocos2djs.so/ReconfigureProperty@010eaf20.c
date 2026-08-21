
/* v8::internal::Map::ReconfigureProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::InternalIndex, v8::internal::PropertyKind,
   v8::internal::PropertyAttributes, v8::internal::Representation,
   v8::internal::Handle<v8::internal::FieldType>) */

void v8::internal::Map::ReconfigureProperty
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  MapUpdater aMStack_b8 [136];
  
  MapUpdater::MapUpdater(aMStack_b8,param_1,param_2);
  MapUpdater::ReconfigureToDataField(aMStack_b8,param_3,param_5,1,param_6,param_7);
  return;
}

