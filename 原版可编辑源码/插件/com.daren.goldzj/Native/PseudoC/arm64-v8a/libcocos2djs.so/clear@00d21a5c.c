
/* dragonBones::BlendState::clear() */

void __thiscall dragonBones::BlendState::clear(BlendState *this)

{
  *this = (BlendState)0x0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 4) = 0;
  return;
}

