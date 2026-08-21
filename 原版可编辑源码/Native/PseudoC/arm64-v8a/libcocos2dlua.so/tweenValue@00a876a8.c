
/* fairygui::GProgressBar::tweenValue(double, float) */

void __thiscall fairygui::GProgressBar::tweenValue(GProgressBar *this,double param_1,float param_2)

{
  GTweener *pGVar1;
  double dVar2;
  
  pGVar1 = (GTweener *)GTween::getTween(this,0xc);
  if (pGVar1 == (GTweener *)0x0) {
    dVar2 = *(double *)(this + 0x290);
  }
  else {
    dVar2 = *(double *)(pGVar1 + 0x68);
    GTweener::kill(pGVar1,false);
  }
  *(double *)(this + 0x290) = param_1;
  pGVar1 = (GTweener *)GTween::toDouble(dVar2,param_1,param_2);
                    /* try { // try from 00a87700 to 00b87707 has its CatchHandler @ 00a880fc */
  pGVar1 = (GTweener *)GTweener::setEase(pGVar1,0);
                    /* try { // try from 00a87708 to 00b87753 has its CatchHandler @ 00a870f0 */
  GTweener::setTarget(pGVar1,this,0xc);
  return;
}

