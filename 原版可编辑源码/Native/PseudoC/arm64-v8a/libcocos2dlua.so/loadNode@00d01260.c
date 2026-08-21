
/* cocosbuilder::NodeLoader::loadNode(cocos2d::Node*, cocosbuilder::CCBReader*) */

undefined8 cocosbuilder::NodeLoader::loadNode(Node *param_1,CCBReader *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x28))();
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar1 = *(void **)(param_1 + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      cocos2d::Value::~Value((Value *)(puVar1 + 5));
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return uVar2;
}

