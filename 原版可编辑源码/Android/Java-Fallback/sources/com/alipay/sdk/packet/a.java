package com.alipay.sdk.packet;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r9) {
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "&"
            java.lang.String[] r9 = r9.split(r0)
            int r0 = r9.length
            if (r0 != 0) goto L13
            return r1
        L13:
            int r0 = r9.length
            r1 = 0
            r2 = 0
            r3 = r2
            r4 = r3
            r5 = r4
            r6 = r5
            r2 = 0
        L1b:
            if (r2 >= r0) goto L4a
            r7 = r9[r2]
            boolean r8 = android.text.TextUtils.isEmpty(r3)
            if (r8 == 0) goto L29
            java.lang.String r3 = b(r7)
        L29:
            boolean r8 = android.text.TextUtils.isEmpty(r4)
            if (r8 == 0) goto L33
            java.lang.String r4 = c(r7)
        L33:
            boolean r8 = android.text.TextUtils.isEmpty(r5)
            if (r8 == 0) goto L3d
            java.lang.String r5 = d(r7)
        L3d:
            boolean r8 = android.text.TextUtils.isEmpty(r6)
            if (r8 == 0) goto L47
            java.lang.String r6 = f(r7)
        L47:
            int r2 = r2 + 1
            goto L1b
        L4a:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r2 = ";"
            if (r0 != 0) goto L6e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r7 = "biz_type="
            r0.append(r7)
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r9.append(r0)
        L6e:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L8b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "biz_no="
            r0.append(r3)
            r0.append(r4)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r9.append(r0)
        L8b:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto La8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "trade_no="
            r0.append(r3)
            r0.append(r5)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r9.append(r0)
        La8:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto Lc5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "app_userid="
            r0.append(r3)
            r0.append(r6)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r9.append(r0)
        Lc5:
            java.lang.String r9 = r9.toString()
            boolean r0 = r9.endsWith(r2)
            if (r0 == 0) goto Ld9
            int r0 = r9.length()
            int r0 = r0 + (-1)
            java.lang.String r9 = r9.substring(r1, r0)
        Ld9:
            return r9
    }

    private static java.lang.String b(java.lang.String r1) {
            java.lang.String r0 = "biz_type"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto La
            r1 = 0
            return r1
        La:
            java.lang.String r1 = e(r1)
            return r1
    }

    private static java.lang.String c(java.lang.String r1) {
            java.lang.String r0 = "biz_no"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto La
            r1 = 0
            return r1
        La:
            java.lang.String r1 = e(r1)
            return r1
    }

    private static java.lang.String d(java.lang.String r1) {
            java.lang.String r0 = "trade_no"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L16
            java.lang.String r0 = "out_trade_no"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L11
            goto L16
        L11:
            java.lang.String r1 = e(r1)
            return r1
        L16:
            r1 = 0
            return r1
    }

    private static java.lang.String e(java.lang.String r2) {
            java.lang.String r0 = "="
            java.lang.String[] r2 = r2.split(r0)
            int r0 = r2.length
            r1 = 1
            if (r0 <= r1) goto L1b
            r2 = r2[r1]
            java.lang.String r0 = "\""
            boolean r1 = r2.contains(r0)
            if (r1 == 0) goto L1c
            java.lang.String r1 = ""
            java.lang.String r2 = r2.replaceAll(r0, r1)
            goto L1c
        L1b:
            r2 = 0
        L1c:
            return r2
    }

    private static java.lang.String f(java.lang.String r1) {
            java.lang.String r0 = "app_userid"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto La
            r1 = 0
            return r1
        La:
            java.lang.String r1 = e(r1)
            return r1
    }
}
