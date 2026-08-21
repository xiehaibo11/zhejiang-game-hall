
/* fairygui::ByteBuffer::ByteBuffer(char*, int, int, bool) */

void __thiscall
fairygui::ByteBuffer::ByteBuffer
          (ByteBuffer *this,char *param_1,int param_2,int param_3,bool param_4)

{
  *(undefined4 *)this = 0;
  *(char **)(this + 8) = param_1;
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 0x14) = param_3;
  this[0x18] = (ByteBuffer)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x19] = (ByteBuffer)param_4;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}

