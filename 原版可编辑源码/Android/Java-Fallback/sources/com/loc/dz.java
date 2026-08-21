package com.loc;

public abstract class dz implements java.io.Serializable {
    public java.lang.String a;
    public java.lang.String b;
    public int c;
    public int d;
    public long e;
    public long f;
    public int g;
    public boolean h;
    public boolean i;

    public dz() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.a = r0
            r2.b = r0
            r0 = 99
            r2.c = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r2.d = r0
            r0 = 0
            r2.e = r0
            r2.f = r0
            r0 = 0
            r2.g = r0
            r0 = 1
            r2.i = r0
            return
    }

    public dz(boolean r3, boolean r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.a = r0
            r2.b = r0
            r0 = 99
            r2.c = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r2.d = r0
            r0 = 0
            r2.e = r0
            r2.f = r0
            r0 = 0
            r2.g = r0
            r0 = 1
            r2.i = r0
            r2.h = r3
            r2.i = r4
            return
    }

    private static int a(java.lang.String r0) {
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L5
            goto La
        L5:
            r0 = move-exception
            com.loc.ej.a(r0)
            r0 = 0
        La:
            return r0
    }

    public abstract com.loc.dz a();

    public final void a(com.loc.dz r3) {
            r2 = this;
            java.lang.String r0 = r3.a
            r2.a = r0
            java.lang.String r0 = r3.b
            r2.b = r0
            int r0 = r3.c
            r2.c = r0
            int r0 = r3.d
            r2.d = r0
            long r0 = r3.e
            r2.e = r0
            long r0 = r3.f
            r2.f = r0
            int r0 = r3.g
            r2.g = r0
            boolean r0 = r3.h
            r2.h = r0
            boolean r3 = r3.i
            r2.i = r3
            return
    }

    public final int b() {
            r1 = this;
            java.lang.String r0 = r1.a
            int r0 = a(r0)
            return r0
    }

    public final int c() {
            r1 = this;
            java.lang.String r0 = r1.b
            int r0 = a(r0)
            return r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.loc.dz r0 = r1.a()
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AmapCell{mcc="
            r0.<init>(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", mnc="
            r0.append(r1)
            java.lang.String r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = ", signalStrength="
            r0.append(r1)
            int r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = ", asulevel="
            r0.append(r1)
            int r1 = r3.d
            r0.append(r1)
            java.lang.String r1 = ", lastUpdateSystemMills="
            r0.append(r1)
            long r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = ", lastUpdateUtcMills="
            r0.append(r1)
            long r1 = r3.f
            r0.append(r1)
            java.lang.String r1 = ", age="
            r0.append(r1)
            int r1 = r3.g
            r0.append(r1)
            java.lang.String r1 = ", main="
            r0.append(r1)
            boolean r1 = r3.h
            r0.append(r1)
            java.lang.String r1 = ", newapi="
            r0.append(r1)
            boolean r1 = r3.i
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
