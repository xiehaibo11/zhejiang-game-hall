package com.huawei.hms.api;

public class ProtocolNegotiate {
    private static com.huawei.hms.api.ProtocolNegotiate b;
    private int a;

    static {
            com.huawei.hms.api.ProtocolNegotiate r0 = new com.huawei.hms.api.ProtocolNegotiate
            r0.<init>()
            com.huawei.hms.api.ProtocolNegotiate.b = r0
            return
    }

    public ProtocolNegotiate() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            return
    }

    public static com.huawei.hms.api.ProtocolNegotiate getInstance() {
            com.huawei.hms.api.ProtocolNegotiate r0 = com.huawei.hms.api.ProtocolNegotiate.b
            return r0
    }

    public int getVersion() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int negotiate(java.util.List<java.lang.Integer> r4) {
            r3 = this;
            r0 = 1
            if (r4 == 0) goto L2c
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto La
            goto L2c
        La:
            r1 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            boolean r2 = r4.contains(r2)
            if (r2 != 0) goto L27
            int r1 = r4.size()
            int r1 = r1 - r0
            java.lang.Object r4 = r4.get(r1)
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r3.a = r4
            goto L29
        L27:
            r3.a = r1
        L29:
            int r4 = r3.a
            return r4
        L2c:
            r3.a = r0
            return r0
    }
}
