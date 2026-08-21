package com.alipay.sdk.m.k;

public class b {
    public static final java.lang.String A = "SSLDenied";
    public static final java.lang.String A0 = "out_trade_no";
    public static final java.lang.String B = "H5PayDataAnalysisError";
    public static final java.lang.String B0 = "trade_no";
    public static final java.lang.String C = "H5AuthDataAnalysisError";
    public static final java.lang.String C0 = "biz_content";
    public static final java.lang.String D = "PublicKeyUnmatch";
    public static final java.lang.String D0 = "app_id";
    public static final java.lang.String E = "ClientBindFailed";
    public static final java.lang.String F = "TriDesEncryptError";
    public static final java.lang.String G = "TriDesDecryptError";
    public static final java.lang.String H = "ClientBindException";
    public static final java.lang.String I = "SaveTradeTokenError";
    public static final java.lang.String J = "ClientBindServiceFailed";
    public static final java.lang.String K = "TryStartServiceEx";
    public static final java.lang.String L = "BindWaitTimeoutEx";
    public static final java.lang.String M = "CheckClientExistEx";
    public static final java.lang.String N = "CheckClientSignEx";
    public static final java.lang.String O = "GetInstalledAppEx";
    public static final java.lang.String P = "ParserTidClientKeyEx";
    public static final java.lang.String Q = "PgApiInvoke";
    public static final java.lang.String R = "PgBindStarting";
    public static final java.lang.String S = "PgBinded";
    public static final java.lang.String T = "PgBindEnd";
    public static final java.lang.String U = "PgBindPay";
    public static final java.lang.String V = "PgReturn";
    public static final java.lang.String W = "PgReturnV";
    public static final java.lang.String X = "PgWltVer";
    public static final java.lang.String Y = "PgOpenStarting";
    public static final java.lang.String Z = "ErrIntentEx";
    public static final java.lang.String a0 = "ErrActNull";
    public static final java.lang.String b0 = "ErrActEx";
    public static final java.lang.String c0 = "ErrActNull2";
    public static final java.lang.String d0 = "ErrActEx2";
    public static final java.lang.String e0 = "ErrActNotCreated";
    public static final java.lang.String f0 = "GetInstalledAppEx";
    public static final java.lang.String g0 = "StartLaunchAppTransEx";
    public static final java.lang.String h0 = "CheckLaunchAppExistEx";
    public static final java.lang.String i0 = "LogBindCalledH5";
    public static final java.lang.String j0 = "LogCalledH5";
    public static final java.lang.String k = "net";
    public static final java.lang.String k0 = "LogHkLoginByIntent";
    public static final java.lang.String l = "biz";
    public static final java.lang.String l0 = "SchemePayWrongHashEx";
    public static final java.lang.String m = "cp";
    public static final java.lang.String m0 = "LogAppFetchConfigTimeout";
    public static final java.lang.String n = "auth";
    public static final java.lang.String n0 = "H5CbUrlEmpty";
    public static final java.lang.String o = "third";
    public static final java.lang.String o0 = "H5CbEx";
    public static final java.lang.String p = "wlt";
    public static final java.lang.String p0 = "StartActivityEx";
    public static final java.lang.String q = "FormatResultEx";
    public static final java.lang.String q0 = "JSONEx";
    public static final java.lang.String r = "GetApdidEx";
    public static final java.lang.String r0 = "ParseBundleSerializableError";
    public static final java.lang.String s = "GetApdidNull";
    public static final java.lang.String s0 = "ParseSchemeQueryError";
    public static final java.lang.String t = "GetApdidTimeout";
    public static final java.lang.String t0 = "TbChk";
    public static final java.lang.String u = "GetUtdidEx";
    public static final java.lang.String u0 = "TbStart";
    public static final java.lang.String v = "GetPackageInfoEx";
    public static final java.lang.String v0 = "TbCancel";
    public static final java.lang.String w = "NotIncludeSignatures";
    public static final java.lang.String w0 = "TbUnknown";
    public static final java.lang.String x = "GetPublicKeyFromSignEx";
    public static final java.lang.String x0 = "TbOk";
    public static final java.lang.String y = "webError";
    public static final java.lang.String y0 = "TbActFail";
    public static final java.lang.String z = "SSLError";
    public static final java.lang.String z0 = "partner";
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;

    public b(android.content.Context r3, boolean r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.h = r0
            r2.i = r0
            if (r3 == 0) goto Lf
            android.content.Context r3 = r3.getApplicationContext()
        Lf:
            java.lang.String r0 = b()
            r2.a = r0
            java.lang.String r0 = a(r3)
            r2.c = r0
            if (r4 == 0) goto L20
            r0 = 0
            goto L24
        L20:
            long r0 = com.alipay.sdk.m.k.a.e.a(r3)
        L24:
            java.lang.String r4 = a(r0)
            r2.d = r4
            java.lang.String r4 = a()
            r2.e = r4
            java.lang.String r3 = b(r3)
            r2.f = r3
            java.lang.String r3 = "-"
            r2.g = r3
            r2.j = r3
            return
    }

    public static java.lang.String a() {
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.content.Context r0 = r0.b()
            com.alipay.sdk.m.t.a r0 = com.alipay.sdk.m.t.a.a(r0)
            java.lang.String r0 = r0.d()
            java.lang.String r0 = c(r0)
            com.alipay.sdk.m.s.b r1 = com.alipay.sdk.m.s.b.d()
            java.lang.String r1 = r1.c()
            java.lang.String r1 = c(r1)
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r1
            java.lang.String r0 = "%s,%s,-,-,-"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            return r0
    }

    public static java.lang.String a(long r4) {
            java.lang.String r0 = "15.8.15"
            java.lang.String r0 = c(r0)
            java.lang.String r1 = "h.a.3.8.15"
            java.lang.String r1 = c(r1)
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "~"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5 = 2
            r2[r5] = r4
            java.lang.String r4 = "android,3,%s,%s,com.alipay.mcpay,5.0,-,%s,-"
            java.lang.String r4 = java.lang.String.format(r4, r2)
            return r4
    }

    public static java.lang.String a(android.content.Context r4) {
            java.lang.String r0 = "-"
            if (r4 == 0) goto L31
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = r4.getPackageName()     // Catch: java.lang.Throwable -> L31
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L32
            r2 = 64
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r1, r2)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = r4.versionName     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = a(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32
            r3.<init>()     // Catch: java.lang.Throwable -> L32
            r3.append(r2)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = "|"
            r3.append(r2)     // Catch: java.lang.Throwable -> L32
            r3.append(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L32
            goto L32
        L31:
            r1 = r0
        L32:
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r1 = c(r1)
            r2 = 0
            r4[r2] = r1
            java.lang.String r0 = c(r0)
            r1 = 1
            r4[r1] = r0
            java.lang.String r0 = "%s,%s,-,-,-"
            java.lang.String r4 = java.lang.String.format(r0, r4)
            return r4
    }

    public static java.lang.String a(android.content.pm.PackageInfo r7) {
            java.lang.String r0 = "?"
            if (r7 == 0) goto L4d
            android.content.pm.Signature[] r1 = r7.signatures
            if (r1 == 0) goto L4d
            int r1 = r1.length
            if (r1 != 0) goto Lc
            goto L4d
        Lc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4c
            android.content.pm.Signature[] r2 = r7.signatures     // Catch: java.lang.Throwable -> L4c
            int r2 = r2.length     // Catch: java.lang.Throwable -> L4c
            r1.append(r2)     // Catch: java.lang.Throwable -> L4c
            android.content.pm.Signature[] r7 = r7.signatures     // Catch: java.lang.Throwable -> L4c
            int r2 = r7.length     // Catch: java.lang.Throwable -> L4c
            r3 = 0
            r4 = 0
        L1c:
            if (r4 >= r2) goto L47
            r5 = r7[r4]     // Catch: java.lang.Throwable -> L4c
            r6 = 0
            byte[] r5 = r5.toByteArray()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r5 = com.alipay.sdk.m.u.n.a(r6, r5)     // Catch: java.lang.Throwable -> L3b
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3b
            if (r6 == 0) goto L30
            goto L3b
        L30:
            java.lang.String r5 = com.alipay.sdk.m.u.n.g(r5)     // Catch: java.lang.Throwable -> L3b
            r6 = 8
            java.lang.String r5 = r5.substring(r3, r6)     // Catch: java.lang.Throwable -> L3b
            goto L3c
        L3b:
            r5 = r0
        L3c:
            java.lang.String r6 = "-"
            r1.append(r6)     // Catch: java.lang.Throwable -> L4c
            r1.append(r5)     // Catch: java.lang.Throwable -> L4c
            int r4 = r4 + 1
            goto L1c
        L47:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L4c
            return r7
        L4c:
            return r0
        L4d:
            java.lang.String r7 = "0"
            return r7
    }

    public static java.lang.String a(java.lang.Throwable r6) {
            java.lang.String r0 = " 》 "
            if (r6 != 0) goto L7
            java.lang.String r6 = ""
            return r6
        L7:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.Class r2 = r6.getClass()     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L46
            r1.append(r2)     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = ":"
            r1.append(r2)     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = r6.getMessage()     // Catch: java.lang.Throwable -> L46
            r1.append(r2)     // Catch: java.lang.Throwable -> L46
            r1.append(r0)     // Catch: java.lang.Throwable -> L46
            java.lang.StackTraceElement[] r6 = r6.getStackTrace()     // Catch: java.lang.Throwable -> L46
            if (r6 == 0) goto L46
            int r2 = r6.length     // Catch: java.lang.Throwable -> L46
            r3 = 0
            r4 = 0
        L2f:
            if (r3 >= r2) goto L46
            r5 = r6[r3]     // Catch: java.lang.Throwable -> L46
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L46
            r1.append(r5)     // Catch: java.lang.Throwable -> L46
            r1.append(r0)     // Catch: java.lang.Throwable -> L46
            int r4 = r4 + 1
            r5 = 5
            if (r4 <= r5) goto L43
            goto L46
        L43:
            int r3 = r3 + 1
            goto L2f
        L46:
            java.lang.String r6 = r1.toString()
            return r6
    }

    public static java.lang.String b() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd-HH:mm:ss"
            r0.<init>(r1)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = e()
            r3 = 0
            r1[r3] = r2
            r2 = 1
            r1[r2] = r0
            java.lang.String r0 = "%s,%s"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            return r0
    }

    public static java.lang.String b(android.content.Context r6) {
            java.lang.String r0 = com.alipay.sdk.m.u.c.c(r6)
            java.lang.String r0 = c(r0)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = c(r1)
            java.lang.String r2 = android.os.Build.MODEL
            java.lang.String r2 = c(r2)
            com.alipay.sdk.m.u.g r3 = com.alipay.sdk.m.u.c.d(r6)
            java.lang.String r3 = r3.b()
            java.lang.String r3 = c(r3)
            r4 = 0
            java.lang.String r6 = com.alipay.sdk.m.w.b.b(r4, r6)
            java.lang.String r6 = c(r6)
            r4 = 9
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r5 = 0
            r4[r5] = r0
            r0 = 1
            java.lang.String r5 = "android"
            r4[r0] = r5
            r0 = 2
            r4[r0] = r1
            r0 = 3
            r4[r0] = r2
            r0 = 4
            java.lang.String r1 = "-"
            r4[r0] = r1
            r0 = 5
            java.lang.String r1 = "0"
            r4[r0] = r1
            r0 = 6
            r4[r0] = r3
            r0 = 7
            java.lang.String r1 = "gw"
            r4[r0] = r1
            r0 = 8
            r4[r0] = r6
            java.lang.String r6 = "%s,%s,%s,%s,%s,%s,%s,%s,%s,-"
            java.lang.String r6 = java.lang.String.format(r6, r4)
            return r6
    }

    public static java.lang.String b(java.lang.String r14) {
            java.lang.String r0 = ""
            if (r14 != 0) goto L5
            r14 = r0
        L5:
            java.lang.String r1 = "&"
            java.lang.String[] r14 = r14.split(r1)
            r1 = 2
            r2 = 0
            r3 = 1
            r4 = 0
            if (r14 == 0) goto L92
            int r5 = r14.length
            r6 = r2
            r7 = r6
            r8 = 0
        L15:
            if (r8 >= r5) goto L94
            r9 = r14[r8]
            java.lang.String r10 = "="
            java.lang.String[] r9 = r9.split(r10)
            if (r9 == 0) goto L8f
            int r10 = r9.length
            if (r10 != r1) goto L8f
            r10 = r9[r4]
            java.lang.String r11 = "partner"
            boolean r10 = r10.equalsIgnoreCase(r11)
            java.lang.String r11 = "\""
            if (r10 == 0) goto L37
            r2 = r9[r3]
            java.lang.String r2 = r2.replace(r11, r0)
            goto L8f
        L37:
            r10 = r9[r4]
            java.lang.String r12 = "out_trade_no"
            boolean r10 = r10.equalsIgnoreCase(r12)
            if (r10 == 0) goto L48
            r6 = r9[r3]
            java.lang.String r6 = r6.replace(r11, r0)
            goto L8f
        L48:
            r10 = r9[r4]
            java.lang.String r13 = "trade_no"
            boolean r10 = r10.equalsIgnoreCase(r13)
            if (r10 == 0) goto L59
            r7 = r9[r3]
            java.lang.String r7 = r7.replace(r11, r0)
            goto L8f
        L59:
            r10 = r9[r4]
            java.lang.String r11 = "biz_content"
            boolean r10 = r10.equalsIgnoreCase(r11)
            if (r10 == 0) goto L7d
            com.alipay.sdk.m.s.a r10 = com.alipay.sdk.m.s.a.h()     // Catch: java.lang.Throwable -> L8f
            r9 = r9[r3]     // Catch: java.lang.Throwable -> L8f
            java.lang.String r9 = com.alipay.sdk.m.u.n.e(r10, r9)     // Catch: java.lang.Throwable -> L8f
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8f
            r10.<init>(r9)     // Catch: java.lang.Throwable -> L8f
            boolean r9 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L8f
            if (r9 == 0) goto L8f
            java.lang.String r6 = r10.getString(r12)     // Catch: java.lang.Throwable -> L8f
            goto L8f
        L7d:
            r10 = r9[r4]
            java.lang.String r11 = "app_id"
            boolean r10 = r10.equalsIgnoreCase(r11)
            if (r10 == 0) goto L8f
            boolean r10 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L8f
            if (r10 == 0) goto L8f
            r2 = r9[r3]     // Catch: java.lang.Throwable -> L8f
        L8f:
            int r8 = r8 + 1
            goto L15
        L92:
            r6 = r2
            r7 = r6
        L94:
            java.lang.String r14 = c(r7)
            java.lang.String r0 = c(r6)
            java.lang.String r2 = c(r2)
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r5[r4] = r14
            r5[r3] = r0
            r5[r1] = r2
            java.lang.String r14 = "%s,%s,-,%s,-,-,-"
            java.lang.String r14 = java.lang.String.format(r14, r5)
            return r14
    }

    public static java.lang.String c() {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r2 = "HH:mm:ss:SSS"
            r0.<init>(r2, r1)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            return r0
    }

    public static java.lang.String c(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            java.lang.String r0 = "["
            java.lang.String r1 = "【"
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = "]"
            java.lang.String r1 = "】"
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = "("
            java.lang.String r1 = "（"
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = ")"
            java.lang.String r1 = "）"
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = ","
            java.lang.String r1 = "，"
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = "^"
            java.lang.String r1 = "~"
            java.lang.String r2 = r2.replace(r0, r1)
            java.lang.String r0 = "#"
            java.lang.String r1 = "＃"
            java.lang.String r2 = r2.replace(r0, r1)
            return r2
    }

    private synchronized void c(java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            monitor-enter(r8)
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L76
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Throwable -> L76
            r3 = 1
            r1[r3] = r10     // Catch: java.lang.Throwable -> L76
            r4 = 2
            r1[r4] = r11     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = "event %s %s %s"
            java.lang.String r1 = java.lang.String.format(r5, r1)     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = "mspl"
            com.alipay.sdk.m.u.e.d(r5, r1)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = ""
            java.lang.String r5 = r8.h     // Catch: java.lang.Throwable -> L76
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L76
            if (r5 != 0) goto L24
            java.lang.String r1 = "^"
        L24:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r5.<init>()     // Catch: java.lang.Throwable -> L76
            r5.append(r1)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = "%s,%s,%s,-,-,-,-,-,-,-,-,-,-,%s"
            r6 = 4
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L76
            boolean r7 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L76
            if (r7 == 0) goto L3a
            java.lang.String r9 = "-"
            goto L3e
        L3a:
            java.lang.String r9 = c(r9)     // Catch: java.lang.Throwable -> L76
        L3e:
            r6[r2] = r9     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = c(r10)     // Catch: java.lang.Throwable -> L76
            r6[r3] = r9     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = c(r11)     // Catch: java.lang.Throwable -> L76
            r6[r4] = r9     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = c()     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = c(r9)     // Catch: java.lang.Throwable -> L76
            r6[r0] = r9     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = java.lang.String.format(r1, r6)     // Catch: java.lang.Throwable -> L76
            r5.append(r9)     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r10.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.String r11 = r8.h     // Catch: java.lang.Throwable -> L76
            r10.append(r11)     // Catch: java.lang.Throwable -> L76
            r10.append(r9)     // Catch: java.lang.Throwable -> L76
            java.lang.String r9 = r10.toString()     // Catch: java.lang.Throwable -> L76
            r8.h = r9     // Catch: java.lang.Throwable -> L76
            monitor-exit(r8)
            return
        L76:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public static java.lang.String d(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            java.lang.String r1 = "-"
        L8:
            return r1
    }

    private synchronized void d(java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            monitor-enter(r7)
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L6e
            r2 = 0
            r1[r2] = r8     // Catch: java.lang.Throwable -> L6e
            r3 = 1
            r1[r3] = r9     // Catch: java.lang.Throwable -> L6e
            r4 = 2
            r1[r4] = r10     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = "err %s %s %s"
            java.lang.String r1 = java.lang.String.format(r5, r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = "mspl"
            com.alipay.sdk.m.u.e.c(r5, r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r1 = ""
            java.lang.String r5 = r7.i     // Catch: java.lang.Throwable -> L6e
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L6e
            if (r5 != 0) goto L24
            java.lang.String r1 = "^"
        L24:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6e
            r5.<init>()     // Catch: java.lang.Throwable -> L6e
            r5.append(r1)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r1 = "%s,%s,%s,%s"
            r6 = 4
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L6e
            r6[r2] = r8     // Catch: java.lang.Throwable -> L6e
            r6[r3] = r9     // Catch: java.lang.Throwable -> L6e
            boolean r8 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L6e
            if (r8 == 0) goto L3e
            java.lang.String r8 = "-"
            goto L42
        L3e:
            java.lang.String r8 = c(r10)     // Catch: java.lang.Throwable -> L6e
        L42:
            r6[r4] = r8     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = c()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = c(r8)     // Catch: java.lang.Throwable -> L6e
            r6[r0] = r8     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = java.lang.String.format(r1, r6)     // Catch: java.lang.Throwable -> L6e
            r5.append(r8)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = r5.toString()     // Catch: java.lang.Throwable -> L6e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6e
            r9.<init>()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r10 = r7.i     // Catch: java.lang.Throwable -> L6e
            r9.append(r10)     // Catch: java.lang.Throwable -> L6e
            r9.append(r8)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L6e
            r7.i = r8     // Catch: java.lang.Throwable -> L6e
            monitor-exit(r7)
            return
        L6e:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    private boolean d() {
            r1 = this;
            java.lang.String r0 = r1.i
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            return r0
    }

    public static java.lang.String e() {
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            java.lang.String r0 = "12345678uuid"
            return r0
    }

    public java.lang.String a(java.lang.String r4) {
            r3 = this;
            java.lang.String r4 = b(r4)
            r3.b = r4
            r0 = 10
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.a
            r2 = 0
            r0[r2] = r1
            r1 = 1
            r0[r1] = r4
            java.lang.String r4 = r3.c
            r1 = 2
            r0[r1] = r4
            java.lang.String r4 = r3.d
            r1 = 3
            r0[r1] = r4
            java.lang.String r4 = r3.e
            r1 = 4
            r0[r1] = r4
            java.lang.String r4 = r3.f
            r1 = 5
            r0[r1] = r4
            java.lang.String r4 = r3.g
            r1 = 6
            r0[r1] = r4
            java.lang.String r4 = r3.h
            java.lang.String r4 = d(r4)
            r1 = 7
            r0[r1] = r4
            java.lang.String r4 = r3.i
            java.lang.String r4 = d(r4)
            r1 = 8
            r0[r1] = r4
            java.lang.String r4 = r3.j
            r1 = 9
            r0[r1] = r4
            java.lang.String r4 = "[(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s)]"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            return r4
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = ""
            r1.c(r0, r2, r3)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "|"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = ""
            r1.c(r4, r2, r3)
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            java.lang.String r3 = a(r3)
            r0.d(r1, r2, r3)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r4 = a(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = ": "
            r0.append(r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r1.d(r2, r3, r4)
            return
    }

    public void b(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.d(r1, r2, r3)
            return
    }
}
