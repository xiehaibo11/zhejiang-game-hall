
/* cocos2d::tweenfunc::tweenTo(float, cocos2d::tweenfunc::TweenType, float*) */

float cocos2d::tweenfunc::tweenTo(float param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    param_1 = cosf(param_1 * 1.5707964);
    goto LAB_00f616c4;
  case 2:
    fVar1 = sinf(param_1 * 1.5707964);
    return fVar1;
  default:
                    /* catch() { ... } // from try @ 00f613bc with catch @ 00f6148c */
    fVar1 = cosf(param_1 * 3.1415927);
    fVar3 = -1.0;
    goto LAB_00f618e0;
  case 4:
    param_1 = param_1 * param_1;
    break;
  case 5:
    param_1 = -((param_1 + -2.0) * param_1);
    break;
  case 6:
    fVar1 = param_1 + param_1;
    if (1.0 <= fVar1) {
      fVar3 = -1.0;
      fVar1 = fVar1 + -1.0;
                    /* try { // try from 00f61858 to 010618e3 has its CatchHandler @ 00f61858
                       catch() { ... } // from try @ 00f61858 with catch @ 00f61858
                       catch() { ... } // from try @ 00f618f0 with catch @ 00f61858
                       catch() { ... } // from try @ 00f61960 with catch @ 00f61858 */
      fVar2 = fVar1 + -2.0;
      goto LAB_00f618dc;
    }
    param_1 = fVar1 * 0.5;
    goto LAB_00f618e8;
  case 7:
    param_1 = param_1 * param_1 * param_1;
    break;
  case 8:
    fVar1 = (param_1 + -1.0) * (param_1 + -1.0);
    goto LAB_00f61558;
  case 9:
    if (1.0 <= param_1 + param_1) {
      fVar3 = param_1 + param_1 + -2.0;
      fVar1 = fVar3 * fVar3;
      goto LAB_00f618bc;
    }
    fVar3 = 0.5;
LAB_00f61674:
    fVar1 = param_1 + param_1;
    param_1 = fVar1 * fVar1 * fVar3;
    goto LAB_00f618e8;
  case 10:
    fVar1 = param_1;
    goto LAB_00f61538;
  case 0xb:
    param_1 = param_1 + -1.0;
    param_1 = -(param_1 * param_1 * param_1 * param_1 + -1.0);
    break;
  case 0xc:
    if (param_1 + param_1 < 1.0) {
      fVar3 = 0.5;
LAB_00f61670:
      fVar3 = (param_1 + param_1) * fVar3;
      goto LAB_00f61674;
    }
    fVar3 = -2.0;
    fVar1 = param_1 + param_1 + -2.0;
    fVar2 = fVar1 * fVar1 * fVar1;
LAB_00f618dc:
    fVar1 = fVar1 * fVar2;
LAB_00f618e0:
    fVar1 = fVar1 + fVar3;
LAB_00f618e4:
                    /* try { // try from 00f618e4 to 010618ef has its CatchHandler @ 00f619f8 */
    param_1 = -0.5;
    goto LAB_00f618e8;
  case 0xd:
    fVar1 = param_1 * param_1;
LAB_00f61538:
    param_1 = fVar1 * param_1 * param_1 * param_1;
    break;
  case 0xe:
    fVar1 = param_1 + -1.0;
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1;
LAB_00f61558:
    param_1 = (param_1 + -1.0) * fVar1;
LAB_00f615d4:
    param_1 = param_1 + 1.0;
    break;
  case 0xf:
    fVar3 = param_1 + param_1;
    if (fVar3 < 1.0) {
      fVar3 = fVar3 * 0.5;
      goto LAB_00f61670;
    }
    fVar3 = fVar3 + -2.0;
    fVar1 = fVar3 * fVar3 * fVar3 * fVar3;
LAB_00f618bc:
    fVar1 = fVar3 * fVar1 + 2.0;
    param_1 = 0.5;
    goto LAB_00f618e8;
  case 0x10:
    if (param_1 == 0.0) {
      return 0.0;
    }
    param_1 = exp2f((param_1 + -1.0) * 10.0);
    fVar1 = -0.001;
    goto LAB_00f61d58;
  case 0x11:
    if (param_1 == 1.0) {
      return 1.0;
    }
    param_1 = exp2f(param_1 * -10.0);
LAB_00f616c4:
    param_1 = 1.0 - param_1;
    break;
  case 0x12:
    if ((param_1 != 0.0) && (param_1 != 1.0)) {
      fVar1 = param_1 + param_1 + -1.0;
      if (0.5 <= param_1) {
        fVar1 = exp2f(fVar1 * -10.0);
        param_1 = (2.0 - fVar1) * 0.5;
      }
      else {
        param_1 = exp2f(fVar1 * 10.0);
        param_1 = param_1 * 0.5;
      }
    }
    break;
  case 0x13:
    param_1 = -(SQRT(1.0 - param_1 * param_1) + -1.0);
    break;
  case 0x14:
    param_1 = SQRT(1.0 - (param_1 + -1.0) * (param_1 + -1.0));
    break;
  case 0x15:
    param_1 = param_1 + param_1;
    if (1.0 <= param_1) {
                    /* try { // try from 00f618f0 to 0106192b has its CatchHandler @ 00f61858 */
      fVar1 = SQRT(1.0 - (param_1 + -2.0) * (param_1 + -2.0)) + 1.0;
      param_1 = 0.5;
      goto LAB_00f618e8;
    }
    fVar1 = SQRT(1.0 - param_1 * param_1) + -1.0;
    goto LAB_00f618e4;
  case 0x16:
    if (param_3 == (float *)0x0) {
      fVar1 = 0.3;
    }
    else {
      fVar1 = *param_3;
    }
    if (param_1 == 0.0) {
      return param_1;
    }
    if (param_1 == 1.0) {
      return param_1;
    }
    fVar2 = exp2f((param_1 + -1.0) * 10.0);
                    /* try { // try from 00f61b00 to 01061b07 has its CatchHandler @ 00f61c74 */
    fVar3 = (param_1 + -1.0 + fVar1 * -0.25) * -3.1415927;
    fVar1 = (fVar3 + fVar3) / fVar1;
    goto LAB_00f61b10;
  case 0x17:
    if (param_3 == (float *)0x0) {
      fVar1 = 0.3;
    }
    else {
      fVar1 = *param_3;
    }
                    /* catch() { ... } // from try @ 00f61958 with catch @ 00f619e4 */
    if ((param_1 != 0.0) && (param_1 != 1.0)) {
                    /* catch() { ... } // from try @ 00f618e4 with catch @ 00f619f8 */
      fVar3 = exp2f(param_1 * -10.0);
                    /* catch() { ... } // from try @ 00f6192c with catch @ 00f61a08 */
      fVar2 = (param_1 + fVar1 * -0.25) * 3.1415927;
      fVar1 = sinf((fVar2 + fVar2) / fVar1);
      param_1 = fVar3 * fVar1 + 1.0;
    }
    break;
  case 0x18:
    if (param_3 == (float *)0x0) {
      fVar1 = 0.3;
    }
    else {
      fVar1 = *param_3;
    }
    if (param_1 == 0.0) {
      return param_1;
    }
    if (param_1 == 1.0) {
      return param_1;
    }
    if (fVar1 == 0.0) {
      fVar1 = 0.45000002;
    }
    fVar3 = param_1 + param_1 + -1.0;
    if (0.0 <= fVar3) {
                    /* try { // try from 00f61bac to 01061baf has its CatchHandler @ 00f61cd4 */
                    /* try { // try from 00f61bb0 to 01061c8b has its CatchHandler @ 00f61a80 */
      fVar2 = exp2f(fVar3 * -10.0);
      fVar3 = (fVar3 - fVar1 * 0.25) * 3.1415927;
      fVar1 = sinf((fVar3 + fVar3) / fVar1);
      return fVar2 * fVar1 * 0.5 + 1.0;
    }
                    /* try { // try from 00f61a80 to 01061aff has its CatchHandler @ 00f61a80
                       catch(type#1 @ 00000000) { ... } // from try @ 00f61a80 with catch @ 00f61a80
                       catch(type#1 @ 00000000) { ... } // from try @ 00f61bb0 with catch @ 00f61a80
                       catch(type#1 @ 00000000) { ... } // from try @ 00f61c90 with catch @ 00f61a80
                        */
    fVar2 = exp2f(fVar3 * 10.0);
    fVar2 = fVar2 * -0.5;
    fVar3 = (fVar3 - fVar1 * 0.25) * 3.1415927;
    fVar1 = (fVar3 + fVar3) / fVar1;
LAB_00f61b10:
    param_1 = sinf(fVar1);
    param_1 = fVar2 * param_1;
                    /* try { // try from 00f61b18 to 01061b1b has its CatchHandler @ 00f61cb8 */
    break;
  case 0x19:
    fVar1 = param_1 * param_1;
    param_1 = param_1 * 2.70158 + -1.70158;
    goto LAB_00f618e8;
  case 0x1a:
    param_1 = param_1 + -1.0;
    param_1 = param_1 * param_1 * (param_1 * 2.70158 + 1.70158);
    goto LAB_00f615d4;
  case 0x1b:
    param_1 = param_1 + param_1;
    if (1.0 <= param_1) {
      param_1 = param_1 + -2.0;
                    /* try { // try from 00f6192c to 01061937 has its CatchHandler @ 00f61a08 */
      return param_1 * param_1 * (param_1 * 3.5949094 + 2.5949094) * 0.5 + 1.0;
    }
    fVar1 = param_1 * param_1 * (param_1 * 3.5949094 + -2.5949094);
    param_1 = 0.5;
LAB_00f618e8:
    param_1 = fVar1 * param_1;
    break;
  case 0x1c:
    param_1 = 1.0 - param_1;
    if (0.36363637 <= param_1) {
                    /* try { // try from 00f61958 to 0106195f has its CatchHandler @ 00f619e4 */
                    /* try { // try from 00f61960 to 01061a43 has its CatchHandler @ 00f61858 */
      if (0.72727275 <= param_1) {
        if (0.90909094 <= param_1) {
                    /* try { // try from 00f61d0c to 01061d13 has its CatchHandler @ 00f61d48 */
                    /* try { // try from 00f61d14 to 01061d63 has its CatchHandler @ 00f61ce8 */
          fVar3 = (param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625;
          fVar1 = 0.984375;
        }
        else {
          fVar3 = (param_1 + -0.8181818) * (param_1 + -0.8181818) * 7.5625;
          fVar1 = 0.9375;
        }
      }
      else {
        fVar3 = (param_1 + -0.54545456) * (param_1 + -0.54545456) * 7.5625;
        fVar1 = 0.75;
      }
      param_1 = 1.0 - (fVar3 + fVar1);
    }
    else {
      param_1 = 1.0 - param_1 * param_1 * 7.5625;
    }
    break;
  case 0x1d:
    if (param_1 < 0.36363637) {
      return param_1 * 7.5625 * param_1;
    }
    if (param_1 < 0.72727275) {
      return (param_1 + -0.54545456) * (param_1 + -0.54545456) * 7.5625 + 0.75;
    }
    if (param_1 < 0.90909094) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f61b00 with catch @ 00f61c74
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f61b74 with catch @ 00f61c78
                        */
      return (param_1 + -0.8181818) * (param_1 + -0.8181818) * 7.5625 + 0.9375;
    }
                    /* catch() { ... } // from try @ 00f61d0c with catch @ 00f61d48 */
    fVar1 = 0.984375;
    param_1 = (param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625;
LAB_00f61d58:
    param_1 = param_1 + fVar1;
    break;
  case 0x1e:
    if (0.5 <= param_1) {
      fVar1 = param_1 + param_1 + -1.0;
      if (0.36363637 <= fVar1) {
                    /* try { // try from 00f61b74 to 01061b7b has its CatchHandler @ 00f61c78 */
        if (0.72727275 <= fVar1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f61bac with catch @ 00f61cd4
                        */
          if (0.90909094 <= fVar1) {
            fVar1 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
            fVar3 = 0.984375;
          }
          else {
                    /* catch() { ... } // from try @ 00f61d14 with catch @ 00f61ce8 */
            fVar1 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
            fVar3 = 0.9375;
          }
        }
        else {
          fVar1 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
          fVar3 = 0.75;
        }
        fVar1 = fVar1 + fVar3;
      }
      else {
        fVar1 = fVar1 * fVar1 * 7.5625;
      }
      param_1 = fVar1 * 0.5 + 0.5;
    }
    else {
      fVar1 = 1.0 - (param_1 + param_1);
      if (0.36363637 <= fVar1) {
        if (0.72727275 <= fVar1) {
                    /* try { // try from 00f61c8c to 01061c8f has its CatchHandler @ 00f61cb4 */
                    /* try { // try from 00f61c90 to 01061ce7 has its CatchHandler @ 00f61a80 */
          if (0.90909094 <= fVar1) {
            fVar1 = (fVar1 + -0.95454544) * (fVar1 + -0.95454544) * 7.5625;
            fVar3 = 0.984375;
          }
          else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f61c8c with catch @ 00f61cb4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f61b18 with catch @ 00f61cb8
                        */
            fVar1 = (fVar1 + -0.8181818) * (fVar1 + -0.8181818) * 7.5625;
            fVar3 = 0.9375;
          }
        }
        else {
          fVar1 = (fVar1 + -0.54545456) * (fVar1 + -0.54545456) * 7.5625;
          fVar3 = 0.75;
        }
        fVar1 = fVar1 + fVar3;
      }
      else {
        fVar1 = fVar1 * fVar1 * 7.5625;
      }
      param_1 = (1.0 - fVar1) * 0.5;
    }
    break;
  case 0xffffffff:
    if (param_3 != (float *)0x0) {
      fVar1 = 1.0 - param_1;
      param_1 = param_3[7] * param_1 * param_1 * param_1 +
                fVar1 * fVar1 * fVar1 * param_3[1] + fVar1 * fVar1 * param_3[3] * 3.0 * param_1 +
                fVar1 * param_3[5] * 3.0 * param_1 * param_1;
    }
  }
  return param_1;
}

