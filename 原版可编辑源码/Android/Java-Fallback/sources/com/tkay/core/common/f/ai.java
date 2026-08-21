package com.tkay.core.common.f;

public abstract class ai {
    public static final java.lang.String O = "ofm_tid_key";
    public static final int P = 1;
    public static final int Q = 2;
    public static final int R = 3;
    public static final int S = 4;
    public static final int T = 5;
    public static final int U = 6;
    public static final int V = 7;
    public static final int W = 8;
    public static final int X = 10;
    public static final int Y = 0;
    public static final int Z = 1;
    public static final int aa = 2;
    public static final int ab = 3;
    public static final int ac = 4;
    public static final int ad = 5;
    public static final int ae = 8;
    public static final java.lang.String af = "0";
    public static final java.lang.String ag = "1";
    public static final java.lang.String ah = "2";
    public static final java.lang.String ai = "3";
    public static final java.lang.String aj = "4";
    private java.lang.String a;
    protected java.lang.String ak;
    protected java.lang.String al;
    protected java.lang.String am;
    protected java.lang.String an;
    public java.lang.String ao;
    public int ap;
    public int aq;
    protected java.lang.String ar;
    protected int as;
    protected int at;
    protected int au;
    protected int av;
    private java.lang.String b;
    private int c;
    private org.json.JSONObject d;

    public ai() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.av = r0
            return
    }

    private org.json.JSONObject a() {
            r1 = this;
            org.json.JSONObject r0 = r1.d
            return r0
    }

    private void a(int r1) {
            r0 = this;
            r0.ap = r1
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.ao = r1
            return
    }

    private int b() {
            r1 = this;
            int r0 = r1.au
            return r0
    }

    private void b(int r1) {
            r0 = this;
            r0.aq = r1
            return
    }

    private int c() {
            r1 = this;
            int r0 = r1.as
            return r0
    }

    private java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.ao
            return r0
    }

    private int e() {
            r1 = this;
            int r0 = r1.ap
            return r0
    }

    private int f() {
            r1 = this;
            int r0 = r1.aq
            return r0
    }

    public org.json.JSONObject A(int r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "type"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "pl_id"
            java.lang.String r1 = r2.ak     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "req_id"
            java.lang.String r1 = r2.al     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = r2.am     // Catch: java.lang.Exception -> L94
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L94
            if (r3 != 0) goto L2b
            java.lang.String r3 = "format"
            java.lang.String r1 = r2.am     // Catch: java.lang.Exception -> L94
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
        L2b:
            java.lang.String r3 = "ps_id"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = r1.q()     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = r2.ak     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = r3.g(r1)     // Catch: java.lang.Exception -> L94
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L94
            if (r1 != 0) goto L4d
            java.lang.String r1 = "sessionid"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L94
        L4d:
            int r3 = r2.av     // Catch: java.lang.Exception -> L94
            r1 = -1
            if (r3 == r1) goto L59
            java.lang.String r3 = "traffic_group_id"
            int r1 = r2.av     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
        L59:
            int r3 = r2.au     // Catch: java.lang.Exception -> L94
            r1 = 1
            if (r3 != r1) goto L73
            java.lang.String r3 = "ofm_tid"
            int r1 = r2.at     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "ofm_system"
            int r1 = r2.as     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "is_ofm"
            int r1 = r2.au     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
        L73:
            java.lang.String r3 = "asid"
            java.lang.String r1 = r2.an     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "wf_id"
            java.lang.String r1 = r2.a     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r3 = "cp_pl_id"
            java.lang.String r1 = r2.b     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            org.json.JSONObject r3 = r2.d     // Catch: java.lang.Exception -> L94
            if (r3 == 0) goto L98
            java.lang.String r3 = "p_c"
            org.json.JSONObject r1 = r2.d     // Catch: java.lang.Exception -> L94
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L94
            goto L98
        L94:
            r3 = move-exception
            r3.printStackTrace()
        L98:
            return r0
    }

    public final void B(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void C(int r1) {
            r0 = this;
            r0.au = r1
            return
    }

    public final void D(int r1) {
            r0 = this;
            r0.at = r1
            return
    }

    public final void E(int r1) {
            r0 = this;
            r0.av = r1
            return
    }

    public final int O() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final java.lang.String P() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final java.lang.String Q() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final void R() {
            r1 = this;
            r0 = 1
            r1.as = r0
            return
    }

    public final int S() {
            r1 = this;
            int r0 = r1.at
            return r0
    }

    public final java.lang.String T() {
            r1 = this;
            java.lang.String r0 = r1.ar
            return r0
    }

    public final int U() {
            r1 = this;
            int r0 = r1.av
            return r0
    }

    public final java.lang.String V() {
            r1 = this;
            java.lang.String r0 = r1.an
            return r0
    }

    public final java.lang.String W() {
            r1 = this;
            java.lang.String r0 = r1.ak
            return r0
    }

    public final java.lang.String X() {
            r1 = this;
            java.lang.String r0 = r1.al
            return r0
    }

    public final java.lang.String Y() {
            r1 = this;
            java.lang.String r0 = r1.am
            return r0
    }

    public final java.lang.String Z() {
            r6 = this;
            java.lang.String r0 = r6.am
            int r1 = r0.hashCode()
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r1) {
                case 48: goto L36;
                case 49: goto L2c;
                case 50: goto L22;
                case 51: goto L18;
                case 52: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L40
        Le:
            java.lang.String r1 = "4"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L40
            r0 = r2
            goto L41
        L18:
            java.lang.String r1 = "3"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L40
            r0 = r3
            goto L41
        L22:
            java.lang.String r1 = "2"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L40
            r0 = r4
            goto L41
        L2c:
            java.lang.String r1 = "1"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L40
            r0 = r5
            goto L41
        L36:
            java.lang.String r1 = "0"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L40
            r0 = 0
            goto L41
        L40:
            r0 = -1
        L41:
            if (r0 == 0) goto L5a
            if (r0 == r5) goto L57
            if (r0 == r4) goto L54
            if (r0 == r3) goto L51
            if (r0 == r2) goto L4e
            java.lang.String r0 = "none"
            return r0
        L4e:
            java.lang.String r0 = "splash"
            return r0
        L51:
            java.lang.String r0 = "inter"
            return r0
        L54:
            java.lang.String r0 = "banner"
            return r0
        L57:
            java.lang.String r0 = "reward"
            return r0
        L5a:
            java.lang.String r0 = "native"
            return r0
    }

    public final void a(org.json.JSONObject r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void t(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void u(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void v(java.lang.String r1) {
            r0 = this;
            r0.ar = r1
            return
    }

    public final void w(java.lang.String r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public final void x(java.lang.String r1) {
            r0 = this;
            r0.ak = r1
            return
    }

    public final void y(java.lang.String r1) {
            r0 = this;
            r0.al = r1
            return
    }

    public final void z(java.lang.String r1) {
            r0 = this;
            r0.am = r1
            return
    }
}
