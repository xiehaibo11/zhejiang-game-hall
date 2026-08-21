package com.iab.omid.library.mmadbridge.utils;

public final class d {
    public static void a(java.lang.String r1) {
            java.lang.Boolean r0 = com.iab.omid.library.mmadbridge.a.a
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L13
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L13
            java.lang.String r0 = "OMIDLIB"
            android.util.Log.i(r0, r1)
        L13:
            return
    }

    public static void a(java.lang.String r1, java.lang.Exception r2) {
            java.lang.Boolean r0 = com.iab.omid.library.mmadbridge.a.a
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Le
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L10
        Le:
            if (r2 == 0) goto L15
        L10:
            java.lang.String r0 = "OMIDLIB"
            android.util.Log.e(r0, r1, r2)
        L15:
            return
    }
}
