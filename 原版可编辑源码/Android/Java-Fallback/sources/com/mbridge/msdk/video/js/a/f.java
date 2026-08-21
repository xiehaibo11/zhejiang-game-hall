package com.mbridge.msdk.video.js.a;

public class f implements com.mbridge.msdk.video.js.h {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r2 = this;
            java.lang.String r0 = "DefaultJSRewardVideoV1"
            java.lang.String r1 = "getEndScreenInfo"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r0 = "{}"
            return r0
    }

    @Override
    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "triggerCloseBtn,state="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSRewardVideoV1"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void b(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setOrientation,landscape="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSRewardVideoV1"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void c(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "handlerPlayableException，msg="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSRewardVideoV1"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void notifyCloseBtn(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "notifyCloseBtn,state="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSRewardVideoV1"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void toggleCloseBtn(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "toggleCloseBtn,state="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSRewardVideoV1"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }
}
