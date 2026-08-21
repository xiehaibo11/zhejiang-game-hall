
/* v8::internal::Logger::LogAllMaps() */

void __thiscall v8::internal::Logger::LogAllMaps(Logger *this)

{
  ulong uVar1;
  HeapObjectIterator aHStack_48 [40];
  
  HeapObjectIterator::HeapObjectIterator(aHStack_48,*(long *)(this + 8) + 0x8850,0);
  while (uVar1 = HeapObjectIterator::Next(aHStack_48), (int)uVar1 != 0) {
    if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xa2) {
      MapCreate(this,uVar1);
      MapDetails(this,uVar1);
    }
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_48);
  return;
}

