package com.alibaba.sdk.android.oss.model;

public class Range {
    public static final long INFINITE = -1;
    private long begin;
    private long end;

    public Range(long r1, long r3) {
            r0 = this;
            r0.<init>()
            r0.setBegin(r1)
            r0.setEnd(r3)
            return
    }

    public boolean checkIsValid() {
            r8 = this;
            long r0 = r8.begin
            r2 = 0
            r3 = -1
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 < 0) goto L21
            long r5 = r8.end
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 >= 0) goto L10
            goto L21
        L10:
            r3 = 0
            int r7 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r7 < 0) goto L1f
            int r7 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r7 < 0) goto L1f
            int r3 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r3 <= 0) goto L1f
            return r2
        L1f:
            r0 = 1
            return r0
        L21:
            return r2
    }

    public long getBegin() {
            r2 = this;
            long r0 = r2.begin
            return r0
    }

    public long getEnd() {
            r2 = this;
            long r0 = r2.end
            return r0
    }

    public void setBegin(long r1) {
            r0 = this;
            r0.begin = r1
            return
    }

    public void setEnd(long r1) {
            r0 = this;
            r0.end = r1
            return
    }

    public java.lang.String toString() {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bytes="
            r0.append(r1)
            long r1 = r7.begin
            java.lang.String r3 = ""
            r4 = -1
            int r6 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r6 != 0) goto L16
            r1 = r3
            goto L1a
        L16:
            java.lang.String r1 = java.lang.String.valueOf(r1)
        L1a:
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            long r1 = r7.end
            int r6 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r6 != 0) goto L29
            goto L2d
        L29:
            java.lang.String r3 = java.lang.String.valueOf(r1)
        L2d:
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
