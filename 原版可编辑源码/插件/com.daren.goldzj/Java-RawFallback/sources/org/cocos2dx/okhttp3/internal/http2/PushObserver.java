package org.cocos2dx.okhttp3.internal.http2;

public interface PushObserver {
    public static final org.cocos2dx.okhttp3.internal.http2.PushObserver CANCEL = null;


    static {
            org.cocos2dx.okhttp3.internal.http2.PushObserver$1 r0 = new org.cocos2dx.okhttp3.internal.http2.PushObserver$1
            r0.<init>()
            org.cocos2dx.okhttp3.internal.http2.PushObserver.CANCEL = r0
            return
    }

    boolean onData(int r1, org.cocos2dx.okio.BufferedSource r2, int r3, boolean r4) throws java.io.IOException;

    boolean onHeaders(int r1, java.util.List<org.cocos2dx.okhttp3.internal.http2.Header> r2, boolean r3);

    boolean onRequest(int r1, java.util.List<org.cocos2dx.okhttp3.internal.http2.Header> r2);

    void onReset(int r1, org.cocos2dx.okhttp3.internal.http2.ErrorCode r2);
}
