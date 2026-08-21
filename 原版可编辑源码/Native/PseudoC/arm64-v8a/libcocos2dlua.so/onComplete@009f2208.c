
/* universe::UnzipTask::onComplete() */

void __thiscall universe::UnzipTask::onComplete(UnzipTask *this)

{
  Unzipper::onResult(*(Unzipper **)(this + 0x80),this);
  return;
}

