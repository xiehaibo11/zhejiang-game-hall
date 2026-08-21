
/* cocos2d::Node::setRotationSkewY(float) */

void __thiscall cocos2d::Node::setRotationSkewY(Node *this,float param_1)

{
  float __x;
  float fVar1;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if (*(float *)(this + 0x30) != param_1) {
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
    this[0x161] = (Node)0x1;
    fVar1 = *(float *)(this + 0x28);
    *(float *)(this + 0x30) = param_1;
    __x = *(float *)(this + 0x2c) * 0.5 * -0.017453292;
    if (*(float *)(this + 0x2c) != param_1) {
      __x = 0.0;
    }
    sincosf(*(float *)(this + 0x24) * 0.5 * 0.017453292,&fStack_4c,&local_50);
    sincosf(fVar1 * 0.5 * 0.017453292,&fStack_44,&local_48);
    sincosf(__x,&fStack_54,&local_58);
    *(float *)(this + 0x34) = fStack_4c * local_48 * local_58 - local_50 * fStack_44 * fStack_54;
    *(float *)(this + 0x38) = local_50 * fStack_44 * local_58 + fStack_4c * local_48 * fStack_54;
    *(float *)(this + 0x3c) = local_50 * local_48 * fStack_54 - fStack_4c * fStack_44 * local_58;
    *(float *)(this + 0x40) = local_50 * local_48 * local_58 + fStack_4c * fStack_44 * fStack_54;
  }
  return;
}

