
/* fairygui::GComponent::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GComponent::setup_afterAdd(GComponent *this,ByteBuffer *param_1,int param_2)

{
  size_t __n;
  ulong uVar1;
  undefined8 *puVar2;
  byte *__s2;
  long lVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  basic_string *pbVar7;
  long *plVar8;
  long lVar9;
  GController *pGVar10;
  GController *pGVar11;
  GController *pGVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  Value aVStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pGVar10 = (GController *)(ulong)(uint)param_2;
  GObject::setup_afterAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,4);
  sVar4 = ByteBuffer::readShort(param_1);
  if (((sVar4 != -1) && (lVar9 = *(long *)(this + 0x230), lVar9 != 0)) &&
     (*(char *)(lVar9 + 0x58) != '\0')) {
    *(undefined8 *)(lVar9 + 0x130) =
         *(undefined8 *)(*(long *)(*(long *)(this + 0xa0) + 0x1f8) + (long)sVar4 * 8);
  }
  sVar4 = ByteBuffer::readShort(param_1);
  if (0 < sVar4) {
    iVar14 = 0;
    do {
      pbVar6 = (byte *)ByteBuffer::readS(param_1);
      puVar15 = *(undefined8 **)(this + 0x1f8);
      puVar2 = *(undefined8 **)(this + 0x200);
      if (puVar15 != puVar2) {
        uVar1 = *(ulong *)(pbVar6 + 8);
        __s2 = *(byte **)(pbVar6 + 0x10);
        pGVar11 = pGVar10;
        if ((*pbVar6 & 1) == 0) {
          __s2 = pbVar6 + 1;
          uVar1 = (ulong)(*pbVar6 >> 1);
        }
        do {
          pGVar12 = (GController *)*puVar15;
          if (((byte)pGVar12[0x48] & 1) == 0) {
            uVar13 = (ulong)((byte)pGVar12[0x48] >> 1);
            pGVar10 = pGVar12 + 0x49;
          }
          else {
            uVar13 = *(ulong *)(pGVar12 + 0x50);
            pGVar10 = *(GController **)(pGVar12 + 0x58);
          }
          __n = uVar1;
          if (uVar13 <= uVar1) {
            __n = uVar13;
          }
          if ((__n == 0) || (iVar5 = memcmp(pGVar10,__s2,__n), pGVar10 = pGVar11, iVar5 == 0)) {
            pGVar10 = pGVar12;
            if (uVar13 != uVar1) {
              pGVar10 = pGVar11;
            }
            if (uVar1 == uVar13) {
              pbVar7 = (basic_string *)ByteBuffer::readS(param_1);
              if (pGVar10 != (GController *)0x0) {
                GController::setSelectedPageId(pGVar10,pbVar7,true);
              }
              goto LAB_00a739a8;
            }
          }
          puVar15 = puVar15 + 1;
          pGVar11 = pGVar10;
        } while (puVar2 != puVar15);
      }
      ByteBuffer::readS(param_1);
LAB_00a739a8:
      iVar14 = iVar14 + 1;
    } while (iVar14 != sVar4);
  }
  if (1 < *(int *)param_1) {
    sVar4 = ByteBuffer::readShort(param_1);
    iVar14 = (int)sVar4;
    if (0 < iVar14) {
      do {
        pbVar7 = (basic_string *)ByteBuffer::readS(param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_90,pbVar7);
        sVar4 = ByteBuffer::readShort(param_1);
        pbVar7 = (basic_string *)ByteBuffer::readS(param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_a8,pbVar7);
        plVar8 = (long *)getChildByPath(this,(basic_string *)local_90);
        if (plVar8 != (long *)0x0) {
          cocos2d::Value::Value(aVStack_78,(basic_string *)local_a8);
          (**(code **)(*plVar8 + 0x38))(plVar8,(int)sVar4,aVStack_78);
          cocos2d::Value::~Value(aVStack_78);
        }
                    /* try { // try from 00a73b00 to 00b73b47 has its CatchHandler @ 00a73b00
                       catch() { ... } // from try @ 00a73b00 with catch @ 00a73b00
                       catch() { ... } // from try @ 00a73c10 with catch @ 00a73b00
                       catch() { ... } // from try @ 00a73cd8 with catch @ 00a73b00 */
        if (((byte)local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if (((byte)local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00a73b48 to 00b73b5f has its CatchHandler @ 00a73cfc */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a73b64 to 00b73b8f has its CatchHandler @ 00a73cf4 */
  __stack_chk_fail();
}

