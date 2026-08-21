package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

public class f implements com.mbridge.msdk.video.js.h {
    @Override
    public String a() {
        z.a("DefaultJSRewardVideoV1", "getEndScreenInfo");
        return "{}";
    }

    @Override
    public void notifyCloseBtn(int i) {
        z.a("DefaultJSRewardVideoV1", "notifyCloseBtn,state=" + i);
    }

    @Override
    public void toggleCloseBtn(int i) {
        z.a("DefaultJSRewardVideoV1", "toggleCloseBtn,state=" + i);
    }

    @Override
    public void a(String str) {
        z.a("DefaultJSRewardVideoV1", "triggerCloseBtn,state=" + str);
    }

    @Override
    public void b(String str) {
        z.a("DefaultJSRewardVideoV1", "setOrientation,landscape=" + str);
    }

    @Override
    public void c(String str) {
        z.a("DefaultJSRewardVideoV1", "handlerPlayableException，msg=" + str);
    }
}
