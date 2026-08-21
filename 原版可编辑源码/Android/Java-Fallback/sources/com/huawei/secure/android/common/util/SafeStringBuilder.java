package com.huawei.secure.android.common.util;

public class SafeStringBuilder {
    private static final java.lang.String a = "SafeStringBuilder";
    private static final java.lang.String b = "";

    static {
            return
    }

    public SafeStringBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String substring(java.lang.StringBuilder r3, int r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L31
            int r0 = r3.length()
            if (r0 < r4) goto L31
            if (r4 >= 0) goto L11
            goto L31
        L11:
            java.lang.String r3 = r3.substring(r4)     // Catch: java.lang.Exception -> L16
            return r3
        L16:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.util.SafeStringBuilder.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "substring exception: "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.e(r4, r3)
        L31:
            return r1
    }

    public static java.lang.String substring(java.lang.StringBuilder r2, int r3, int r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 != 0) goto L33
            if (r3 < 0) goto L33
            int r0 = r2.length()
            if (r4 > r0) goto L33
            if (r4 >= r3) goto L13
            goto L33
        L13:
            java.lang.String r2 = r2.substring(r3, r4)     // Catch: java.lang.Exception -> L18
            return r2
        L18:
            r2 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.util.SafeStringBuilder.a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "substring: "
            r4.append(r0)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            android.util.Log.e(r3, r2)
        L33:
            return r1
    }
}
