package com.tkay.expressad.foundation.d;

public class h extends com.tkay.expressad.out.d implements com.tkay.expressad.e.a, java.io.Serializable {
    public static final java.lang.String cA = "adv_id";
    public static final java.lang.String cB = "ttc_type";
    public static final java.lang.String cC = "ttc_ct2";
    public static final java.lang.String cD = "gh_id";
    public static final java.lang.String cE = "gh_path";
    public static final java.lang.String cF = "bind_id";
    public static final java.lang.String cG = "mark";
    public static final java.lang.String cH = "isPost";
    public static final int cI = 604800;
    public static final int cJ = 1800;
    public static final java.lang.String cK = "apk_download_start";
    public static final java.lang.String cL = "apk_download_end";
    public static final java.lang.String cM = "apk_install";
    public static final java.lang.String cN = "loopback";
    public static final java.lang.String cO = "domain";
    public static final java.lang.String cP = "key";
    public static final java.lang.String cQ = "value";
    public static final java.lang.String co = null;
    public static final java.lang.String cp = "apk_alt";
    public static final java.lang.String cq = "disableApkAlt";
    public static final java.lang.String cr = "apk_info";
    public static final java.lang.String cs = "ntbarpt";
    public static final java.lang.String ct = "ntbarpasbl";
    public static final java.lang.String cu = "atat_type";
    public static final java.lang.String cv = "akdlui";
    public static final java.lang.String cw = "ttc";
    public static final java.lang.String cx = "ttc_ct";
    public static final java.lang.String cy = "ttc_pe";
    public static final java.lang.String cz = "ttc_po";
    private static final long l = 1;
    private int a;
    private int b;
    private java.lang.String c;
    private com.tkay.expressad.foundation.d.a d;
    private int e;
    private int f;
    private int g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private boolean m;
    private int n;
    private java.lang.String o;
    private int p;
    private java.util.Map<java.lang.String, java.lang.String> q;
    private java.lang.String r;
    private java.lang.String s;
    private int t;
    private int u;
    private com.tkay.expressad.a.c.b v;

    static {
            java.lang.Class<com.tkay.expressad.foundation.d.h> r0 = com.tkay.expressad.foundation.d.h.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.d.h.co = r0
            return
    }

    public h() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            java.lang.String r1 = ""
            r2.c = r1
            r2.e = r0
            r2.f = r0
            r2.g = r0
            r2.h = r1
            r2.m = r0
            return
    }

    public static com.tkay.expressad.foundation.d.c a(org.json.JSONObject r3, com.tkay.expressad.foundation.d.c r4) {
            java.lang.String r0 = "loopback"
            if (r3 == 0) goto Lee
            java.lang.String r1 = "ttc"
            boolean r1 = r3.optBoolean(r1)     // Catch: java.lang.Exception -> Ldb
            r4.m = r1     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "ttc_ct"
            r2 = 604800(0x93a80, float:8.47505E-40)
            int r1 = r3.optInt(r1, r2)     // Catch: java.lang.Exception -> Ldb
            r4.n = r1     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "adv_id"
            java.lang.String r1 = r3.optString(r1)     // Catch: java.lang.Exception -> Ldb
            r4.s = r1     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "ttc_type"
            r2 = 3
            int r1 = r3.optInt(r1, r2)     // Catch: java.lang.Exception -> Ldb
            r4.t = r1     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "ttc_ct2"
            r2 = 1800(0x708, float:2.522E-42)
            int r1 = r3.optInt(r1, r2)     // Catch: java.lang.Exception -> Ldb
            r4.u = r1     // Catch: java.lang.Exception -> Ldb
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ldb
            r4.a(r1)     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "html_url"
            java.lang.String r1 = r3.optString(r1)     // Catch: java.lang.Exception -> Ldb
            r4.m(r1)     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "end_screen_url"
            java.lang.String r1 = r3.optString(r1)     // Catch: java.lang.Exception -> Ldb
            r4.n(r1)     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "mark"
            java.lang.String r1 = r3.optString(r1)     // Catch: java.lang.Exception -> Ldb
            r4.o = r1     // Catch: java.lang.Exception -> Ldb
            java.lang.String r1 = "isPost"
            int r1 = r3.optInt(r1)     // Catch: java.lang.Exception -> Ldb
            r4.p = r1     // Catch: java.lang.Exception -> Ldb
            boolean r1 = r3.has(r0)     // Catch: java.lang.Exception -> L73
            if (r1 == 0) goto L73
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L73
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L73
            if (r1 != 0) goto L73
            r4.r = r0     // Catch: java.lang.Exception -> L73
            java.util.Map r0 = h(r0)     // Catch: java.lang.Exception -> L73
            r4.q = r0     // Catch: java.lang.Exception -> L73
        L73:
            java.lang.String r0 = "gh_id"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> Ldb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Ldb
            if (r1 != 0) goto L9b
            r4.i = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "gh_path"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> Ldb
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Ldb
            if (r1 != 0) goto L93
            java.lang.String r0 = com.tkay.expressad.foundation.h.j.b(r0)     // Catch: java.lang.Exception -> Ldb
            r4.j = r0     // Catch: java.lang.Exception -> Ldb
        L93:
            java.lang.String r0 = "bind_id"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> Ldb
            r4.k = r0     // Catch: java.lang.Exception -> Ldb
        L9b:
            java.lang.String r0 = "apk_alt"
            r1 = 0
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Ldb
            r4.a = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "disableApkAlt"
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Ldb
            r4.b = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "apk_info"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> Ldb
            com.tkay.expressad.foundation.d.a r0 = com.tkay.expressad.foundation.d.a.a(r0)     // Catch: java.lang.Exception -> Ldb
            r4.d = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "ntbarpasbl"
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Ldb
            r4.f = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "ntbarpt"
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Ldb
            r4.e = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "atat_type"
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Ldb
            r4.g = r0     // Catch: java.lang.Exception -> Ldb
            java.lang.String r0 = "akdlui"
            java.lang.String r1 = ""
            java.lang.String r3 = r3.optString(r0, r1)     // Catch: java.lang.Exception -> Ldb
            r4.h = r3     // Catch: java.lang.Exception -> Ldb
            return r4
        Ldb:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "parse campaign json exception: "
            r0.<init>(r1)
            java.lang.String r3 = r3.getLocalizedMessage()
            r0.append(r3)
            return r4
        Lee:
            r3 = 0
            return r3
    }

    protected static java.lang.String a(com.tkay.expressad.foundation.d.d r6, com.tkay.expressad.foundation.d.c r7, java.lang.String r8) {
            if (r6 == 0) goto Lfa
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto La
            goto Lfa
        La:
            java.util.HashMap r0 = r6.a()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r1 = "\\}"
            java.lang.String r2 = "\\{"
            if (r0 == 0) goto L4f
            java.util.Set r3 = r0.entrySet()     // Catch: java.lang.Throwable -> Lf6
            r3.iterator()     // Catch: java.lang.Throwable -> Lf6
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> Lf6
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Lf6
        L23:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> Lf6
            if (r3 == 0) goto L4f
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> Lf6
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            r5.<init>(r2)     // Catch: java.lang.Throwable -> Lf6
            r5.append(r4)     // Catch: java.lang.Throwable -> Lf6
            r5.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r8 = r8.replaceAll(r4, r3)     // Catch: java.lang.Throwable -> Lf6
            goto L23
        L4f:
            java.util.HashMap r7 = r7.z()     // Catch: java.lang.Throwable -> Lf6
            if (r7 == 0) goto L90
            java.util.Set r0 = r7.entrySet()     // Catch: java.lang.Throwable -> Lf6
            r0.iterator()     // Catch: java.lang.Throwable -> Lf6
            java.util.Set r7 = r7.entrySet()     // Catch: java.lang.Throwable -> Lf6
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> Lf6
        L64:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> Lf6
            if (r0 == 0) goto L90
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> Lf6
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r3 = r0.getKey()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            r4.<init>(r2)     // Catch: java.lang.Throwable -> Lf6
            r4.append(r3)     // Catch: java.lang.Throwable -> Lf6
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r8 = r8.replaceAll(r3, r0)     // Catch: java.lang.Throwable -> Lf6
            goto L64
        L90:
            java.util.HashMap r7 = r6.b()     // Catch: java.lang.Throwable -> Lf6
            if (r7 == 0) goto Lca
            java.util.Set r7 = r7.entrySet()     // Catch: java.lang.Throwable -> Lf6
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> Lf6
        L9e:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> Lf6
            if (r0 == 0) goto Lca
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> Lf6
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r3 = r0.getKey()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lf6
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            r4.<init>(r2)     // Catch: java.lang.Throwable -> Lf6
            r4.append(r3)     // Catch: java.lang.Throwable -> Lf6
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r8 = r8.replaceAll(r3, r0)     // Catch: java.lang.Throwable -> Lf6
            goto L9e
        Lca:
            java.lang.String r7 = "\\{c\\}"
            java.lang.String r6 = r6.e()     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r0 = "utf-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r8 = r8.replaceAll(r7, r6)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r6 = "=\\{.*?\\}"
            java.util.regex.Pattern r6 = java.util.regex.Pattern.compile(r6)     // Catch: java.lang.Throwable -> Lf6
            java.util.regex.Matcher r6 = r6.matcher(r8)     // Catch: java.lang.Throwable -> Lf6
        Le4:
            boolean r7 = r6.find()     // Catch: java.lang.Throwable -> Lf6
            if (r7 == 0) goto Lfa
            r7 = 0
            java.lang.String r7 = r6.group(r7)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r0 = "="
            java.lang.String r8 = r8.replace(r7, r0)     // Catch: java.lang.Throwable -> Lf6
            goto Le4
        Lf6:
            r6 = move-exception
            r6.getMessage()
        Lfa:
            return r8
    }

    private java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.q
            return r0
    }

    private void a(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    private void a(com.tkay.expressad.foundation.d.a r1) {
            r0 = this;
            r0.d = r1
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.q = r1
            return
    }

    private void a(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public static com.tkay.expressad.foundation.d.c b(org.json.JSONObject r4, com.tkay.expressad.foundation.d.c r5) {
            java.lang.String r0 = "cam_html"
            java.lang.String r1 = "loopback"
            if (r4 == 0) goto Le5
            java.lang.String r2 = "ttc"
            boolean r2 = r4.optBoolean(r2)     // Catch: java.lang.Exception -> Ld2
            r5.m = r2     // Catch: java.lang.Exception -> Ld2
            java.lang.String r2 = "ttc_ct"
            r3 = 604800(0x93a80, float:8.47505E-40)
            int r2 = r4.optInt(r2, r3)     // Catch: java.lang.Exception -> Ld2
            r5.n = r2     // Catch: java.lang.Exception -> Ld2
            java.lang.String r2 = "adv_id"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> Ld2
            r5.s = r2     // Catch: java.lang.Exception -> Ld2
            java.lang.String r2 = "ttc_type"
            r3 = 3
            int r2 = r4.optInt(r2, r3)     // Catch: java.lang.Exception -> Ld2
            r5.t = r2     // Catch: java.lang.Exception -> Ld2
            java.lang.String r2 = "ttc_ct2"
            r3 = 1800(0x708, float:2.522E-42)
            int r2 = r4.optInt(r2, r3)     // Catch: java.lang.Exception -> Ld2
            r5.u = r2     // Catch: java.lang.Exception -> Ld2
            java.lang.String r2 = "mark"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> Ld2
            r5.o = r2     // Catch: java.lang.Exception -> Ld2
            java.lang.String r2 = "isPost"
            int r2 = r4.optInt(r2)     // Catch: java.lang.Exception -> Ld2
            r5.p = r2     // Catch: java.lang.Exception -> Ld2
            boolean r2 = r4.has(r1)     // Catch: java.lang.Exception -> L5c
            if (r2 == 0) goto L5c
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L5c
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5c
            if (r2 != 0) goto L5c
            r5.r = r1     // Catch: java.lang.Exception -> L5c
            java.util.Map r1 = h(r1)     // Catch: java.lang.Exception -> L5c
            r5.q = r1     // Catch: java.lang.Exception -> L5c
        L5c:
            java.lang.String r1 = "gh_id"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Ld2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Ld2
            if (r2 != 0) goto L84
            r5.i = r1     // Catch: java.lang.Exception -> Ld2
            java.lang.String r1 = "gh_path"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Ld2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Ld2
            if (r2 != 0) goto L7c
            java.lang.String r1 = com.tkay.expressad.foundation.h.j.b(r1)     // Catch: java.lang.Exception -> Ld2
            r5.j = r1     // Catch: java.lang.Exception -> Ld2
        L7c:
            java.lang.String r1 = "bind_id"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Ld2
            r5.k = r1     // Catch: java.lang.Exception -> Ld2
        L84:
            java.lang.String r1 = r4.optString(r0)     // Catch: java.lang.Exception -> Ld2
            r5.e(r1)     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Exception -> Ld2
            r5.b(r0)     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "apk_alt"
            r1 = 0
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Exception -> Ld2
            r5.a = r0     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "disableApkAlt"
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Exception -> Ld2
            r5.b = r0     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "apk_info"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Exception -> Ld2
            com.tkay.expressad.foundation.d.a r0 = com.tkay.expressad.foundation.d.a.a(r0)     // Catch: java.lang.Exception -> Ld2
            r5.d = r0     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "ntbarpasbl"
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Exception -> Ld2
            r5.f = r0     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "ntbarpt"
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Exception -> Ld2
            r5.e = r0     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "atat_type"
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Exception -> Ld2
            r5.g = r0     // Catch: java.lang.Exception -> Ld2
            java.lang.String r0 = "akdlui"
            java.lang.String r1 = ""
            java.lang.String r4 = r4.optString(r0, r1)     // Catch: java.lang.Exception -> Ld2
            r5.h = r4     // Catch: java.lang.Exception -> Ld2
            return r5
        Ld2:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "parse campaign json exception: "
            r0.<init>(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            return r5
        Le5:
            r4 = 0
            return r4
    }

    private java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    private void b(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    private static org.json.JSONObject c(org.json.JSONObject r2, com.tkay.expressad.foundation.d.c r3) {
            if (r3 != 0) goto L3
            return r2
        L3:
            boolean r0 = r3.m
            java.lang.String r1 = "ttc"
            r2.put(r1, r0)
            int r0 = r3.n
            java.lang.String r1 = "ttc_ct"
            r2.put(r1, r0)
            java.lang.String r0 = r3.s
            java.lang.String r1 = "adv_id"
            r2.put(r1, r0)
            int r0 = r3.t
            java.lang.String r1 = "ttc_type"
            r2.put(r1, r0)
            int r0 = r3.u
            java.lang.String r1 = "ttc_ct2"
            r2.put(r1, r0)
            java.lang.String r0 = r3.i
            java.lang.String r1 = "gh_id"
            r2.put(r1, r0)
            java.lang.String r0 = r3.j
            java.lang.String r0 = com.tkay.expressad.foundation.h.j.a(r0)
            java.lang.String r1 = "gh_path"
            r2.put(r1, r0)
            java.lang.String r0 = r3.k
            java.lang.String r1 = "bind_id"
            r2.put(r1, r0)
            int r0 = r3.a
            java.lang.String r1 = "apk_alt"
            r2.put(r1, r0)
            int r0 = r3.b
            java.lang.String r1 = "disableApkAlt"
            r2.put(r1, r0)
            com.tkay.expressad.foundation.d.a r0 = r3.d
            if (r0 == 0) goto L5a
            org.json.JSONObject r0 = r0.g()
            java.lang.String r1 = "apk_info"
            r2.put(r1, r0)
        L5a:
            java.lang.String r0 = r3.o
            java.lang.String r1 = "mark"
            r2.put(r1, r0)
            int r0 = r3.p
            java.lang.String r1 = "isPost"
            r2.put(r1, r0)
            int r0 = r3.x()
            java.lang.String r1 = "nv_t2"
            r2.put(r1, r0)
            int r0 = r3.f
            java.lang.String r1 = "ntbarpasbl"
            r2.put(r1, r0)
            int r0 = r3.e
            java.lang.String r1 = "ntbarpt"
            r2.put(r1, r0)
            int r0 = r3.g
            java.lang.String r1 = "atat_type"
            r2.put(r1, r0)
            java.lang.String r3 = r3.h
            java.lang.String r0 = "akdlui"
            r2.put(r0, r3)
            return r2
    }

    private void c(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    private void d(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    private void e(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    private void e(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    private void f(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    private void f(java.lang.String r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private void g(int r1) {
            r0 = this;
            r0.u = r1
            return
    }

    private void g(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    private static java.util.Map<java.lang.String, java.lang.String> h(java.lang.String r5) {
            java.lang.String r0 = "value"
            java.lang.String r1 = "key"
            java.lang.String r2 = "domain"
            r3 = 0
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2d
            if (r4 != 0) goto L2d
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2d
            r4.<init>()     // Catch: java.lang.Throwable -> L2d
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2c
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r5 = r3.getString(r2)     // Catch: java.lang.Throwable -> L2c
            r4.put(r2, r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r5 = r3.getString(r1)     // Catch: java.lang.Throwable -> L2c
            r4.put(r1, r5)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r5 = r3.getString(r0)     // Catch: java.lang.Throwable -> L2c
            r4.put(r0, r5)     // Catch: java.lang.Throwable -> L2c
        L2c:
            r3 = r4
        L2d:
            return r3
    }

    private void h(int r1) {
            r0 = this;
            r0.t = r1
            return
    }

    private void i(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void a(com.tkay.expressad.a.c.b r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public final com.tkay.expressad.foundation.d.a aG() {
            r1 = this;
            com.tkay.expressad.foundation.d.a r0 = r1.d
            return r0
    }

    public final int aH() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final int aI() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final int aJ() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public final int aK() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final int aL() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public final java.lang.String aM() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final java.lang.String aN() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public final java.lang.String aO() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    @java.lang.Deprecated
    public final java.lang.String aP() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public final java.lang.String aQ() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }

    public final int aR() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public final int aS() {
            r1 = this;
            int r0 = r1.u
            return r0
    }

    public final int aT() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    public final java.lang.String aU() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }

    public final int aV() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public final boolean aW() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public com.tkay.expressad.a.c.b aj() {
            r1 = this;
            com.tkay.expressad.a.c$b r0 = r1.v
            return r0
    }

    public final boolean b(com.tkay.expressad.foundation.d.c r5) {
            r4 = this;
            int r0 = r4.a
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L12
            int r0 = r5.Q()
            r3 = 3
            if (r0 != r3) goto L12
            int r5 = r5.b
            if (r5 == r2) goto L12
            goto L13
        L12:
            r2 = r1
        L13:
            if (r2 == 0) goto L2f
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2b
            android.content.Context r5 = r5.f()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = r4.ba()     // Catch: java.lang.Throwable -> L2b
            boolean r5 = com.tkay.expressad.foundation.h.t.a(r5, r0)     // Catch: java.lang.Throwable -> L2b
            if (r5 == 0) goto L28
            goto L29
        L28:
            r1 = r2
        L29:
            r2 = r1
            goto L2f
        L2b:
            r5 = move-exception
            r5.getMessage()
        L2f:
            return r2
    }

    public final java.lang.String u(java.lang.String r7) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lb9
            if (r0 != 0) goto Lb9
            java.util.Map<java.lang.String, java.lang.String> r0 = r6.q     // Catch: java.lang.Throwable -> Lb9
            if (r0 == 0) goto Lb9
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lb9
            if (r1 <= 0) goto Lb9
            android.net.Uri r1 = android.net.Uri.parse(r7)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r2 = r1.getHost()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = "domain"
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lb9
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb9
            if (r4 != 0) goto Lb9
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> Lb9
            if (r2 == 0) goto Lb9
            java.lang.String r2 = "key"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = "value"
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lb9
            boolean r3 = r7.contains(r2)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r4 = "="
            if (r3 != 0) goto L75
            java.lang.String r3 = r1.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lb9
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lb9
            if (r3 == 0) goto L75
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb9
            if (r3 != 0) goto L75
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb9
            if (r3 != 0) goto L75
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r1.<init>()     // Catch: java.lang.Throwable -> Lb9
            r1.append(r7)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r3 = "&"
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb9
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb9
            r1.append(r4)     // Catch: java.lang.Throwable -> Lb9
            r1.append(r0)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Lb9
            goto Lb9
        L75:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb9
            if (r3 != 0) goto Lb9
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb9
            if (r3 != 0) goto Lb9
            java.lang.String r3 = ""
            java.lang.String r5 = r1.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lb9
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lb9
            if (r5 != 0) goto L91
            java.lang.String r3 = r1.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lb9
        L91:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r1.<init>()     // Catch: java.lang.Throwable -> Lb9
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb9
            r1.append(r4)     // Catch: java.lang.Throwable -> Lb9
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb9
            r3.<init>()     // Catch: java.lang.Throwable -> Lb9
            r3.append(r2)     // Catch: java.lang.Throwable -> Lb9
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb9
            r3.append(r0)     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> Lb9
            java.lang.String r7 = r7.replace(r1, r0)     // Catch: java.lang.Throwable -> Lb9
        Lb9:
            return r7
    }
}
