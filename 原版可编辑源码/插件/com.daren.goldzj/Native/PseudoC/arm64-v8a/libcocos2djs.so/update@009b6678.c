
/* cocos2d::renderer::IndexBuffer::update(unsigned int, void const*, unsigned long) */

void __thiscall
cocos2d::renderer::IndexBuffer::update(IndexBuffer *this,uint param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  if (*(uint *)(this + 0xc) == 0) {
    pcVar4 = " (85): The buffer is destroyed\n";
LAB_009b66e4:
    __android_log_print(6,"renderer",pcVar4);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((param_2 != (void *)0x0) && (uVar1 = param_3 + param_1, *(uint *)(this + 0x24) < uVar1)) {
    if (param_1 != 0) {
      pcVar4 = " (94): Failed to update index buffer data, bytes exceed.\n";
      goto LAB_009b66e4;
    }
    uVar5 = (uint)uVar1;
    *(uint *)(this + 0x24) = uVar5;
    this[0x28] = (IndexBuffer)0x1;
    uVar3 = 0;
    if (*(uint *)(this + 0x20) != 0) {
      uVar3 = uVar5 / *(uint *)(this + 0x20);
    }
    *(uint *)(this + 0x1c) = uVar3;
  }
  uVar2 = *(undefined2 *)(this + 0x1a);
  ccBindBuffer(0x8893,*(uint *)(this + 0xc));
  if (this[0x28] == (IndexBuffer)0x0) {
    glBufferSubData(0x8893,(ulong)param_1,param_3,param_2);
  }
  else {
    glBufferData(0x8893,*(undefined4 *)(this + 0x24),param_2,uVar2);
    this[0x28] = (IndexBuffer)0x0;
  }
                    /* try { // try from 009b6774 to 00ab6857 has its CatchHandler @ 009b6584 */
  DeviceGraphics::restoreIndexBuffer(*(DeviceGraphics **)(this + 0x10));
  return;
}

