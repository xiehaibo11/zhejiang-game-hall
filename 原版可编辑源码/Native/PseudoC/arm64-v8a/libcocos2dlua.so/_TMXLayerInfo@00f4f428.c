
/* cocos2d::TMXLayerInfo::~TMXLayerInfo() */

void __thiscall cocos2d::TMXLayerInfo::~TMXLayerInfo(TMXLayerInfo *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__TMXLayerInfo_01711d00;
  if ((this[0x7a] != (TMXLayerInfo)0x0) && (*(void **)(this + 0x70) != (void *)0x0)) {
    free(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

