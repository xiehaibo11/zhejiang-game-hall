package com.alipay.sdk.sys;

public class a {
    public static final java.lang.String a = "\"&";
    public static final java.lang.String b = "&";
    public static final java.lang.String c = "bizcontext=\"";
    public static final java.lang.String d = "bizcontext=";
    public static final java.lang.String e = "\"";
    public static final java.lang.String f = "appkey";
    public static final java.lang.String g = "ty";
    public static final java.lang.String h = "sv";
    public static final java.lang.String i = "an";
    public static final java.lang.String j = "setting";
    public static final java.lang.String k = "av";
    public static final java.lang.String l = "sdk_start_time";
    public static final java.lang.String m = "UTF-8";
    private java.lang.String n;
    private java.lang.String o;
    private android.content.Context p;

    public a(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            r3.n = r0
            r3.o = r0
            r0 = 0
            r3.p = r0
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = r4.getPackageName()     // Catch: java.lang.Exception -> L27
            r2 = 0
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = r0.versionName     // Catch: java.lang.Exception -> L27
            r3.n = r1     // Catch: java.lang.Exception -> L27
            java.lang.String r0 = r0.packageName     // Catch: java.lang.Exception -> L27
            r3.o = r0     // Catch: java.lang.Exception -> L27
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Exception -> L27
            r3.p = r4     // Catch: java.lang.Exception -> L27
        L27:
            return
    }

    private java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String[] r3 = r3.split(r4)
            r4 = 0
        Ld:
            int r0 = r3.length
            if (r4 >= r0) goto L26
            r0 = r3[r4]
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            r0 = r3[r4]
            boolean r0 = r0.startsWith(r5)
            if (r0 == 0) goto L23
            r1 = r3[r4]
            goto L26
        L23:
            int r4 = r4 + 1
            goto Ld
        L26:
            return r1
    }

    private java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) throws org.json.JSONException, java.io.UnsupportedEncodingException {
            r2 = this;
            int r6 = r4.length()
            java.lang.String r3 = r3.substring(r6)
            int r6 = r3.length()
            int r0 = r5.length()
            int r6 = r6 - r0
            r0 = 0
            java.lang.String r3 = r3.substring(r0, r6)
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>(r3)
            java.lang.String r3 = "appkey"
            boolean r0 = r6.has(r3)
            if (r0 != 0) goto L28
            java.lang.String r0 = "2014052600006128"
            r6.put(r3, r0)
        L28:
            java.lang.String r3 = "ty"
            boolean r0 = r6.has(r3)
            if (r0 != 0) goto L35
            java.lang.String r0 = "and_lite"
            r6.put(r3, r0)
        L35:
            java.lang.String r3 = "sv"
            boolean r0 = r6.has(r3)
            if (r0 != 0) goto L42
            java.lang.String r0 = "h.a.3.6.2"
            r6.put(r3, r0)
        L42:
            java.lang.String r3 = "an"
            boolean r0 = r6.has(r3)
            if (r0 != 0) goto L61
            java.lang.String r0 = r2.o
            java.lang.String r1 = "setting"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L5c
            android.content.Context r0 = r2.p
            boolean r0 = com.alipay.sdk.util.n.b(r0)
            if (r0 != 0) goto L61
        L5c:
            java.lang.String r0 = r2.o
            r6.put(r3, r0)
        L61:
            java.lang.String r3 = "av"
            boolean r0 = r6.has(r3)
            if (r0 != 0) goto L6e
            java.lang.String r0 = r2.n
            r6.put(r3, r0)
        L6e:
            java.lang.String r3 = "sdk_start_time"
            boolean r0 = r6.has(r3)
            if (r0 != 0) goto L7d
            long r0 = java.lang.System.currentTimeMillis()
            r6.put(r3, r0)
        L7d:
            java.lang.String r3 = r6.toString()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r4)
            r6.append(r3)
            r6.append(r5)
            java.lang.String r3 = r6.toString()
            return r3
    }

    private java.lang.String b(java.lang.String r3, java.lang.String r4) throws org.json.JSONException, java.io.UnsupportedEncodingException {
            r2 = this;
            java.lang.String r0 = ""
            java.lang.String r0 = r2.a(r0, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r0)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            return r3
    }

    private boolean b(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "\"&"
            boolean r2 = r2.contains(r0)
            r2 = r2 ^ 1
            return r2
    }

    private java.lang.String c(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "&"
            java.lang.String r1 = "bizcontext="
            java.lang.String r2 = r6.a(r7, r0, r1)     // Catch: java.lang.Throwable -> L50
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = ""
            if (r3 == 0) goto L27
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r2.<init>()     // Catch: java.lang.Throwable -> L50
            r2.append(r7)     // Catch: java.lang.Throwable -> L50
            r2.append(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.String r0 = r6.b(r1, r4)     // Catch: java.lang.Throwable -> L50
            r2.append(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L50
            goto L50
        L27:
            int r0 = r7.indexOf(r2)     // Catch: java.lang.Throwable -> L50
            r3 = 0
            java.lang.String r3 = r7.substring(r3, r0)     // Catch: java.lang.Throwable -> L50
            int r5 = r2.length()     // Catch: java.lang.Throwable -> L50
            int r0 = r0 + r5
            java.lang.String r0 = r7.substring(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r5.<init>()     // Catch: java.lang.Throwable -> L50
            r5.append(r3)     // Catch: java.lang.Throwable -> L50
            r3 = 1
            java.lang.String r1 = r6.a(r2, r1, r4, r3)     // Catch: java.lang.Throwable -> L50
            r5.append(r1)     // Catch: java.lang.Throwable -> L50
            r5.append(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Throwable -> L50
        L50:
            return r7
    }

    private java.lang.String d(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = "bizcontext=\""
            java.lang.String r1 = "\"&"
            java.lang.String r1 = r7.a(r8, r1, r0)     // Catch: java.lang.Throwable -> L66
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L66
            java.lang.String r3 = "\""
            if (r2 == 0) goto L29
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            r1.<init>()     // Catch: java.lang.Throwable -> L66
            r1.append(r8)     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = "&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = r7.b(r0, r3)     // Catch: java.lang.Throwable -> L66
            r1.append(r0)     // Catch: java.lang.Throwable -> L66
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L66
            goto L66
        L29:
            boolean r2 = r1.endsWith(r3)     // Catch: java.lang.Throwable -> L66
            if (r2 != 0) goto L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            r2.<init>()     // Catch: java.lang.Throwable -> L66
            r2.append(r1)     // Catch: java.lang.Throwable -> L66
            r2.append(r3)     // Catch: java.lang.Throwable -> L66
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L66
        L3e:
            int r2 = r8.indexOf(r1)     // Catch: java.lang.Throwable -> L66
            r4 = 0
            java.lang.String r5 = r8.substring(r4, r2)     // Catch: java.lang.Throwable -> L66
            int r6 = r1.length()     // Catch: java.lang.Throwable -> L66
            int r2 = r2 + r6
            java.lang.String r2 = r8.substring(r2)     // Catch: java.lang.Throwable -> L66
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            r6.<init>()     // Catch: java.lang.Throwable -> L66
            r6.append(r5)     // Catch: java.lang.Throwable -> L66
            java.lang.String r0 = r7.a(r1, r0, r3, r4)     // Catch: java.lang.Throwable -> L66
            r6.append(r0)     // Catch: java.lang.Throwable -> L66
            r6.append(r2)     // Catch: java.lang.Throwable -> L66
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Throwable -> L66
        L66:
            return r8
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r2
        L7:
            java.lang.String r0 = "new_external_info=="
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L10
            return r2
        L10:
            boolean r0 = r1.b(r2)
            if (r0 == 0) goto L1b
            java.lang.String r2 = r1.c(r2)
            return r2
        L1b:
            java.lang.String r2 = r1.d(r2)
            return r2
    }

    public java.lang.String a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L51
            r0.<init>()     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "appkey"
            java.lang.String r2 = "2014052600006128"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "ty"
            java.lang.String r2 = "and_lite"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "sv"
            java.lang.String r2 = "h.a.3.6.2"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = r4.o     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = "setting"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L2c
            android.content.Context r1 = r4.p     // Catch: java.lang.Throwable -> L51
            boolean r1 = com.alipay.sdk.util.n.b(r1)     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L33
        L2c:
            java.lang.String r1 = "an"
            java.lang.String r2 = r4.o     // Catch: java.lang.Throwable -> L51
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L51
        L33:
            java.lang.String r1 = "av"
            java.lang.String r2 = r4.n     // Catch: java.lang.Throwable -> L51
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "sdk_start_time"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L51
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L51
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L4c
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> L51
        L4c:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L51
            return r5
        L51:
            r5 = move-exception
            com.alipay.sdk.util.c.a(r5)
            java.lang.String r5 = ""
            return r5
    }
}
