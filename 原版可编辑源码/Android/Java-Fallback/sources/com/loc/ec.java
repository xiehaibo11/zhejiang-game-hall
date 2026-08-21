package com.loc;

public final class ec extends com.loc.dz implements java.io.Serializable {
    public int j;
    public int k;
    public int l;
    public int m;
    public int n;

    public ec() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.j = r0
            r1.k = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.l = r0
            r1.m = r0
            r1.n = r0
            return
    }

    public ec(boolean r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            r2 = 0
            r1.j = r2
            r1.k = r2
            r2 = 2147483647(0x7fffffff, float:NaN)
            r1.l = r2
            r1.m = r2
            r1.n = r2
            return
    }

    @Override
    public final com.loc.dz a() {
            r2 = this;
            com.loc.ec r0 = new com.loc.ec
            boolean r1 = r2.h
            r0.<init>(r1)
            r0.a(r2)
            int r1 = r2.j
            r0.j = r1
            int r1 = r2.k
            r0.k = r1
            int r1 = r2.l
            r0.l = r1
            int r1 = r2.m
            r0.m = r1
            int r1 = r2.n
            r0.n = r1
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
            java.lang.String r1 = "AmapCellLte{tac="
            r0.<init>(r1)
            int r1 = r3.j
            r0.append(r1)
            java.lang.String r1 = ", ci="
            r0.append(r1)
            int r1 = r3.k
            r0.append(r1)
            java.lang.String r1 = ", pci="
            r0.append(r1)
            int r1 = r3.l
            r0.append(r1)
            java.lang.String r1 = ", earfcn="
            r0.append(r1)
            int r1 = r3.m
            r0.append(r1)
            java.lang.String r1 = ", timingAdvance="
            r0.append(r1)
            int r1 = r3.n
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
