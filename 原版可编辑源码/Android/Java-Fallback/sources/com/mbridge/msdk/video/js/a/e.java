package com.mbridge.msdk.video.js.a;

public class e implements com.mbridge.msdk.video.js.f {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onVideoStatusNotify:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSNotifyProxy"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void a(int r1, int r2, int r3, int r4) {
            r0 = this;
            java.lang.String r1 = "DefaultJSNotifyProxy"
            java.lang.String r2 = "showDataInfo"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            return
    }

    @Override
    public void a(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onClick:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",pt:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultJSNotifyProxy"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public void a(com.mbridge.msdk.video.module.MBridgeVideoView.a r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onProgressNotify:"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSNotifyProxy"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void a(java.lang.Object r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onWebviewShow:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSNotifyProxy"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }
}
