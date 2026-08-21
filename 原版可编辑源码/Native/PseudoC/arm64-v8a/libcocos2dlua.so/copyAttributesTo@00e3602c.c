
/* cocos2d::PULineEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall cocos2d::PULineEmitter::copyAttributesTo(PULineEmitter *this,PUEmitter *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  uVar1 = *(undefined4 *)(this + 0x204);
  *(undefined8 *)(param_1 + 0x1fc) = *(undefined8 *)(this + 0x1fc);
  *(undefined4 *)(param_1 + 0x204) = uVar1;
  fVar2 = *(float *)(param_1 + 0x1fc);
  fVar3 = *(float *)(param_1 + 0x200);
  fVar4 = *(float *)(param_1 + 0x68);
  fVar5 = *(float *)(param_1 + 0x6c);
  fVar6 = *(float *)(param_1 + 0x204);
  fVar7 = *(float *)(param_1 + 0x70);
                    /* try { // try from 00e36078 to 00f3607f has its CatchHandler @ 00e368fc */
                    /* try { // try from 00e36080 to 00f360c3 has its CatchHandler @ 00e355f0 */
  *(float *)(param_1 + 0x22c) = fVar2 * fVar4;
  *(float *)(param_1 + 0x230) = fVar3 * fVar5;
  *(float *)(param_1 + 0x234) = fVar6 * fVar7;
  *(float *)(param_1 + 0x224) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(this + 0x224);
  fVar3 = *(float *)(this + 0x218);
                    /* try { // try from 00e360c4 to 00f360f7 has its CatchHandler @ 00e369d0 */
  fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7);
  *(float *)(param_1 + 0x218) = fVar3;
  *(float *)(param_1 + 0x23c) = fVar2 * fVar3;
  fVar3 = *(float *)(this + 0x21c);
  *(float *)(param_1 + 0x21c) = fVar3;
  *(float *)(param_1 + 0x240) = fVar2 * fVar3;
  fVar3 = *(float *)(this + 0x214);
  *(float *)(param_1 + 0x214) = fVar3;
  *(float *)(param_1 + 0x238) = fVar2 * fVar3;
  return;
}

