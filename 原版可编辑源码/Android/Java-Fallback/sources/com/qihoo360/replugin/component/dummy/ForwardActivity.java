package com.qihoo360.replugin.component.dummy;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ForwardActivity extends android.app.Activity {
    public ForwardActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            r3 = 0
            super.onCreate(r3)
            java.lang.String r3 = "ws001"
            java.lang.String r0 = "f.a: o.c"
            com.qihoo360.replugin.helper.LogRelease.i(r3, r0)
            android.content.Intent r0 = r2.getIntent()
            if (r0 != 0) goto L16
            java.lang.String r1 = "f.a: nul i"
            com.qihoo360.replugin.helper.LogRelease.e(r3, r1)
        L16:
            com.qihoo360.loader2.PMF.forward(r2, r0)
            return
    }
}
