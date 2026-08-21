
/* cocos2d::Terrain::onEnter() */

void __thiscall cocos2d::Terrain::onEnter(Terrain *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Node::onEnter((Node *)this);
    (**(code **)(*(long *)this + 0x430))(&local_78,this);
    *(undefined8 *)(this + 0x805b0) = uStack_50;
    *(undefined8 *)(this + 0x805a8) = local_58;
    *(undefined8 *)(this + 0x805c0) = uStack_40;
    *(undefined8 *)(this + 0x805b8) = local_48;
    *(undefined8 *)(this + 0x80590) = uStack_70;
    *(undefined8 *)(this + 0x80588) = local_78;
    *(undefined8 *)(this + 0x805a0) = uStack_60;
    *(undefined8 *)(this + 0x80598) = local_68;
    Mat4::~Mat4((Mat4 *)&local_78);
    QuadTree::preCalculateAABB(*(QuadTree **)(this + 0x4f0),(Mat4 *)(this + 0x80588));
    cacheUniformAttribLocation(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

