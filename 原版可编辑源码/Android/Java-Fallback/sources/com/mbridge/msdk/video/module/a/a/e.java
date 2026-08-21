package com.mbridge.msdk.video.module.a.a;

public class e implements com.mbridge.msdk.video.module.a.a {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(int r3, java.lang.Object r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onNotify,type="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ",pt="
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "NotifyListener"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
            return
    }
}
