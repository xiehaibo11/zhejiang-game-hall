package com.tkay.expressad.atsignalcommon.base;

public final class c implements com.tkay.expressad.atsignalcommon.base.a {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L19
            android.net.Uri r2 = android.net.Uri.parse(r2)
            java.lang.String r2 = r2.getScheme()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L19
            java.lang.String r0 = "intent"
            r2.equals(r0)
        L19:
            r2 = 0
            return r2
    }
}
