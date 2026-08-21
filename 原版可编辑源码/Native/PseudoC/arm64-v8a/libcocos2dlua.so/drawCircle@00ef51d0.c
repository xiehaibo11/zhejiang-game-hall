
/* cocos2d::DrawNode::drawCircle(cocos2d::Vec2 const&, float, float, unsigned int, bool, float,
   float, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawCircle
          (DrawNode *this,Vec2 *param_1,float param_2,float param_3,uint param_4,bool param_5,
          float param_6,float param_7,Color4F *param_8)

{
  ulong uVar1;
  uint uVar2;
  Vec2 *__s;
  uint uVar3;
  float fVar4;
  float fVar5;
  float local_98;
  float fStack_94;
  
  uVar2 = param_4 + 2;
  __s = operator_new__((ulong)uVar2 << 3,(nothrow_t *)&std::nothrow);
  if (__s != (Vec2 *)0x0) {
    if (uVar2 != 0) {
      memset(__s,0,(ulong)uVar2 << 3);
    }
    fVar4 = *(float *)param_1;
    fVar5 = *(float *)(param_1 + 4);
    uVar3 = 0;
    do {
      sincosf((6.2831855 / (float)param_4) * (float)uVar3 + param_3,&fStack_94,&local_98);
      uVar1 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
      *(float *)(__s + uVar1 * 8) = local_98 * param_2 * param_6 + fVar4;
      *(float *)((long)(__s + uVar1 * 8) + 4) = fStack_94 * param_2 * param_7 + fVar5;
    } while (uVar3 <= param_4);
    uVar3 = param_4 + 1;
    if (param_5) {
      *(float *)(__s + (ulong)(param_4 + 1) * 8) = fVar4;
      *(float *)((long)(__s + (ulong)(param_4 + 1) * 8) + 4) = fVar5;
      uVar3 = uVar2;
    }
    drawPoly(this,__s,uVar3,true,param_8);
    operator_delete__(__s);
    return;
  }
  return;
}

