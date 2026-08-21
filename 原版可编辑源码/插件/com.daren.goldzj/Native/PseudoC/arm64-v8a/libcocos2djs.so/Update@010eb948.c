
/* v8::internal::Map::Update(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>) */

long * v8::internal::Map::Update(undefined8 param_1,long *param_2)

{
  MapUpdater aMStack_98 [136];
  
  if ((*(uint *)(*param_2 + 0xb) >> 0x18 & 1) != 0) {
    MapUpdater::MapUpdater(aMStack_98,param_1);
    param_2 = (long *)MapUpdater::Update(aMStack_98);
  }
  return param_2;
}

