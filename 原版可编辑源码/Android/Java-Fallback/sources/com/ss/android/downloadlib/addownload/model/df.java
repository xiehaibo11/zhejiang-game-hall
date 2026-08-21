package com.ss.android.downloadlib.addownload.model;

public class df {
    public java.lang.String c;
    public long df;
    public java.lang.String fw;
    public java.lang.String pp;
    public java.lang.String pt;
    public java.lang.String q;
    public long rg;
    public java.lang.String rz;
    public final java.util.List<android.util.Pair<java.lang.String, java.lang.String>> ux;

    public df() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.ux = r0
            return
    }

    public static long rg(long r2, long r4) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L7
            goto L8
        L7:
            r2 = r4
        L8:
            return r2
    }

    public long rg() {
            r4 = this;
            long r0 = r4.rg
            long r2 = r4.df
            long r0 = rg(r0, r2)
            return r0
    }
}
