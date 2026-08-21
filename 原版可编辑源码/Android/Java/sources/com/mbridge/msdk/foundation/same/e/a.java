package com.mbridge.msdk.foundation.same.e;

public abstract class a implements Runnable {
    public static long id;
    public b mListener;
    public a mState = a.a;

    public enum a {
        a,
        b,
        c,
        d,
        e
    }

    public interface b {
        void a(a aVar);
    }

    public abstract void cancelTask();

    public abstract void pauseTask(boolean z);

    public abstract void runTask();

    @Override
    public final void run() {
        try {
            if (this.mState == a.a) {
                setState(a.b);
                runTask();
                setState(a.e);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public a() {
        id++;
    }

    public final long getId() {
        return id;
    }

    public final void cancel() {
        if (this.mState != a.d) {
            setState(a.d);
            cancelTask();
        }
    }

    public final void setPause(boolean z) {
        if (this.mState == a.c || this.mState == a.d || this.mState == a.e) {
            return;
        }
        if (z) {
            setState(a.c);
        } else {
            setState(a.b);
        }
        pauseTask(z);
    }

    public a getState() {
        return this.mState;
    }

    private void setState(a aVar) {
        this.mState = aVar;
        b bVar = this.mListener;
        if (bVar != null) {
            bVar.a(aVar);
        }
    }

    public void setonStateChangeListener(b bVar) {
        this.mListener = bVar;
    }
}
