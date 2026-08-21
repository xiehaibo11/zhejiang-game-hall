package com.tkay.expressad.foundation.h;

public final class w {
    private static final java.lang.String a = "StringUtils";

    public w() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(java.lang.String r1) {
            if (r1 == 0) goto L17
            java.lang.String r0 = r1.trim()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            java.lang.String r0 = "null"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L15
            goto L17
        L15:
            r1 = 0
            goto L18
        L17:
            r1 = 1
        L18:
            return r1
    }

    public static boolean b(java.lang.String r1) {
            if (r1 == 0) goto L17
            java.lang.String r0 = r1.trim()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            java.lang.String r0 = "null"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L15
            goto L17
        L15:
            r1 = 1
            goto L18
        L17:
            r1 = 0
        L18:
            return r1
    }
}
