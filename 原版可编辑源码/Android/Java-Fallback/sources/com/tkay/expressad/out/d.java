package com.tkay.expressad.out;

public class d implements com.tkay.expressad.e.a, com.tkay.expressad.foundation.g.d.c, java.io.Serializable {
    private static final long a = 1;
    public static final int cR = 1;
    public static final int cS = 2;
    public static final int cT = 3;
    private java.lang.String b;
    private java.lang.String c;
    public java.lang.String cU;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private long i;
    private double j;
    private int k;
    private java.lang.Object l;
    private int m;
    private java.lang.String n;
    private android.graphics.drawable.Drawable o;
    private android.graphics.drawable.Drawable p;
    private com.tkay.expressad.out.k q;
    private int r;
    private int s;
    private int t;

    public d() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.b = r0
            r2.c = r0
            r2.d = r0
            r2.e = r0
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r0 = 0
            r2.i = r0
            r0 = 33333(0x8235, float:4.671E-41)
            r2.k = r0
            r0 = 1
            r2.m = r0
            r0 = 0
            r2.r = r0
            r2.s = r0
            r2.t = r0
            return
    }

    private android.graphics.drawable.Drawable a() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.o
            return r0
    }

    private static android.graphics.drawable.Drawable a(android.graphics.Bitmap r1) {
            android.graphics.drawable.BitmapDrawable r0 = new android.graphics.drawable.BitmapDrawable
            r0.<init>(r1)
            return r0
    }

    private void a(int r1) {
            r0 = this;
            r0.r = r1
            return
    }

    private void a(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private void a(com.tkay.expressad.out.k r2) {
            r1 = this;
            r1.q = r2
            java.lang.String r2 = r1.g
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1b
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            java.lang.String r0 = r1.g
            r2.a(r0, r1)
        L1b:
            return
    }

    private void a(java.lang.Object r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    private android.graphics.drawable.Drawable b() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.p
            return r0
    }

    private void b(int r1) {
            r0 = this;
            r0.s = r1
            return
    }

    private void b(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.p = r1
            return
    }

    private void b(com.tkay.expressad.out.k r2) {
            r1 = this;
            r1.q = r2
            java.lang.String r2 = r1.h
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1b
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            java.lang.String r0 = r1.h
            r2.a(r0, r1)
        L1b:
            return
    }

    private java.lang.Object c() {
            r1 = this;
            java.lang.Object r0 = r1.l
            return r0
    }

    private void c(com.tkay.expressad.out.k r1) {
            r0 = this;
            r0.q = r1
            return
    }

    private java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.cU
            return r0
    }

    private int e() {
            r1 = this;
            int r0 = r1.r
            return r0
    }

    private int f() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    private java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public final void A(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void B(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void a(double r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public final void a(android.graphics.Bitmap r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = r1.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1f
            java.lang.String r0 = r1.h
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L1f
            if (r2 == 0) goto L1f
            android.graphics.drawable.Drawable r0 = a(r2)
            r1.p = r0
            com.tkay.expressad.out.k r0 = r1.q
            if (r0 == 0) goto L1f
            a(r2)
        L1f:
            java.lang.String r0 = r1.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L40
            java.lang.String r0 = r1.g
            if (r0 == 0) goto L40
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L40
            if (r2 == 0) goto L40
            android.graphics.drawable.Drawable r3 = a(r2)
            r1.o = r3
            com.tkay.expressad.out.k r3 = r1.q
            if (r3 == 0) goto L40
            a(r2)
        L40:
            return
    }

    @Override
    public final void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public final double aX() {
            r2 = this;
            double r0 = r2.j
            return r0
    }

    public final int aY() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final java.lang.String aZ() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final java.lang.String ba() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final java.lang.String bb() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public final java.lang.String bc() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final java.lang.String bd() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public final java.lang.String be() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final int bf() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public final long bg() {
            r2 = this;
            long r0 = r2.i
            return r0
    }

    public final java.lang.String bh() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final int bi() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    public final void o(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void o(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r1.cU = r2
            return
    }

    public final void p(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final void q(int r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public final void v(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void w(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void x(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void y(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void z(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }
}
