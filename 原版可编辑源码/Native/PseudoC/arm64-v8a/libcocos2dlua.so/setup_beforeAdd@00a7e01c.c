
/* fairygui::GList::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GList::setup_beforeAdd(GList *this,ByteBuffer *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  cVar3 = ByteBuffer::readByte(param_1);
                    /* try { // try from 00a7e058 to 00b7e08b has its CatchHandler @ 00a7e158 */
  *(int *)(this + 0x2e4) = (int)cVar3;
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x304) = (int)cVar3;
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x2f8) = (int)cVar3;
  cVar3 = ByteBuffer::readByte(param_1);
                    /* try { // try from 00a7e08c to 00b7e09f has its CatchHandler @ 00a7e124 */
  *(int *)(this + 0x2fc) = (int)cVar3;
  sVar5 = ByteBuffer::readShort(param_1);
  *(int *)(this + 0x2f0) = (int)sVar5;
  sVar5 = ByteBuffer::readShort(param_1);
                    /* try { // try from 00a7e0a4 to 00b7e0d7 has its CatchHandler @ 00a7e128 */
  *(int *)(this + 0x2f4) = (int)sVar5;
  sVar5 = ByteBuffer::readShort(param_1);
  *(int *)(this + 0x2e8) = (int)sVar5;
  sVar5 = ByteBuffer::readShort(param_1);
  *(int *)(this + 0x2ec) = (int)sVar5;
  bVar4 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a7e0d8 to 00b7e173 has its CatchHandler @ 00a7db98 */
  this[0x300] = (GList)(bVar4 & 1);
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x250) = (int)cVar3;
  sVar5 = ByteBuffer::readShort(param_1);
  *(int *)(this + 0x254) = (int)sVar5;
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    iVar6 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x23c) = (float)iVar6;
    iVar6 = ByteBuffer::readInt(param_1);
                    /* catch() { ... } // from try @ 00a7e08c with catch @ 00a7e124 */
                    /* catch() { ... } // from try @ 00a7e0a4 with catch @ 00a7e128 */
    *(float *)(this + 0x244) = (float)iVar6;
    iVar6 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x238) = (float)iVar6;
    iVar6 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x240) = (float)iVar6;
  }
  cVar3 = ByteBuffer::readByte(param_1);
                    /* catch() { ... } // from try @ 00a7e058 with catch @ 00a7e158 */
  if (cVar3 == '\x02') {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    ByteBuffer::seek(param_1,param_2,7);
    GComponent::setupScroll((GComponent *)this,param_1);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  else {
    GComponent::setupOverflow((GComponent *)this,(int)cVar3);
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 8;
  }
  if (1 < *(int *)param_1) {
    bVar4 = ByteBuffer::readBool(param_1);
    this[0x2e0] = (GList)(bVar4 & 1);
    bVar4 = ByteBuffer::readBool(param_1);
    this[0x2e1] = (GList)(bVar4 & 1);
  }
  ByteBuffer::seek(param_1,param_2,8);
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x308) != pbVar8) {
    uVar7 = *(ulong *)(pbVar8 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar8 + 0x10);
    if (((byte)*pbVar8 & 1) == 0) {
      pbVar1 = pbVar8 + 1;
      uVar7 = (ulong)((byte)*pbVar8 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x308),(char *)pbVar1,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00a7e234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  return;
}

