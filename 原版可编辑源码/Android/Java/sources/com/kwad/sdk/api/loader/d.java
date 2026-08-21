package com.kwad.sdk.api.loader;

import android.content.Context;
import android.util.Log;
import java.lang.Thread;
import java.util.concurrent.atomic.AtomicBoolean;

public class d implements Thread.UncaughtExceptionHandler {
    private static d aih;
    private Thread.UncaughtExceptionHandler aii;
    private int aij;
    private long ail;
    private Context mContext;
    private boolean DEBUG = false;
    private final AtomicBoolean aik = new AtomicBoolean();

    private d(Context context) {
        this.mContext = context;
    }

    public static d ax(Context context) {
        if (aih == null) {
            synchronized (d.class) {
                if (aih == null) {
                    aih = new d(context);
                }
            }
        }
        return aih;
    }

    public final void bP(int i) {
        this.ail = System.currentTimeMillis();
        this.aij = i;
        if (this.DEBUG) {
            Log.d("test.chen", "startCheck:");
        }
    }

    public final void cancel() {
        if (this.DEBUG) {
            Log.d("test.chen", "AutoRevertHandler cancel:");
        }
        this.aik.set(true);
    }

    public final void setDefaultUncaughtExceptionHandler(Thread.UncaughtExceptionHandler uncaughtExceptionHandler) {
        if (uncaughtExceptionHandler != this) {
            this.aii = uncaughtExceptionHandler;
        }
    }

    @Override
    public void uncaughtException(Thread thread, Throwable th) {
        try {
            if (this.DEBUG) {
                Log.d("test.chen", "AutoRevertHandler uncaughtException, mStartCheckTime:" + this.ail + ",mMaxDuration:" + this.aij + ",mIsCancel:" + this.aik.get());
            }
            if (!this.aik.get() && this.ail > 0 && System.currentTimeMillis() - this.ail <= this.aij) {
                Boolean bool = (Boolean) com.kwad.sdk.api.c.c("filterStack", th);
                boolean zBooleanValue = bool != null ? bool.booleanValue() : true;
                if (this.mContext != null && zBooleanValue) {
                    t.a(this.mContext, g.air, true);
                }
            }
        } catch (Throwable th2) {
            try {
                th2.printStackTrace();
                Thread.UncaughtExceptionHandler uncaughtExceptionHandler = this.aii;
                if (uncaughtExceptionHandler != null) {
                    uncaughtExceptionHandler.uncaughtException(thread, th);
                }
            } finally {
                Thread.UncaughtExceptionHandler uncaughtExceptionHandler2 = this.aii;
                if (uncaughtExceptionHandler2 != null) {
                    uncaughtExceptionHandler2.uncaughtException(thread, th);
                }
            }
        }
    }
}
