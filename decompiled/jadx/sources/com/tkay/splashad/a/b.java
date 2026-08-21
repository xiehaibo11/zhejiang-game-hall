package com.tkay.splashad.a;

import com.tkay.core.api.AdError;

/* JADX INFO: loaded from: classes4.dex */
public abstract class b implements com.tkay.core.common.b.a {
    private String mRequestId;
    private volatile boolean mHasReturn = false;
    private volatile boolean isAdTimeout = false;
    private final com.tkay.core.common.j.a timeOutHandler = com.tkay.core.common.j.c.a();
    private final com.tkay.core.common.j.b timeoutRunnable = new com.tkay.core.common.j.b() { // from class: com.tkay.splashad.a.b.1
        @Override // java.lang.Runnable
        public final void run() {
            if (b.this.mHasReturn) {
                return;
            }
            b.this.isAdTimeout = true;
            b bVar = b.this;
            bVar.onTimeout(bVar.mRequestId);
        }
    };

    public abstract void onAdLoaded(String str, boolean z);

    public abstract void onNoAdError(String str, AdError adError);

    public abstract void onTimeout(String str);

    public void startCountDown(int i) {
        this.timeOutHandler.a(this.timeoutRunnable, i, false);
    }

    public void setRequestId(String str) {
        this.mRequestId = str;
    }

    @Override // com.tkay.core.common.b.a
    public void onAdLoaded() {
        this.timeOutHandler.a(this.timeoutRunnable);
        if (this.mHasReturn) {
            return;
        }
        this.mHasReturn = true;
        onAdLoaded(this.mRequestId, this.isAdTimeout);
    }

    @Override // com.tkay.core.common.b.a
    public void onAdLoadFail(AdError adError) {
        this.timeOutHandler.a(this.timeoutRunnable);
        if (this.mHasReturn) {
            return;
        }
        this.mHasReturn = true;
        onNoAdError(this.mRequestId, adError);
    }
}
