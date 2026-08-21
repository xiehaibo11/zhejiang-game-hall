package com.mbridge.msdk.thrid.okhttp;

public enum Protocol extends java.lang.Enum<com.mbridge.msdk.thrid.okhttp.Protocol> {
    private static final com.mbridge.msdk.thrid.okhttp.Protocol[] $VALUES = null;
    public static final com.mbridge.msdk.thrid.okhttp.Protocol H2_PRIOR_KNOWLEDGE = null;
    public static final com.mbridge.msdk.thrid.okhttp.Protocol HTTP_1_0 = null;
    public static final com.mbridge.msdk.thrid.okhttp.Protocol HTTP_1_1 = null;
    public static final com.mbridge.msdk.thrid.okhttp.Protocol HTTP_2 = null;
    public static final com.mbridge.msdk.thrid.okhttp.Protocol QUIC = null;
    public static final com.mbridge.msdk.thrid.okhttp.Protocol SPDY_3 = null;
    private final java.lang.String protocol;

    static {
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = new com.mbridge.msdk.thrid.okhttp.Protocol
            r1 = 0
            java.lang.String r2 = "HTTP_1_0"
            java.lang.String r3 = "http/1.0"
            r0.<init>(r2, r1, r3)
            com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_0 = r0
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = new com.mbridge.msdk.thrid.okhttp.Protocol
            r2 = 1
            java.lang.String r3 = "HTTP_1_1"
            java.lang.String r4 = "http/1.1"
            r0.<init>(r3, r2, r4)
            com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1 = r0
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = new com.mbridge.msdk.thrid.okhttp.Protocol
            r3 = 2
            java.lang.String r4 = "SPDY_3"
            java.lang.String r5 = "spdy/3.1"
            r0.<init>(r4, r3, r5)
            com.mbridge.msdk.thrid.okhttp.Protocol.SPDY_3 = r0
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = new com.mbridge.msdk.thrid.okhttp.Protocol
            r4 = 3
            java.lang.String r5 = "HTTP_2"
            java.lang.String r6 = "h2"
            r0.<init>(r5, r4, r6)
            com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2 = r0
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = new com.mbridge.msdk.thrid.okhttp.Protocol
            r5 = 4
            java.lang.String r6 = "H2_PRIOR_KNOWLEDGE"
            java.lang.String r7 = "h2_prior_knowledge"
            r0.<init>(r6, r5, r7)
            com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE = r0
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = new com.mbridge.msdk.thrid.okhttp.Protocol
            r6 = 5
            java.lang.String r7 = "QUIC"
            java.lang.String r8 = "quic"
            r0.<init>(r7, r6, r8)
            com.mbridge.msdk.thrid.okhttp.Protocol.QUIC = r0
            r7 = 6
            com.mbridge.msdk.thrid.okhttp.Protocol[] r7 = new com.mbridge.msdk.thrid.okhttp.Protocol[r7]
            com.mbridge.msdk.thrid.okhttp.Protocol r8 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_0
            r7[r1] = r8
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            r7[r2] = r1
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.SPDY_3
            r7[r3] = r1
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2
            r7[r4] = r1
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            r7[r5] = r1
            r7[r6] = r0
            com.mbridge.msdk.thrid.okhttp.Protocol.$VALUES = r7
            return
    }

    Protocol(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.protocol = r3
            return
    }

    public static com.mbridge.msdk.thrid.okhttp.Protocol get(java.lang.String r3) throws java.io.IOException {
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_0
            java.lang.String r0 = r0.protocol
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto Ld
            com.mbridge.msdk.thrid.okhttp.Protocol r3 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_0
            return r3
        Ld:
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            java.lang.String r0 = r0.protocol
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L1a
            com.mbridge.msdk.thrid.okhttp.Protocol r3 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            return r3
        L1a:
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            java.lang.String r0 = r0.protocol
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L27
            com.mbridge.msdk.thrid.okhttp.Protocol r3 = com.mbridge.msdk.thrid.okhttp.Protocol.H2_PRIOR_KNOWLEDGE
            return r3
        L27:
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2
            java.lang.String r0 = r0.protocol
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L34
            com.mbridge.msdk.thrid.okhttp.Protocol r3 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_2
            return r3
        L34:
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.SPDY_3
            java.lang.String r0 = r0.protocol
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L41
            com.mbridge.msdk.thrid.okhttp.Protocol r3 = com.mbridge.msdk.thrid.okhttp.Protocol.SPDY_3
            return r3
        L41:
            com.mbridge.msdk.thrid.okhttp.Protocol r0 = com.mbridge.msdk.thrid.okhttp.Protocol.QUIC
            java.lang.String r0 = r0.protocol
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L4e
            com.mbridge.msdk.thrid.okhttp.Protocol r3 = com.mbridge.msdk.thrid.okhttp.Protocol.QUIC
            return r3
        L4e:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected protocol: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static com.mbridge.msdk.thrid.okhttp.Protocol valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.thrid.okhttp.Protocol> r0 = com.mbridge.msdk.thrid.okhttp.Protocol.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = (com.mbridge.msdk.thrid.okhttp.Protocol) r1
            return r1
    }

    public static com.mbridge.msdk.thrid.okhttp.Protocol[] values() {
            com.mbridge.msdk.thrid.okhttp.Protocol[] r0 = com.mbridge.msdk.thrid.okhttp.Protocol.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.thrid.okhttp.Protocol[] r0 = (com.mbridge.msdk.thrid.okhttp.Protocol[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.protocol
            return r0
    }
}
