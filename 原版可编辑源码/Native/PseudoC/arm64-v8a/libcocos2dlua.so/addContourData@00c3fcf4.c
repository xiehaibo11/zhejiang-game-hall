
/* cocostudio::TextureData::addContourData(cocostudio::ContourData*) */

void __thiscall cocostudio::TextureData::addContourData(TextureData *this,ContourData *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ContourData *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x58);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x60)) {
    std::__ndk1::vector<cocostudio::ContourData*,std::__ndk1::allocator<cocostudio::ContourData*>>::
    __push_back_slow_path<cocostudio::ContourData*const&>
              ((vector<cocostudio::ContourData*,std::__ndk1::allocator<cocostudio::ContourData*>> *)
               (this + 0x50),&local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x58) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

