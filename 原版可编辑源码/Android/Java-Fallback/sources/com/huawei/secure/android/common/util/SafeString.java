package com.huawei.secure.android.common.util;

public class SafeString {
    private static final java.lang.String a = "SafeString";
    private static final java.lang.String b = "";

    static {
            return
    }

    public SafeString() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String replace(java.lang.String r2, java.lang.CharSequence r3, java.lang.CharSequence r4) {
            if (r2 == 0) goto L27
            if (r3 == 0) goto L27
            if (r4 != 0) goto L7
            goto L27
        L7:
            java.lang.String r2 = r2.replace(r3, r4)     // Catch: java.lang.Exception -> Lc
            return r2
        Lc:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.util.SafeString.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "replace: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.e(r4, r3)
        L27:
            return r2
    }

    public static java.lang.String substring(java.lang.String r3, int r4) {
            java.lang.String r0 = ""
            if (r3 == 0) goto L2d
            int r1 = r3.length()
            if (r1 < r4) goto L2d
            if (r4 >= 0) goto Ld
            goto L2d
        Ld:
            java.lang.String r3 = r3.substring(r4)     // Catch: java.lang.Exception -> L12
            return r3
        L12:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.util.SafeString.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "substring exception: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            android.util.Log.e(r4, r3)
        L2d:
            return r0
    }

    public static java.lang.String substring(java.lang.String r2, int r3, int r4) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L2f
            if (r3 < 0) goto L2f
            int r1 = r2.length()
            if (r4 > r1) goto L2f
            if (r4 >= r3) goto Lf
            goto L2f
        Lf:
            java.lang.String r2 = r2.substring(r3, r4)     // Catch: java.lang.Exception -> L14
            return r2
        L14:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.util.SafeString.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "substring: "
            r4.append(r1)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            android.util.Log.e(r3, r2)
        L2f:
            return r0
    }
}
