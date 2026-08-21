package com.tencent.bugly.proguard;

import java.io.Serializable;

public final class t implements Serializable, Comparable<t> {
    public long a;
    public String b;
    public long c;
    public int d;
    public String e;
    public String f;
    public long g;

    @Override
    public final int compareTo(t tVar) {
        return (int) (this.c - tVar.c);
    }
}
