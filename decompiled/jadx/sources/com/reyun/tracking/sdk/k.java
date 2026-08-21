package com.reyun.tracking.sdk;

/* JADX INFO: loaded from: classes3.dex */
final class k implements Runnable {
    k() {
    }

    @Override // java.lang.Runnable
    public void run() {
        int iSendFailureRecord = 10;
        while (iSendFailureRecord == 10) {
            try {
                iSendFailureRecord = Tracking.sendFailureRecord(10);
                if (iSendFailureRecord == 10) {
                    Thread.sleep(Tracking.HEART_BEAT_TIME);
                }
            } catch (Throwable th) {
                th.printStackTrace();
                return;
            }
        }
    }
}
