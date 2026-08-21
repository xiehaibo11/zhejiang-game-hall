
/* cocos2d::Sprite3D::initFrom(cocos2d::NodeDatas const&, cocos2d::MeshDatas const&,
   cocos2d::MaterialDatas const&) */

undefined8 __thiscall
cocos2d::Sprite3D::initFrom
          (Sprite3D *this,NodeDatas *param_1,MeshDatas *param_2,MaterialDatas *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  MeshData *pMVar4;
  Ref *this_00;
  NodeData *pNVar5;
  undefined8 *puVar6;
  long lVar7;
  Ref *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = *(undefined8 **)param_2;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != puVar2) {
    pMVar4 = (MeshData *)*puVar1;
    while( true ) {
      if (pMVar4 != (MeshData *)0x0) {
        local_60 = (Ref *)MeshVertexData::create(pMVar4);
        puVar6 = *(undefined8 **)(this + 0x310);
        if (puVar6 == *(undefined8 **)(this + 0x318)) {
          std::__ndk1::
          vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>::
          __push_back_slow_path<cocos2d::MeshVertexData*const&>
                    ((vector<cocos2d::MeshVertexData*,std::__ndk1::allocator<cocos2d::MeshVertexData*>>
                      *)(this + 0x308),(MeshVertexData **)&local_60);
        }
        else {
          *puVar6 = local_60;
          *(undefined8 **)(this + 0x310) = puVar6 + 1;
        }
        Ref::retain(local_60);
      }
      puVar1 = puVar1 + 1;
      if (puVar2 == puVar1) break;
      pMVar4 = (MeshData *)*puVar1;
    }
  }
  this_00 = (Ref *)Skeleton3D::create((vector *)(param_1 + 8));
  *(Ref **)(this + 0x300) = this_00;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != puVar2) {
    lVar7 = (long)puVar2 - (long)puVar1;
    pNVar5 = (NodeData *)*puVar1;
    while( true ) {
      if (pNVar5 != (NodeData *)0x0) {
        createNode(this,pNVar5,(Node *)this,param_3,lVar7 == 8);
      }
      puVar1 = puVar1 + 1;
      if (puVar2 == puVar1) break;
      pNVar5 = (NodeData *)*puVar1;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((NodeData *)*puVar1 != (NodeData *)0x0) {
      createAttachSprite3DNode(this,(NodeData *)*puVar1,param_3);
    }
  }
  genMaterial(this,false);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

