
/* cocos2d::Physics3DWorld::removePhysics3DObject(cocos2d::Physics3DObject*) */

void __thiscall
cocos2d::Physics3DWorld::removePhysics3DObject(Physics3DWorld *this,Physics3DObject *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  if ((puVar2 != __dest) && ((Physics3DObject *)*__dest != param_1)) {
    do {
      if (puVar2 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((Physics3DObject *)*puVar1 != param_1);
  }
  if (__dest == puVar2) {
    return;
  }
  iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (iVar3 == 1) {
    plVar4 = *(long **)(this + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    pcVar6 = *(code **)(*plVar4 + 0xb8);
  }
  else {
    iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (iVar3 != 2) goto LAB_0100fdd8;
    plVar4 = *(long **)(this + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    pcVar6 = *(code **)(*plVar4 + 0x50);
  }
  (*pcVar6)(plVar4,uVar5);
LAB_0100fdd8:
  Ref::release((Ref *)param_1);
  __n = *(long *)(this + 0x30) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x30) = __dest + ((long)__n >> 3);
  *(undefined2 *)(this + 0x59) = 0x101;
  return;
}

