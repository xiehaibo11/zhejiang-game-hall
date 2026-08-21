
/* v8::internal::YoungGenerationMigrationObserver::~YoungGenerationMigrationObserver() */

void __thiscall
v8::internal::YoungGenerationMigrationObserver::~YoungGenerationMigrationObserver
          (YoungGenerationMigrationObserver *this)

{
  *(undefined ***)this = &PTR__YoungGenerationMigrationObserver_01ca8bb8;
  base::Mutex::~Mutex((Mutex *)(this + 0x10));
  operator_delete(this);
  return;
}

