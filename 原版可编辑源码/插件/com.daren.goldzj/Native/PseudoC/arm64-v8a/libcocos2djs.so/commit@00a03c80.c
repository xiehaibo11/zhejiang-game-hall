
/* universe::Downloader2::commit() */

void __thiscall universe::Downloader2::commit(Downloader2 *this)

{
  JobQueue::push((JobQueue *)(this + 0x30),(vector *)(this + 0x110));
  *(undefined8 *)(this + 0x118) = *(undefined8 *)(this + 0x110);
  return;
}

