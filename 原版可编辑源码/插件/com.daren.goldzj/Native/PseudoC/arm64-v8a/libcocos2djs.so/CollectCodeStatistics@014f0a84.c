
/* v8::internal::CodeStatistics::CollectCodeStatistics(v8::internal::OldLargeObjectSpace*,
   v8::internal::Isolate*) */

void v8::internal::CodeStatistics::CollectCodeStatistics
               (OldLargeObjectSpace *param_1,Isolate *param_2)

{
  undefined8 uVar1;
  LargeObjectSpaceObjectIterator aLStack_30 [16];
  
  LargeObjectSpaceObjectIterator::LargeObjectSpaceObjectIterator
            (aLStack_30,(LargeObjectSpace *)param_1);
  while (uVar1 = LargeObjectSpaceObjectIterator::Next(aLStack_30), (int)uVar1 != 0) {
    RecordCodeAndMetadataStatistics(uVar1,param_2);
  }
  return;
}

