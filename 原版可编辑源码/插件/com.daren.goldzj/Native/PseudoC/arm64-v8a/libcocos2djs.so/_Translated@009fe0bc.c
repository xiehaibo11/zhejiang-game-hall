
/* universe::Translated::~Translated() */

void __thiscall universe::Translated::~Translated(Translated *this)

{
  if (*(FILE **)this != (FILE *)0x0) {
    fclose(*(FILE **)this);
  }
  core::Flags::~Flags((Flags *)(this + 8));
  return;
}

