package com.mbridge.msdk.c;

public final class a {
    public static int a = 1500;
    private java.lang.String A;
    private long B;
    private int C;
    private long D;
    private long E;
    private int F;
    private int G;
    private int H;
    private java.lang.String I;
    private java.lang.String J;
    private int K;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> L;
    private java.util.List<com.mbridge.msdk.foundation.entity.b> M;
    private boolean N;
    private int O;
    private boolean P;
    private int Q;
    private org.json.JSONArray R;
    private org.json.JSONArray S;
    private int T;
    private int U;
    private int V;
    private int W;
    private int X;
    private int Y;
    private int Z;
    private int aA;
    private java.lang.String aB;
    private int aC;
    private java.lang.String aD;
    private java.lang.String aE;
    private int aF;
    private int aG;
    private int aH;
    private int aI;
    private int aJ;
    private int aK;
    private int aL;
    private int aM;
    private int aN;
    private int aO;
    private int aP;
    private java.lang.String aQ;
    private int aR;
    private int aS;
    private boolean aT;
    private java.lang.String aU;
    private org.json.JSONObject aV;
    private java.util.List<java.lang.Integer> aW;
    private int aX;
    private int aY;
    private long aZ;
    private int aa;
    private int ab;
    private int ac;
    private int ad;
    private boolean ae;
    private java.util.LinkedList<java.lang.String> af;
    private int ag;
    private int ah;
    private int ai;
    private int aj;
    private java.lang.String ak;
    private int al;
    private java.util.List<java.lang.String> am;
    private int an;
    private int ao;
    private int ap;
    private int aq;
    private java.lang.String ar;
    private java.lang.String as;
    private int at;
    private int au;
    private int av;
    private int aw;
    private int ax;
    private java.lang.String ay;
    private int az;
    private int b;
    private int bA;
    private java.lang.String bB;
    private java.lang.String bC;
    private int bD;
    private int bE;
    private java.util.List<com.mbridge.msdk.foundation.entity.a> bF;
    private java.lang.String bG;
    private java.lang.String bH;
    private int bI;
    private boolean bJ;
    private int bK;
    private java.util.ArrayList<java.lang.Integer> bL;
    private java.util.HashMap<java.lang.String, java.lang.String> bM;
    private int bN;
    private int bO;
    private int bP;
    private int bQ;
    private int bR;
    private int bS;
    private java.lang.String bT;
    private long ba;
    private int bb;
    private int bc;
    private long bd;
    private int be;
    private int bf;
    private java.lang.String bg;
    private java.lang.String bh;
    private java.lang.String bi;
    private java.lang.String bj;
    private java.lang.String bk;
    private int bl;
    private int bm;
    private int bn;
    private int bo;
    private int bp;
    private int bq;
    private int br;
    private java.lang.String bs;
    private java.lang.String bt;
    private java.lang.String bu;
    private java.lang.String bv;
    private java.lang.String bw;
    private java.util.Map<java.lang.String, com.mbridge.msdk.c.a.a> bx;
    private int by;
    private com.mbridge.msdk.c.a.b bz;
    private java.lang.String c;
    private long d;
    private int e;
    private long f;
    private int g;
    private boolean h;
    private java.util.Map<java.lang.String, java.lang.String> i;
    private boolean j;
    private long k;
    private java.lang.String l;
    private java.lang.String m;
    private boolean n;
    private long o;
    private long p;
    private long q;
    private boolean r;
    private int s;
    private int t;
    private int u;
    private long v;
    private int w;
    private int x;
    private int y;
    private int z;

    public static class a {
        private java.util.List<java.lang.String> a;
        private java.util.List<java.lang.String> b;
        private java.util.List<java.lang.String> c;
        private java.util.List<java.lang.String> d;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.util.List<java.lang.String> a() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.a
                return r0
        }

        public final void a(org.json.JSONObject r2) {
                r1 = this;
                java.lang.String r0 = "x"
                org.json.JSONArray r0 = r2.optJSONArray(r0)     // Catch: java.lang.Exception -> L39
                if (r0 == 0) goto Le
                java.util.ArrayList r0 = com.mbridge.msdk.foundation.tools.m.a(r0)     // Catch: java.lang.Exception -> L39
                r1.a = r0     // Catch: java.lang.Exception -> L39
            Le:
                java.lang.String r0 = "y"
                org.json.JSONArray r0 = r2.optJSONArray(r0)     // Catch: java.lang.Exception -> L39
                if (r0 == 0) goto L1c
                java.util.ArrayList r0 = com.mbridge.msdk.foundation.tools.m.a(r0)     // Catch: java.lang.Exception -> L39
                r1.b = r0     // Catch: java.lang.Exception -> L39
            L1c:
                java.lang.String r0 = "width"
                org.json.JSONArray r0 = r2.optJSONArray(r0)     // Catch: java.lang.Exception -> L39
                if (r0 == 0) goto L2a
                java.util.ArrayList r0 = com.mbridge.msdk.foundation.tools.m.a(r0)     // Catch: java.lang.Exception -> L39
                r1.c = r0     // Catch: java.lang.Exception -> L39
            L2a:
                java.lang.String r0 = "height"
                org.json.JSONArray r2 = r2.optJSONArray(r0)     // Catch: java.lang.Exception -> L39
                if (r2 == 0) goto L41
                java.util.ArrayList r2 = com.mbridge.msdk.foundation.tools.m.a(r2)     // Catch: java.lang.Exception -> L39
                r1.d = r2     // Catch: java.lang.Exception -> L39
                goto L41
            L39:
                r2 = move-exception
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto L41
                r2.printStackTrace()
            L41:
                return
        }

        public final java.util.List<java.lang.String> b() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.b
                return r0
        }

        public final java.util.List<java.lang.String> c() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.c
                return r0
        }

        public final java.util.List<java.lang.String> d() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.d
                return r0
        }
    }

    public static class b {
        private java.lang.String a;
        private java.lang.String b;
        private java.lang.String c;
        private org.json.JSONArray d;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.mbridge.msdk.c.a.b a(org.json.JSONObject r5) {
                if (r5 != 0) goto L7
                org.json.JSONObject r5 = new org.json.JSONObject
                r5.<init>()
            L7:
                com.mbridge.msdk.c.a$b r0 = new com.mbridge.msdk.c.a$b
                r0.<init>()
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                java.lang.String r2 = "string"
                java.lang.String r3 = "mbridge_cm_feedback_dialog_title"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r3 = r1.getString(r3)
                java.lang.String r4 = "title"
                java.lang.String r3 = r5.optString(r4, r3)
                r0.a = r3
                java.lang.String r3 = "mbridge_cm_feedback_dialog_close_close"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r3 = r1.getString(r3)
                java.lang.String r4 = "cancel"
                java.lang.String r3 = r5.optString(r4, r3)
                r0.b = r3
                java.lang.String r3 = "mbridge_cm_feedback_dialog_close_submit"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r3 = r1.getString(r3)
                java.lang.String r4 = "submit"
                java.lang.String r3 = r5.optString(r4, r3)
                r0.c = r3
                java.lang.String r3 = "content"
                org.json.JSONArray r5 = r5.optJSONArray(r3)
                r0.d = r5
                if (r5 != 0) goto L97
                org.json.JSONArray r5 = new org.json.JSONArray
                r5.<init>()
                r0.d = r5
                java.lang.String r3 = "mbridge_cm_feedback_dialog_content_stuck"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r3 = r1.getString(r3)
                r5.put(r3)
                org.json.JSONArray r5 = r0.d
                java.lang.String r3 = "mbridge_cm_feedback_dialog_content_cnr"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r3 = r1.getString(r3)
                r5.put(r3)
                org.json.JSONArray r5 = r0.d
                java.lang.String r3 = "mbridge_cm_feedback_dialog_content_balck_screen"
                int r3 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r3 = r1.getString(r3)
                r5.put(r3)
                org.json.JSONArray r5 = r0.d
                java.lang.String r3 = "mbridge_cm_feedback_dialog_content_other"
                int r2 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
                java.lang.String r1 = r1.getString(r2)
                r5.put(r1)
            L97:
                return r0
        }

        public final java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public final java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public final java.lang.String c() {
                r1 = this;
                java.lang.String r0 = r1.c
                return r0
        }

        public final org.json.JSONArray d() {
                r1 = this;
                org.json.JSONArray r0 = r1.d
                return r0
        }
    }

    static {
            return
    }

    public a() {
            r8 = this;
            r8.<init>()
            r0 = 0
            r8.b = r0
            r1 = 86400(0x15180, double:4.26873E-319)
            r8.f = r1
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.c
            r8.l = r1
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.d
            r8.m = r1
            r8.N = r0
            r1 = 3
            r8.O = r1
            r2 = 1
            r8.P = r2
            org.json.JSONArray r3 = new org.json.JSONArray
            r3.<init>()
            r8.R = r3
            org.json.JSONArray r3 = new org.json.JSONArray
            r3.<init>()
            r8.S = r3
            r8.T = r0
            r8.U = r0
            r8.V = r0
            r8.W = r1
            r3 = 600(0x258, float:8.41E-43)
            r8.X = r3
            r3 = 10
            r8.Y = r3
            r4 = 8000(0x1f40, float:1.121E-41)
            r8.Z = r4
            r8.aa = r4
            r4 = 1300(0x514, float:1.822E-42)
            r8.ab = r4
            int r4 = com.mbridge.msdk.c.a.a
            r8.ac = r4
            r8.ad = r0
            r8.ae = r0
            r8.ag = r0
            r4 = 3600(0xe10, float:5.045E-42)
            r8.ah = r4
            r8.ai = r3
            r4 = 120(0x78, float:1.68E-43)
            r8.aj = r4
            java.lang.String r5 = ""
            r8.ak = r5
            r8.at = r2
            r8.au = r2
            r8.av = r2
            r8.aw = r0
            r8.ax = r2
            r8.ay = r5
            r8.az = r0
            r6 = 2
            r8.aA = r6
            r7 = 86400(0x15180, float:1.21072E-40)
            r8.aC = r7
            java.lang.String r7 = "LdxThdi1WBK\\/WgfPhbxQYkeXHBPwHZKAJ7eXHM=="
            r8.aD = r7
            java.lang.String r7 = "LdxThdi1WBK\\/WgfPhbxQYkeXHBPwHZKsYFh="
            r8.aE = r7
            r8.aF = r2
            r7 = 30
            r8.aG = r7
            r7 = 5
            r8.aH = r7
            r8.aI = r0
            r8.aJ = r0
            r7 = 9377(0x24a1, float:1.314E-41)
            r8.aK = r7
            r8.aL = r0
            r8.aM = r0
            r8.aN = r0
            r8.aO = r6
            r8.aP = r3
            r8.aR = r2
            r3 = 24
            r8.aS = r3
            r8.aT = r0
            r8.aU = r5
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r8.aW = r3
            r8.aY = r2
            r8.be = r1
            r8.bg = r5
            r8.bh = r5
            r8.bi = r5
            r8.bj = r5
            r8.bk = r5
            r8.bl = r0
            r1 = 21600(0x5460, float:3.0268E-41)
            r8.bm = r1
            r8.bn = r6
            r8.bo = r0
            r8.bp = r0
            r1 = 604800(0x93a80, float:8.47505E-40)
            r8.bq = r1
            r8.br = r0
            r8.bs = r5
            r8.bt = r5
            r8.bu = r5
            r8.bv = r5
            r8.bw = r5
            r8.by = r0
            r8.bA = r0
            r8.bB = r5
            r8.bC = r5
            r8.bD = r6
            r1 = 7200(0x1c20, float:1.009E-41)
            r8.bE = r1
            r8.bI = r0
            r8.bJ = r0
            r8.bK = r4
            r8.bN = r0
            r8.bO = r0
            r8.bP = r0
            r8.bQ = r0
            r8.bR = r0
            r8.bS = r2
            r8.bT = r5
            return
    }

    public static java.lang.String a(android.content.Context r7, java.lang.String r8) {
            java.lang.String r0 = "{android_id_md5_upper}"
            java.lang.String r1 = "{android_id}"
            java.lang.String r2 = ""
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L92
            java.lang.String r4 = r4.k()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.c.a r3 = r3.b(r4)     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L92
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.i     // Catch: java.lang.Throwable -> L92
            if (r4 != 0) goto L1e
            goto L92
        L1e:
            android.net.Uri r8 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = r8.getHost()     // Catch: java.lang.Throwable -> L92
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.i     // Catch: java.lang.Throwable -> L92
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L92
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L92
        L30:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L92
            if (r5 == 0) goto L92
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L92
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L92
            java.lang.Object r5 = r5.getKey()     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L92
            boolean r6 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L92
            if (r6 != 0) goto L30
            boolean r6 = r8.contains(r5)     // Catch: java.lang.Throwable -> L92
            if (r6 == 0) goto L30
            java.util.Map<java.lang.String, java.lang.String> r8 = r3.i     // Catch: java.lang.Throwable -> L92
            java.lang.Object r8 = r8.get(r5)     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L92
            boolean r3 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L5d
            return r2
        L5d:
            java.lang.String r3 = "{gaid}"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L92
            java.lang.String r8 = r8.replace(r3, r4)     // Catch: java.lang.Throwable -> L92
            boolean r3 = r8.contains(r1)     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L7c
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: java.lang.Throwable -> L92
            if (r0 == 0) goto L91
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = r8.replace(r1, r7)     // Catch: java.lang.Throwable -> L92
            goto L92
        L7c:
            boolean r1 = r8.contains(r0)     // Catch: java.lang.Throwable -> L92
            if (r1 == 0) goto L91
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.h(r7)     // Catch: java.lang.Throwable -> L92
            if (r1 == 0) goto L91
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.h(r7)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = r8.replace(r0, r7)     // Catch: java.lang.Throwable -> L92
            goto L92
        L91:
            r2 = r8
        L92:
            return r2
    }

    public static boolean aq() {
            r0 = 1
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L16
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L16
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Exception -> L16
            if (r1 == 0) goto L1a
            boolean r0 = r1.h     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r1 = move-exception
            r1.printStackTrace()
        L1a:
            return r0
    }

    public static com.mbridge.msdk.c.a f(java.lang.String r16) {
            java.lang.String r1 = "plctb"
            java.lang.String r2 = "pcrn"
            java.lang.String r3 = "plct"
            java.lang.String r4 = ""
            boolean r6 = android.text.TextUtils.isEmpty(r16)     // Catch: java.lang.Exception -> L919
            if (r6 != 0) goto L917
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L919
            r7 = r16
            r6.<init>(r7)     // Catch: java.lang.Exception -> L919
            com.mbridge.msdk.c.a r7 = new com.mbridge.msdk.c.a     // Catch: java.lang.Exception -> L919
            r7.<init>()     // Catch: java.lang.Exception -> L919
            r7.aV = r6     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "cc"
            java.lang.String r8 = r6.optString(r8)     // Catch: java.lang.Exception -> L913
            r7.c = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "apk_toast"
            java.lang.String r9 = "正在下载中，请去通知栏查看下载进度"
            java.lang.String r8 = r6.optString(r8, r9)     // Catch: java.lang.Exception -> L913
            r7.I = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "mv_wildcard"
            java.lang.String r9 = "mbridge"
            java.lang.String r8 = r6.optString(r8, r9)     // Catch: java.lang.Exception -> L913
            r7.J = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "upal"
            long r8 = r6.optLong(r8)     // Catch: java.lang.Exception -> L913
            r7.d = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "cfc"
            int r8 = r6.optInt(r8)     // Catch: java.lang.Exception -> L913
            r7.e = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "getpf"
            long r8 = r6.optLong(r8)     // Catch: java.lang.Exception -> L913
            r7.f = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "uplc"
            int r8 = r6.optInt(r8)     // Catch: java.lang.Exception -> L913
            r7.g = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "aa"
            boolean r8 = r6.optBoolean(r8)     // Catch: java.lang.Exception -> L913
            r7.h = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "current_time"
            long r8 = r6.optLong(r8)     // Catch: java.lang.Exception -> L913
            r7.k = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "cfb"
            boolean r8 = r6.optBoolean(r8)     // Catch: java.lang.Exception -> L913
            r7.j = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r8 = "awct"
            long r8 = r6.optLong(r8)     // Catch: java.lang.Exception -> L913
            r7.p = r8     // Catch: java.lang.Exception -> L913
            long r8 = r6.optLong(r3)     // Catch: java.lang.Exception -> L913
            r10 = 0
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 != 0) goto L85
            r8 = 3600(0xe10, double:1.7786E-320)
            goto L89
        L85:
            long r8 = r6.optLong(r3)     // Catch: java.lang.Exception -> L913
        L89:
            r7.o = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "rurl"
            boolean r3 = r6.optBoolean(r3)     // Catch: java.lang.Exception -> L913
            r7.n = r3     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "uct"
            long r8 = r6.optLong(r3)     // Catch: java.lang.Exception -> L913
            r7.q = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "ujds"
            boolean r3 = r6.optBoolean(r3)     // Catch: java.lang.Exception -> L913
            r7.r = r3     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "n2"
            int r3 = r6.optInt(r3)     // Catch: java.lang.Exception -> L913
            r7.s = r3     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "n3"
            int r3 = r6.optInt(r3)     // Catch: java.lang.Exception -> L913
            r7.t = r3     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "is_startup_crashsystem"
            int r3 = r6.optInt(r3)     // Catch: java.lang.Exception -> L913
            r7.K = r3     // Catch: java.lang.Exception -> L913
            java.lang.String r3 = "n4"
            r8 = 1800(0x708, float:2.522E-42)
            int r3 = r6.optInt(r3, r8)     // Catch: java.lang.Exception -> L913
            r7.u = r3     // Catch: java.lang.Exception -> L913
            int r3 = r6.optInt(r2)     // Catch: java.lang.Exception -> L913
            r7.w = r3     // Catch: java.lang.Exception -> L913
            long r8 = r6.optLong(r1)     // Catch: java.lang.Exception -> L913
            int r3 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r3 != 0) goto Ld6
            r8 = 7200(0x1c20, double:3.5573E-320)
            goto Lda
        Ld6:
            long r8 = r6.optLong(r1)     // Catch: java.lang.Exception -> L913
        Lda:
            r7.v = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "upmi"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L913
            r7.bb = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "upaid"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L913
            r7.bc = r1     // Catch: java.lang.Exception -> L913
            r1 = 100
            int r1 = r6.optInt(r2, r1)     // Catch: java.lang.Exception -> L913
            r7.w = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "wicon"
            r2 = 2
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.x = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "wreq"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.y = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "opent"
            r3 = 1
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.z = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "sfct"
            r8 = 1800(0x708, double:8.893E-321)
            long r8 = r6.optLong(r1, r8)     // Catch: java.lang.Exception -> L913
            r7.bd = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "t_vba"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.A = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "tcct"
            r8 = 21600000(0x1499700, double:1.0671818E-316)
            long r8 = r6.optLong(r1, r8)     // Catch: java.lang.Exception -> L913
            r7.B = r8     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "dlrf"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.C = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "dlrfct"
            r8 = 604800(0x93a80, float:8.47505E-40)
            int r1 = r6.optInt(r1, r8)     // Catch: java.lang.Exception -> L913
            long r12 = (long) r1     // Catch: java.lang.Exception -> L913
            r7.D = r12     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pcct"
            r9 = 43200(0xa8c0, float:6.0536E-41)
            int r1 = r6.optInt(r1, r9)     // Catch: java.lang.Exception -> L913
            long r12 = (long) r1     // Catch: java.lang.Exception -> L913
            r7.E = r12     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pctn"
            r9 = 3
            int r1 = r6.optInt(r1, r9)     // Catch: java.lang.Exception -> L913
            r7.be = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "ilrf"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.aY = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pw"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.as = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "dlapk"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.aX = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "upgd"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.au = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "upsrl"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.at = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "updevid"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.av = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "sc"
            r12 = 0
            int r1 = r6.optInt(r1, r12)     // Catch: java.lang.Exception -> L913
            r7.aw = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "up_tips"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.ax = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "iseu"
            r13 = -1
            int r1 = r6.optInt(r1, r13)     // Catch: java.lang.Exception -> L913
            r7.az = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "up_tips_url"
            java.lang.String r14 = com.mbridge.msdk.c.a.b.a     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = r6.optString(r1, r14)     // Catch: java.lang.Exception -> L913
            r7.ay = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "jmc"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.aA = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "jmct"
            r14 = 86400(0x15180, float:1.21072E-40)
            int r1 = r6.optInt(r1, r14)     // Catch: java.lang.Exception -> L913
            r7.aC = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "jm_unit"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.aB = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "cdai"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.aE = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "csdai"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.aD = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "ils"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L913
            r7.aF = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "rty_tk_clk"
            int r1 = r6.optInt(r1, r12)     // Catch: java.lang.Exception -> L913
            r7.V = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "rty_tk_imp"
            int r1 = r6.optInt(r1, r12)     // Catch: java.lang.Exception -> L913
            r7.U = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "rty_cnt"
            int r1 = r6.optInt(r1, r9)     // Catch: java.lang.Exception -> L913
            r7.W = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "rty_to"
            r15 = 600(0x258, float:8.41E-43)
            int r1 = r6.optInt(r1, r15)     // Catch: java.lang.Exception -> L913
            r7.X = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "rty_inr"
            r15 = 10
            int r1 = r6.optInt(r1, r15)     // Catch: java.lang.Exception -> L913
            r7.Y = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "clptm"
            r5 = 3600(0xe10, float:5.045E-42)
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.ah = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "clptype"
            int r1 = r6.optInt(r1, r12)     // Catch: java.lang.Exception -> L913
            r7.ag = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "clpcode"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Throwable -> L240
            if (r1 == 0) goto L245
            int r5 = r1.length()     // Catch: java.lang.Throwable -> L240
            if (r5 <= 0) goto L245
            java.util.LinkedList r5 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L240
            r5.<init>()     // Catch: java.lang.Throwable -> L240
            r13 = r12
        L22d:
            int r15 = r1.length()     // Catch: java.lang.Throwable -> L240
            if (r13 >= r15) goto L23d
            java.lang.String r15 = r1.optString(r13)     // Catch: java.lang.Throwable -> L240
            r5.add(r15)     // Catch: java.lang.Throwable -> L240
            int r13 = r13 + 1
            goto L22d
        L23d:
            r7.af = r5     // Catch: java.lang.Throwable -> L240
            goto L245
        L240:
            r0 = move-exception
            r1 = r0
            r1.printStackTrace()     // Catch: java.lang.Exception -> L913
        L245:
            java.lang.String r1 = "pcto"
            long r12 = r6.optLong(r1)     // Catch: java.lang.Exception -> L913
            int r1 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r1 != 0) goto L254
            r12 = 20
            r7.aZ = r12     // Catch: java.lang.Exception -> L913
            goto L256
        L254:
            r7.aZ = r12     // Catch: java.lang.Exception -> L913
        L256:
            java.lang.String r1 = "tcto"
            long r12 = r6.optLong(r1)     // Catch: java.lang.Exception -> L913
            int r1 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r1 != 0) goto L265
            r10 = 10
            r7.ba = r10     // Catch: java.lang.Exception -> L913
            goto L299
        L265:
            r7.ba = r12     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "jt"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L299
            int r10 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r10 <= 0) goto L299
            java.util.HashMap r10 = new java.util.HashMap     // Catch: java.lang.Exception -> L913
            r10.<init>()     // Catch: java.lang.Exception -> L913
            r11 = 0
        L27b:
            int r12 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r11 >= r12) goto L297
            org.json.JSONObject r12 = r1.optJSONObject(r11)     // Catch: java.lang.Exception -> L913
            java.lang.String r13 = "domain"
            java.lang.String r13 = r12.optString(r13)     // Catch: java.lang.Exception -> L913
            java.lang.String r15 = "format"
            java.lang.String r12 = r12.optString(r15)     // Catch: java.lang.Exception -> L913
            r10.put(r13, r12)     // Catch: java.lang.Exception -> L913
            int r11 = r11 + 1
            goto L27b
        L297:
            r7.i = r10     // Catch: java.lang.Exception -> L913
        L299:
            java.lang.String r1 = "plc"
            int r1 = r6.optInt(r1, r9)     // Catch: java.lang.Exception -> L913
            r7.F = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "dut"
            int r1 = r6.optInt(r1, r14)     // Catch: java.lang.Exception -> L913
            r7.G = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "iex"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.H = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "cal"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L2e6
            int r10 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r10 <= 0) goto L2e6
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Exception -> L913
            r10.<init>()     // Catch: java.lang.Exception -> L913
            r11 = 0
        L2c5:
            int r12 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r11 >= r12) goto L2e7
            java.lang.String r12 = r1.optString(r11)     // Catch: java.lang.Exception -> L913
            boolean r13 = com.mbridge.msdk.foundation.tools.ai.b(r12)     // Catch: java.lang.Exception -> L913
            if (r13 == 0) goto L2e3
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Exception -> L913
            r13.<init>(r12)     // Catch: java.lang.Exception -> L913
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = com.mbridge.msdk.foundation.entity.CampaignEx.parseSettingCampaign(r13)     // Catch: java.lang.Exception -> L913
            if (r12 == 0) goto L2e3
            r10.add(r12)     // Catch: java.lang.Exception -> L913
        L2e3:
            int r11 = r11 + 1
            goto L2c5
        L2e6:
            r10 = 0
        L2e7:
            if (r10 == 0) goto L2eb
            r7.L = r10     // Catch: java.lang.Exception -> L913
        L2eb:
            java.lang.String r1 = "atf"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L331
            if (r1 == 0) goto L32b
            int r10 = r1.length()     // Catch: java.lang.Exception -> L331
            if (r10 <= 0) goto L32b
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Exception -> L331
            r10.<init>()     // Catch: java.lang.Exception -> L331
            r11 = 0
        L2ff:
            int r12 = r1.length()     // Catch: java.lang.Exception -> L331
            if (r11 >= r12) goto L32c
            java.lang.String r12 = r1.optString(r11)     // Catch: java.lang.Exception -> L331
            boolean r13 = com.mbridge.msdk.foundation.tools.ai.b(r12)     // Catch: java.lang.Exception -> L331
            if (r13 == 0) goto L328
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Exception -> L331
            r13.<init>(r12)     // Catch: java.lang.Exception -> L331
            com.mbridge.msdk.foundation.entity.b r12 = new com.mbridge.msdk.foundation.entity.b     // Catch: java.lang.Exception -> L331
            java.lang.String r14 = "adtype"
            int r14 = r13.optInt(r14)     // Catch: java.lang.Exception -> L331
            java.lang.String r15 = "unitid"
            java.lang.String r13 = r13.optString(r15)     // Catch: java.lang.Exception -> L331
            r12.<init>(r14, r13)     // Catch: java.lang.Exception -> L331
            r10.add(r12)     // Catch: java.lang.Exception -> L331
        L328:
            int r11 = r11 + 1
            goto L2ff
        L32b:
            r10 = 0
        L32c:
            if (r10 == 0) goto L336
            r7.M = r10     // Catch: java.lang.Exception -> L331
            goto L336
        L331:
            r0 = move-exception
            r1 = r0
            r1.printStackTrace()     // Catch: java.lang.Exception -> L913
        L336:
            java.lang.String r1 = "adct"
            r10 = 259200(0x3f480, float:3.63217E-40)
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L913
            r7.bf = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pf"
            r10 = 900(0x384, float:1.261E-42)
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L913
            r7.al = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pmax"
            r10 = 20
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L913
            r7.an = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pid"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.ar = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "pb"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L383
            int r10 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r10 <= 0) goto L383
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Exception -> L913
            r10.<init>()     // Catch: java.lang.Exception -> L913
            r11 = 0
        L371:
            int r12 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r11 >= r12) goto L381
            java.lang.String r12 = r1.optString(r11)     // Catch: java.lang.Exception -> L913
            r10.add(r12)     // Catch: java.lang.Exception -> L913
            int r11 = r11 + 1
            goto L371
        L381:
            r7.am = r10     // Catch: java.lang.Exception -> L913
        L383:
            java.lang.String r1 = "pctrl"
            org.json.JSONObject r1 = r6.optJSONObject(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L3a3
            java.lang.String r10 = "full"
            int r10 = r1.optInt(r10, r3)     // Catch: java.lang.Exception -> L913
            r7.ao = r10     // Catch: java.lang.Exception -> L913
            java.lang.String r10 = "add"
            int r10 = r1.optInt(r10, r3)     // Catch: java.lang.Exception -> L913
            r7.ap = r10     // Catch: java.lang.Exception -> L913
            java.lang.String r10 = "delete"
            int r1 = r1.optInt(r10, r3)     // Catch: java.lang.Exception -> L913
            r7.aq = r1     // Catch: java.lang.Exception -> L913
        L3a3:
            java.lang.String r1 = "confirm_title"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bg = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "confirm_description"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bh = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "confirm_t"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bi = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "confirm_c_rv"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bj = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "confirm_c_play"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bk = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "offercacheRate"
            r5 = 0
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.bl = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "offercachepacing"
            r10 = 21600(0x5460, float:3.0268E-41)
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L913
            r7.bm = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "useexpriedcacheoffer"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.bn = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "retryoffer"
            r5 = 0
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.bo = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "mapping_cache_rate"
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.bp = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "tokencachetime"
            int r1 = r6.optInt(r1, r8)     // Catch: java.lang.Exception -> L913
            r7.bq = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "protect"
            r5 = 0
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.br = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "adchoice_icon"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bs = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "adchoice_link"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bu = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "adchoice_size"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bt = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "platform_logo"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bw = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "platform_name"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bv = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "cdnate_cfg"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            java.util.Map r1 = i(r1)     // Catch: java.lang.Exception -> L913
            r7.bx = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "atrqt"
            r5 = 0
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.b = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "iupdid"
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            r7.bA = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "mcs"
            r8 = 120(0x78, float:1.68E-43)
            int r1 = r6.optInt(r1, r8)     // Catch: java.lang.Exception -> L913
            r7.aj = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "mcto"
            r10 = 10
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L913
            r7.ai = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "ab_id"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.ak = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "omsdkjs_url"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bB = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "omsdkjs_h5_url"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bC = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "activeAppStatus"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.bD = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "activeAppTime"
            r10 = 7200(0x1c20, float:1.009E-41)
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L913
            r7.bE = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "activeAppConfig"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            boolean r10 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L913
            if (r10 != 0) goto L4f1
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Exception -> L913
            java.lang.String r10 = "["
            boolean r10 = r1.startsWith(r10)     // Catch: java.lang.Exception -> L913
            if (r10 == 0) goto L4f1
            org.json.JSONArray r10 = new org.json.JSONArray     // Catch: java.lang.Exception -> L913
            r10.<init>(r1)     // Catch: java.lang.Exception -> L913
            int r1 = r10.length()     // Catch: java.lang.Exception -> L913
            if (r1 <= 0) goto L4f1
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L913
            r1.<init>()     // Catch: java.lang.Exception -> L913
            r11 = 0
        L4b4:
            int r12 = r10.length()     // Catch: java.lang.Exception -> L913
            if (r11 >= r12) goto L4ef
            org.json.JSONObject r12 = r10.getJSONObject(r11)     // Catch: java.lang.Exception -> L913
            if (r12 == 0) goto L4ec
            com.mbridge.msdk.foundation.entity.a r13 = new com.mbridge.msdk.foundation.entity.a     // Catch: java.lang.Exception -> L913
            r13.<init>()     // Catch: java.lang.Exception -> L913
            java.lang.String r14 = "pn"
            java.lang.String r14 = r12.optString(r14)     // Catch: java.lang.Exception -> L913
            r13.a(r14)     // Catch: java.lang.Exception -> L913
            java.lang.String r14 = "at"
            java.lang.String r14 = r12.optString(r14)     // Catch: java.lang.Exception -> L913
            r13.b(r14)     // Catch: java.lang.Exception -> L913
            java.lang.String r14 = "ai"
            java.lang.String r14 = r12.optString(r14)     // Catch: java.lang.Exception -> L913
            r13.c(r14)     // Catch: java.lang.Exception -> L913
            java.lang.String r14 = "ac"
            java.lang.String r12 = r12.optString(r14)     // Catch: java.lang.Exception -> L913
            r13.d(r12)     // Catch: java.lang.Exception -> L913
            r1.add(r13)     // Catch: java.lang.Exception -> L913
        L4ec:
            int r11 = r11 + 1
            goto L4b4
        L4ef:
            r7.bF = r1     // Catch: java.lang.Exception -> L913
        L4f1:
            java.lang.String r1 = "mraid_js"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.bH = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "web_env_url"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            r7.bG = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "alrbs"
            r5 = 0
            int r1 = r6.optInt(r1, r5)     // Catch: java.lang.Exception -> L913
            if (r1 > r2) goto L50c
            if (r1 >= 0) goto L50d
        L50c:
            r1 = 0
        L50d:
            r7.bI = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "GDPR_area"
            r2 = 0
            boolean r1 = r6.optBoolean(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.bJ = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "ct"
            int r1 = r6.optInt(r1, r8)     // Catch: java.lang.Exception -> L913
            r7.bK = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "ercd"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L55a
            int r2 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r2 <= 0) goto L55a
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L913
            r2.<init>()     // Catch: java.lang.Exception -> L913
            r8 = 0
        L534:
            int r10 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r8 >= r10) goto L54a
            int r10 = r1.optInt(r8)     // Catch: java.lang.Exception -> L913
            if (r10 == 0) goto L547
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L913
            r2.add(r10)     // Catch: java.lang.Exception -> L913
        L547:
            int r8 = r8 + 1
            goto L534
        L54a:
            int r1 = r2.size()     // Catch: java.lang.Exception -> L913
            if (r1 <= 0) goto L55a
            r1 = -1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L913
            r2.add(r1)     // Catch: java.lang.Exception -> L913
            r7.bL = r2     // Catch: java.lang.Exception -> L913
        L55a:
            java.lang.String r1 = "hst"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L913
            if (r2 != 0) goto L5be
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Exception -> L5b3
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5b3
            r2.<init>(r1)     // Catch: java.lang.Exception -> L5b3
            java.util.Iterator r1 = r2.keys()     // Catch: java.lang.Exception -> L5b3
            java.util.HashMap r8 = new java.util.HashMap     // Catch: java.lang.Exception -> L5b3
            r8.<init>()     // Catch: java.lang.Exception -> L5b3
        L578:
            boolean r10 = r1.hasNext()     // Catch: java.lang.Exception -> L5b3
            if (r10 == 0) goto L5aa
            java.lang.Object r10 = r1.next()     // Catch: java.lang.Exception -> L5b3
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> L5b3
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L5b3
            if (r11 != 0) goto L578
            java.lang.String r11 = r2.optString(r10)     // Catch: java.lang.Exception -> L5b3
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L5b3
            if (r11 != 0) goto L578
            java.lang.String r11 = r2.optString(r10)     // Catch: java.lang.Exception -> L5b3
            java.lang.String r11 = com.mbridge.msdk.foundation.tools.t.b(r11)     // Catch: java.lang.Exception -> L5b3
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L5b3
            if (r11 != 0) goto L578
            java.lang.String r11 = r2.optString(r10)     // Catch: java.lang.Exception -> L5b3
            r8.put(r10, r11)     // Catch: java.lang.Exception -> L5b3
            goto L578
        L5aa:
            int r1 = r8.size()     // Catch: java.lang.Exception -> L5b3
            if (r1 <= 0) goto L5be
            r7.bM = r8     // Catch: java.lang.Exception -> L5b3
            goto L5be
        L5b3:
            r0 = move-exception
            r1 = r0
            java.lang.String r2 = "SETTING"
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L913
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Exception -> L913
        L5be:
            java.lang.String r1 = "refactor_switch"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L604
            int r2 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r2 <= 0) goto L604
            r2 = 0
        L5cd:
            int r8 = r1.length()     // Catch: java.lang.Exception -> L913
            if (r2 >= r8) goto L604
            org.json.JSONObject r8 = r1.getJSONObject(r2)     // Catch: java.lang.Exception -> L913
            java.util.Iterator r10 = r8.keys()     // Catch: java.lang.Exception -> L913
        L5db:
            boolean r11 = r10.hasNext()     // Catch: java.lang.Exception -> L913
            if (r11 == 0) goto L601
            java.lang.Object r11 = r10.next()     // Catch: java.lang.Exception -> L913
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Exception -> L913
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L913
            if (r12 != 0) goto L5db
            boolean r12 = r8.getBoolean(r11)     // Catch: java.lang.Exception -> L913
            if (r12 == 0) goto L5db
            int r11 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.Exception -> L913
            java.util.List<java.lang.Integer> r12 = r7.aW     // Catch: java.lang.Exception -> L913
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L913
            r12.add(r11)     // Catch: java.lang.Exception -> L913
            goto L5db
        L601:
            int r2 = r2 + 1
            goto L5cd
        L604:
            java.lang.String r1 = "lqcnt"
            r2 = 30
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r2 = "lqto"
            r8 = 5
            int r2 = r6.optInt(r2, r8)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r8 = "lqswt"
            r5 = 0
            int r8 = r6.optInt(r8, r5)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r10 = "lqtype"
            int r10 = r6.optInt(r10, r5)     // Catch: java.lang.Exception -> L6b2
            r7.aH = r2     // Catch: java.lang.Exception -> L6b2
            r7.aG = r1     // Catch: java.lang.Exception -> L6b2
            r7.aI = r8     // Catch: java.lang.Exception -> L6b2
            r7.aJ = r10     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "lg_bl"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L6b2
            if (r1 != 0) goto L63a
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L6b2
            r1.<init>()     // Catch: java.lang.Exception -> L6b2
            java.lang.String r2 = "2000088"
            r1.put(r2)     // Catch: java.lang.Exception -> L6b2
        L63a:
            r7.S = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "lg_wl"
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L6b2
            if (r1 != 0) goto L65d
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L6b2
            r1.<init>()     // Catch: java.lang.Exception -> L6b2
            java.lang.String r2 = "2000041"
            r1.put(r2)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r2 = "2000042"
            r1.put(r2)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r2 = "2000032"
            r1.put(r2)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r2 = "2000079"
            r1.put(r2)     // Catch: java.lang.Exception -> L6b2
        L65d:
            r7.R = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "lg_wl_rt"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L6b2
            r7.T = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "srml"
            r2 = 8000(0x1f40, float:1.121E-41)
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L6b2
            r7.Z = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "lrml"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L6b2
            r7.aa = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "wgl_d_ms"
            r2 = 1300(0x514, float:1.822E-42)
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L6b2
            r7.ab = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "dp_ct"
            int r2 = com.mbridge.msdk.c.a.a     // Catch: java.lang.Exception -> L6b2
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L6b2
            r7.ac = r1     // Catch: java.lang.Exception -> L6b2
            com.mbridge.msdk.click.b.a.c = r1     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = "lqpt"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L6b2
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Exception -> L6b2
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L6b2
            if (r1 <= 0) goto L6b2
            r2 = 65535(0xffff, float:9.1834E-41)
            if (r1 >= r2) goto L6b2
            r7.aK = r1     // Catch: java.lang.Exception -> L6b2
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L6b2
            r2.g = r1     // Catch: java.lang.Exception -> L6b2
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L6b2
            r2.h = r1     // Catch: java.lang.Exception -> L6b2
        L6b2:
            java.lang.String r1 = "wvddt"
            r2 = 0
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.bN = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "hst_st"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.l = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "hst_st_t"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.m = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "l"
            int r1 = r6.optInt(r1, r9)     // Catch: java.lang.Exception -> L6ef
            java.lang.String r2 = "k"
            r5 = 0
            int r2 = r6.optInt(r2, r5)     // Catch: java.lang.Exception -> L6ef
            if (r2 != r3) goto L6dc
            r2 = r3
            goto L6dd
        L6dc:
            r2 = 0
        L6dd:
            java.lang.String r8 = "m"
            int r8 = r6.optInt(r8, r3)     // Catch: java.lang.Exception -> L6ef
            if (r8 != r3) goto L6e7
            r8 = r3
            goto L6e8
        L6e7:
            r8 = 0
        L6e8:
            r7.O = r1     // Catch: java.lang.Exception -> L6ef
            r7.N = r2     // Catch: java.lang.Exception -> L6ef
            r7.P = r8     // Catch: java.lang.Exception -> L6ef
            goto L6fa
        L6ef:
            r0 = move-exception
            r1 = r0
            java.lang.String r2 = "Setting"
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L913
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Exception -> L913
        L6fa:
            java.lang.String r1 = "fbk_swt"
            r2 = 0
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L913
            r7.by = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "fbk"
            org.json.JSONObject r1 = r6.optJSONObject(r1)     // Catch: java.lang.Exception -> L913
            com.mbridge.msdk.c.a$b r1 = com.mbridge.msdk.c.a.b.a(r1)     // Catch: java.lang.Exception -> L913
            r7.bz = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "ad_connection_timeout"
            int r2 = com.mbridge.msdk.foundation.same.a.M     // Catch: java.lang.Exception -> L77c
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L77c
            java.lang.String r2 = "ad_read_timeout"
            int r8 = com.mbridge.msdk.foundation.same.a.N     // Catch: java.lang.Exception -> L77c
            int r2 = r6.optInt(r2, r8)     // Catch: java.lang.Exception -> L77c
            java.lang.String r8 = "ad_write_timeout"
            int r9 = com.mbridge.msdk.foundation.same.a.O     // Catch: java.lang.Exception -> L77c
            int r8 = r6.optInt(r8, r9)     // Catch: java.lang.Exception -> L77c
            java.lang.String r9 = "ad_retry_count"
            int r10 = com.mbridge.msdk.foundation.same.a.S     // Catch: java.lang.Exception -> L77c
            int r9 = r6.optInt(r9, r10)     // Catch: java.lang.Exception -> L77c
            if (r1 > 0) goto L733
            int r1 = com.mbridge.msdk.foundation.same.a.M     // Catch: java.lang.Exception -> L77c
        L733:
            r7.aN = r1     // Catch: java.lang.Exception -> L77c
            if (r2 > 0) goto L739
            int r2 = com.mbridge.msdk.foundation.same.a.N     // Catch: java.lang.Exception -> L77c
        L739:
            r7.aL = r2     // Catch: java.lang.Exception -> L77c
            if (r8 > 0) goto L73f
            int r8 = com.mbridge.msdk.foundation.same.a.O     // Catch: java.lang.Exception -> L77c
        L73f:
            r7.aM = r8     // Catch: java.lang.Exception -> L77c
            if (r9 >= 0) goto L745
            int r9 = com.mbridge.msdk.foundation.same.a.S     // Catch: java.lang.Exception -> L77c
        L745:
            r7.aO = r9     // Catch: java.lang.Exception -> L77c
            java.lang.String r1 = "max_download_task_size"
            r10 = 10
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L77c
            if (r1 > 0) goto L752
            r1 = r10
        L752:
            r7.Q = r1     // Catch: java.lang.Exception -> L77c
            java.lang.String r1 = "max_bitmap_cache_size"
            int r1 = r6.optInt(r1, r10)     // Catch: java.lang.Exception -> L77c
            r7.g(r1)     // Catch: java.lang.Exception -> L77c
            java.lang.String r1 = "t_t"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L77c
            r7.bQ = r1     // Catch: java.lang.Exception -> L77c
            java.lang.String r1 = "h_t"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L77c
            r7.bP = r1     // Catch: java.lang.Exception -> L77c
            java.lang.String r1 = "gtp"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L77c
            r7.bR = r1     // Catch: java.lang.Exception -> L77c
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L77c
            r2.a(r1)     // Catch: java.lang.Exception -> L77c
        L77c:
            java.lang.String r1 = "http_track_url"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L784
            r7.aQ = r1     // Catch: java.lang.Exception -> L784
        L784:
            r1 = 24
            java.lang.String r2 = "is_transmission_available"
            int r2 = r6.optInt(r2, r3)     // Catch: java.lang.Exception -> L797
            r7.aR = r2     // Catch: java.lang.Exception -> L797
            java.lang.String r2 = "is_transmission_delay"
            int r2 = r6.optInt(r2, r1)     // Catch: java.lang.Exception -> L797
            r7.aS = r2     // Catch: java.lang.Exception -> L797
            goto L79b
        L797:
            r7.aR = r3     // Catch: java.lang.Exception -> L913
            r7.aS = r1     // Catch: java.lang.Exception -> L913
        L79b:
            java.lang.String r1 = "st_net"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L913
            r7.bS = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "vtag"
            java.lang.String r1 = r6.optString(r1, r4)     // Catch: java.lang.Exception -> L913
            r7.bT = r1     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = "check_webview"
            r2 = 0
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L7ba
            if (r1 != 0) goto L7b6
            r1 = 0
            goto L7b7
        L7b6:
            r1 = r3
        L7b7:
            r7.ae = r1     // Catch: java.lang.Exception -> L7bc
            goto L7bf
        L7ba:
            r1 = r2
            goto L7bd
        L7bc:
            r1 = 0
        L7bd:
            r7.ae = r1     // Catch: java.lang.Exception -> L913
        L7bf:
            java.lang.String r1 = "swxid"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L913
            java.lang.String r2 = r7.aU     // Catch: java.lang.Exception -> L913
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L913
            if (r2 != 0) goto L7e6
            r7.aU = r1     // Catch: java.lang.Exception -> L913
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L913
            java.lang.String r1 = r1.m()     // Catch: java.lang.Exception -> L913
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L913
            if (r1 == 0) goto L7e6
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L913
            java.lang.String r2 = r7.aU     // Catch: java.lang.Exception -> L913
            r1.e(r2)     // Catch: java.lang.Exception -> L913
        L7e6:
            java.lang.String r1 = "ch_nv_im_cb"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L7ef
            r7.ad = r1     // Catch: java.lang.Exception -> L7ef
            goto L7f1
        L7ef:
            r7.ad = r3     // Catch: java.lang.Exception -> L913
        L7f1:
            java.lang.String r1 = "do_us_fi_re"
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L7ff
            if (r1 == 0) goto L7fb
            r1 = r3
            goto L7fc
        L7fb:
            r1 = 0
        L7fc:
            r7.aT = r1     // Catch: java.lang.Exception -> L7ff
            goto L801
        L7ff:
            r7.aT = r3     // Catch: java.lang.Exception -> L913
        L801:
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Exception -> L90c
            boolean r1 = r1.d()     // Catch: java.lang.Exception -> L90c
            java.lang.String r2 = "H+tU+FeXHM=="
            if (r1 == 0) goto L821
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L821
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L821
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L821
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L821
            r1.<init>(r3, r4)     // Catch: java.lang.Exception -> L821
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L821
            goto L822
        L821:
            r1 = 0
        L822:
            java.lang.String r3 = "H+tU+Fz8"
            java.lang.String r4 = "H+tU+bfPhM=="
            java.lang.String r8 = "c"
            java.lang.String r9 = "b"
            if (r1 == 0) goto L88b
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L884
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L884
            if (r2 == 0) goto L911
            java.lang.String r2 = r6.optString(r9)     // Catch: java.lang.Exception -> L884
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L884
            if (r5 != 0) goto L85c
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L884
            boolean r5 = android.text.TextUtils.equals(r5, r2)     // Catch: java.lang.Exception -> L884
            if (r5 != 0) goto L85c
            com.mbridge.msdk.foundation.same.a.t = r2     // Catch: java.lang.Exception -> L884
            com.mbridge.msdk.foundation.a.a.a r2 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L884
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L884
            r2.a(r9, r5)     // Catch: java.lang.Exception -> L884
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r4)     // Catch: java.lang.Exception -> L85c
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L85c
            r1.putString(r2, r4)     // Catch: java.lang.Exception -> L85c
        L85c:
            java.lang.String r2 = r6.optString(r8)     // Catch: java.lang.Exception -> L884
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L884
            if (r4 != 0) goto L911
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L884
            boolean r4 = android.text.TextUtils.equals(r4, r2)     // Catch: java.lang.Exception -> L884
            if (r4 != 0) goto L911
            com.mbridge.msdk.foundation.same.a.u = r2     // Catch: java.lang.Exception -> L884
            com.mbridge.msdk.foundation.a.a.a r2 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L884
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L884
            r2.a(r8, r4)     // Catch: java.lang.Exception -> L884
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r3)     // Catch: java.lang.Exception -> L911
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L911
            r1.putString(r2, r3)     // Catch: java.lang.Exception -> L911
            goto L911
        L884:
            r0 = move-exception
            r1 = r0
            r1.printStackTrace()     // Catch: java.lang.Exception -> L90c
            goto L911
        L88b:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L906
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L906
            if (r1 == 0) goto L911
            java.lang.String r10 = r6.optString(r9)     // Catch: java.lang.Exception -> L906
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L906
            if (r11 != 0) goto L8cd
            java.lang.String r11 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L906
            boolean r11 = android.text.TextUtils.equals(r11, r10)     // Catch: java.lang.Exception -> L906
            if (r11 != 0) goto L8cd
            com.mbridge.msdk.foundation.same.a.t = r10     // Catch: java.lang.Exception -> L906
            com.mbridge.msdk.foundation.a.a.a r10 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L906
            java.lang.String r11 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L906
            r10.a(r9, r11)     // Catch: java.lang.Exception -> L906
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L906
            r5 = 0
            android.content.SharedPreferences r9 = r1.getSharedPreferences(r9, r5)     // Catch: java.lang.Exception -> L906
            if (r9 == 0) goto L8cd
            android.content.SharedPreferences$Editor r9 = r9.edit()     // Catch: java.lang.Exception -> L906
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.t.b(r4)     // Catch: java.lang.Exception -> L906
            java.lang.String r10 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L906
            r9.putString(r4, r10)     // Catch: java.lang.Exception -> L906
            r9.apply()     // Catch: java.lang.Exception -> L906
        L8cd:
            java.lang.String r4 = r6.optString(r8)     // Catch: java.lang.Exception -> L906
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L906
            if (r6 != 0) goto L911
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L906
            boolean r6 = android.text.TextUtils.equals(r6, r4)     // Catch: java.lang.Exception -> L906
            if (r6 != 0) goto L911
            com.mbridge.msdk.foundation.same.a.u = r4     // Catch: java.lang.Exception -> L906
            com.mbridge.msdk.foundation.a.a.a r4 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L906
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L906
            r4.a(r8, r6)     // Catch: java.lang.Exception -> L906
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L906
            r4 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r4)     // Catch: java.lang.Exception -> L906
            if (r1 == 0) goto L911
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Exception -> L906
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r3)     // Catch: java.lang.Exception -> L906
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L906
            r1.putString(r2, r3)     // Catch: java.lang.Exception -> L906
            r1.apply()     // Catch: java.lang.Exception -> L906
            goto L911
        L906:
            r0 = move-exception
            r1 = r0
            r1.printStackTrace()     // Catch: java.lang.Exception -> L90c
            goto L911
        L90c:
            r0 = move-exception
            r1 = r0
            r1.printStackTrace()     // Catch: java.lang.Exception -> L913
        L911:
            r5 = r7
            goto L91f
        L913:
            r0 = move-exception
            r1 = r0
            r5 = r7
            goto L91c
        L917:
            r5 = 0
            goto L91f
        L919:
            r0 = move-exception
            r1 = r0
            r5 = 0
        L91c:
            r1.printStackTrace()
        L91f:
            return r5
    }

    private static java.util.Map<java.lang.String, com.mbridge.msdk.c.a.a> i(java.lang.String r6) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            if (r1 == 0) goto L8
            return r0
        L8:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            r1.<init>()     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            r2.<init>(r6)     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            java.util.Iterator r6 = r2.keys()     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
        L16:
            boolean r3 = r6.hasNext()     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            if (r3 == 0) goto L34
            java.lang.Object r3 = r6.next()     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            com.mbridge.msdk.c.a$a r4 = new com.mbridge.msdk.c.a$a     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            r4.<init>()     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            org.json.JSONObject r5 = r2.optJSONObject(r3)     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            if (r5 == 0) goto L30
            r4.a(r5)     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
        L30:
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L35 org.json.JSONException -> L3e
            goto L16
        L34:
            return r1
        L35:
            r6 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L46
            r6.printStackTrace()
            goto L46
        L3e:
            r6 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L46
            r6.printStackTrace()
        L46:
            return r0
    }

    public final int A() {
            r1 = this;
            int r0 = r1.aO
            return r0
    }

    public final void A(int r1) {
            r0 = this;
            r0.ap = r1
            return
    }

    public final int B() {
            r1 = this;
            int r0 = r1.aC
            return r0
    }

    public final void B(int r1) {
            r0 = this;
            r0.aq = r1
            return
    }

    public final int C() {
            r1 = this;
            int r0 = r1.aA
            return r0
    }

    public final void C(int r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public final java.lang.String D() {
            r1 = this;
            java.lang.String r0 = r1.aB
            return r0
    }

    public final void D(int r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public final int E() {
            r1 = this;
            int r0 = r1.at
            return r0
    }

    public final void E(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public final int F() {
            r1 = this;
            int r0 = r1.au
            return r0
    }

    public final void F(int r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public final int G() {
            r1 = this;
            int r0 = r1.av
            return r0
    }

    public final void G(int r3) {
            r2 = this;
            long r0 = (long) r3
            r2.E = r0
            return
    }

    public final int H() {
            r1 = this;
            int r0 = r1.aw
            return r0
    }

    public final void H(int r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public final int I() {
            r1 = this;
            int r0 = r1.ax
            return r0
    }

    public final void I(int r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public final int J() {
            r1 = this;
            int r0 = r1.az
            return r0
    }

    public final void J(int r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public final int K() {
            r1 = this;
            int r0 = r1.K
            return r0
    }

    public final void K(int r1) {
            r0 = this;
            r0.be = r1
            return
    }

    public final java.lang.String L() {
            r1 = this;
            java.lang.String r0 = r1.J
            return r0
    }

    public final void L(int r1) {
            r0 = this;
            r0.bf = r1
            return
    }

    public final int M() {
            r1 = this;
            int r0 = r1.F
            return r0
    }

    public final void M(int r1) {
            r0 = this;
            r0.bb = r1
            return
    }

    public final int N() {
            r1 = this;
            int r0 = r1.G
            return r0
    }

    public final void N(int r1) {
            r0 = this;
            r0.bc = r1
            return
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> O() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.L
            return r0
    }

    public final void O(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final int P() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    public final void P(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final java.lang.String Q() {
            r1 = this;
            java.lang.String r0 = r1.I
            return r0
    }

    public final void Q(int r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    public final int R() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    public final void R(int r1) {
            r0 = this;
            r0.bI = r1
            return
    }

    public final long S() {
            r4 = this;
            long r0 = r4.B
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final void S(int r1) {
            r0 = this;
            r0.bK = r1
            return
    }

    public final int T() {
            r1 = this;
            int r0 = r1.u
            return r0
    }

    public final void T(int r1) {
            r0 = this;
            r0.bO = r1
            return
    }

    public final int U() {
            r1 = this;
            int r0 = r1.z
            return r0
    }

    public final void U(int r1) {
            r0 = this;
            r0.bP = r1
            return
    }

    public final int V() {
            r1 = this;
            int r0 = r1.w
            return r0
    }

    public final void V(int r1) {
            r0 = this;
            r0.bQ = r1
            return
    }

    public final long W() {
            r4 = this;
            long r0 = r4.v
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Lc
            r0 = 7200(0x1c20, double:3.5573E-320)
            r4.v = r0
        Lc:
            long r0 = r4.v
            return r0
    }

    public final void W(int r1) {
            r0 = this;
            r0.bS = r1
            return
    }

    public final int X() {
            r1 = this;
            int r0 = r1.bf
            return r0
    }

    public final long Y() {
            r2 = this;
            long r0 = r2.bd
            return r0
    }

    public final int Z() {
            r1 = this;
            int r0 = r1.bb
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.ab
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.aQ = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.ae = r1
            return
    }

    public final java.util.Map<java.lang.String, com.mbridge.msdk.c.a.a> aA() {
            r1 = this;
            java.util.Map<java.lang.String, com.mbridge.msdk.c.a$a> r0 = r1.bx
            return r0
    }

    public final int aB() {
            r1 = this;
            int r0 = r1.aG
            return r0
    }

    public final int aC() {
            r1 = this;
            int r0 = r1.aH
            return r0
    }

    public final int aD() {
            r1 = this;
            int r0 = r1.aI
            return r0
    }

    public final int aE() {
            r1 = this;
            int r0 = r1.aJ
            return r0
    }

    public final boolean aF() {
            r1 = this;
            boolean r0 = r1.N
            return r0
    }

    public final int aG() {
            r1 = this;
            int r0 = r1.O
            return r0
    }

    public final boolean aH() {
            r1 = this;
            boolean r0 = r1.P
            return r0
    }

    public final int aI() {
            r1 = this;
            int r0 = r1.by
            return r0
    }

    public final com.mbridge.msdk.c.a.b aJ() {
            r1 = this;
            com.mbridge.msdk.c.a$b r0 = r1.bz
            return r0
    }

    public final int aK() {
            r1 = this;
            int r0 = r1.ad
            return r0
    }

    public final java.lang.String aL() {
            r1 = this;
            java.lang.String r0 = r1.bC
            return r0
    }

    public final java.lang.String aM() {
            r1 = this;
            java.lang.String r0 = r1.bB
            return r0
    }

    public final int aN() {
            r1 = this;
            int r0 = r1.bD
            return r0
    }

    public final int aO() {
            r1 = this;
            int r0 = r1.bE
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.a> aP() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.a> r0 = r1.bF
            return r0
    }

    public final java.lang.String aQ() {
            r1 = this;
            java.lang.String r0 = r1.bG
            return r0
    }

    public final java.lang.String aR() {
            r1 = this;
            java.lang.String r0 = r1.bH
            return r0
    }

    public final int aS() {
            r1 = this;
            int r0 = r1.bI
            return r0
    }

    public final boolean aT() {
            r1 = this;
            boolean r0 = r1.bJ
            return r0
    }

    public final int aU() {
            r1 = this;
            int r0 = r1.bK
            return r0
    }

    public final java.util.ArrayList<java.lang.Integer> aV() {
            r1 = this;
            java.util.ArrayList<java.lang.Integer> r0 = r1.bL
            return r0
    }

    public final java.util.HashMap<java.lang.String, java.lang.String> aW() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.bM
            return r0
    }

    public final int aX() {
            r1 = this;
            int r0 = r1.bN
            return r0
    }

    public final int aY() {
            r1 = this;
            int r0 = r1.bO
            return r0
    }

    public final int aZ() {
            r1 = this;
            int r0 = r1.bP
            return r0
    }

    public final int aa() {
            r1 = this;
            int r0 = r1.bc
            return r0
    }

    public final long ab() {
            r4 = this;
            long r0 = r4.aZ
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final long ac() {
            r4 = this;
            long r0 = r4.ba
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final boolean ad() {
            r1 = this;
            boolean r0 = r1.r
            return r0
    }

    public final long ae() {
            r2 = this;
            long r0 = r2.q
            return r0
    }

    public final boolean af() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    public final long ag() {
            r2 = this;
            long r0 = r2.o
            return r0
    }

    public final java.lang.String ah() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final int ai() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public final long aj() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public final java.lang.String ak() {
            r1 = this;
            java.lang.String r0 = r1.as
            return r0
    }

    public final java.lang.String al() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public final java.lang.String am() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public final long an() {
            r2 = this;
            long r0 = r2.k
            return r0
    }

    public final int ao() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    public final int ap() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    public final java.lang.String ar() {
            r1 = this;
            java.lang.String r0 = r1.bg
            return r0
    }

    public final java.lang.String as() {
            r1 = this;
            java.lang.String r0 = r1.bh
            return r0
    }

    public final java.lang.String at() {
            r1 = this;
            java.lang.String r0 = r1.bi
            return r0
    }

    public final java.lang.String au() {
            r1 = this;
            java.lang.String r0 = r1.bj
            return r0
    }

    public final java.lang.String av() {
            r1 = this;
            java.lang.String r0 = r1.bk
            return r0
    }

    public final void aw() {
            r12 = this;
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            java.lang.String r1 = r12.bg
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L2c
            java.lang.String r1 = r12.bh
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2c
            java.lang.String r1 = r12.bi
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2c
            java.lang.String r1 = r12.bj
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2c
            r1 = r2
            goto L2d
        L2c:
            r1 = r3
        L2d:
            java.lang.String r4 = "确认关闭"
            java.lang.String r5 = "关闭后您将不会获得任何奖励噢~ "
            java.lang.String r6 = "确认关闭？"
            java.lang.String r7 = "zh"
            java.lang.String r8 = "Continue"
            java.lang.String r9 = "Close it"
            java.lang.String r10 = "You will not be rewarded after closing the window"
            java.lang.String r11 = "Confirm to close? "
            if (r1 != 0) goto L5e
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L56
            boolean r1 = r0.equals(r7)
            if (r1 == 0) goto L56
            r12.bg = r6
            r12.bh = r5
            r12.bi = r4
            java.lang.String r1 = "继续观看"
            r12.bj = r1
            goto L5e
        L56:
            r12.bg = r11
            r12.bh = r10
            r12.bi = r9
            r12.bj = r8
        L5e:
            java.lang.String r1 = r12.bg
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7f
            java.lang.String r1 = r12.bh
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7f
            java.lang.String r1 = r12.bi
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7f
            java.lang.String r1 = r12.bk
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7f
            goto L80
        L7f:
            r2 = r3
        L80:
            if (r2 != 0) goto La1
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L99
            boolean r0 = r0.equals(r7)
            if (r0 == 0) goto L99
            r12.bg = r6
            r12.bh = r5
            r12.bi = r4
            java.lang.String r0 = "继续试玩"
            r12.bk = r0
            goto La1
        L99:
            r12.bg = r11
            r12.bh = r10
            r12.bi = r9
            r12.bk = r8
        La1:
            return
    }

    public final java.lang.String ax() {
            r1 = this;
            java.lang.String r0 = r1.bs
            return r0
    }

    public final java.lang.String ay() {
            r1 = this;
            java.lang.String r0 = r1.bt
            return r0
    }

    public final java.lang.String az() {
            r1 = this;
            java.lang.String r0 = r1.bu
            return r0
    }

    public final int b() {
            r1 = this;
            int r0 = r1.Z
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.ai = r1
            return
    }

    public final void b(long r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.ay = r1
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.aT = r1
            return
    }

    public final int ba() {
            r1 = this;
            int r0 = r1.bQ
            return r0
    }

    public final int bb() {
            r1 = this;
            int r0 = r1.bS
            return r0
    }

    public final java.lang.String bc() {
            r1 = this;
            java.lang.String r0 = r1.bT
            return r0
    }

    public final java.lang.String bd() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L199
            r0.<init>()     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "cc"
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "upal"
            long r2 = r4.d     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "cfc"
            int r2 = r4.e     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "uplc"
            int r2 = r4.g     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "aa"
            boolean r2 = r4.h     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "cfb"
            boolean r2 = r4.j     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "plct"
            long r2 = r4.o     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "awct"
            long r2 = r4.p     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "rurl"
            boolean r2 = r4.n     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "ujds"
            boolean r2 = r4.r     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "plctb"
            long r2 = r4.v     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pcto"
            long r2 = r4.aZ     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "tcto"
            long r2 = r4.ba     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "wicon"
            int r2 = r4.x     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "wreq"
            int r2 = r4.y     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "apk_toast"
            java.lang.String r2 = r4.I     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "mv_wildcard"
            java.lang.String r2 = r4.J     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "is_startup_crashsystem"
            int r2 = r4.K     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "sfct"
            long r2 = r4.bd     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pcrn"
            int r2 = r4.w     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pcct"
            long r2 = r4.E     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "dlrf"
            int r2 = r4.C     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "dlrfct"
            long r2 = r4.D     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "upaid"
            int r2 = r4.bc     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pctn"
            int r2 = r4.be     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "ilrf"
            int r2 = r4.aY     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "iex"
            int r2 = r4.H     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "plc"
            int r2 = r4.F     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "dut"
            int r2 = r4.G     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "adct"
            int r2 = r4.bf     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "dlapk"
            int r2 = r4.aX     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pf"
            int r2 = r4.al     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pmax"
            int r2 = r4.an     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "pid"
            java.lang.String r2 = r4.ar     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "full"
            int r2 = r4.ao     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "add"
            int r2 = r4.ap     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "delete"
            int r2 = r4.aq     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "upmi"
            int r2 = r4.bb     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "upgd"
            int r2 = r4.au     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "upsrl"
            int r2 = r4.at     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "updevid"
            int r2 = r4.av     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "sc"
            int r2 = r4.aw     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "up_tips"
            int r2 = r4.ax     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "iseu"
            int r2 = r4.az     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "up_tips_url"
            java.lang.String r2 = r4.ay     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "jmc"
            int r2 = r4.aA     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "jmct"
            int r2 = r4.aC     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "atrqt"
            int r2 = r4.b     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "omsdkjs_url"
            java.lang.String r2 = r4.bB     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "mcs"
            int r2 = r4.aj     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "mcto"
            int r2 = r4.ai     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "GDPR_area"
            boolean r2 = r4.bJ     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "alrbs"
            int r2 = r4.bI     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "ct"
            int r2 = r4.bK     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "isDefault"
            int r2 = r4.bO     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "st_net"
            int r2 = r4.bS     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r1 = "vtag"
            java.lang.String r2 = r4.bT     // Catch: java.lang.Throwable -> L199
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L199
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L199
            goto L1a4
        L199:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "Setting"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r0 = 0
        L1a4:
            return r0
    }

    public final int c() {
            r1 = this;
            int r0 = r1.aa
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.aj = r1
            return
    }

    public final void c(long r1) {
            r0 = this;
            r0.bd = r1
            return
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.J = r1
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public final void d(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void d(long r1) {
            r0 = this;
            r0.aZ = r1
            return
    }

    public final void d(java.lang.String r1) {
            r0 = this;
            r0.ar = r1
            return
    }

    public final void d(boolean r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final boolean d() {
            r1 = this;
            boolean r0 = r1.ae
            return r0
    }

    public final int e() {
            r1 = this;
            int r0 = r1.U
            return r0
    }

    public final void e(int r1) {
            r0 = this;
            r0.aS = r1
            return
    }

    public final void e(long r1) {
            r0 = this;
            r0.ba = r1
            return
    }

    public final void e(java.lang.String r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public final void e(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final int f() {
            r1 = this;
            int r0 = r1.V
            return r0
    }

    public final void f(int r1) {
            r0 = this;
            r0.aR = r1
            return
    }

    public final void f(long r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final void f(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final int g() {
            r1 = this;
            int r0 = r1.W
            return r0
    }

    public final void g(int r1) {
            r0 = this;
            if (r1 <= 0) goto L4
            r0.aP = r1
        L4:
            return
    }

    public final void g(long r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public final void g(java.lang.String r1) {
            r0 = this;
            r0.bC = r1
            return
    }

    public final void g(boolean r1) {
            r0 = this;
            r0.bJ = r1
            return
    }

    public final int h() {
            r1 = this;
            int r0 = r1.X
            return r0
    }

    public final void h(int r1) {
            r0 = this;
            r0.aL = r1
            return
    }

    public final void h(long r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void h(java.lang.String r1) {
            r0 = this;
            r0.bB = r1
            return
    }

    public final int i() {
            r1 = this;
            int r0 = r1.Y
            return r0
    }

    public final void i(int r1) {
            r0 = this;
            r0.aM = r1
            return
    }

    public final int j() {
            r1 = this;
            int r0 = r1.T
            return r0
    }

    public final void j(int r1) {
            r0 = this;
            r0.aN = r1
            return
    }

    public final org.json.JSONArray k() {
            r1 = this;
            org.json.JSONArray r0 = r1.R
            return r0
    }

    public final void k(int r1) {
            r0 = this;
            r0.aO = r1
            return
    }

    public final org.json.JSONArray l() {
            r1 = this;
            org.json.JSONArray r0 = r1.S
            return r0
    }

    public final boolean l(int r2) {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.aW
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r2 = r0.contains(r2)
            return r2
    }

    public final int m() {
            r1 = this;
            int r0 = r1.Q
            return r0
    }

    public final void m(int r1) {
            r0 = this;
            r0.aC = r1
            return
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.b> n() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.b> r0 = r1.M
            return r0
    }

    public final void n(int r1) {
            r0 = this;
            r0.aA = r1
            return
    }

    public final java.lang.String o() {
            r1 = this;
            java.lang.String r0 = r1.ak
            return r0
    }

    public final void o(int r1) {
            r0 = this;
            r0.at = r1
            return
    }

    public final int p() {
            r1 = this;
            int r0 = r1.aj
            return r0
    }

    public final void p(int r1) {
            r0 = this;
            r0.au = r1
            return
    }

    public final int q() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final void q(int r1) {
            r0 = this;
            r0.av = r1
            return
    }

    public final void r(int r1) {
            r0 = this;
            r0.aw = r1
            return
    }

    public final boolean r() {
            r1 = this;
            boolean r0 = r1.aT
            return r0
    }

    public final org.json.JSONObject s() {
            r1 = this;
            org.json.JSONObject r0 = r1.aV
            return r0
    }

    public final void s(int r1) {
            r0 = this;
            r0.ax = r1
            return
    }

    public final int t() {
            r1 = this;
            int r0 = r1.aS
            return r0
    }

    public final void t(int r1) {
            r0 = this;
            r0.az = r1
            return
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cc="
            r0.append(r1)
            java.lang.String r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = " upal="
            r0.append(r1)
            long r1 = r3.d
            r0.append(r1)
            java.lang.String r1 = " cfc="
            r0.append(r1)
            int r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = " getpf="
            r0.append(r1)
            long r1 = r3.f
            r0.append(r1)
            java.lang.String r1 = " uplc="
            r0.append(r1)
            int r1 = r3.g
            r0.append(r1)
            java.lang.String r1 = " rurl="
            r0.append(r1)
            boolean r1 = r3.n
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final int u() {
            r1 = this;
            int r0 = r1.aR
            return r0
    }

    public final void u(int r1) {
            r0 = this;
            r0.K = r1
            return
    }

    public final java.lang.String v() {
            r1 = this;
            java.lang.String r0 = r1.aQ
            return r0
    }

    public final void v(int r1) {
            r0 = this;
            r0.aY = r1
            return
    }

    public final int w() {
            r1 = this;
            int r0 = r1.aP
            return r0
    }

    public final void w(int r1) {
            r0 = this;
            r0.aX = r1
            return
    }

    public final int x() {
            r1 = this;
            int r0 = r1.aL
            return r0
    }

    public final void x(int r1) {
            r0 = this;
            r0.al = r1
            return
    }

    public final int y() {
            r1 = this;
            int r0 = r1.aM
            return r0
    }

    public final void y(int r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public final int z() {
            r1 = this;
            int r0 = r1.aN
            return r0
    }

    public final void z(int r1) {
            r0 = this;
            r0.ao = r1
            return
    }
}
