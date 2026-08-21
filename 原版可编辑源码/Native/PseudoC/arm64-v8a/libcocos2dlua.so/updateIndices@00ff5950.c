
/* cocos2d::IndexBuffer::updateIndices(void const*, int, int, int) */

undefined8 __thiscall
cocos2d::IndexBuffer::updateIndices
          (IndexBuffer *this,void *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  uVar4 = 0;
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    uVar5 = -(ulong)((uint)param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_4 << 2;
    iVar3 = *(int *)(*(long *)(this + 0x38) + uVar5);
    uVar1 = param_3 & (param_3 >> 0x1f ^ 0xffffffffU);
    iVar2 = iVar3 - uVar1;
    if ((int)(uVar1 + param_2) <= iVar3) {
      iVar2 = param_2;
    }
    glBindBuffer(0x8893,*(undefined4 *)(*(long *)(this + 0x28) + uVar5));
    iVar6 = 2;
    iVar3 = iVar6;
    if (*(int *)(this + 0x34) != 0) {
      iVar3 = 4;
    }
    glBufferSubData(0x8893,iVar3 * uVar1,(long)(iVar3 * iVar2),param_1);
    glBindBuffer(0x8893,0);
    if (_enableShadowCopy != '\0') {
      if (*(int *)(this + 0x34) != 0) {
        iVar6 = 4;
      }
      memcpy((void *)(*(long *)(*(long *)(this + 0x48) + (long)param_4 * 0x18) +
                     (ulong)(iVar6 * uVar1)),param_1,(long)(iVar6 * iVar2));
    }
    uVar4 = 1;
  }
  return uVar4;
}

