package com.czhj.wire;

public final class Wire {
    private Wire() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T get(T r0, T r1) {
            if (r0 == 0) goto L3
            goto L4
        L3:
            r0 = r1
        L4:
            return r0
    }
}
