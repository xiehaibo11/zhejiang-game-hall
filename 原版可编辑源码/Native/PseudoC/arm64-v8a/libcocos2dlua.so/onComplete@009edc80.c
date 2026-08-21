
/* universe::DecompressTask::onComplete() */

void __thiscall universe::DecompressTask::onComplete(DecompressTask *this)

{
                    /* try { // try from 009edc84 to 00aedcd3 has its CatchHandler @ 009edc84
                       catch() { ... } // from try @ 009edc84 with catch @ 009edc84
                       catch() { ... } // from try @ 009edcfc with catch @ 009edc84
                       catch() { ... } // from try @ 009edd68 with catch @ 009edc84 */
  if (*(Decompressor **)(this + 0x78) != (Decompressor *)0x0) {
    Decompressor::onResult(*(Decompressor **)(this + 0x78),this);
    return;
  }
  return;
}

