package com.bumptech.glide.util;

public class MultiClassKey {
    private java.lang.Class<?> first;
    private java.lang.Class<?> second;

    public MultiClassKey() {
            r0 = this;
            r0.<init>()
            return
    }

    public MultiClassKey(java.lang.Class<?> r1, java.lang.Class<?> r2) {
            r0 = this;
            r0.<init>()
            r0.set(r1, r2)
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2b
        L12:
            com.bumptech.glide.util.MultiClassKey r5 = (com.bumptech.glide.util.MultiClassKey) r5
            java.lang.Class<?> r2 = r4.first
            java.lang.Class<?> r3 = r5.first
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L1f
            return r1
        L1f:
            java.lang.Class<?> r2 = r4.second
            java.lang.Class<?> r5 = r5.second
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L2a
            return r1
        L2a:
            return r0
        L2b:
            return r1
    }

    public int hashCode() {
            r2 = this;
            java.lang.Class<?> r0 = r2.first
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.lang.Class<?> r1 = r2.second
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    public void set(java.lang.Class<?> r1, java.lang.Class<?> r2) {
            r0 = this;
            r0.first = r1
            r0.second = r2
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MultiClassKey{first="
            r0.append(r1)
            java.lang.Class<?> r1 = r2.first
            r0.append(r1)
            java.lang.String r1 = ", second="
            r0.append(r1)
            java.lang.Class<?> r1 = r2.second
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
