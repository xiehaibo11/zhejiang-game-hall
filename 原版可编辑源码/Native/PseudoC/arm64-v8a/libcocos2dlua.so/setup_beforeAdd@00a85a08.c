
/* fairygui::GObject::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GObject::setup_beforeAdd(GObject *this,ByteBuffer *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  long *plVar8;
  GGroup *this_00;
  basic_string *pbVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float local_58;
  float fStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ByteBuffer::seek(param_1,param_2,0);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 5;
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x48) != pbVar6) {
    uVar7 = *(ulong *)(pbVar6 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar6 + 0x10);
    if (((byte)*pbVar6 & 1) == 0) {
      pbVar1 = pbVar6 + 1;
      uVar7 = (ulong)((byte)*pbVar6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pbVar1,uVar7);
  }
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x60) != pbVar6) {
    uVar7 = *(ulong *)(pbVar6 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar6 + 0x10);
    if (((byte)*pbVar6 & 1) == 0) {
      pbVar1 = pbVar6 + 1;
      uVar7 = (ulong)((byte)*pbVar6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x60),(char *)pbVar1,uVar7);
  }
  iVar4 = ByteBuffer::readInt(param_1);
  iVar5 = ByteBuffer::readInt(param_1);
  setPosition(this,(float)iVar4,(float)iVar5);
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    iVar4 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x80) = (float)iVar4;
    iVar4 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x84) = (float)iVar4;
    setSize(this,*(float *)(this + 0x80),(float)iVar4,true);
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    iVar4 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x88) = (float)iVar4;
                    /* try { // try from 00a85b3c to 00b85b6f has its CatchHandler @ 00a85c3c */
    iVar4 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x90) = (float)iVar4;
    iVar4 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x8c) = (float)iVar4;
    iVar4 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x94) = (float)iVar4;
  }
  uVar7 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a85b70 to 00b85b83 has its CatchHandler @ 00a85c08 */
  if ((uVar7 & 1) != 0) {
    fVar10 = (float)ByteBuffer::readFloat(param_1);
    fVar11 = (float)ByteBuffer::readFloat(param_1);
                    /* try { // try from 00a85b88 to 00b85bbb has its CatchHandler @ 00a85c0c */
    if ((*(float *)(this + 0xe0) != fVar10) || (*(float *)(this + 0xe4) != fVar11)) {
      *(float *)(this + 0xe0) = fVar10;
      *(float *)(this + 0xe4) = fVar11;
      (**(code **)(*(long *)this + 0x60))(this);
                    /* try { // try from 00a85bbc to 00b85c57 has its CatchHandler @ 00a8579c */
      if ((this[0x98] == (GObject)0x0) &&
         (((this[0x99] == (GObject)0x0 && (plVar8 = *(long **)(this + 0x150), plVar8 != (long *)0x0)
           ) && (plVar8[2] != 0)))) {
        (**(code **)(*plVar8 + 0x20))();
      }
    }
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    uVar12 = ByteBuffer::readFloat(param_1);
    uVar13 = ByteBuffer::readFloat(param_1);
    (**(code **)(**(long **)(this + 0xa8) + 0x1b0))(uVar12);
                    /* catch() { ... } // from try @ 00a85b70 with catch @ 00a85c08 */
                    /* catch() { ... } // from try @ 00a85b88 with catch @ 00a85c0c */
    (**(code **)(**(long **)(this + 0xa8) + 0x1d0))(uVar13);
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    fVar10 = (float)ByteBuffer::readFloat(param_1);
    fVar11 = (float)ByteBuffer::readFloat(param_1);
                    /* catch() { ... } // from try @ 00a85b3c with catch @ 00a85c3c */
    bVar3 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a85c58 to 00b85c93 has its CatchHandler @ 00a85c58
                       catch() { ... } // from try @ 00a85c58 with catch @ 00a85c58
                       catch() { ... } // from try @ 00a85d28 with catch @ 00a85c58
                       catch() { ... } // from try @ 00a85d80 with catch @ 00a85c58 */
    if (((*(float *)(this + 0xd8) != fVar10) || (*(float *)(this + 0xdc) != fVar11)) ||
       (this[0xe8] != (GObject)(bVar3 & 1))) {
      plVar8 = *(long **)(this + 0xa8);
      *(float *)(this + 0xd8) = fVar10;
      *(float *)(this + 0xdc) = fVar11;
      this[0xe8] = (GObject)(bVar3 & 1);
      if (plVar8 != (long *)0x0) {
        fStack_54 = 1.0 - fVar11;
        local_58 = fVar10;
        (**(code **)(*plVar8 + 0x148))(plVar8,&local_58);
      }
                    /* try { // try from 00a85c94 to 00b85ce3 has its CatchHandler @ 00a85df4 */
      (**(code **)(*(long *)this + 0x70))(this);
    }
  }
  fVar10 = (float)ByteBuffer::readFloat(param_1);
  if ((fVar10 != 1.0) && (*(float *)(this + 0xec) != fVar10)) {
    *(float *)(this + 0xec) = fVar10;
    (**(code **)(*(long *)this + 0x80))(this);
    if ((this[0x98] == (GObject)0x0) &&
       (((this[0x99] == (GObject)0x0 && (plVar8 = *(long **)(this + 0x158), plVar8 != (long *)0x0))
        && (plVar8[2] != 0)))) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  fVar10 = (float)ByteBuffer::readFloat(param_1);
                    /* try { // try from 00a85cf4 to 00b85d03 has its CatchHandler @ 00a85df0 */
  if ((fVar10 != 0.0) && (*(float *)(this + 0xf0) != fVar10)) {
    *(float *)(this + 0xf0) = fVar10;
    (**(code **)(**(long **)(this + 0xa8) + 0x180))();
    if (((this[0x98] == (GObject)0x0) &&
        ((this[0x99] == (GObject)0x0 && (plVar8 = *(long **)(this + 0x158), plVar8 != (long *)0x0)))
        ) && (plVar8[2] != 0)) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
                    /* try { // try from 00a85d20 to 00b85d27 has its CatchHandler @ 00a85dc0 */
  uVar7 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a85d28 to 00b85d6b has its CatchHandler @ 00a85c58 */
  if (((uVar7 & 1) == 0) && (this[0xf4] != (GObject)0x0)) {
    this[0xf4] = (GObject)0x0;
    (**(code **)(*(long *)this + 0x88))(this);
    if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
      GComponent::setBoundsChangedFlag(*(GComponent **)(this + 0xa0));
    }
    this_00 = *(GGroup **)(this + 0x128);
    if ((this_00 != (GGroup *)0x0) && (this_00[0x1e8] != (GGroup)0x0)) {
      GGroup::setBoundsChangedFlag(this_00,false);
    }
  }
                    /* try { // try from 00a85d6c to 00b85d7f has its CatchHandler @ 00a85df4 */
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) == 0) {
    this[0xf5] = (GObject)0x0;
  }
                    /* try { // try from 00a85d80 to 00b85e0f has its CatchHandler @ 00a85c58 */
  uVar7 = ByteBuffer::readBool(param_1);
  if (((uVar7 & 1) != 0) && ((this[0xf6] != (GObject)0x1 || (this[0xf7] != (GObject)0x1)))) {
    this[0xf6] = (GObject)0x1;
    (**(code **)(*(long *)this + 0x68))(this);
                    /* catch() { ... } // from try @ 00a85d20 with catch @ 00a85dc0 */
    if ((this[0x98] == (GObject)0x0) &&
       (((this[0x99] == (GObject)0x0 && (plVar8 = *(long **)(this + 0x158), plVar8 != (long *)0x0))
        && (plVar8[2] != 0)))) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  ByteBuffer::readByte(param_1);
  ByteBuffer::readByte(param_1);
  pbVar9 = (basic_string *)ByteBuffer::readS(param_1);
  uVar7 = (ulong)((byte)*pbVar9 >> 1);
                    /* catch() { ... } // from try @ 00a85cf4 with catch @ 00a85df0 */
  if (((byte)*pbVar9 & 1) != 0) {
    uVar7 = *(ulong *)(pbVar9 + 8);
  }
                    /* catch() { ... } // from try @ 00a85c94 with catch @ 00a85df4
                       catch() { ... } // from try @ 00a85d6c with catch @ 00a85df4 */
  if (uVar7 != 0) {
    cocos2d::Value::Value((Value *)&local_58,pbVar9);
    cocos2d::Value::operator=((Value *)(this + 0x198),(Value *)&local_58);
    cocos2d::Value::~Value((Value *)&local_58);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

