package com.mbridge.msdk.foundation.same.e;

/* JADX INFO: compiled from: CommonTask.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class a implements Runnable {
    public static long id;
    public b mListener;
    public EnumC0259a mState = EnumC0259a.READY;

    /* JADX INFO: renamed from: com.mbridge.msdk.foundation.same.e.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: CommonTask.java */
    public enum EnumC0259a {
        READY,
        RUNNING,
        PAUSE,
        CANCEL,
        FINISH
    }

    /* JADX INFO: compiled from: CommonTask.java */
    public interface b {
        void a(EnumC0259a enumC0259a);
    }

    public abstract void cancelTask();

    public abstract void pauseTask(boolean z);

    public abstract void runTask();

    @Override // java.lang.Runnable
    public final void run() {
        try {
            if (this.mState == EnumC0259a.READY) {
                setState(EnumC0259a.RUNNING);
                runTask();
                setState(EnumC0259a.FINISH);
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
        if (this.mState != EnumC0259a.CANCEL) {
            setState(EnumC0259a.CANCEL);
            cancelTask();
        }
    }

    public final void setPause(boolean z) {
        if (this.mState == EnumC0259a.PAUSE || this.mState == EnumC0259a.CANCEL || this.mState == EnumC0259a.FINISH) {
            return;
        }
        if (z) {
            setState(EnumC0259a.PAUSE);
        } else {
            setState(EnumC0259a.RUNNING);
        }
        pauseTask(z);
    }

    public EnumC0259a getState() {
        return this.mState;
    }

    private void setState(EnumC0259a enumC0259a) {
        this.mState = enumC0259a;
        b bVar = this.mListener;
        if (bVar != null) {
            bVar.a(enumC0259a);
        }
    }

    public void setonStateChangeListener(b bVar) {
        this.mListener = bVar;
    }
}
