package com.mbridge.msdk.thrid.okhttp.internal.http2;

public interface PushObserver {
    public static final com.mbridge.msdk.thrid.okhttp.internal.http2.PushObserver CANCEL = null;


    static {
            com.mbridge.msdk.thrid.okhttp.internal.http2.PushObserver$1 r0 = new com.mbridge.msdk.thrid.okhttp.internal.http2.PushObserver$1
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.internal.http2.PushObserver.CANCEL = r0
            return
    }

    boolean onData(int r1, com.mbridge.msdk.thrid.okio.BufferedSource r2, int r3, boolean r4) throws java.io.IOException;

    boolean onHeaders(int r1, java.util.List<com.mbridge.msdk.thrid.okhttp.internal.http2.Header> r2, boolean r3);

    boolean onRequest(int r1, java.util.List<com.mbridge.msdk.thrid.okhttp.internal.http2.Header> r2);

    void onReset(int r1, com.mbridge.msdk.thrid.okhttp.internal.http2.ErrorCode r2);
}
