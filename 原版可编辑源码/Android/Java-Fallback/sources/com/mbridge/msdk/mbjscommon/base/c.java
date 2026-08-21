package com.mbridge.msdk.mbjscommon.base;

public final class c implements com.mbridge.msdk.mbjscommon.base.a {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L29
            android.net.Uri r0 = android.net.Uri.parse(r3)
            java.lang.String r0 = r0.getScheme()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L29
            java.lang.String r1 = "intent"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L29
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            boolean r3 = com.mbridge.msdk.click.c.e(r0, r3)
            return r3
        L29:
            r3 = 0
            return r3
    }
}
