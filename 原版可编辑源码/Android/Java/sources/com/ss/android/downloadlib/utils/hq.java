package com.ss.android.downloadlib.utils;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.lang.ref.WeakReference;

public class hq extends Handler {
    WeakReference<rg> rg;

    public interface rg {
        void rg(Message message);
    }

    public hq(Looper looper, rg rgVar) {
        super(looper);
        this.rg = new WeakReference<>(rgVar);
    }

    @Override
    public void handleMessage(Message message) {
        rg rgVar = this.rg.get();
        if (rgVar == null || message == null) {
            return;
        }
        rgVar.rg(message);
    }
}
