package com.bianfeng.netlibsdk;

public class Response<T> {
    public final com.bianfeng.netlibsdk.utils.NetException error;
    public boolean intermediate;
    public final T result;

    private Response(com.bianfeng.netlibsdk.utils.NetException r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.intermediate = r0
            r0 = 0
            r1.result = r0
            r1.error = r2
            return
    }

    private Response(T r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.intermediate = r0
            r1.result = r2
            r2 = 0
            r1.error = r2
            return
    }

    public static <T> com.bianfeng.netlibsdk.Response<T> error(com.bianfeng.netlibsdk.utils.NetException r1) {
            com.bianfeng.netlibsdk.Response r0 = new com.bianfeng.netlibsdk.Response
            r0.<init>(r1)
            return r0
    }

    public static <T> com.bianfeng.netlibsdk.Response<T> success(T r1) {
            com.bianfeng.netlibsdk.Response r0 = new com.bianfeng.netlibsdk.Response
            r0.<init>(r1)
            return r0
    }

    public boolean isSuccess() {
            r1 = this;
            com.bianfeng.netlibsdk.utils.NetException r0 = r1.error
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }
}
