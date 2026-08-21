
/* dtNodeQueue::~dtNodeQueue() */

void __thiscall dtNodeQueue::~dtNodeQueue(dtNodeQueue *this)

{
  dtFree(*(void **)this);
  return;
}

