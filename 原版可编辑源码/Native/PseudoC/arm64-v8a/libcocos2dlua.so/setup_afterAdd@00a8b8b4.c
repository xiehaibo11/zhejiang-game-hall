
/* fairygui::GSlider::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GSlider::setup_afterAdd(GSlider *this,ByteBuffer *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  double dVar4;
  
  GComponent::setup_afterAdd((GComponent *)this,param_1,param_2);
                    /* try { // try from 00a8b8d8 to 00b8b96b has its CatchHandler @ 00a8b8d8
                       catch() { ... } // from try @ 00a8b8d8 with catch @ 00a8b8d8
                       catch() { ... } // from try @ 00a8b974 with catch @ 00a8b8d8 */
  uVar3 = ByteBuffer::seek(param_1,param_2,6);
  if (((uVar3 & 1) == 0) ||
     (cVar1 = ByteBuffer::readByte(param_1), *(int *)(*(long *)(this + 0xb0) + 0x34) != (int)cVar1))
  {
    dVar4 = *(double *)(this + 0x298) / *(double *)(this + 0x290);
  }
  else {
    iVar2 = ByteBuffer::readInt(param_1);
    *(double *)(this + 0x298) = (double)iVar2;
    iVar2 = ByteBuffer::readInt(param_1);
    dVar4 = (double)iVar2;
    *(double *)(this + 0x290) = dVar4;
    if (1 < *(int *)param_1) {
      iVar2 = ByteBuffer::readInt(param_1);
      dVar4 = *(double *)(this + 0x290);
      *(double *)(this + 0x288) = (double)iVar2;
    }
    dVar4 = *(double *)(this + 0x298) / dVar4;
  }
  dVar4 = (double)NEON_fminnm(dVar4,0x3ff0000000000000);
                    /* try { // try from 00a8b96c to 00b8b973 has its CatchHandler @ 00a8b9b0 */
                    /* try { // try from 00a8b974 to 00b8b9cb has its CatchHandler @ 00a8b8d8 */
  updateWithPercent(this,(float)dVar4,false);
  return;
}

