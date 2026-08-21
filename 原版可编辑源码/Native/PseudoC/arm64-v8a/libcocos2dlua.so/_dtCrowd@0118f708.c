
/* dtCrowd::~dtCrowd() */

void __thiscall dtCrowd::~dtCrowd(dtCrowd *this)

{
  purge(this);
  dtPathQueue::~dtPathQueue((dtPathQueue *)(this + 0x20));
  return;
}

