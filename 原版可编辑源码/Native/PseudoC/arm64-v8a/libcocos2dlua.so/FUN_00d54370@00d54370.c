
void FUN_00d54370(long param_1)

{
  SkeletonTwoColorBatch *this;
  TwoColorTrianglesCommand *pTVar1;
  
  pTVar1 = *(TwoColorTrianglesCommand **)(param_1 + 8);
  if (DAT_017875d8 == (SkeletonTwoColorBatch *)0x0) {
    this = operator_new(0xa8);
    spine::SkeletonTwoColorBatch::SkeletonTwoColorBatch(this);
    DAT_017875d8 = this;
  }
  spine::SkeletonTwoColorBatch::batch(DAT_017875d8,pTVar1);
  return;
}

