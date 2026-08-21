package com.mbridge.msdk.thrid.okhttp.internal.http2;

public enum ErrorCode extends java.lang.Enum<com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode> {
    private static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[] $VALUES = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode CANCEL = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode COMPRESSION_ERROR = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode CONNECT_ERROR = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode ENHANCE_YOUR_CALM = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode FLOW_CONTROL_ERROR = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode HTTP_1_1_REQUIRED = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode INADEQUATE_SECURITY = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode INTERNAL_ERROR = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode NO_ERROR = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode PROTOCOL_ERROR = null;
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode REFUSED_STREAM = null;
    public final int httpCode;

    static {
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r1 = 0
            java.lang.String r2 = "NO_ERROR"
            r0.<init>(r2, r1, r1)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.NO_ERROR = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r2 = 1
            java.lang.String r3 = "PROTOCOL_ERROR"
            r0.<init>(r3, r2, r2)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.PROTOCOL_ERROR = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r3 = 2
            java.lang.String r4 = "INTERNAL_ERROR"
            r0.<init>(r4, r3, r3)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.INTERNAL_ERROR = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r4 = 3
            java.lang.String r5 = "FLOW_CONTROL_ERROR"
            r0.<init>(r5, r4, r4)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.FLOW_CONTROL_ERROR = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r5 = 4
            r6 = 7
            java.lang.String r7 = "REFUSED_STREAM"
            r0.<init>(r7, r5, r6)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.REFUSED_STREAM = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r7 = 5
            r8 = 8
            java.lang.String r9 = "CANCEL"
            r0.<init>(r9, r7, r8)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CANCEL = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r9 = 6
            r10 = 9
            java.lang.String r11 = "COMPRESSION_ERROR"
            r0.<init>(r11, r9, r10)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.COMPRESSION_ERROR = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r11 = 10
            java.lang.String r12 = "CONNECT_ERROR"
            r0.<init>(r12, r6, r11)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CONNECT_ERROR = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            r12 = 11
            java.lang.String r13 = "ENHANCE_YOUR_CALM"
            r0.<init>(r13, r8, r12)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.ENHANCE_YOUR_CALM = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            java.lang.String r13 = "INADEQUATE_SECURITY"
            r14 = 12
            r0.<init>(r13, r10, r14)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.INADEQUATE_SECURITY = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode
            java.lang.String r13 = "HTTP_1_1_REQUIRED"
            r14 = 13
            r0.<init>(r13, r11, r14)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.HTTP_1_1_REQUIRED = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[] r12 = new com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[r12]
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r13 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.NO_ERROR
            r12[r1] = r13
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.PROTOCOL_ERROR
            r12[r2] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.INTERNAL_ERROR
            r12[r3] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.FLOW_CONTROL_ERROR
            r12[r4] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.REFUSED_STREAM
            r12[r5] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CANCEL
            r12[r7] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.COMPRESSION_ERROR
            r12[r9] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.CONNECT_ERROR
            r12[r6] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.ENHANCE_YOUR_CALM
            r12[r8] = r1
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.INADEQUATE_SECURITY
            r12[r10] = r1
            r12[r11] = r0
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.$VALUES = r12
            return
    }

    ErrorCode(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.httpCode = r3
            return
    }

    public static com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode fromHttp2(int r5) {
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[] r0 = values()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            int r4 = r3.httpCode
            if (r4 != r5) goto Lf
            return r3
        Lf:
            int r2 = r2 + 1
            goto L6
        L12:
            r5 = 0
            return r5
    }

    public static com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode> r0 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r1 = (com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode) r1
            return r1
    }

    public static com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[] values() {
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[] r0 = com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[] r0 = (com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode[]) r0
            return r0
    }
}
