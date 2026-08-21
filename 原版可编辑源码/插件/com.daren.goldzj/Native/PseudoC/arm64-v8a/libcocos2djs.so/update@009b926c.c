
/* cocos2d::renderer::VertexBuffer::update(unsigned int, void const*, unsigned long) */

void __thiscall
cocos2d::renderer::VertexBuffer::update(VertexBuffer *this,uint param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  if (*(uint *)(this + 0xc) == 0) {
    pcVar4 = " (81): The buffer is destroyed\n";
LAB_009b92d4:
    __android_log_print(6,"renderer",pcVar4);
    return;
  }
  if ((param_2 != (void *)0x0) && (uVar1 = param_3 + param_1, *(uint *)(this + 0x28) < uVar1)) {
    if (param_1 != 0) {
      pcVar4 = " (88): Failed to update index buffer data, bytes exceed.\n";
      goto LAB_009b92d4;
    }
    this[0x2c] = (VertexBuffer)0x1;
    uVar5 = (uint)uVar1;
    *(uint *)(this + 0x28) = uVar5;
    uVar3 = 0;
    if (*(uint *)(*(long *)(this + 0x18) + 0x50) != 0) {
      uVar3 = uVar5 / *(uint *)(*(long *)(this + 0x18) + 0x50);
    }
    *(uint *)(this + 0x24) = uVar3;
  }
  uVar2 = *(undefined2 *)(this + 0x20);
  ccBindBuffer(0x8892,*(uint *)(this + 0xc));
  if (this[0x2c] == (VertexBuffer)0x0) {
    glBufferSubData(0x8892,(ulong)param_1,param_3,param_2);
  }
  else {
    glBufferData(0x8892,*(undefined4 *)(this + 0x28),param_2,uVar2);
    this[0x2c] = (VertexBuffer)0x0;
  }
  ccBindBuffer(0x8892,0);
  return;
}

