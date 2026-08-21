package com.alipay.sdk.util;

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

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = "pref_trade_token"
            java.lang.String r3 = com.alipay.sdk.util.j.b(r3, r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PayResultUtil::fetchTradeToken > tradeToken:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.alipay.sdk.util.c.b(r0, r1)
            return r3
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
            r2 = r1
            r1 = 0
        L11:
            int r3 = r7.length
            if (r1 >= r3) goto L80
            r3 = r7[r1]
            java.lang.String r4 = "result={"
            boolean r3 = r3.startsWith(r4)
            if (r3 == 0) goto L7d
            r3 = r7[r1]
            java.lang.String r4 = "}"
            boolean r3 = r3.endsWith(r4)
            if (r3 == 0) goto L7d
            r3 = r7[r1]
            r4 = 8
            r5 = r7[r1]
            int r5 = r5.length()
            int r5 = r5 + (-1)
            java.lang.String r3 = r3.substring(r4, r5)
            java.lang.String r4 = "&"
            java.lang.String[] r3 = r3.split(r4)
            r4 = 0
        L3f:
            int r5 = r3.length
            if (r4 >= r5) goto L7d
            r5 = r3[r4]
            java.lang.String r6 = "trade_token=\""
            boolean r5 = r5.startsWith(r6)
            if (r5 == 0) goto L67
            r5 = r3[r4]
            java.lang.String r6 = "\""
            boolean r5 = r5.endsWith(r6)
            if (r5 == 0) goto L67
            r2 = r3[r4]
            r5 = 13
            r3 = r3[r4]
            int r3 = r3.length()
            int r3 = r3 + (-1)
            java.lang.String r2 = r2.substring(r5, r3)
            goto L7d
        L67:
            r5 = r3[r4]
            java.lang.String r6 = "trade_token="
            boolean r5 = r5.startsWith(r6)
            if (r5 == 0) goto L7a
            r2 = r3[r4]
            r3 = 12
            java.lang.String r2 = r2.substring(r3)
            goto L7d
        L7a:
            int r4 = r4 + 1
            goto L3f
        L7d:
            int r1 = r1 + 1
            goto L11
        L80:
            return r2
    }

    public static void a(android.content.Context r3, java.lang.String r4) {
            java.lang.String r4 = a(r4)     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = ""
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L26
            r1.<init>()     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = "PayResultUtil::saveTradeToken > tradeToken:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L26
            r1.append(r4)     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L26
            com.alipay.sdk.util.c.b(r0, r1)     // Catch: java.lang.Throwable -> L26
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L31
            java.lang.String r0 = "pref_trade_token"
            com.alipay.sdk.util.j.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L26
            goto L31
        L26:
            r3 = move-exception
            java.lang.String r4 = "biz"
            java.lang.String r0 = "SaveTradeTokenError"
            com.alipay.sdk.app.statistic.a.a(r4, r0, r3)
            com.alipay.sdk.util.c.a(r3)
        L31:
            return
    }
}
