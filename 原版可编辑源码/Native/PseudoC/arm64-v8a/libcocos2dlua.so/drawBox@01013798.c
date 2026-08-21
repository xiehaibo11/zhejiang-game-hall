
/* btIDebugDraw::drawBox(btVector3 const&, btVector3 const&, btTransform const&, btVector3 const&)
    */

void __thiscall
btIDebugDraw::drawBox
          (btIDebugDraw *this,btVector3 *param_1,btVector3 *param_2,btTransform *param_3,
          btVector3 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar2 = *(float *)param_2;
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar3 * *(float *)(param_3 + 4) + *(float *)param_3 * fVar2;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar3 * *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x10) * fVar2;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar3 * *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x20) * fVar2;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_2 + 4);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar2 * *(float *)param_3 + *(float *)(param_3 + 4) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar2 * *(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x14) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar2 * *(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x24) * fVar3;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 8);
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar2 = *(float *)param_1;
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar3 * *(float *)(param_3 + 4) + *(float *)param_3 * fVar2;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar3 * *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x10) * fVar2;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar3 * *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x20) * fVar2;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 8);
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_1 + 4);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar2 * *(float *)param_3 + *(float *)(param_3 + 4) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar2 * *(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x14) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar2 * *(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x24) * fVar3;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4);
  fVar6 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14);
  fVar2 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24);
  local_58 = fVar5 + fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar6 + fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 + fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_2 + 8);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) + fVar5 + *(float *)(param_3 + 8) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) + fVar6 + *(float *)(param_3 + 0x18) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) + fVar2 + *(float *)(param_3 + 0x28) * fVar3;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
                    /* catch() { ... } // from try @ 01013c5c with catch @ 01013c0c */
  fVar5 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4);
  fVar6 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14);
  fVar2 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24);
                    /* try { // try from 01013c54 to 01113c5b has its CatchHandler @ 01013cac */
                    /* try { // try from 01013c5c to 01113ce3 has its CatchHandler @ 01013c0c */
  local_58 = fVar5 + fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar6 + fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 + fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_2 + 8);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) + fVar5 + *(float *)(param_3 + 8) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) + fVar6 + *(float *)(param_3 + 0x18) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) + fVar2 + *(float *)(param_3 + 0x28) * fVar3;
                    /* catch() { ... } // from try @ 01013c54 with catch @ 01013cac */
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 8);
                    /* catch() { ... } // from try @ 01013d34 with catch @ 01013ce4 */
  fVar5 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4);
  fVar6 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14);
  fVar2 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24);
                    /* try { // try from 01013d2c to 01113d33 has its CatchHandler @ 01013d84 */
  local_58 = fVar5 + fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar6 + fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
                    /* try { // try from 01013d34 to 01113dbb has its CatchHandler @ 01013ce4 */
  local_50 = fVar2 + fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_2 + 8);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) + fVar5 + *(float *)(param_3 + 8) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) + fVar6 + *(float *)(param_3 + 0x18) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) + fVar2 + *(float *)(param_3 + 0x28) * fVar3;
                    /* catch() { ... } // from try @ 01013d2c with catch @ 01013d84 */
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4);
  fVar6 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14);
  fVar2 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24);
  local_58 = fVar5 + fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar6 + fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 + fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_2 + 8);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) + fVar5 + *(float *)(param_3 + 8) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) + fVar6 + *(float *)(param_3 + 0x18) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) + fVar2 + *(float *)(param_3 + 0x28) * fVar3;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 8);
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar2 = *(float *)param_2;
  local_5c = 0;
                    /* try { // try from 01013f14 to 01113f7b has its CatchHandler @ 01013f14
                       catch() { ... } // from try @ 01013f14 with catch @ 01013f14
                       catch() { ... } // from try @ 01014074 with catch @ 01013f14
                       catch() { ... } // from try @ 010141ac with catch @ 01013f14 */
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar3 * *(float *)(param_3 + 4) + *(float *)param_3 * fVar2;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar3 * *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x10) * fVar2;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar3 * *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x20) * fVar2;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 8);
                    /* try { // try from 01013f7c to 01113f83 has its CatchHandler @ 010141b0 */
                    /* try { // try from 01013f90 to 01113f9b has its CatchHandler @ 01014200 */
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_2 + 4);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar2 * *(float *)param_3 + *(float *)(param_3 + 4) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar2 * *(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x14) * fVar3;
                    /* try { // try from 01013ff8 to 01113ffb has its CatchHandler @ 010141fc */
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar2 * *(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x24) * fVar3;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
                    /* try { // try from 0101402c to 0111403f has its CatchHandler @ 01014220 */
                    /* try { // try from 01014068 to 01114073 has its CatchHandler @ 010141bc */
                    /* try { // try from 01014074 to 0111409b has its CatchHandler @ 01013f14 */
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar2 = *(float *)param_1;
  local_5c = 0;
                    /* try { // try from 0101409c to 011140bb has its CatchHandler @ 01014220 */
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar3 * *(float *)(param_3 + 4) + *(float *)param_3 * fVar2;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar3 * *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x10) * fVar2;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar3 * *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x20) * fVar2;
                    /* try { // try from 010140d4 to 011140df has its CatchHandler @ 010141b8 */
                    /* try { // try from 010140e8 to 011141ab has its CatchHandler @ 010141b4 */
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  local_58 = fVar2 * *(float *)param_3 + fVar3 * *(float *)(param_3 + 4) +
             fVar4 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  fStack_54 = fVar2 * *(float *)(param_3 + 0x10) + fVar3 * *(float *)(param_3 + 0x14) +
              fVar4 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_50 = fVar2 * *(float *)(param_3 + 0x20) + fVar3 * *(float *)(param_3 + 0x24) +
             fVar4 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_4c = 0;
  fVar3 = *(float *)(param_1 + 4);
  local_5c = 0;
  local_68 = *(float *)(param_3 + 0x30) +
             fVar4 * *(float *)(param_3 + 8) +
             fVar2 * *(float *)param_3 + *(float *)(param_3 + 4) * fVar3;
  fStack_64 = *(float *)(param_3 + 0x34) +
              fVar4 * *(float *)(param_3 + 0x18) +
              fVar2 * *(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x14) * fVar3;
  local_60 = *(float *)(param_3 + 0x38) +
             fVar4 * *(float *)(param_3 + 0x28) +
             fVar2 * *(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x24) * fVar3;
                    /* try { // try from 010141ac to 0111427b has its CatchHandler @ 01013f14 */
                    /* catch() { ... } // from try @ 01013f7c with catch @ 010141b0 */
                    /* catch() { ... } // from try @ 010140e8 with catch @ 010141b4 */
                    /* catch() { ... } // from try @ 010140d4 with catch @ 010141b8 */
                    /* catch() { ... } // from try @ 01014068 with catch @ 010141bc */
  (**(code **)(*(long *)this + 0x10))(this,&local_58,&local_68,param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

