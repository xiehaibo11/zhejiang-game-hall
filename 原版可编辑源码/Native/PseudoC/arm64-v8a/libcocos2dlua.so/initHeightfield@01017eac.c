
/* cocos2d::Physics3DShape::initHeightfield(int, int, void const*, float, float, float, bool, bool,
   bool) */

undefined8 __thiscall
cocos2d::Physics3DShape::initHeightfield
          (Physics3DShape *this,int param_1,int param_2,void *param_3,float param_4,float param_5,
          float param_6,bool param_7,bool param_8,bool param_9)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  undefined4 uVar3;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  
                    /* try { // try from 01017ed4 to 01117ed7 has its CatchHandler @ 01017f4c */
  *(undefined4 *)(this + 0x24) = 7;
  uVar1 = param_2 * param_1 * 4;
  if (!param_7) {
    uVar1 = param_2 * param_1;
  }
                    /* try { // try from 01017ef8 to 01117efb has its CatchHandler @ 01017f38 */
  uVar3 = 0;
  if (!param_7) {
    uVar3 = 5;
  }
  __dest = operator_new__((ulong)uVar1);
  *(void **)(this + 0x30) = __dest;
  memcpy(__dest,param_3,(ulong)uVar1);
  lVar2 = btAlignedAllocInternal(0x90,0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01017ef8 with catch @ 01017f38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01017ed4 with catch @ 01017f4c
                        */
  btHeightfieldTerrainShape::btHeightfieldTerrainShape
            ((btHeightfieldTerrainShape *)CONCAT44(in_register_00005004,param_4),
             CONCAT44(in_register_00005024,param_5),CONCAT44(in_register_00005044,param_6),lVar2,
             param_1,param_2,*(undefined8 *)(this + 0x30),1,uVar3,param_8);
  *(bool *)(lVar2 + 0x75) = param_9;
  *(long *)(this + 0x28) = lVar2;
                    /* try { // try from 01017f8c to 01117f8f has its CatchHandler @ 01017fd0 */
  return 1;
}

