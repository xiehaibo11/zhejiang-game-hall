package com.mbridge.msdk.playercommon.exoplayer2.util;

final class SystemHandlerWrapper implements com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper {
    private final android.os.Handler handler;

    public SystemHandlerWrapper(android.os.Handler r1) {
            r0 = this;
            r0.<init>()
            r0.handler = r1
            return
    }

    @Override
    public final android.os.Looper getLooper() {
            r1 = this;
            android.os.Handler r0 = r1.handler
            android.os.Looper r0 = r0.getLooper()
            return r0
    }

    @Override
    public final android.os.Message obtainMessage(int r2) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            android.os.Message r2 = r0.obtainMessage(r2)
            return r2
    }

    @Override
    public final android.os.Message obtainMessage(int r2, int r3, int r4) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            android.os.Message r2 = r0.obtainMessage(r2, r3, r4)
            return r2
    }

    @Override
    public final android.os.Message obtainMessage(int r2, int r3, int r4, java.lang.Object r5) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            android.os.Message r2 = r0.obtainMessage(r2, r3, r4, r5)
            return r2
    }

    @Override
    public final android.os.Message obtainMessage(int r2, java.lang.Object r3) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            android.os.Message r2 = r0.obtainMessage(r2, r3)
            return r2
    }

    @Override
    public final boolean post(java.lang.Runnable r2) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            boolean r2 = r0.post(r2)
            return r2
    }

    @Override
    public final boolean postDelayed(java.lang.Runnable r2, long r3) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            boolean r2 = r0.postDelayed(r2, r3)
            return r2
    }

    @Override
    public final void removeCallbacksAndMessages(java.lang.Object r2) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            r0.removeCallbacksAndMessages(r2)
            return
    }

    @Override
    public final void removeMessages(int r2) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            r0.removeMessages(r2)
            return
    }

    @Override
    public final boolean sendEmptyMessage(int r2) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            boolean r2 = r0.sendEmptyMessage(r2)
            return r2
    }

    @Override
    public final boolean sendEmptyMessageAtTime(int r2, long r3) {
            r1 = this;
            android.os.Handler r0 = r1.handler
            boolean r2 = r0.sendEmptyMessageAtTime(r2, r3)
            return r2
    }
}
