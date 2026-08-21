
/* v8::internal::ExistingCodeLogger::LogCodeObjects() */

void __thiscall v8::internal::ExistingCodeLogger::LogCodeObjects(ExistingCodeLogger *this)

{
  ulong uVar1;
  ulong uVar2;
  HeapObjectIterator aHStack_58 [40];
  
  HeapObjectIterator::HeapObjectIterator(aHStack_58,*(long *)this + 0x8850,0);
  while (uVar1 = HeapObjectIterator::Next(aHStack_58), (int)uVar1 != 0) {
    uVar2 = uVar1 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0x9a) {
      LogCodeObject(this,uVar1);
    }
    if (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) == 0x86) {
      LogCodeObject(this,uVar1);
    }
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_58);
  return;
}

