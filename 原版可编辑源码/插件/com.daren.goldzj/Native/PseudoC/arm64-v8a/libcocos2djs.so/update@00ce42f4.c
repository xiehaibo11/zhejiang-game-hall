
/* spine::Bone::update() */

void __thiscall spine::Bone::update(Bone *this)

{
  updateWorldTransform
            (this,*(float *)(this + 0x40),*(float *)(this + 0x44),*(float *)(this + 0x48),
             *(float *)(this + 0x4c),*(float *)(this + 0x50),*(float *)(this + 0x54),
             *(float *)(this + 0x58));
  return;
}

