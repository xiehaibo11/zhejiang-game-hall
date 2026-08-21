
/* universe::HttpTask::onComplete() */

void __thiscall universe::HttpTask::onComplete(HttpTask *this)

{
  if (*(Http **)(this + 0x70) != (Http *)0x0) {
    Http::onResult(*(Http **)(this + 0x70),this);
    return;
  }
  return;
}

