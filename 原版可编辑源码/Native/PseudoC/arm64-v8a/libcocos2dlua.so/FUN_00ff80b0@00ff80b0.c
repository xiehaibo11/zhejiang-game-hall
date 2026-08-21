
void FUN_00ff80b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  void *__ptr;
  ulong __size;
  Texture2D *this;
  long lVar5;
  Size aSStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  __size = (ulong)(uint)(*(int *)(lVar5 + 0x28) * *(int *)(lVar5 + 0x2c) * 4);
  __ptr = malloc(__size);
  this = *(Texture2D **)(lVar5 + 0x30);
  uVar4 = cocos2d::Texture2D::getPixelFormat(this);
  uVar1 = *(uint *)(lVar5 + 0x28);
  uVar2 = *(uint *)(lVar5 + 0x2c);
  cocos2d::Size::Size(aSStack_60,(float)uVar1,(float)uVar2);
  cocos2d::Texture2D::initWithData(this,__ptr,__size,uVar4,uVar1,uVar2,aSStack_60);
  free(__ptr);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

