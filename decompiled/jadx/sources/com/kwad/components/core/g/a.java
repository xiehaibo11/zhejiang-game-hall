package com.kwad.components.core.g;

import android.os.Handler;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements Runnable {
    private long Kn = 1000;
    private boolean Ko = true;
    private long Kp = 0;
    private InterfaceC0151a Kq;
    private volatile Handler mHandler;

    /* JADX INFO: renamed from: com.kwad.components.core.g.a$a, reason: collision with other inner class name */
    public interface InterfaceC0151a {
        void u(long j);
    }

    public a(Handler handler) {
        this.mHandler = handler;
    }

    public final void a(InterfaceC0151a interfaceC0151a) {
        this.Kq = interfaceC0151a;
    }

    public final void destroy() {
        stop();
        this.mHandler = null;
    }

    public final void pause() {
        this.Ko = true;
    }

    public final void resume() {
        this.Ko = false;
    }

    @Override // java.lang.Runnable
    public final synchronized void run() {
        if (this.mHandler != null) {
            if (!this.Ko && this.Kq != null) {
                this.Kq.u(this.Kp);
                this.Kp += this.Kn;
            }
            if (this.mHandler != null) {
                this.mHandler.postDelayed(this, this.Kn);
            }
        }
    }

    public final void start() {
        this.Ko = false;
        if (this.mHandler != null) {
            this.mHandler.post(this);
        }
    }

    public final void stop() {
        if (this.mHandler != null) {
            this.mHandler.removeCallbacks(this);
        }
    }
}
