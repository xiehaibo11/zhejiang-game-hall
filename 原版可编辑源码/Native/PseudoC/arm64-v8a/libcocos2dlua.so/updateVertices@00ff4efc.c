
/* cocos2d::VertexBuffer::updateVertices(void const*, int, int, int) */

undefined8 __thiscall
cocos2d::VertexBuffer::updateVertices
          (VertexBuffer *this,void *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    uVar1 = param_3 & (param_3 >> 0x1f ^ 0xffffffffU);
    iVar3 = *(int *)(*(long *)(this + 0x40) + (long)param_4 * 4);
    iVar2 = iVar3 - uVar1;
    if ((int)(uVar1 + param_2) <= iVar3) {
      iVar2 = param_2;
    }
    if (_enableShadowCopy != '\0') {
      memcpy((void *)(*(long *)(*(long *)(this + 0x48) + (long)param_4 * 0x18) +
                     (long)(int)(*(int *)(this + 0x3c) * uVar1)),param_1,
             (long)(*(int *)(this + 0x3c) * iVar2));
    }
    glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x30) + (long)param_4 * 4));
    glBufferSubData(0x8892,(long)(int)(*(int *)(this + 0x3c) * uVar1),
                    (long)(*(int *)(this + 0x3c) * iVar2),param_1);
    glBindBuffer(0x8892,0);
    uVar4 = 1;
  }
  return uVar4;
}

