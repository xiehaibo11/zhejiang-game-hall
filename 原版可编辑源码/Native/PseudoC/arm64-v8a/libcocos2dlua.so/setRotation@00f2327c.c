
/* cocos2d::Node::setRotation(float) */

void __thiscall cocos2d::Node::setRotation(Node *this,float param_1)

{
  float __x;
  float fVar1;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if (*(float *)(this + 0x2c) != param_1) {
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
    this[0x161] = (Node)0x1;
    fVar1 = *(float *)(this + 0x28);
    *(float *)(this + 0x2c) = param_1;
    *(float *)(this + 0x30) = param_1;
    __x = param_1 * 0.5 * -0.017453292;
    if (NAN(param_1)) {
      __x = 0.0;
    }
    sincosf(*(float *)(this + 0x24) * 0.5 * 0.017453292,&fStack_54,&local_58);
    sincosf(fVar1 * 0.5 * 0.017453292,&fStack_4c,&local_50);
                    /* try { // try from 00f23330 to 01023337 has its CatchHandler @ 00f23594 */
    sincosf(__x,&fStack_44,&local_48);
    *(float *)(this + 0x34) = local_48 * fStack_54 * local_50 - fStack_44 * local_58 * fStack_4c;
    *(float *)(this + 0x38) = local_48 * local_58 * fStack_4c + fStack_44 * fStack_54 * local_50;
    *(float *)(this + 0x3c) = fStack_44 * local_58 * local_50 - local_48 * fStack_54 * fStack_4c;
    *(float *)(this + 0x40) = local_48 * local_58 * local_50 + fStack_44 * fStack_54 * fStack_4c;
  }
  return;
}

