package com.czhj.wire;

final class Preconditions {
    private Preconditions() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(java.lang.Object r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            r0.<init>(r1)
            throw r0
    }
}
