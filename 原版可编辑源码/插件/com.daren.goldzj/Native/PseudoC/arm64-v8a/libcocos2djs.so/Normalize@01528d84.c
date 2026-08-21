
/* v8::internal::MapUpdater::Normalize(char const*) */

undefined8 __thiscall v8::internal::MapUpdater::Normalize(MapUpdater *this,char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Map::Normalize(*(undefined8 *)this,*(undefined8 *)(this + 8),this[0x54],0,param_1);
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x50) = 4;
  return 4;
}

