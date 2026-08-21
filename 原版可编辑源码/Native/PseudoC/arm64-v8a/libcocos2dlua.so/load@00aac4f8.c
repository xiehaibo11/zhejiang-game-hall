
/* fairygui::PixelHitTestData::load(fairygui::ByteBuffer*) */

void __thiscall fairygui::PixelHitTestData::load(PixelHitTestData *this,ByteBuffer *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  uVar3 = ByteBuffer::readInt(param_1);
  *(undefined4 *)this = uVar3;
  cVar1 = ByteBuffer::readByte(param_1);
  *(float *)(this + 4) = 1.0 / (float)(int)cVar1;
  iVar4 = ByteBuffer::readInt(param_1);
  *(long *)(this + 0x10) = (long)iVar4;
  pvVar5 = operator_new__((long)iVar4);
  *(void **)(this + 8) = pvVar5;
  if (iVar4 != 0) {
    uVar6 = 0;
    do {
      uVar2 = ByteBuffer::readByte(param_1);
      *(undefined1 *)(*(long *)(this + 8) + uVar6) = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulong *)(this + 0x10));
  }
  return;
}

