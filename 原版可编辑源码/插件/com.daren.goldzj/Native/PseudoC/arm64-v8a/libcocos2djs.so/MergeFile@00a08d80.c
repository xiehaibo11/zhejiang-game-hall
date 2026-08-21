
/* universe::MergeFile::MergeFile() */

void __thiscall universe::MergeFile::MergeFile(MergeFile *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x28] = (MergeFile)0x0;
                    /* try { // try from 00a08d8c to 00b08d8f has its CatchHandler @ 00a08e54 */
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__MergeFile_01c6cce0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

