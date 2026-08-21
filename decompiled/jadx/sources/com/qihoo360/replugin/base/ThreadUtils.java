package com.qihoo360.replugin.base;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Callable;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicReference;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ThreadUtils {
    private static Handler sHandler = new Handler(Looper.getMainLooper());

    public static <T> T syncToMainThread(Callable<T> callable, int i) throws Throwable {
        if (sHandler.getLooper() == Looper.myLooper()) {
            return callable.call();
        }
        return (T) syncToMainThreadByOthers(callable, i);
    }

    private static <T> T syncToMainThreadByOthers(final Callable<T> callable, int i) throws Throwable {
        final AtomicReference atomicReference = new AtomicReference();
        final AtomicReference atomicReference2 = new AtomicReference();
        final CountDownLatch countDownLatch = new CountDownLatch(1);
        sHandler.post(new Runnable() { // from class: com.qihoo360.replugin.base.ThreadUtils.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    atomicReference.set(callable.call());
                } catch (Throwable th) {
                    atomicReference2.set(th);
                }
                countDownLatch.countDown();
            }
        });
        try {
            countDownLatch.await(i, TimeUnit.MILLISECONDS);
        } catch (InterruptedException unused) {
        }
        Throwable th = (Throwable) atomicReference2.get();
        if (th != null) {
            throw th;
        }
        return (T) atomicReference.get();
    }
}
