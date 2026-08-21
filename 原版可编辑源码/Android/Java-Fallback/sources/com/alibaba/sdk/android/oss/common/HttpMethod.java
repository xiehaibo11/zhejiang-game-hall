package com.alibaba.sdk.android.oss.common;

public enum HttpMethod extends java.lang.Enum<com.alibaba.sdk.android.oss.common.HttpMethod> {
    private static final com.alibaba.sdk.android.oss.common.HttpMethod[] $VALUES = null;
    public static final com.alibaba.sdk.android.oss.common.HttpMethod DELETE = null;
    public static final com.alibaba.sdk.android.oss.common.HttpMethod GET = null;
    public static final com.alibaba.sdk.android.oss.common.HttpMethod HEAD = null;
    public static final com.alibaba.sdk.android.oss.common.HttpMethod OPTIONS = null;
    public static final com.alibaba.sdk.android.oss.common.HttpMethod POST = null;
    public static final com.alibaba.sdk.android.oss.common.HttpMethod PUT = null;

    static {
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = new com.alibaba.sdk.android.oss.common.HttpMethod
            r1 = 0
            java.lang.String r2 = "DELETE"
            r0.<init>(r2, r1)
            com.alibaba.sdk.android.oss.common.HttpMethod.DELETE = r0
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = new com.alibaba.sdk.android.oss.common.HttpMethod
            r2 = 1
            java.lang.String r3 = "GET"
            r0.<init>(r3, r2)
            com.alibaba.sdk.android.oss.common.HttpMethod.GET = r0
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = new com.alibaba.sdk.android.oss.common.HttpMethod
            r3 = 2
            java.lang.String r4 = "HEAD"
            r0.<init>(r4, r3)
            com.alibaba.sdk.android.oss.common.HttpMethod.HEAD = r0
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = new com.alibaba.sdk.android.oss.common.HttpMethod
            r4 = 3
            java.lang.String r5 = "POST"
            r0.<init>(r5, r4)
            com.alibaba.sdk.android.oss.common.HttpMethod.POST = r0
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = new com.alibaba.sdk.android.oss.common.HttpMethod
            r5 = 4
            java.lang.String r6 = "PUT"
            r0.<init>(r6, r5)
            com.alibaba.sdk.android.oss.common.HttpMethod.PUT = r0
            com.alibaba.sdk.android.oss.common.HttpMethod r0 = new com.alibaba.sdk.android.oss.common.HttpMethod
            r6 = 5
            java.lang.String r7 = "OPTIONS"
            r0.<init>(r7, r6)
            com.alibaba.sdk.android.oss.common.HttpMethod.OPTIONS = r0
            r7 = 6
            com.alibaba.sdk.android.oss.common.HttpMethod[] r7 = new com.alibaba.sdk.android.oss.common.HttpMethod[r7]
            com.alibaba.sdk.android.oss.common.HttpMethod r8 = com.alibaba.sdk.android.oss.common.HttpMethod.DELETE
            r7[r1] = r8
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.GET
            r7[r2] = r1
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.HEAD
            r7[r3] = r1
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.POST
            r7[r4] = r1
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = com.alibaba.sdk.android.oss.common.HttpMethod.PUT
            r7[r5] = r1
            r7[r6] = r0
            com.alibaba.sdk.android.oss.common.HttpMethod.$VALUES = r7
            return
    }

    HttpMethod(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.alibaba.sdk.android.oss.common.HttpMethod valueOf(java.lang.String r1) {
            java.lang.Class<com.alibaba.sdk.android.oss.common.HttpMethod> r0 = com.alibaba.sdk.android.oss.common.HttpMethod.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.alibaba.sdk.android.oss.common.HttpMethod r1 = (com.alibaba.sdk.android.oss.common.HttpMethod) r1
            return r1
    }

    public static com.alibaba.sdk.android.oss.common.HttpMethod[] values() {
            com.alibaba.sdk.android.oss.common.HttpMethod[] r0 = com.alibaba.sdk.android.oss.common.HttpMethod.$VALUES
            java.lang.Object r0 = r0.clone()
            com.alibaba.sdk.android.oss.common.HttpMethod[] r0 = (com.alibaba.sdk.android.oss.common.HttpMethod[]) r0
            return r0
    }
}
