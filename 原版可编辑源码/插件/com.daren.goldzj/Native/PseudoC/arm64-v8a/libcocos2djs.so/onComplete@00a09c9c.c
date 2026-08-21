
/* universe::UnzipTask::onComplete() */

void __thiscall universe::UnzipTask::onComplete(UnzipTask *this)

{
                    /* try { // try from 00a09c9c to 00b09cbb has its CatchHandler @ 00a09f24 */
  Unzipper::onResult(*(Unzipper **)(this + 0x80),this);
  return;
}

