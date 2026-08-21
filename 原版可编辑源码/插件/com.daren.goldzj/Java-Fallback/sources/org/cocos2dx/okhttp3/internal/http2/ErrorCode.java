package org.cocos2dx.okhttp3.internal.http2;

public enum ErrorCode extends Enum<ErrorCode> {
    private static final ErrorCode[] $VALUES = null;
    public static final ErrorCode CANCEL = null;
    public static final ErrorCode COMPRESSION_ERROR = null;
    public static final ErrorCode CONNECT_ERROR = null;
    public static final ErrorCode ENHANCE_YOUR_CALM = null;
    public static final ErrorCode FLOW_CONTROL_ERROR = null;
    public static final ErrorCode HTTP_1_1_REQUIRED = null;
    public static final ErrorCode INADEQUATE_SECURITY = null;
    public static final ErrorCode INTERNAL_ERROR = null;
    public static final ErrorCode NO_ERROR = null;
    public static final ErrorCode PROTOCOL_ERROR = null;
    public static final ErrorCode REFUSED_STREAM = null;
    public final int httpCode;

    public static ErrorCode valueOf(String r1) {
        return (ErrorCode) Enum.valueOf(ErrorCode.class, r1);
    }

    public static ErrorCode[] values() {
        return (ErrorCode[]) $VALUES.clone();
    }

    static {
        NO_ERROR = new ErrorCode("NO_ERROR", 0, 0);
        PROTOCOL_ERROR = new ErrorCode("PROTOCOL_ERROR", 1, 1);
        INTERNAL_ERROR = new ErrorCode("INTERNAL_ERROR", 2, 2);
        FLOW_CONTROL_ERROR = new ErrorCode("FLOW_CONTROL_ERROR", 3, 3);
        REFUSED_STREAM = new ErrorCode("REFUSED_STREAM", 4, 7);
        CANCEL = new ErrorCode("CANCEL", 5, 8);
        COMPRESSION_ERROR = new ErrorCode("COMPRESSION_ERROR", 6, 9);
        CONNECT_ERROR = new ErrorCode("CONNECT_ERROR", 7, 10);
        ENHANCE_YOUR_CALM = new ErrorCode("ENHANCE_YOUR_CALM", 8, 11);
        INADEQUATE_SECURITY = new ErrorCode("INADEQUATE_SECURITY", 9, 12);
        HTTP_1_1_REQUIRED = new ErrorCode("HTTP_1_1_REQUIRED", 10, 13);
        $VALUES = new ErrorCode[]{NO_ERROR, PROTOCOL_ERROR, INTERNAL_ERROR, FLOW_CONTROL_ERROR, REFUSED_STREAM, CANCEL, COMPRESSION_ERROR, CONNECT_ERROR, ENHANCE_YOUR_CALM, INADEQUATE_SECURITY, HTTP_1_1_REQUIRED};
    }

    ErrorCode(String r1, int r2, int r3) {
        this.httpCode = r3;
    }

    public static ErrorCode fromHttp2(int r5) {
        ErrorCode[] r0 = values();
        int r1 = r0.length;
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L8;
        ErrorCode r3 = r0[r2];
        if (r3.httpCode == r5) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return r3;
    L8:
        return null;
    }
}
