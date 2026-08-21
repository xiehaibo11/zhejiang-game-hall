package com.sigmob.sdk.nativead;

import android.os.Handler;
import android.os.Looper;

/* JADX INFO: loaded from: classes3.dex */
public class y extends Handler {
    static final int b = 87108;
    long c;
    boolean d;

    public y() {
        this.c = 100L;
        this.d = true;
    }

    public y(Looper looper) {
        super(looper);
        this.c = 100L;
        this.d = true;
    }

    public void a() {
        sendEmptyMessageDelayed(b, this.c);
    }

    public void a(boolean z) {
        this.d = z;
    }

    public boolean b() {
        return this.d;
    }
}
