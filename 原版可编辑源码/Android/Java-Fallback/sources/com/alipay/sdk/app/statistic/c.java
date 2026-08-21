package com.alipay.sdk.app.statistic;

public class c {
    public static final java.lang.String A = "ClientBindServiceFailed";
    public static final java.lang.String B = "BindWaitTimeoutEx";
    public static final java.lang.String C = "CheckClientExistEx";
    public static final java.lang.String D = "CheckClientSignEx";
    public static final java.lang.String E = "GetInstalledAppEx";
    public static final java.lang.String F = "ParserTidClientKeyEx";
    public static final java.lang.String G = "GetInstalledAppEx";
    public static final java.lang.String H = "StartLaunchAppTransEx";
    public static final java.lang.String I = "CheckLaunchAppExistEx";
    public static final java.lang.String J = "LogCurrentAppLaunchSwitch";
    public static final java.lang.String K = "LogCurrentQueryTime";
    public static final java.lang.String L = "LogCalledPackage";
    public static final java.lang.String M = "LogBindCalledH5";
    public static final java.lang.String N = "LogCalledH5";
    public static final java.lang.String O = "LogHkLoginByIntent";
    public static final java.lang.String P = "SchemePayWrongHashEx";
    public static final java.lang.String Q = "LogAppLaunchSwitchEnabled";
    public static final java.lang.String R = "H5CbUrlEmpty";
    public static final java.lang.String S = "H5CbEx";
    public static final java.lang.String T = "tid_context_null";
    public static final java.lang.String U = "partner";
    public static final java.lang.String V = "out_trade_no";
    public static final java.lang.String W = "trade_no";
    public static final java.lang.String a = "net";
    public static final java.lang.String b = "biz";
    public static final java.lang.String c = "cp";
    public static final java.lang.String d = "auth";
    public static final java.lang.String e = "third";
    public static final java.lang.String f = "tid";
    public static final java.lang.String g = "FormatResultEx";
    public static final java.lang.String h = "GetApdidEx";
    public static final java.lang.String i = "GetApdidNull";
    public static final java.lang.String j = "GetApdidTimeout";
    public static final java.lang.String k = "GetUtdidEx";
    public static final java.lang.String l = "GetPackageInfoEx";
    public static final java.lang.String m = "NotIncludeSignatures";
    public static final java.lang.String n = "GetInstalledPackagesEx";
    public static final java.lang.String o = "GetPublicKeyFromSignEx";
    public static final java.lang.String p = "H5PayNetworkError";
    public static final java.lang.String q = "H5AuthNetworkError";
    public static final java.lang.String r = "SSLError";
    public static final java.lang.String s = "H5PayDataAnalysisError";
    public static final java.lang.String t = "H5AuthDataAnalysisError";
    public static final java.lang.String u = "PublicKeyUnmatch";
    public static final java.lang.String v = "ClientBindFailed";
    public static final java.lang.String w = "TriDesEncryptError";
    public static final java.lang.String x = "TriDesDecryptError";
    public static final java.lang.String y = "ClientBindException";
    public static final java.lang.String z = "SaveTradeTokenError";
    private java.lang.String X;
    private java.lang.String Y;
    private java.lang.String Z;
    private java.lang.String aa;
    private java.lang.String ab;
    private java.lang.String ac;
    private java.lang.String ad;
    private java.lang.String ae;
    private java.lang.String af;
    private java.lang.String ag;

    public c(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.af = r0
            if (r2 == 0) goto Ld
            android.content.Context r2 = r2.getApplicationContext()
        Ld:
            java.lang.String r0 = r1.b()
            r1.X = r0
            java.lang.String r0 = r1.a(r2)
            r1.Z = r0
            java.lang.String r0 = r1.c()
            r1.aa = r0
            java.lang.String r0 = r1.d()
            r1.ab = r0
            java.lang.String r2 = r1.b(r2)
            r1.ac = r2
            java.lang.String r2 = "-"
            r1.ad = r2
            r1.ae = r2
            r1.ag = r2
            return
    }

    private java.lang.String a(android.content.Context r4) {
            r3 = this;
            r0 = 0
            java.lang.String r1 = "-"
            if (r4 == 0) goto L18
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Throwable -> L18
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L19
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = r4.versionName     // Catch: java.lang.Throwable -> L19
            goto L19
        L18:
            r2 = r1
        L19:
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r4[r0] = r2
            r0 = 1
            r4[r0] = r1
            java.lang.String r0 = "%s,%s,-,-,-"
            java.lang.String r4 = java.lang.String.format(r0, r4)
            return r4
    }

    private java.lang.String a(java.lang.Throwable r6) {
            r5 = this;
            java.lang.String r0 = " 》 "
            if (r6 != 0) goto L7
            java.lang.String r6 = ""
            return r6
        L7:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.Class r2 = r6.getClass()     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L4b
            r1.append(r2)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = ":"
            r1.append(r2)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = r6.getMessage()     // Catch: java.lang.Throwable -> L4b
            r1.append(r2)     // Catch: java.lang.Throwable -> L4b
            r1.append(r0)     // Catch: java.lang.Throwable -> L4b
            java.lang.StackTraceElement[] r6 = r6.getStackTrace()     // Catch: java.lang.Throwable -> L4b
            if (r6 == 0) goto L4b
            r2 = 0
        L2d:
            int r3 = r6.length     // Catch: java.lang.Throwable -> L4b
            if (r2 >= r3) goto L4b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            r3.<init>()     // Catch: java.lang.Throwable -> L4b
            r4 = r6[r2]     // Catch: java.lang.Throwable -> L4b
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L4b
            r3.append(r4)     // Catch: java.lang.Throwable -> L4b
            r3.append(r0)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4b
            r1.append(r3)     // Catch: java.lang.Throwable -> L4b
            int r2 = r2 + 1
            goto L2d
        L4b:
            java.lang.String r6 = r1.toString()
            return r6
    }

    private java.lang.String b() {
            r3 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd-HH:mm:ss"
            r0.<init>(r1)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r0 = "123456789,%s"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            return r0
    }

    private java.lang.String b(android.content.Context r8) {
            r7 = this;
            java.lang.String r0 = com.alipay.sdk.util.a.d(r8)
            java.lang.String r0 = r7.b(r0)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = r7.b(r1)
            java.lang.String r2 = android.os.Build.MODEL
            java.lang.String r2 = r7.b(r2)
            com.alipay.sdk.util.a r3 = com.alipay.sdk.util.a.a(r8)
            java.lang.String r3 = r3.a()
            java.lang.String r3 = r7.b(r3)
            com.alipay.sdk.util.d r4 = com.alipay.sdk.util.a.b(r8)
            java.lang.String r4 = r4.b()
            java.lang.String r4 = r7.b(r4)
            com.alipay.sdk.util.a r8 = com.alipay.sdk.util.a.a(r8)
            java.lang.String r8 = r8.b()
            java.lang.String r8 = r7.b(r8)
            r5 = 9
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r6 = 0
            r5[r6] = r0
            java.lang.String r0 = "android"
            r6 = 1
            r5[r6] = r0
            r0 = 2
            r5[r0] = r1
            r0 = 3
            r5[r0] = r2
            java.lang.String r0 = "-"
            r1 = 4
            r5[r1] = r0
            r0 = 5
            r5[r0] = r3
            r0 = 6
            r5[r0] = r4
            java.lang.String r0 = "gw"
            r1 = 7
            r5[r1] = r0
            r0 = 8
            r5[r0] = r8
            java.lang.String r8 = "%s,%s,%s,%s,%s,%s,%s,%s,%s,-"
            java.lang.String r8 = java.lang.String.format(r8, r5)
            return r8
    }

    private java.lang.String b(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r0 = "["
            java.lang.String r1 = "【"
            java.lang.String r3 = r3.replace(r0, r1)
            java.lang.String r0 = "]"
            java.lang.String r1 = "】"
            java.lang.String r3 = r3.replace(r0, r1)
            java.lang.String r0 = "("
            java.lang.String r1 = "（"
            java.lang.String r3 = r3.replace(r0, r1)
            java.lang.String r0 = ")"
            java.lang.String r1 = "）"
            java.lang.String r3 = r3.replace(r0, r1)
            java.lang.String r0 = ","
            java.lang.String r1 = "，"
            java.lang.String r3 = r3.replace(r0, r1)
            java.lang.String r0 = "-"
            java.lang.String r1 = "="
            java.lang.String r3 = r3.replace(r0, r1)
            java.lang.String r0 = "^"
            java.lang.String r1 = "~"
            java.lang.String r3 = r3.replace(r0, r1)
            return r3
    }

    private java.lang.String c() {
            r4 = this;
            java.lang.String r0 = "15.6.2"
            java.lang.String r0 = r4.b(r0)
            java.lang.String r1 = "h.a.3.6.2"
            java.lang.String r1 = r4.b(r1)
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r1
            java.lang.String r0 = "android,3,%s,%s,com.alipay.mcpay,5.0,-,-,-"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            return r0
    }

    private java.lang.String c(java.lang.String r13) {
            r12 = this;
            java.lang.String r0 = "&"
            java.lang.String[] r13 = r13.split(r0)
            r0 = 2
            r1 = 0
            r2 = 1
            r3 = 0
            if (r13 == 0) goto L59
            int r4 = r13.length
            r5 = r1
            r6 = r5
            r1 = 0
        L10:
            if (r1 >= r4) goto L57
            r7 = r13[r1]
            java.lang.String r8 = "="
            java.lang.String[] r7 = r7.split(r8)
            if (r7 == 0) goto L54
            int r8 = r7.length
            if (r8 != r0) goto L54
            r8 = r7[r3]
            java.lang.String r9 = "partner"
            boolean r8 = r8.equalsIgnoreCase(r9)
            java.lang.String r9 = ""
            java.lang.String r10 = "\""
            if (r8 == 0) goto L33
            r7 = r7[r2]
            r7.replace(r10, r9)
            goto L54
        L33:
            r8 = r7[r3]
            java.lang.String r11 = "out_trade_no"
            boolean r8 = r8.equalsIgnoreCase(r11)
            if (r8 == 0) goto L44
            r5 = r7[r2]
            java.lang.String r5 = r5.replace(r10, r9)
            goto L54
        L44:
            r8 = r7[r3]
            java.lang.String r11 = "trade_no"
            boolean r8 = r8.equalsIgnoreCase(r11)
            if (r8 == 0) goto L54
            r6 = r7[r2]
            java.lang.String r6 = r6.replace(r10, r9)
        L54:
            int r1 = r1 + 1
            goto L10
        L57:
            r1 = r6
            goto L5a
        L59:
            r5 = r1
        L5a:
            java.lang.String r13 = r12.b(r1)
            java.lang.String r1 = r12.b(r5)
            java.lang.String r4 = r12.b(r1)
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r5[r3] = r13
            r5[r2] = r1
            r5[r0] = r4
            java.lang.String r13 = "%s,%s,-,%s,-,-,-"
            java.lang.String r13 = java.lang.String.format(r13, r5)
            return r13
    }

    private java.lang.String d() {
            r4 = this;
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            android.content.Context r0 = r0.b()
            com.alipay.sdk.tid.b r0 = com.alipay.sdk.tid.b.a(r0)
            java.lang.String r0 = r0.a()
            java.lang.String r0 = r4.b(r0)
            com.alipay.sdk.sys.b r1 = com.alipay.sdk.sys.b.a()
            java.lang.String r1 = r1.e()
            java.lang.String r1 = r4.b(r1)
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

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.a()
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r3 = r2.c(r3)
            r2.Y = r3
            r3 = 10
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r0 = 0
            java.lang.String r1 = r2.X
            r3[r0] = r1
            r0 = 1
            java.lang.String r1 = r2.Y
            r3[r0] = r1
            r0 = 2
            java.lang.String r1 = r2.Z
            r3[r0] = r1
            r0 = 3
            java.lang.String r1 = r2.aa
            r3[r0] = r1
            r0 = 4
            java.lang.String r1 = r2.ab
            r3[r0] = r1
            r0 = 5
            java.lang.String r1 = r2.ac
            r3[r0] = r1
            r0 = 6
            java.lang.String r1 = r2.ad
            r3[r0] = r1
            r0 = 7
            java.lang.String r1 = r2.ae
            r3[r0] = r1
            r0 = 8
            java.lang.String r1 = r2.af
            r3[r0] = r1
            r0 = 9
            java.lang.String r1 = r2.ag
            r3[r0] = r1
            java.lang.String r0 = "[(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s),(%s)]"
            java.lang.String r3 = java.lang.String.format(r0, r3)
            return r3
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "-"
            r1.a(r2, r3, r4, r0)
            return
    }

    public void a(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            java.lang.String r0 = r3.af
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L1b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "^"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
        L1b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r4
            r4 = 1
            r1[r4] = r5
            r4 = 2
            java.lang.String r5 = r3.b(r6)
            r1[r4] = r5
            r4 = 3
            r1[r4] = r7
            java.lang.String r4 = "%s,%s,%s,%s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r3.af
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.af = r4
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            java.lang.String r3 = r0.a(r3)
            r0.a(r1, r2, r3)
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, java.lang.String r4) {
            r0 = this;
            java.lang.String r3 = r0.a(r3)
            r0.a(r1, r2, r3, r4)
            return
    }

    public boolean a() {
            r1 = this;
            java.lang.String r0 = r1.af
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            return r0
    }
}
