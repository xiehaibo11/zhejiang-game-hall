package com.huawei.hms.base.ui;

public class a {
    public static final java.util.regex.Pattern a = null;

    static {
            java.lang.String r0 = "[0-9]*[a-z|A-Z]*[一-龥]*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.huawei.hms.base.ui.a.a = r0
            return
    }

    public static java.lang.String a(java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return r8
        L7:
            int r0 = r8.length()
            r1 = 42
            r2 = 1
            if (r2 != r0) goto L15
            java.lang.String r8 = java.lang.String.valueOf(r1)
            return r8
        L15:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r0)
            r4 = 0
        L1b:
            if (r4 >= r0) goto L3e
            char r5 = r8.charAt(r4)
            java.util.regex.Pattern r6 = com.huawei.hms.base.ui.a.a
            java.lang.String r7 = java.lang.String.valueOf(r5)
            java.util.regex.Matcher r6 = r6.matcher(r7)
            boolean r6 = r6.matches()
            if (r6 == 0) goto L38
            int r6 = r2 % 2
            if (r6 != 0) goto L36
            r5 = r1
        L36:
            int r2 = r2 + 1
        L38:
            r3.append(r5)
            int r4 = r4 + 1
            goto L1b
        L3e:
            java.lang.String r8 = r3.toString()
            return r8
    }

    public static java.lang.String a(java.lang.String r2, boolean r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 512(0x200, float:7.17E-43)
            r0.<init>(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L1a
            if (r3 == 0) goto L17
            java.lang.String r2 = a(r2)
            r0.append(r2)
            goto L1a
        L17:
            r0.append(r2)
        L1a:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            android.util.Log.e(r1, r2)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = a(r2, r3)
            android.util.Log.e(r1, r2)
            return
    }
}
