package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: DefaultJSRewardVideoV1.java */
/* JADX INFO: loaded from: classes3.dex */
public class f implements com.mbridge.msdk.video.js.h {
    @Override // com.mbridge.msdk.video.js.h
    public String a() {
        z.a("DefaultJSRewardVideoV1", "getEndScreenInfo");
        return "{}";
    }

    @Override // com.mbridge.msdk.video.js.g
    public void notifyCloseBtn(int i) {
        z.a("DefaultJSRewardVideoV1", "notifyCloseBtn,state=" + i);
    }

    @Override // com.mbridge.msdk.video.js.g
    public void toggleCloseBtn(int i) {
        z.a("DefaultJSRewardVideoV1", "toggleCloseBtn,state=" + i);
    }

    @Override // com.mbridge.msdk.video.js.h
    public void a(String str) {
        z.a("DefaultJSRewardVideoV1", "triggerCloseBtn,state=" + str);
    }

    @Override // com.mbridge.msdk.video.js.h
    public void b(String str) {
        z.a("DefaultJSRewardVideoV1", "setOrientation,landscape=" + str);
    }

    @Override // com.mbridge.msdk.video.js.h
    public void c(String str) {
        z.a("DefaultJSRewardVideoV1", "handlerPlayableException，msg=" + str);
    }
}
