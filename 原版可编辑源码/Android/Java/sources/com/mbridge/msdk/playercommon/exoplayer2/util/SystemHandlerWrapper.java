package com.mbridge.msdk.playercommon.exoplayer2.util;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

final class SystemHandlerWrapper implements HandlerWrapper {
    private final Handler handler;

    public SystemHandlerWrapper(Handler handler) {
        this.handler = handler;
    }

    @Override
    public final Looper getLooper() {
        return this.handler.getLooper();
    }

    @Override
    public final Message obtainMessage(int i) {
        return this.handler.obtainMessage(i);
    }

    @Override
    public final Message obtainMessage(int i, Object obj) {
        return this.handler.obtainMessage(i, obj);
    }

    @Override
    public final Message obtainMessage(int i, int i2, int i3) {
        return this.handler.obtainMessage(i, i2, i3);
    }

    @Override
    public final Message obtainMessage(int i, int i2, int i3, Object obj) {
        return this.handler.obtainMessage(i, i2, i3, obj);
    }

    @Override
    public final boolean sendEmptyMessage(int i) {
        return this.handler.sendEmptyMessage(i);
    }

    @Override
    public final boolean sendEmptyMessageAtTime(int i, long j) {
        return this.handler.sendEmptyMessageAtTime(i, j);
    }

    @Override
    public final void removeMessages(int i) {
        this.handler.removeMessages(i);
    }

    @Override
    public final void removeCallbacksAndMessages(Object obj) {
        this.handler.removeCallbacksAndMessages(obj);
    }

    @Override
    public final boolean post(Runnable runnable) {
        return this.handler.post(runnable);
    }

    @Override
    public final boolean postDelayed(Runnable runnable, long j) {
        return this.handler.postDelayed(runnable, j);
    }
}
