package com.alipay.sdk.m.s;

public class a {
    public static final java.lang.String A = "act_info";
    public static final java.lang.String B = "UTF-8";
    public static final java.lang.String C = "new_external_info==";
    public static final java.lang.String m = "\"&";
    public static final java.lang.String n = "&";
    public static final java.lang.String o = "bizcontext=\"";
    public static final java.lang.String p = "bizcontext=";
    public static final java.lang.String q = "\"";
    public static final java.lang.String r = "appkey";
    public static final java.lang.String s = "ty";
    public static final java.lang.String t = "sv";
    public static final java.lang.String u = "an";
    public static final java.lang.String v = "setting";
    public static final java.lang.String w = "av";
    public static final java.lang.String x = "sdk_start_time";
    public static final java.lang.String y = "extInfo";
    public static final java.lang.String z = "ap_link_token";
    public java.lang.String a;
    public java.lang.String b;
    public android.content.Context c;
    public final java.lang.String d;
    public final long e;
    public final int f;
    public final java.lang.String g;
    public boolean h;
    public boolean i;
    public boolean j;
    public final android.content.pm.ActivityInfo k;
    public final com.alipay.sdk.m.k.b l;

    public static final class a {
        public static final java.util.HashMap<java.util.UUID, com.alipay.sdk.m.s.a> a = null;
        public static final java.util.HashMap<java.lang.String, com.alipay.sdk.m.s.a> b = null;
        public static final java.lang.String c = "i_uuid_b_c";

        static {
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                com.alipay.sdk.m.s.a.a.a = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                com.alipay.sdk.m.s.a.a.b = r0
                return
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.alipay.sdk.m.s.a a(android.content.Intent r2) {
                r0 = 0
                if (r2 != 0) goto L4
                return r0
            L4:
                java.lang.String r1 = "i_uuid_b_c"
                java.io.Serializable r2 = r2.getSerializableExtra(r1)
                boolean r1 = r2 instanceof java.util.UUID
                if (r1 == 0) goto L19
                java.util.HashMap<java.util.UUID, com.alipay.sdk.m.s.a> r0 = com.alipay.sdk.m.s.a.a.a
                java.util.UUID r2 = (java.util.UUID) r2
                java.lang.Object r2 = r0.remove(r2)
                com.alipay.sdk.m.s.a r2 = (com.alipay.sdk.m.s.a) r2
                return r2
            L19:
                return r0
        }

        public static com.alipay.sdk.m.s.a a(java.lang.String r1) {
                boolean r0 = android.text.TextUtils.isEmpty(r1)
                if (r0 == 0) goto L8
                r1 = 0
                return r1
            L8:
                java.util.HashMap<java.lang.String, com.alipay.sdk.m.s.a> r0 = com.alipay.sdk.m.s.a.a.b
                java.lang.Object r1 = r0.remove(r1)
                com.alipay.sdk.m.s.a r1 = (com.alipay.sdk.m.s.a) r1
                return r1
        }

        public static void a(com.alipay.sdk.m.s.a r2, android.content.Intent r3) {
                if (r2 == 0) goto L13
                if (r3 != 0) goto L5
                goto L13
            L5:
                java.util.UUID r0 = java.util.UUID.randomUUID()
                java.util.HashMap<java.util.UUID, com.alipay.sdk.m.s.a> r1 = com.alipay.sdk.m.s.a.a.a
                r1.put(r0, r2)
                java.lang.String r2 = "i_uuid_b_c"
                r3.putExtra(r2, r0)
            L13:
                return
        }

        public static void a(com.alipay.sdk.m.s.a r1, java.lang.String r2) {
                if (r1 == 0) goto Le
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 == 0) goto L9
                goto Le
            L9:
                java.util.HashMap<java.lang.String, com.alipay.sdk.m.s.a> r0 = com.alipay.sdk.m.s.a.a.b
                r0.put(r2, r1)
            Le:
                return
        }
    }

    public a(android.content.Context r7, java.lang.String r8, java.lang.String r9) {
            r6 = this;
            r6.<init>()
            java.lang.String r0 = ""
            r6.a = r0
            r6.b = r0
            r1 = 0
            r6.c = r1
            r1 = 0
            r6.h = r1
            r6.i = r1
            r6.j = r1
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            com.alipay.sdk.m.k.b r3 = new com.alipay.sdk.m.k.b
            r3.<init>(r7, r2)
            r6.l = r3
            java.lang.String r3 = r6.b
            java.lang.String r3 = b(r8, r3)
            r6.d = r3
            long r3 = android.os.SystemClock.elapsedRealtime()
            r6.e = r3
            int r3 = com.alipay.sdk.m.u.n.g()
            r6.f = r3
            android.content.pm.ActivityInfo r3 = com.alipay.sdk.m.u.n.a(r7)
            r6.k = r3
            r6.g = r9
            java.lang.String r3 = "biz"
            if (r2 != 0) goto L8f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r9)
            java.lang.String r9 = "|"
            r4.append(r9)
            java.lang.String r5 = r6.d
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "eptyp"
            com.alipay.sdk.m.k.a.a(r6, r3, r5, r4)
            android.content.pm.ActivityInfo r4 = r6.k
            if (r4 == 0) goto L78
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.content.pm.ActivityInfo r5 = r6.k
            java.lang.String r5 = r5.name
            r4.append(r5)
            r4.append(r9)
            android.content.pm.ActivityInfo r9 = r6.k
            int r9 = r9.launchMode
            r4.append(r9)
            java.lang.String r9 = r4.toString()
            goto L7a
        L78:
            java.lang.String r9 = "null"
        L7a:
            java.lang.String r4 = "actInfo"
            com.alipay.sdk.m.k.a.a(r6, r3, r4, r9)
            java.lang.String r9 = com.alipay.sdk.m.u.n.a(r6)
            java.lang.String r4 = "sys"
            com.alipay.sdk.m.k.a.a(r6, r3, r4, r9)
            java.lang.String r9 = "sdkv"
            java.lang.String r4 = "1281fd4-clean"
            com.alipay.sdk.m.k.a.a(r6, r3, r9, r4)
        L8f:
            android.content.Context r9 = r7.getApplicationContext()     // Catch: java.lang.Exception -> Laa
            r6.c = r9     // Catch: java.lang.Exception -> Laa
            android.content.pm.PackageManager r9 = r7.getPackageManager()     // Catch: java.lang.Exception -> Laa
            java.lang.String r4 = r7.getPackageName()     // Catch: java.lang.Exception -> Laa
            android.content.pm.PackageInfo r9 = r9.getPackageInfo(r4, r1)     // Catch: java.lang.Exception -> Laa
            java.lang.String r1 = r9.versionName     // Catch: java.lang.Exception -> Laa
            r6.a = r1     // Catch: java.lang.Exception -> Laa
            java.lang.String r9 = r9.packageName     // Catch: java.lang.Exception -> Laa
            r6.b = r9     // Catch: java.lang.Exception -> Laa
            goto Lae
        Laa:
            r9 = move-exception
            com.alipay.sdk.m.u.e.a(r9)
        Lae:
            if (r2 != 0) goto Le5
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "u"
            r9.append(r1)
            int r1 = com.alipay.sdk.m.u.n.g()
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            com.alipay.sdk.m.k.a.a(r6, r3, r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r0)
            long r0 = android.os.SystemClock.elapsedRealtime()
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "PgApiInvoke"
            com.alipay.sdk.m.k.a.a(r6, r3, r0, r9)
            java.lang.String r9 = r6.d
            com.alipay.sdk.m.k.a.a(r7, r6, r8, r9)
        Le5:
            if (r2 != 0) goto Lfc
            com.alipay.sdk.m.m.a r7 = com.alipay.sdk.m.m.a.D()
            boolean r7 = r7.s()
            if (r7 == 0) goto Lfc
            com.alipay.sdk.m.m.a r7 = com.alipay.sdk.m.m.a.D()
            android.content.Context r8 = r6.c
            r9 = 1
            r0 = 2
            r7.a(r6, r8, r9, r0)
        Lfc:
            return
    }

    private java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r2 = r1.a(r2)
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
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

    public static java.util.HashMap<java.lang.String, java.lang.String> a(com.alipay.sdk.m.s.a r3) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r3 == 0) goto L31
            java.lang.String r1 = "sdk_ver"
            java.lang.String r2 = "15.8.15"
            r0.put(r1, r2)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "app_name"
            r0.put(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "token"
            r0.put(r2, r1)
            java.lang.String r1 = r3.g
            java.lang.String r2 = "call_type"
            r0.put(r2, r1)
            long r1 = r3.e
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "ts_api_invoke"
            r0.put(r2, r1)
            com.alipay.sdk.m.u.a.a(r3, r0)
        L31:
            return r0
    }

    private java.lang.String b(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            java.lang.String r2 = r1.a(r0)
            return r2
    }

    public static java.lang.String b(java.lang.String r7, java.lang.String r8) {
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r1 = "%s%s%d%s"
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = ""
            if (r7 != 0) goto Le
            r7 = r3
        Le:
            r4 = 0
            r2[r4] = r7     // Catch: java.lang.Throwable -> L4e
            if (r8 != 0) goto L14
            r8 = r3
        L14:
            r7 = 1
            r2[r7] = r8     // Catch: java.lang.Throwable -> L4e
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4e
            java.lang.Long r8 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L4e
            r3 = 2
            r2[r3] = r8     // Catch: java.lang.Throwable -> L4e
            java.util.UUID r8 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L4e
            r5 = 3
            r2[r5] = r8     // Catch: java.lang.Throwable -> L4e
            java.lang.String r8 = java.lang.String.format(r0, r1, r2)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r8 = com.alipay.sdk.m.u.n.g(r8)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = "EP%s%s_%s"
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = "1"
            r1[r4] = r2     // Catch: java.lang.Throwable -> L4e
            r1[r7] = r8     // Catch: java.lang.Throwable -> L4e
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4e
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L4e
            r1[r3] = r7     // Catch: java.lang.Throwable -> L4e
            java.lang.String r7 = java.lang.String.format(r0, r1)     // Catch: java.lang.Throwable -> L4e
            goto L50
        L4e:
            java.lang.String r7 = "-"
        L50:
            return r7
    }

    private java.lang.String b(java.lang.String r6, java.lang.String r7, java.lang.String r8) throws org.json.JSONException {
            r5 = this;
            int r0 = r7.length()
            java.lang.String r6 = r6.substring(r0)
            int r0 = r6.length()
            int r1 = r8.length()
            int r0 = r0 - r1
            r1 = 0
            java.lang.String r6 = r6.substring(r1, r0)
            int r0 = r6.length()
            r2 = 1
            java.lang.String r3 = "\""
            r4 = 2
            if (r0 < r4) goto L3c
            boolean r0 = r6.startsWith(r3)
            if (r0 == 0) goto L3c
            boolean r0 = r6.endsWith(r3)
            if (r0 == 0) goto L3c
            org.json.JSONObject r0 = new org.json.JSONObject
            int r1 = r6.length()
            int r1 = r1 - r2
            java.lang.String r6 = r6.substring(r2, r1)
            r0.<init>(r6)
            r1 = 1
            goto L41
        L3c:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r6)
        L41:
            java.lang.String r6 = r5.a(r0)
            if (r1 == 0) goto L59
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r6)
            r0.append(r3)
            java.lang.String r6 = r0.toString()
        L59:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            r0.append(r6)
            r0.append(r8)
            java.lang.String r6 = r0.toString()
            return r6
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
            java.lang.String r0 = r6.a(r1, r4)     // Catch: java.lang.Throwable -> L50
            r2.append(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L50
            goto L58
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
            java.lang.String r1 = r6.b(r2, r1, r4)     // Catch: java.lang.Throwable -> L50
            r5.append(r1)     // Catch: java.lang.Throwable -> L50
            r5.append(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Throwable -> L50
            goto L58
        L50:
            r0 = move-exception
            java.lang.String r1 = "biz"
            java.lang.String r2 = "fmt1"
            com.alipay.sdk.m.k.a.a(r6, r1, r2, r0, r7)
        L58:
            return r7
    }

    private java.lang.String d(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "bizcontext"
            r1 = 19
            java.lang.String r1 = r4.substring(r1)     // Catch: java.lang.Throwable -> L2d
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2d
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r2.optString(r0)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r3.b(r1)     // Catch: java.lang.Throwable -> L2d
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "new_external_info=="
            r0.append(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L2d
            r0.append(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L2d
        L2d:
            return r4
    }

    private java.lang.String e(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "bizcontext=\""
            java.lang.String r1 = "\"&"
            java.lang.String r1 = r6.a(r7, r1, r0)     // Catch: java.lang.Throwable -> L67
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L67
            java.lang.String r3 = "\""
            if (r2 == 0) goto L29
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            r1.<init>()     // Catch: java.lang.Throwable -> L67
            r1.append(r7)     // Catch: java.lang.Throwable -> L67
            java.lang.String r2 = "&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L67
            java.lang.String r0 = r6.a(r0, r3)     // Catch: java.lang.Throwable -> L67
            r1.append(r0)     // Catch: java.lang.Throwable -> L67
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L67
            goto L6f
        L29:
            boolean r2 = r1.endsWith(r3)     // Catch: java.lang.Throwable -> L67
            if (r2 != 0) goto L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            r2.<init>()     // Catch: java.lang.Throwable -> L67
            r2.append(r1)     // Catch: java.lang.Throwable -> L67
            r2.append(r3)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L67
        L3e:
            int r2 = r7.indexOf(r1)     // Catch: java.lang.Throwable -> L67
            r4 = 0
            java.lang.String r4 = r7.substring(r4, r2)     // Catch: java.lang.Throwable -> L67
            int r5 = r1.length()     // Catch: java.lang.Throwable -> L67
            int r2 = r2 + r5
            java.lang.String r2 = r7.substring(r2)     // Catch: java.lang.Throwable -> L67
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            r5.<init>()     // Catch: java.lang.Throwable -> L67
            r5.append(r4)     // Catch: java.lang.Throwable -> L67
            java.lang.String r0 = r6.b(r1, r0, r3)     // Catch: java.lang.Throwable -> L67
            r5.append(r0)     // Catch: java.lang.Throwable -> L67
            r5.append(r2)     // Catch: java.lang.Throwable -> L67
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Throwable -> L67
            goto L6f
        L67:
            r0 = move-exception
            java.lang.String r1 = "biz"
            java.lang.String r2 = "fmt2"
            com.alipay.sdk.m.k.a.a(r6, r1, r2, r0, r7)
        L6f:
            return r7
    }

    private boolean f(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "\"&"
            boolean r2 = r2.contains(r0)
            r2 = r2 ^ 1
            return r2
    }

    private org.json.JSONObject g() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "ap_link_token"
            java.lang.String r2 = r3.d     // Catch: java.lang.Throwable -> Lc
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return r0
    }

    public static com.alipay.sdk.m.s.a h() {
            r0 = 0
            return r0
    }

    public android.content.Context a() {
            r1 = this;
            android.content.Context r0 = r1.c
            return r0
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r2
        L7:
            java.lang.String r0 = "new_external_info=="
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L14
            java.lang.String r2 = r1.d(r2)
            return r2
        L14:
            boolean r0 = r1.f(r2)
            if (r0 == 0) goto L1f
            java.lang.String r2 = r1.c(r2)
            return r2
        L1f:
            java.lang.String r2 = r1.e(r2)
            return r2
    }

    public java.lang.String a(org.json.JSONObject r10) {
            r9 = this;
            java.lang.String r0 = "act_info"
            java.lang.String r1 = "extInfo"
            java.lang.String r2 = "sdk_start_time"
            java.lang.String r3 = "av"
            java.lang.String r4 = "an"
            java.lang.String r5 = "sv"
            java.lang.String r6 = "ty"
            java.lang.String r7 = "appkey"
            boolean r8 = r10.has(r7)     // Catch: java.lang.Throwable -> L92
            if (r8 != 0) goto L1b
            java.lang.String r8 = "2014052600006128"
            r10.put(r7, r8)     // Catch: java.lang.Throwable -> L92
        L1b:
            boolean r7 = r10.has(r6)     // Catch: java.lang.Throwable -> L92
            if (r7 != 0) goto L26
            java.lang.String r7 = "and_lite"
            r10.put(r6, r7)     // Catch: java.lang.Throwable -> L92
        L26:
            boolean r6 = r10.has(r5)     // Catch: java.lang.Throwable -> L92
            if (r6 != 0) goto L31
            java.lang.String r6 = "h.a.3.8.15"
            r10.put(r5, r6)     // Catch: java.lang.Throwable -> L92
        L31:
            boolean r5 = r10.has(r4)     // Catch: java.lang.Throwable -> L92
            if (r5 != 0) goto L3c
            java.lang.String r5 = r9.b     // Catch: java.lang.Throwable -> L92
            r10.put(r4, r5)     // Catch: java.lang.Throwable -> L92
        L3c:
            boolean r4 = r10.has(r3)     // Catch: java.lang.Throwable -> L92
            if (r4 != 0) goto L47
            java.lang.String r4 = r9.a     // Catch: java.lang.Throwable -> L92
            r10.put(r3, r4)     // Catch: java.lang.Throwable -> L92
        L47:
            boolean r3 = r10.has(r2)     // Catch: java.lang.Throwable -> L92
            if (r3 != 0) goto L54
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L92
            r10.put(r2, r3)     // Catch: java.lang.Throwable -> L92
        L54:
            boolean r2 = r10.has(r1)     // Catch: java.lang.Throwable -> L92
            if (r2 != 0) goto L61
            org.json.JSONObject r2 = r9.g()     // Catch: java.lang.Throwable -> L92
            r10.put(r1, r2)     // Catch: java.lang.Throwable -> L92
        L61:
            boolean r1 = r10.has(r0)     // Catch: java.lang.Throwable -> L92
            if (r1 != 0) goto L8d
            android.content.pm.ActivityInfo r1 = r9.k     // Catch: java.lang.Throwable -> L92
            if (r1 == 0) goto L88
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            android.content.pm.ActivityInfo r2 = r9.k     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = r2.name     // Catch: java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "|"
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            android.content.pm.ActivityInfo r2 = r9.k     // Catch: java.lang.Throwable -> L92
            int r2 = r2.launchMode     // Catch: java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L92
            goto L8a
        L88:
            java.lang.String r1 = "null"
        L8a:
            r10.put(r0, r1)     // Catch: java.lang.Throwable -> L92
        L8d:
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L92
            return r10
        L92:
            r0 = move-exception
            java.lang.String r1 = java.lang.String.valueOf(r10)
            java.lang.String r2 = "biz"
            java.lang.String r3 = "fmt3"
            com.alipay.sdk.m.k.a.a(r9, r2, r3, r0, r1)
            com.alipay.sdk.m.u.e.a(r0)
            if (r10 == 0) goto La8
            java.lang.String r10 = r10.toString()
            goto Laa
        La8:
            java.lang.String r10 = "{}"
        Laa:
            return r10
    }

    public void a(boolean r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void c(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public boolean d() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public boolean e() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    public boolean f() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }
}
