package com.tkay.expressad.foundation.h;

public class f {
    private static java.lang.String a = "DomainSameSDKTool";

    static {
            return
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(android.content.Context r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = "navigation_bar_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r1 = r4.getIdentifier(r1, r2, r3)     // Catch: java.lang.Throwable -> L1b
            int r4 = r4.getDimensionPixelSize(r1)     // Catch: java.lang.Throwable -> L1b
            if (r4 <= 0) goto L1a
            r4 = 1
            return r4
        L1a:
            return r0
        L1b:
            r4 = move-exception
            r4.getMessage()
            return r0
    }
}
