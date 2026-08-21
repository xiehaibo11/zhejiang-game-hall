
/* dtCrowd::dtCrowd() */

void __thiscall dtCrowd::dtCrowd(dtCrowd *this)

{
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  dtPathQueue::dtPathQueue((dtPathQueue *)(this + 0x20));
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x380));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x484));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x588));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x68c));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x790));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x894));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x998));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0xa9c));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0xba0));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0xca4));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0xda8));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0xeac));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0xfb0));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x10b4));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x11b8));
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x12bc));
  *(undefined8 *)(this + 0x13c8) = 0;
  *(undefined8 *)(this + 0x13c0) = 0;
  return;
}

