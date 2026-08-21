package com.czhj.sdk.common.network;

public enum ResponseHeader extends java.lang.Enum<com.czhj.sdk.common.network.ResponseHeader> {
    private static final com.czhj.sdk.common.network.ResponseHeader[] $VALUES = null;
    public static final com.czhj.sdk.common.network.ResponseHeader ACCEPT_LANGUAGE = null;
    public static final com.czhj.sdk.common.network.ResponseHeader LOCATION = null;
    public static final com.czhj.sdk.common.network.ResponseHeader USER_AGENT = null;
    private final java.lang.String key;

    static {
            com.czhj.sdk.common.network.ResponseHeader r0 = new com.czhj.sdk.common.network.ResponseHeader
            r1 = 0
            java.lang.String r2 = "LOCATION"
            java.lang.String r3 = "Location"
            r0.<init>(r2, r1, r3)
            com.czhj.sdk.common.network.ResponseHeader.LOCATION = r0
            com.czhj.sdk.common.network.ResponseHeader r0 = new com.czhj.sdk.common.network.ResponseHeader
            r2 = 1
            java.lang.String r3 = "USER_AGENT"
            java.lang.String r4 = "User-Agent"
            r0.<init>(r3, r2, r4)
            com.czhj.sdk.common.network.ResponseHeader.USER_AGENT = r0
            com.czhj.sdk.common.network.ResponseHeader r0 = new com.czhj.sdk.common.network.ResponseHeader
            r3 = 2
            java.lang.String r4 = "ACCEPT_LANGUAGE"
            java.lang.String r5 = "Accept-Language"
            r0.<init>(r4, r3, r5)
            com.czhj.sdk.common.network.ResponseHeader.ACCEPT_LANGUAGE = r0
            r4 = 3
            com.czhj.sdk.common.network.ResponseHeader[] r4 = new com.czhj.sdk.common.network.ResponseHeader[r4]
            com.czhj.sdk.common.network.ResponseHeader r5 = com.czhj.sdk.common.network.ResponseHeader.LOCATION
            r4[r1] = r5
            com.czhj.sdk.common.network.ResponseHeader r1 = com.czhj.sdk.common.network.ResponseHeader.USER_AGENT
            r4[r2] = r1
            r4[r3] = r0
            com.czhj.sdk.common.network.ResponseHeader.$VALUES = r4
            return
    }

    ResponseHeader(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.key = r3
            return
    }

    public static com.czhj.sdk.common.network.ResponseHeader valueOf(java.lang.String r1) {
            java.lang.Class<com.czhj.sdk.common.network.ResponseHeader> r0 = com.czhj.sdk.common.network.ResponseHeader.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.czhj.sdk.common.network.ResponseHeader r1 = (com.czhj.sdk.common.network.ResponseHeader) r1
            return r1
    }

    public static com.czhj.sdk.common.network.ResponseHeader[] values() {
            com.czhj.sdk.common.network.ResponseHeader[] r0 = com.czhj.sdk.common.network.ResponseHeader.$VALUES
            java.lang.Object r0 = r0.clone()
            com.czhj.sdk.common.network.ResponseHeader[] r0 = (com.czhj.sdk.common.network.ResponseHeader[]) r0
            return r0
    }

    public java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = r1.key
            return r0
    }
}
