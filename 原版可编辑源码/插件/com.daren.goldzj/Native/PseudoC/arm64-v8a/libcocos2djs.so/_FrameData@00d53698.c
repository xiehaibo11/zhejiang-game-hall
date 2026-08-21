
/* dragonBones::ArmatureCache::FrameData::~FrameData() */

void __thiscall dragonBones::ArmatureCache::FrameData::~FrameData(FrameData *this)

{
  long lVar1;
  void *pvVar2;
  FrameData *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  Mat4 *this_00;
  ulong uVar7;
  
  puVar4 = *(undefined8 **)this;
  lVar1 = *(long *)(this + 8);
  if (lVar1 - (long)puVar4 != 0) {
    uVar7 = 0;
    this_00 = (Mat4 *)*puVar4;
    while( true ) {
      if (this_00 != (Mat4 *)0x0) {
        cocos2d::Mat4::~Mat4(this_00);
        operator_delete(this_00);
      }
      uVar7 = uVar7 + 1;
      if ((ulong)(lVar1 - (long)puVar4 >> 3) <= uVar7) break;
      this_00 = *(Mat4 **)(*(long *)this + uVar7 * 8);
    }
    puVar4 = *(undefined8 **)this;
  }
  puVar6 = *(undefined8 **)(this + 0x18);
  lVar1 = *(long *)(this + 0x20);
  *(undefined8 **)(this + 8) = puVar4;
  if (lVar1 - (long)puVar6 != 0) {
    uVar7 = 0;
    pvVar2 = (void *)*puVar6;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      uVar7 = uVar7 + 1;
      if ((ulong)(lVar1 - (long)puVar6 >> 3) <= uVar7) break;
      pvVar2 = *(void **)(*(long *)(this + 0x18) + uVar7 * 8);
    }
    puVar6 = *(undefined8 **)(this + 0x18);
  }
  puVar4 = *(undefined8 **)(this + 0x30);
  lVar1 = *(long *)(this + 0x38);
  *(undefined8 **)(this + 0x20) = puVar6;
  if (lVar1 - (long)puVar4 != 0) {
    uVar7 = 0;
    pvVar2 = (void *)*puVar4;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        if (*(Ref **)((long)pvVar2 + 0x18) != (Ref *)0x0) {
          cocos2d::Ref::release(*(Ref **)((long)pvVar2 + 0x18));
        }
        operator_delete(pvVar2);
      }
      uVar7 = uVar7 + 1;
      if ((ulong)(lVar1 - (long)puVar4 >> 3) <= uVar7) break;
      pvVar2 = *(void **)(*(long *)(this + 0x30) + uVar7 * 8);
    }
    puVar4 = *(undefined8 **)(this + 0x30);
  }
  *(undefined8 **)(this + 0x38) = puVar4;
  *(undefined ***)(this + 0xf0) = &PTR__IOBuffer_01c8e178;
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf8));
    *(undefined8 *)(this + 0xf8) = 0;
  }
  pFVar3 = *(FrameData **)(this + 0x180);
  if (this + 0x160 == pFVar3) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x20);
LAB_00d537dc:
    (*pcVar5)();
  }
  else if (pFVar3 != (FrameData *)0x0) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x28);
    goto LAB_00d537dc;
  }
  pFVar3 = *(FrameData **)(this + 0x150);
  if (this + 0x130 == pFVar3) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x20);
LAB_00d53808:
    (*pcVar5)();
  }
  else if (pFVar3 != (FrameData *)0x0) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x28);
    goto LAB_00d53808;
  }
  *(undefined ***)(this + 0x50) = &PTR__IOBuffer_01c8e178;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  pFVar3 = *(FrameData **)(this + 0xe0);
  if (this + 0xc0 == pFVar3) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x20);
LAB_00d5384c:
    (*pcVar5)();
  }
  else if (pFVar3 != (FrameData *)0x0) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x28);
    goto LAB_00d5384c;
  }
  pFVar3 = *(FrameData **)(this + 0xb0);
  if (this + 0x90 == pFVar3) {
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x20);
  }
  else {
    if (pFVar3 == (FrameData *)0x0) goto LAB_00d5387c;
    pcVar5 = *(code **)(*(long *)pFVar3 + 0x28);
  }
  (*pcVar5)();
LAB_00d5387c:
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 8) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

