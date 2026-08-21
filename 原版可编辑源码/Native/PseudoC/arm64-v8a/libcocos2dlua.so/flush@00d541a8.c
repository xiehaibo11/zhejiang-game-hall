
/* spine::SkeletonTwoColorBatch::flush(spine::TwoColorTrianglesCommand*) */

void __thiscall
spine::SkeletonTwoColorBatch::flush(SkeletonTwoColorBatch *this,TwoColorTrianglesCommand *param_1)

{
  if (param_1 != (TwoColorTrianglesCommand *)0x0) {
    cocos2d::GL::bindTexture2D(*(uint *)(param_1 + 0x54));
    if (*(uint *)(param_1 + 200) != 0) {
      cocos2d::GL::bindTexture2DN(1,*(uint *)(param_1 + 200));
    }
    cocos2d::GL::blendFunc(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x6c));
    cocos2d::GLProgramState::apply(*(GLProgramState **)(param_1 + 0x58),(Mat4 *)(param_1 + 0x88));
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x60));
    glBufferData(0x8892,(ulong)*(uint *)(this + 0x70) * 0x1c,*(undefined8 *)(this + 0x68),0x88e8);
    glEnableVertexAttribArray(*(undefined4 *)(this + 0x88));
    glEnableVertexAttribArray(*(undefined4 *)(this + 0x8c));
    glEnableVertexAttribArray(*(undefined4 *)(this + 0x90));
    glEnableVertexAttribArray(*(undefined4 *)(this + 0x94));
    glVertexAttribPointer(*(undefined4 *)(this + 0x88),3,0x1406,0,0x1c,0);
    glVertexAttribPointer(*(undefined4 *)(this + 0x8c),4,0x1401,1,0x1c,0xc);
    glVertexAttribPointer(*(undefined4 *)(this + 0x90),4,0x1401,1,0x1c,0x10);
    glVertexAttribPointer(*(undefined4 *)(this + 0x94),2,0x1406,0,0x1c,0x14);
    glBindBuffer(0x8893,*(undefined4 *)(this + 0x74));
    glBufferData(0x8893,(ulong)*(uint *)(this + 0x78) << 1,*(undefined8 *)(this + 0x80),0x88e4);
    glDrawElements(4,*(undefined4 *)(this + 0x78),0x1403,0);
    glBindBuffer(0x8892,0);
    glBindBuffer(0x8893,0);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
  }
  return;
}

