
/* cocos2d::VertexAttribBinding::create(cocos2d::MeshIndexData*, cocos2d::GLProgramState*) */

Ref * cocos2d::VertexAttribBinding::create(MeshIndexData *param_1,GLProgramState *param_2)

{
  long lVar1;
  long lVar2;
  Ref *this;
  Ref *pRVar3;
  ulong uVar4;
  VertexAttribBinding *local_70;
  long local_68;
  
                    /* try { // try from 00ff403c to 010f4043 has its CatchHandler @ 00ff4088 */
                    /* try { // try from 00ff4044 to 010f40a3 has its CatchHandler @ 00ff3ee8 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = (long)DAT_01792a88 - DAT_01792a80;
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 00ff403c with catch @ 00ff4088 */
    uVar4 = 0;
                    /* catch() { ... } // from try @ 00ff3fd4 with catch @ 00ff408c */
                    /* catch() { ... } // from try @ 00ff3f6c with catch @ 00ff4090 */
    do {
                    /* try { // try from 00ff40a4 to 010f40fb has its CatchHandler @ 00ff40a4
                       catch() { ... } // from try @ 00ff40a4 with catch @ 00ff40a4
                       catch() { ... } // from try @ 00ff4134 with catch @ 00ff40a4 */
      pRVar3 = *(Ref **)(DAT_01792a80 + uVar4 * 8);
      local_70 = (VertexAttribBinding *)pRVar3;
      if (pRVar3 == (Ref *)0x0) {
        __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCVertexAttribBinding.cpp"
                            ,"create",0x55);
      }
      if ((*(MeshIndexData **)(pRVar3 + 0x28) == param_1) &&
         (*(GLProgramState **)(pRVar3 + 0x30) == param_2)) goto LAB_00ff419c;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar1 >> 3));
  }
                    /* try { // try from 00ff40fc to 010f4103 has its CatchHandler @ 00ff41bc */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this == (Ref *)0x0) {
    local_70 = (VertexAttribBinding *)0x0;
    pRVar3 = (Ref *)local_70;
  }
  else {
    Ref::Ref(this);
                    /* try { // try from 00ff412c to 010f4133 has its CatchHandler @ 00ff41ac */
                    /* try { // try from 00ff4134 to 010f41cf has its CatchHandler @ 00ff40a4 */
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x44) = 0;
    *(undefined8 *)(this + 0x54) = 0x3f80000000000000;
    *(undefined ***)this = &PTR__VertexAttribBinding_01724630;
    local_70 = (VertexAttribBinding *)this;
    uVar4 = init((VertexAttribBinding *)this,param_1,param_2);
    pRVar3 = (Ref *)local_70;
    if ((uVar4 & 1) != 0) {
      Ref::autorelease(this);
      if (DAT_01792a88 == DAT_01792a90) {
        std::__ndk1::
        vector<cocos2d::VertexAttribBinding*,std::__ndk1::allocator<cocos2d::VertexAttribBinding*>>
        ::__push_back_slow_path<cocos2d::VertexAttribBinding*const&>
                  ((vector<cocos2d::VertexAttribBinding*,std::__ndk1::allocator<cocos2d::VertexAttribBinding*>>
                    *)&DAT_01792a80,&local_70);
        pRVar3 = (Ref *)local_70;
      }
      else {
        *DAT_01792a88 = this;
        pRVar3 = (Ref *)local_70;
        DAT_01792a88 = DAT_01792a88 + 1;
      }
    }
  }
LAB_00ff419c:
                    /* catch() { ... } // from try @ 00ff412c with catch @ 00ff41ac */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00ff40fc with catch @ 00ff41bc */
                    /* try { // try from 00ff41d0 to 010f421f has its CatchHandler @ 00ff41d0
                       catch() { ... } // from try @ 00ff41d0 with catch @ 00ff41d0
                       catch() { ... } // from try @ 00ff4254 with catch @ 00ff41d0 */
  return pRVar3;
}

