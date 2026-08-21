package com.tkay.expressad.exoplayer.g.c;

public abstract class b implements com.tkay.expressad.exoplayer.g.a.a {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "SCTE-35 splice command: type="
            r0.<init>(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
