
/* fairygui::GProgressBar::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GProgressBar::setup_afterAdd(GProgressBar *this,ByteBuffer *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
                    /* try { // try from 00a87d54 to 00b87d73 has its CatchHandler @ 00a870f0 */
  GComponent::setup_afterAdd((GComponent *)this,param_1,param_2);
  uVar3 = ByteBuffer::seek(param_1,param_2,6);
                    /* try { // try from 00a87d74 to 00b87d7b has its CatchHandler @ 00a88120 */
                    /* try { // try from 00a87d7c to 00b87d83 has its CatchHandler @ 00a8811c */
                    /* try { // try from 00a87d84 to 00b87d8f has its CatchHandler @ 00a88118 */
  if (((uVar3 & 1) != 0) &&
     (cVar1 = ByteBuffer::readByte(param_1), *(int *)(*(long *)(this + 0xb0) + 0x34) == (int)cVar1))
  {
                    /* try { // try from 00a87d90 to 00b87f1b has its CatchHandler @ 00a881b8 */
    iVar2 = ByteBuffer::readInt(param_1);
    *(double *)(this + 0x290) = (double)iVar2;
    iVar2 = ByteBuffer::readInt(param_1);
    *(double *)(this + 0x288) = (double)iVar2;
    if (1 < *(int *)param_1) {
      iVar2 = ByteBuffer::readInt(param_1);
      *(double *)(this + 0x280) = (double)iVar2;
    }
  }
  update(this,*(double *)(this + 0x290));
  return;
}

