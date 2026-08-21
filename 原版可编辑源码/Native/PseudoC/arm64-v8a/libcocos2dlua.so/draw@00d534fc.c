
/* spine::TwoColorTrianglesCommand::draw() */

void __thiscall spine::TwoColorTrianglesCommand::draw(TwoColorTrianglesCommand *this)

{
  SkeletonTwoColorBatch *this_00;
  
  if (DAT_017875d8 == (SkeletonTwoColorBatch *)0x0) {
    this_00 = operator_new(0xa8);
    SkeletonTwoColorBatch::SkeletonTwoColorBatch(this_00);
    DAT_017875d8 = this_00;
  }
  SkeletonTwoColorBatch::batch(DAT_017875d8,this);
  return;
}

