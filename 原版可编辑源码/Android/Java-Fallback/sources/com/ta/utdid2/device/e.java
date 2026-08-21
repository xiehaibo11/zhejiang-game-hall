package com.ta.utdid2.device;

public class e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String d(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.ta.utdid2.a.a.a.b(r1)
            return r1
    }

    public java.lang.String e(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = com.ta.utdid2.a.a.a.b(r3)
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L16
            r0 = 0
            byte[] r3 = com.ta.utdid2.a.a.b.decode(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L16
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.IllegalArgumentException -> L16
            r0.<init>(r3)     // Catch: java.lang.IllegalArgumentException -> L16
            return r0
        L16:
            return r1
    }
}
