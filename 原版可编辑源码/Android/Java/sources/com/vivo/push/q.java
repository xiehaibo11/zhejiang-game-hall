package com.vivo.push;

import android.content.Context;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;

public abstract class q {
    protected Context a;
    protected Handler b;
    private final Object c = new Object();

    final class a extends Handler {
        public a(Looper looper) {
            super(looper);
        }

        @Override
        public final void handleMessage(Message message) {
            q.this.b(message);
        }
    }

    public q() {
        HandlerThread handlerThread = new HandlerThread(getClass().getSimpleName(), 1);
        handlerThread.start();
        this.b = new a(handlerThread.getLooper());
    }

    public final void a(Context context) {
        this.a = context;
    }

    public final void a(Message message) {
        synchronized (this.c) {
            if (this.b == null) {
                String str = "Dead worker dropping a message: " + message.what;
                com.vivo.push.util.p.e(getClass().getSimpleName(), str + " (Thread " + Thread.currentThread().getId() + ")");
            } else {
                this.b.sendMessage(message);
            }
        }
    }

    public abstract void b(Message message);
}
