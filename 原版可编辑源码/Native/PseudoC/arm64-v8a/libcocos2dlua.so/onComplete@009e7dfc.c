
/* universe::CopyTask::onComplete() */

void __thiscall universe::CopyTask::onComplete(CopyTask *this)

{
                    /* try { // try from 009e7dfc to 00ae7e5b has its CatchHandler @ 009e7cd4 */
                    /* catch() { ... } // from try @ 009e7d2c with catch @ 009e7e04
                       catch() { ... } // from try @ 009e7de8 with catch @ 009e7e04 */
  Copy::onResult(*(Copy **)(this + 0x68),this);
  return;
}

