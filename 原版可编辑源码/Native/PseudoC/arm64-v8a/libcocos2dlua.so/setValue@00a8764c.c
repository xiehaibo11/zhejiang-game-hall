
/* fairygui::GProgressBar::setValue(double) */

void __thiscall fairygui::GProgressBar::setValue(GProgressBar *this,double param_1)

{
  if (*(double *)(this + 0x290) != param_1) {
    GTween::kill(this,0xc,0);
    *(double *)(this + 0x290) = param_1;
    update(this,param_1);
    return;
  }
                    /* try { // try from 00a87698 to 00b876fb has its CatchHandler @ 00a88144 */
  return;
}

