package com.mbridge.msdk.dycreator.b;

public final class a {
    private int a;
    private java.lang.String b;

    public a(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public a(com.mbridge.msdk.dycreator.b.b r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L11
            int r0 = r2.a()
            r1.a = r0
            java.lang.String r2 = r2.b()
            r1.b = r2
        L11:
            return
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DyError{errorCode="
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
