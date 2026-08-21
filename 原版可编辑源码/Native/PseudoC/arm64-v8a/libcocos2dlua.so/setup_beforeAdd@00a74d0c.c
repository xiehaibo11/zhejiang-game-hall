
/* fairygui::GGraph::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GGraph::setup_beforeAdd(GGraph *this,ByteBuffer *param_1,int param_2)

{
  undefined4 *puVar1;
  long lVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *__s;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00a74c7c with catch @ 00a74d34 */
                    /* catch() { ... } // from try @ 00a74c10 with catch @ 00a74d38
                       catch() { ... } // from try @ 00a74ccc with catch @ 00a74d38 */
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x1d8) = (int)cVar3;
  if (cVar3 != '\0') {
    uVar5 = ByteBuffer::readInt(param_1);
    *(undefined4 *)(this + 0x1fc) = uVar5;
    local_7c = ByteBuffer::readColor(param_1);
    cocos2d::Color4F::Color4F((Color4F *)&local_78,(Color4B *)&local_7c);
    *(undefined8 *)(this + 0x1e4) = uStack_70;
    *(undefined8 *)(this + 0x1dc) = local_78;
    local_7c = ByteBuffer::readColor(param_1);
    cocos2d::Color4F::Color4F((Color4F *)&local_78,(Color4B *)&local_7c);
    *(undefined8 *)(this + 500) = uStack_70;
    *(undefined8 *)(this + 0x1ec) = local_78;
    uVar7 = ByteBuffer::readBool(param_1);
    if ((uVar7 & 1) != 0) {
      pvVar8 = operator_new__(0x10);
      *(void **)(this + 0x200) = pvVar8;
      uVar5 = ByteBuffer::readFloat(param_1);
      **(undefined4 **)(this + 0x200) = uVar5;
      uVar5 = ByteBuffer::readFloat(param_1);
      *(undefined4 *)(*(long *)(this + 0x200) + 4) = uVar5;
      uVar5 = ByteBuffer::readFloat(param_1);
      *(undefined4 *)(*(long *)(this + 0x200) + 8) = uVar5;
      uVar5 = ByteBuffer::readFloat(param_1);
      *(undefined4 *)(*(long *)(this + 0x200) + 0xc) = uVar5;
    }
    if (*(int *)(this + 0x1d8) == 4) {
      sVar4 = ByteBuffer::readShort(param_1);
      *(int *)(this + 0x214) = (int)sVar4;
      uVar5 = ByteBuffer::readFloat(param_1);
      *(undefined4 *)(this + 0x218) = uVar5;
      sVar4 = ByteBuffer::readShort(param_1);
      if (0 < sVar4) {
        uVar11 = (ulong)sVar4;
        puVar9 = operator_new(0x18);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        __s = operator_new(uVar11 << 2);
        pvVar8 = (void *)((long)__s + uVar11 * 4);
        *puVar9 = __s;
        puVar9[2] = pvVar8;
        memset(__s,0,uVar11 * 4);
        uVar7 = 0;
        puVar9[1] = pvVar8;
        *(undefined8 **)(this + 0x220) = puVar9;
        do {
          uVar5 = ByteBuffer::readFloat(param_1);
          *(undefined4 *)(**(long **)(this + 0x220) + uVar7 * 4) = uVar5;
          uVar7 = uVar7 + 1;
        } while ((uVar11 & 0xffffffff) != uVar7);
      }
    }
    else if (*(int *)(this + 0x1d8) == 3) {
      uVar6 = ByteBuffer::readShort(param_1);
      sVar4 = (short)uVar6;
      uVar7 = (long)((ulong)(uint)(int)(short)(sVar4 + (short)((uVar6 & 0x8000) >> 0xf)) << 0x20) >>
              0x21;
      puVar9 = operator_new(0x18);
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      if (2 < (uVar6 + 1 & 0xffff)) {
        if (sVar4 < -1) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar11 = uVar7 * 8;
        pvVar8 = operator_new(uVar11);
        *puVar9 = pvVar8;
        puVar9[2] = (void *)((long)pvVar8 + uVar11);
        memset(pvVar8,0,uVar11);
        puVar9[1] = (void *)((long)pvVar8 + uVar11);
      }
      fVar13 = *(float *)(this + 0xcc);
      *(undefined8 **)(this + 0x208) = puVar9;
      *(float *)(this + 0x210) = fVar13;
      if (1 < sVar4) {
        lVar10 = 0;
        uVar7 = uVar7 & 0xffffffff;
        do {
          uVar5 = ByteBuffer::readFloat(param_1);
          fVar12 = (float)ByteBuffer::readFloat(param_1);
          uVar7 = uVar7 - 1;
          puVar1 = (undefined4 *)(**(long **)(this + 0x208) + lVar10);
          lVar10 = lVar10 + 8;
          *puVar1 = uVar5;
          puVar1[1] = fVar13 - fVar12;
        } while (uVar7 != 0);
      }
    }
    updateShape(this);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

