
/* v8::internal::Map::ReconfigureElementsKind(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::ElementsKind) */

void v8::internal::Map::ReconfigureElementsKind
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  MapUpdater aMStack_a8 [136];
  
  MapUpdater::MapUpdater(aMStack_a8,param_1,param_2);
  MapUpdater::ReconfigureElementsKind(aMStack_a8,param_3);
  return;
}

