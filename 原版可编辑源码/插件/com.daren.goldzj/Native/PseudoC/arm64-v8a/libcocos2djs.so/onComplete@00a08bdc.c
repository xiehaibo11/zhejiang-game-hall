
/* universe::MergeFileTask::onComplete() */

void __thiscall universe::MergeFileTask::onComplete(MergeFileTask *this)

{
                    /* catch() { ... } // from try @ 00a08a98 with catch @ 00a08be0
                       catch() { ... } // from try @ 00a08b4c with catch @ 00a08be0 */
  if (*(MergeFile **)(this + 0x50) != (MergeFile *)0x0) {
    MergeFile::onResult(*(MergeFile **)(this + 0x50),this);
    return;
  }
  return;
}

