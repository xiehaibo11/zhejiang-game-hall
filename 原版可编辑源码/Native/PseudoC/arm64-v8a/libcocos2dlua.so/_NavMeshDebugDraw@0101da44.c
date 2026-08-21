
/* cocos2d::NavMeshDebugDraw::~NavMeshDebugDraw() */

void __thiscall cocos2d::NavMeshDebugDraw::~NavMeshDebugDraw(NavMeshDebugDraw *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  Vec4 *this_00;
  void *pvVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__NavMeshDebugDraw_01727078;
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  puVar2 = *(undefined8 **)(this + 0x28);
  for (puVar1 = *(undefined8 **)(this + 0x20); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete((void *)*puVar1);
    }
  }
  glDeleteBuffers(1,this + 0xb0);
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x50));
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(this + 0x10);
    pvVar4 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        this_00 = (Vec4 *)((long)pvVar5 + -0x10);
        pvVar5 = (void *)((long)pvVar5 + -0x1c);
        Vec4::~Vec4(this_00);
      } while (pvVar3 != pvVar5);
      pvVar4 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar3;
    operator_delete(pvVar4);
  }
  duDebugDraw::~duDebugDraw((duDebugDraw *)this);
  return;
}

