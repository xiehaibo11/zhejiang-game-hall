package com.tencent.bugly.proguard;

public final class t implements java.io.Serializable, java.lang.Comparable<com.tencent.bugly.proguard.t> {
    public long a;
    public java.lang.String b;
    public long c;
    public int d;
    public java.lang.String e;
    public java.lang.String f;
    public long g;

    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final int compareTo(com.tencent.bugly.proguard.t r5) {
            r4 = this;
            com.tencent.bugly.proguard.t r5 = (com.tencent.bugly.proguard.t) r5
            long r0 = r4.c
            long r2 = r5.c
            long r0 = r0 - r2
            int r5 = (int) r0
            return r5
    }
}
