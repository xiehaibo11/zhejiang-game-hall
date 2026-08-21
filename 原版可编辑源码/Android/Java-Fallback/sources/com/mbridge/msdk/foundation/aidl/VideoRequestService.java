package com.mbridge.msdk.foundation.aidl;

public class VideoRequestService extends android.app.Service {
    private volatile com.mbridge.msdk.foundation.aidl.VideoBinderListener a;
    private volatile com.mbridge.msdk.foundation.aidl.VideoBinderInterface b;


    public VideoRequestService() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            return
    }

    static com.mbridge.msdk.foundation.aidl.VideoBinderListener a(com.mbridge.msdk.foundation.aidl.VideoRequestService r0) {
            com.mbridge.msdk.foundation.aidl.VideoBinderListener r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.foundation.aidl.VideoBinderListener a(com.mbridge.msdk.foundation.aidl.VideoRequestService r0, com.mbridge.msdk.foundation.aidl.VideoBinderListener r1) {
            r0.a = r1
            return r1
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            com.mbridge.msdk.foundation.aidl.VideoBinderInterface r2 = r1.b
            r0 = 0
            if (r2 == 0) goto La
            com.mbridge.msdk.foundation.aidl.VideoBinderInterface r2 = r1.b     // Catch: java.lang.Throwable -> La
            android.os.IBinder r2 = (android.os.IBinder) r2     // Catch: java.lang.Throwable -> La
            return r2
        La:
            return r0
    }

    @Override
    public void onCreate() {
            r1 = this;
            super.onCreate()
            com.mbridge.msdk.foundation.aidl.VideoRequestService$1 r0 = new com.mbridge.msdk.foundation.aidl.VideoRequestService$1
            r0.<init>(r1)
            r1.b = r0
            return
    }

    @Override
    public void unbindService(android.content.ServiceConnection r1) {
            r0 = this;
            super.unbindService(r1)
            r1 = 0
            r0.b = r1
            r0.a = r1
            return
    }
}
