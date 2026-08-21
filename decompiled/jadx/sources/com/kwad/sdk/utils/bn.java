package com.kwad.sdk.utils;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes2.dex */
public final class bn extends Handler {
    private WeakReference<a> aKu;

    public interface a {
        void a(Message message);
    }

    public bn(a aVar) {
        this.aKu = new WeakReference<>(aVar);
    }

    public bn(a aVar, Looper looper) {
        super(looper);
        this.aKu = new WeakReference<>(aVar);
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        a aVar;
        try {
            if (this.aKu == null || (aVar = this.aKu.get()) == null) {
                return;
            } else {
                aVar.a(message);
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        super.handleMessage(message);
    }
}
