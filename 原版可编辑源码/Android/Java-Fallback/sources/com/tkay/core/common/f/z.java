package com.tkay.core.common.f;

public abstract class z extends com.tkay.core.common.f.h<com.tkay.core.common.f.aa> {
    public static final int X = 1;
    public static final int Y = 2;
    public static final int Z = 3;
    public static final int aa = 4;
    public static final int ab = 5;
    public static final int ac = 6;
    private int R;
    private int S;
    long T;
    java.lang.String U;
    java.lang.String V;
    int W;
    private int a;
    java.lang.String ad;
    java.lang.String ae;
    com.tkay.core.common.f.ab af;
    int ag;
    java.lang.String ah;
    long ai;
    long aj;
    long ak;
    java.lang.String al;
    private java.lang.String am;
    private java.lang.String an;
    private java.lang.String ao;
    private java.lang.String ap;
    private java.lang.String aq;
    private int ar;
    private int as;
    private int b;

    public z() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.al = r0
            return
    }

    private int a() {
            r1 = this;
            int r0 = r1.ag
            return r0
    }

    private java.util.List<java.lang.String> a(com.tkay.core.common.f.aa r9) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            int r2 = r9.t()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "1"
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            r3 = 1
            java.lang.String r4 = "full_u,"
            r5 = 0
            if (r2 == 0) goto L67
            boolean r2 = r8.g()
            if (r2 != 0) goto L51
            java.lang.String r2 = r8.l
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L31
            java.lang.String r2 = r8.l
            r0.add(r2)
        L31:
            java.lang.String r2 = r8.o
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3e
            java.lang.String r2 = r8.o
            r0.add(r2)
        L3e:
            java.lang.String r2 = r8.n
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L4c
            java.lang.String r2 = r8.n
            r0.add(r2)
            goto L51
        L4c:
            r1.append(r4)
            r2 = r5
            goto L52
        L51:
            r2 = r3
        L52:
            java.lang.String r6 = r8.q
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L60
            java.lang.String r6 = r8.q
            r0.add(r6)
            goto L68
        L60:
            java.lang.String r2 = "video_u,"
            r1.append(r2)
            r2 = r5
            goto L68
        L67:
            r2 = r3
        L68:
            int r6 = r9.t()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r7 = "3"
            boolean r6 = android.text.TextUtils.equals(r6, r7)
            if (r6 == 0) goto Lb5
            boolean r6 = r8.g()
            if (r6 != 0) goto Laa
            java.lang.String r6 = r8.l
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L8b
            java.lang.String r6 = r8.l
            r0.add(r6)
        L8b:
            java.lang.String r6 = r8.o
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L98
            java.lang.String r6 = r8.o
            r0.add(r6)
        L98:
            java.lang.String r6 = r8.n
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto La6
            java.lang.String r6 = r8.n
            r0.add(r6)
            goto Laa
        La6:
            r1.append(r4)
            r2 = r5
        Laa:
            boolean r6 = r8.E()
            if (r6 == 0) goto Lb5
            java.lang.String r6 = r8.q
            r0.add(r6)
        Lb5:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            int r7 = r9.t()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "2"
            boolean r6 = android.text.TextUtils.equals(r6, r7)
            if (r6 == 0) goto L13a
            int r6 = r8.W
            if (r6 == r3) goto L11b
            r7 = 2
            if (r6 == r7) goto L10d
            r7 = 3
            if (r6 == r7) goto Ldb
            r7 = 4
            if (r6 == r7) goto L10d
            goto L12d
        Ldb:
            java.lang.String r6 = r9.r()
            java.lang.String r7 = "320x50"
            boolean r6 = android.text.TextUtils.equals(r7, r6)
            if (r6 == 0) goto Lfb
            java.lang.String r6 = r8.l
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto Lf5
            java.lang.String r6 = r8.l
            r0.add(r6)
            goto L12d
        Lf5:
            java.lang.String r2 = "icon_u,"
            r1.append(r2)
            goto L12c
        Lfb:
            java.lang.String r6 = r8.n
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L109
            java.lang.String r6 = r8.n
            r0.add(r6)
            goto L12d
        L109:
            r1.append(r4)
            goto L12c
        L10d:
            java.lang.String r6 = r8.ad
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L12d
            java.lang.String r2 = "img_list,"
            r1.append(r2)
            goto L12c
        L11b:
            java.lang.String r6 = r8.n
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L129
            java.lang.String r6 = r8.n
            r0.add(r6)
            goto L12d
        L129:
            r1.append(r4)
        L12c:
            r2 = r5
        L12d:
            java.lang.String r6 = r8.o
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L13a
            java.lang.String r6 = r8.o
            r0.add(r6)
        L13a:
            int r9 = r9.t()
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r6 = "4"
            boolean r9 = android.text.TextUtils.equals(r9, r6)
            if (r9 == 0) goto L17a
            int r9 = r8.W
            if (r3 == r9) goto L15b
            java.lang.String r9 = r8.l
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L15b
            java.lang.String r9 = r8.l
            r0.add(r9)
        L15b:
            java.lang.String r9 = r8.o
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L168
            java.lang.String r9 = r8.o
            r0.add(r9)
        L168:
            java.lang.String r9 = r8.n
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L176
            java.lang.String r9 = r8.n
            r0.add(r9)
            goto L17a
        L176:
            r1.append(r4)
            r2 = r5
        L17a:
            if (r2 == 0) goto L17d
            return r0
        L17d:
            int r9 = r1.length()
            int r9 = r9 - r3
            java.lang.String r9 = r1.substring(r5, r9)
            r8.al = r9
            r9 = 0
            return r9
    }

    private void a(int r1) {
            r0 = this;
            r0.ag = r1
            return
    }

    private java.lang.String ab() {
            r1 = this;
            java.lang.String r0 = r1.V
            return r0
    }

    private java.lang.String ac() {
            r1 = this;
            java.lang.String r0 = r1.ae
            return r0
    }

    private int ad() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    private int ae() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    private int af() {
            r1 = this;
            int r0 = r1.R
            return r0
    }

    private int ag() {
            r1 = this;
            int r0 = r1.S
            return r0
    }

    private long b() {
            r2 = this;
            long r0 = r2.T
            return r0
    }

    private java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.U
            return r0
    }

    public final void E(java.lang.String r1) {
            r0 = this;
            r0.am = r1
            return
    }

    public final void F(java.lang.String r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public final void G(java.lang.String r1) {
            r0 = this;
            r0.ao = r1
            return
    }

    public final void H(java.lang.String r1) {
            r0 = this;
            r0.ap = r1
            return
    }

    public final void I(java.lang.String r1) {
            r0 = this;
            r0.aq = r1
            return
    }

    public final void J(java.lang.String r1) {
            r0 = this;
            r0.U = r1
            return
    }

    public final void K(java.lang.String r1) {
            r0 = this;
            r0.V = r1
            return
    }

    public final void L(java.lang.String r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    public final void M(java.lang.String r1) {
            r0 = this;
            r0.ae = r1
            return
    }

    public final void N(java.lang.String r1) {
            r0 = this;
            r0.ah = r1
            return
    }

    public final boolean N() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.aj
            long r0 = r0 - r2
            long r2 = r4.ai
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public final long O() {
            r2 = this;
            long r0 = r2.ak
            return r0
    }

    public final long P() {
            r2 = this;
            long r0 = r2.ai
            return r0
    }

    public final java.lang.String Q() {
            r1 = this;
            java.lang.String r0 = r1.am
            return r0
    }

    public final java.lang.String R() {
            r1 = this;
            java.lang.String r0 = r1.an
            return r0
    }

    public final java.lang.String S() {
            r1 = this;
            java.lang.String r0 = r1.ao
            return r0
    }

    public final java.lang.String T() {
            r1 = this;
            java.lang.String r0 = r1.ap
            return r0
    }

    public final java.lang.String U() {
            r1 = this;
            java.lang.String r0 = r1.aq
            return r0
    }

    public final int V() {
            r1 = this;
            int r0 = r1.ar
            return r0
    }

    public final int W() {
            r1 = this;
            int r0 = r1.as
            return r0
    }

    public final com.tkay.core.common.f.ab X() {
            r1 = this;
            com.tkay.core.common.f.ab r0 = r1.af
            return r0
    }

    public final int Y() {
            r1 = this;
            int r0 = r1.W
            return r0
    }

    public final java.lang.String Z() {
            r1 = this;
            java.lang.String r0 = r1.ad
            return r0
    }

    public final void a(long r1) {
            r0 = this;
            r0.ai = r1
            return
    }

    public final void a(com.tkay.core.common.f.ab r1) {
            r0 = this;
            r0.af = r1
            return
    }

    public final boolean a(boolean r3, boolean r4) {
            r2 = this;
            r0 = 0
            r1 = 1
            if (r3 == 0) goto L12
            if (r4 == 0) goto Lc
            int r3 = r2.a
            if (r3 != r1) goto Lb
            return r1
        Lb:
            return r0
        Lc:
            int r3 = r2.b
            if (r3 != r1) goto L11
            return r1
        L11:
            return r0
        L12:
            if (r4 == 0) goto L1a
            int r3 = r2.R
            if (r3 != r1) goto L19
            return r1
        L19:
            return r0
        L1a:
            int r3 = r2.S
            if (r3 != r1) goto L1f
            return r1
        L1f:
            return r0
    }

    public final java.lang.String aa() {
            r1 = this;
            java.lang.String r0 = r1.ah
            return r0
    }

    @Override
    public final java.util.List b(com.tkay.core.common.f.j r9) {
            r8 = this;
            com.tkay.core.common.f.aa r9 = (com.tkay.core.common.f.aa) r9
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            int r2 = r9.t()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "1"
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            r3 = 1
            java.lang.String r4 = "full_u,"
            r5 = 0
            if (r2 == 0) goto L69
            boolean r2 = r8.g()
            if (r2 != 0) goto L53
            java.lang.String r2 = r8.l
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L33
            java.lang.String r2 = r8.l
            r0.add(r2)
        L33:
            java.lang.String r2 = r8.o
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            java.lang.String r2 = r8.o
            r0.add(r2)
        L40:
            java.lang.String r2 = r8.n
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L4e
            java.lang.String r2 = r8.n
            r0.add(r2)
            goto L53
        L4e:
            r1.append(r4)
            r2 = r5
            goto L54
        L53:
            r2 = r3
        L54:
            java.lang.String r6 = r8.q
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L62
            java.lang.String r6 = r8.q
            r0.add(r6)
            goto L6a
        L62:
            java.lang.String r2 = "video_u,"
            r1.append(r2)
            r2 = r5
            goto L6a
        L69:
            r2 = r3
        L6a:
            int r6 = r9.t()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r7 = "3"
            boolean r6 = android.text.TextUtils.equals(r6, r7)
            if (r6 == 0) goto Lb7
            boolean r6 = r8.g()
            if (r6 != 0) goto Lac
            java.lang.String r6 = r8.l
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L8d
            java.lang.String r6 = r8.l
            r0.add(r6)
        L8d:
            java.lang.String r6 = r8.o
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L9a
            java.lang.String r6 = r8.o
            r0.add(r6)
        L9a:
            java.lang.String r6 = r8.n
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto La8
            java.lang.String r6 = r8.n
            r0.add(r6)
            goto Lac
        La8:
            r1.append(r4)
            r2 = r5
        Lac:
            boolean r6 = r8.E()
            if (r6 == 0) goto Lb7
            java.lang.String r6 = r8.q
            r0.add(r6)
        Lb7:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            int r7 = r9.t()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "2"
            boolean r6 = android.text.TextUtils.equals(r6, r7)
            if (r6 == 0) goto L13c
            int r6 = r8.W
            if (r6 == r3) goto L11d
            r7 = 2
            if (r6 == r7) goto L10f
            r7 = 3
            if (r6 == r7) goto Ldd
            r7 = 4
            if (r6 == r7) goto L10f
            goto L12f
        Ldd:
            java.lang.String r6 = r9.r()
            java.lang.String r7 = "320x50"
            boolean r6 = android.text.TextUtils.equals(r7, r6)
            if (r6 == 0) goto Lfd
            java.lang.String r6 = r8.l
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto Lf7
            java.lang.String r6 = r8.l
            r0.add(r6)
            goto L12f
        Lf7:
            java.lang.String r2 = "icon_u,"
            r1.append(r2)
            goto L12e
        Lfd:
            java.lang.String r6 = r8.n
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L10b
            java.lang.String r6 = r8.n
            r0.add(r6)
            goto L12f
        L10b:
            r1.append(r4)
            goto L12e
        L10f:
            java.lang.String r6 = r8.ad
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L12f
            java.lang.String r2 = "img_list,"
            r1.append(r2)
            goto L12e
        L11d:
            java.lang.String r6 = r8.n
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L12b
            java.lang.String r6 = r8.n
            r0.add(r6)
            goto L12f
        L12b:
            r1.append(r4)
        L12e:
            r2 = r5
        L12f:
            java.lang.String r6 = r8.o
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L13c
            java.lang.String r6 = r8.o
            r0.add(r6)
        L13c:
            int r9 = r9.t()
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r6 = "4"
            boolean r9 = android.text.TextUtils.equals(r9, r6)
            if (r9 == 0) goto L17c
            int r9 = r8.W
            if (r3 == r9) goto L15d
            java.lang.String r9 = r8.l
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L15d
            java.lang.String r9 = r8.l
            r0.add(r9)
        L15d:
            java.lang.String r9 = r8.o
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L16a
            java.lang.String r9 = r8.o
            r0.add(r9)
        L16a:
            java.lang.String r9 = r8.n
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L178
            java.lang.String r9 = r8.n
            r0.add(r9)
            goto L17c
        L178:
            r1.append(r4)
            r2 = r5
        L17c:
            if (r2 == 0) goto L17f
            return r0
        L17f:
            int r9 = r1.length()
            int r9 = r9 - r3
            java.lang.String r9 = r1.substring(r5, r9)
            r8.al = r9
            r9 = 0
            return r9
    }

    public final void b(long r1) {
            r0 = this;
            r0.aj = r1
            return
    }

    public final void c(long r1) {
            r0 = this;
            r0.ak = r1
            return
    }

    public final void d(long r1) {
            r0 = this;
            r0.T = r1
            return
    }

    public final void h(int r1) {
            r0 = this;
            r0.ar = r1
            return
    }

    public final void i(int r1) {
            r0 = this;
            r0.as = r1
            return
    }

    public final void j(int r1) {
            r0 = this;
            r0.W = r1
            return
    }

    public final void k(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void l(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public final java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.al
            return r0
    }

    public final void m(int r1) {
            r0 = this;
            r0.R = r1
            return
    }

    public final void n(int r1) {
            r0 = this;
            r0.S = r1
            return
    }
}
