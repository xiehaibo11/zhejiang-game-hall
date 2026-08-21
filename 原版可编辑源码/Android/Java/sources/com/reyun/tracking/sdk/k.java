package com.reyun.tracking.sdk;

final class k implements Runnable {
    k() {
    }

    @Override
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
