package com.loc;

public final class eq implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.loc.eq> CREATOR = null;
    private long a;
    private long b;
    private long c;
    private long d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;


    static {
            com.loc.eq$1 r0 = new com.loc.eq$1
            r0.<init>()
            com.loc.eq.CREATOR = r0
            return
    }

    public eq() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            r2.c = r0
            r2.d = r0
            java.lang.String r0 = "first"
            r2.g = r0
            java.lang.String r0 = ""
            r2.h = r0
            r2.i = r0
            r0 = 0
            r2.j = r0
            return
    }

    public final long a() {
            r9 = this;
            long r0 = r9.d
            long r2 = r9.c
            long r4 = r0 - r2
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 > 0) goto Ld
            return r6
        Ld:
            long r0 = r0 - r2
            return r0
    }

    public final void a(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public final void b(long r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public final void c(long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final void d(long r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void d(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final void e(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public final void f(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final long h() {
            r5 = this;
            long r0 = r5.b
            long r2 = r5.a
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto Lb
            r0 = 0
            return r0
        Lb:
            long r0 = r0 - r2
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.e     // Catch: java.lang.Throwable -> L32
            r3.writeString(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r2.f     // Catch: java.lang.Throwable -> L32
            r3.writeString(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r2.g     // Catch: java.lang.Throwable -> L32
            r3.writeString(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r2.h     // Catch: java.lang.Throwable -> L32
            r3.writeString(r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r2.j     // Catch: java.lang.Throwable -> L32
            r3.writeString(r4)     // Catch: java.lang.Throwable -> L32
            long r0 = r2.a     // Catch: java.lang.Throwable -> L32
            r3.writeLong(r0)     // Catch: java.lang.Throwable -> L32
            long r0 = r2.b     // Catch: java.lang.Throwable -> L32
            r3.writeLong(r0)     // Catch: java.lang.Throwable -> L32
            long r0 = r2.c     // Catch: java.lang.Throwable -> L32
            r3.writeLong(r0)     // Catch: java.lang.Throwable -> L32
            long r0 = r2.d     // Catch: java.lang.Throwable -> L32
            r3.writeLong(r0)     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r2.i     // Catch: java.lang.Throwable -> L32
            r3.writeString(r4)     // Catch: java.lang.Throwable -> L32
        L32:
            return
    }
}
