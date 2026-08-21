
/* universe::MergeFileTask::onComplete() */

void __thiscall universe::MergeFileTask::onComplete(MergeFileTask *this)

{
  if (*(MergeFile **)(this + 0x50) != (MergeFile *)0x0) {
    MergeFile::onResult(*(MergeFile **)(this + 0x50),this);
    return;
  }
  return;
}

