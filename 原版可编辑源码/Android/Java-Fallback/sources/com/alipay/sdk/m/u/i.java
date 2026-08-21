package com.alipay.sdk.m.u;

public class i {
    public static final java.lang.String a = "pref_trade_token";
    public static final java.lang.String b = ";";
    public static final java.lang.String c = "result={";
    public static final java.lang.String d = "}";
    public static final java.lang.String e = "trade_token=\"";
    public static final java.lang.String f = "\"";
    public static final java.lang.String g = "trade_token=";

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(com.alipay.sdk.m.s.a r2, android.content.Context r3) {
            java.lang.String r0 = "pref_trade_token"
            java.lang.String r1 = ""
            java.lang.String r2 = com.alipay.sdk.m.u.j.a(r2, r3, r0, r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "get trade token: "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "mspl"
            com.alipay.sdk.m.u.e.b(r0, r3)
            return r2
    }

    public static java.lang.String a(java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = ";"
            java.lang.String[] r7 = r7.split(r0)
            r0 = 0
            r2 = 0
        L10:
            int r3 = r7.length
            if (r2 >= r3) goto L7f
            r3 = r7[r2]
            java.lang.String r4 = "result={"
            boolean r3 = r3.startsWith(r4)
            if (r3 == 0) goto L7c
            r3 = r7[r2]
            java.lang.String r4 = "}"
            boolean r3 = r3.endsWith(r4)
            if (r3 == 0) goto L7c
            r3 = r7[r2]
            r4 = r7[r2]
            int r4 = r4.length()
            int r4 = r4 + (-1)
            r5 = 8
            java.lang.String r3 = r3.substring(r5, r4)
            java.lang.String r4 = "&"
            java.lang.String[] r3 = r3.split(r4)
            r4 = 0
        L3e:
            int r5 = r3.length
            if (r4 >= r5) goto L7c
            r5 = r3[r4]
            java.lang.String r6 = "trade_token=\""
            boolean r5 = r5.startsWith(r6)
            if (r5 == 0) goto L66
            r5 = r3[r4]
            java.lang.String r6 = "\""
            boolean r5 = r5.endsWith(r6)
            if (r5 == 0) goto L66
            r1 = r3[r4]
            r3 = r3[r4]
            int r3 = r3.length()
            int r3 = r3 + (-1)
            r4 = 13
            java.lang.String r1 = r1.substring(r4, r3)
            goto L7c
        L66:
            r5 = r3[r4]
            java.lang.String r6 = "trade_token="
            boolean r5 = r5.startsWith(r6)
            if (r5 == 0) goto L79
            r1 = r3[r4]
            r3 = 12
            java.lang.String r1 = r1.substring(r3)
            goto L7c
        L79:
            int r4 = r4 + 1
            goto L3e
        L7c:
            int r2 = r2 + 1
            goto L10
        L7f:
            return r1
    }

    public static void a(com.alipay.sdk.m.s.a r3, android.content.Context r4, java.lang.String r5) {
            java.lang.String r5 = a(r5)     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = "mspl"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
            r1.<init>()     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = "trade token: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L26
            r1.append(r5)     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L26
            com.alipay.sdk.m.u.e.b(r0, r1)     // Catch: java.lang.Throwable -> L26
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L31
            java.lang.String r0 = "pref_trade_token"
            com.alipay.sdk.m.u.j.b(r3, r4, r0, r5)     // Catch: java.lang.Throwable -> L26
            goto L31
        L26:
            r4 = move-exception
            java.lang.String r5 = "biz"
            java.lang.String r0 = "SaveTradeTokenError"
            com.alipay.sdk.m.k.a.a(r3, r5, r0, r4)
            com.alipay.sdk.m.u.e.a(r4)
        L31:
            return
    }
}
