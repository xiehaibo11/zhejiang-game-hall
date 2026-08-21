package com.loc;

public final class ed extends com.loc.dz implements java.io.Serializable {
    public int j;
    public int k;
    public int l;
    public int m;

    public ed() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.j = r0
            r1.k = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.l = r0
            r1.m = r0
            return
    }

    public ed(boolean r1, boolean r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.j = r1
            r0.k = r1
            r1 = 2147483647(0x7fffffff, float:NaN)
            r0.l = r1
            r0.m = r1
            return
    }

    @Override
    public final com.loc.dz a() {
            r3 = this;
            com.loc.ed r0 = new com.loc.ed
            boolean r1 = r3.h
            boolean r2 = r3.i
            r0.<init>(r1, r2)
            r0.a(r3)
            int r1 = r3.j
            r0.j = r1
            int r1 = r3.k
            r0.k = r1
            int r1 = r3.l
            r0.l = r1
            int r1 = r3.m
            r0.m = r1
            return r0
    }

    @Override
    public final java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.loc.dz r0 = r1.a()
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AmapCellWcdma{lac="
            r0.<init>(r1)
            int r1 = r3.j
            r0.append(r1)
            java.lang.String r1 = ", cid="
            r0.append(r1)
            int r1 = r3.k
            r0.append(r1)
            java.lang.String r1 = ", psc="
            r0.append(r1)
            int r1 = r3.l
            r0.append(r1)
            java.lang.String r1 = ", uarfcn="
            r0.append(r1)
            int r1 = r3.m
            r0.append(r1)
            java.lang.String r1 = ", mcc='"
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mnc='"
            r0.append(r2)
            java.lang.String r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", signalStrength="
            r0.append(r1)
            int r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = ", asuLevel="
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
            java.lang.String r1 = ", newApi="
            r0.append(r1)
            boolean r1 = r3.i
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
