
/* dtProximityGrid::~dtProximityGrid() */

void __thiscall dtProximityGrid::~dtProximityGrid(dtProximityGrid *this)

{
  dtFree(*(void **)(this + 0x18));
  dtFree(*(void **)(this + 8));
  return;
}

