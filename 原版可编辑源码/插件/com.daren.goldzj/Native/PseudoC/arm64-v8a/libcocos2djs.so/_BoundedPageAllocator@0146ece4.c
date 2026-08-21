
/* v8::base::BoundedPageAllocator::~BoundedPageAllocator() */

void __thiscall v8::base::BoundedPageAllocator::~BoundedPageAllocator(BoundedPageAllocator *this)

{
  *(undefined ***)this = &PTR__BoundedPageAllocator_01cc3eb8;
  RegionAllocator::~RegionAllocator((RegionAllocator *)(this + 0x48));
  Mutex::~Mutex((Mutex *)(this + 8));
  return;
}

