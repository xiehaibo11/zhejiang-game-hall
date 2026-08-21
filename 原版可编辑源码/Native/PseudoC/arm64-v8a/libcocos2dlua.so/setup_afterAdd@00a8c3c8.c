
/* fairygui::GTextField::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GTextField::setup_afterAdd(GTextField *this,ByteBuffer *param_1,int param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  GObject::setup_afterAdd((GObject *)this,param_1,param_2);
  (**(code **)(*(long *)this + 0xd8))(this);
  ByteBuffer::seek(param_1,param_2,6);
                    /* try { // try from 00a8c408 to 00b8c4a3 has its CatchHandler @ 00a8c408
                       catch() { ... } // from try @ 00a8c408 with catch @ 00a8c408
                       catch() { ... } // from try @ 00a8c4ac with catch @ 00a8c408 */
  pbVar2 = (byte *)ByteBuffer::readS(param_1);
  uVar1 = (ulong)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar2 + 8);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a8c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))(this,pbVar2);
    return;
  }
  return;
}

