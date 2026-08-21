
/* cocos2d::Sprite3D::addMesh(cocos2d::Mesh*) */

void __thiscall cocos2d::Sprite3D::addMesh(Sprite3D *this,Mesh *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Ref *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00d3fbf8 with catch @ 00d3fc18 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(Ref **)(*(long *)(param_1 + 0x128) + 0x30);
  puVar2 = *(undefined8 **)(this + 0x310);
  if (puVar2 == *(undefined8 **)(this + 0x318)) {
    std::__ndk1::vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>::
    __push_back_slow_path<cocos2d::MeshVertexData*const&>
              ((vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>> *)
               (this + 0x308),(MeshVertexData **)&local_40);
  }
  else {
    *puVar2 = local_40;
    *(undefined8 **)(this + 0x310) = puVar2 + 1;
  }
                    /* try { // try from 00d3fc68 to 00e3fc6b has its CatchHandler @ 00d3fcb4 */
  Ref::retain(local_40);
  puVar2 = *(undefined8 **)(this + 0x358);
  local_40 = (Ref *)param_1;
  if (puVar2 == *(undefined8 **)(this + 0x360)) {
    std::__ndk1::vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>>::
    __push_back_slow_path<cocos2d::Mesh*const&>
              ((vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>> *)(this + 0x350),
               (Mesh **)&local_40);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x358) = puVar2 + 1;
  }
  Ref::retain(local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3fc68 with catch @ 00d3fcb4
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

