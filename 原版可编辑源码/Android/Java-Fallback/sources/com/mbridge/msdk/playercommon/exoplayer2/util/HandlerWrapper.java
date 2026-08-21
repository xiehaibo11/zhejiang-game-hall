package com.mbridge.msdk.playercommon.exoplayer2.util;

public interface HandlerWrapper {
    android.os.Looper getLooper();

    android.os.Message obtainMessage(int r1);

    android.os.Message obtainMessage(int r1, int r2, int r3);

    android.os.Message obtainMessage(int r1, int r2, int r3, java.lang.Object r4);

    android.os.Message obtainMessage(int r1, java.lang.Object r2);

    boolean post(java.lang.Runnable r1);

    boolean postDelayed(java.lang.Runnable r1, long r2);

    void removeCallbacksAndMessages(java.lang.Object r1);

    void removeMessages(int r1);

    boolean sendEmptyMessage(int r1);

    boolean sendEmptyMessageAtTime(int r1, long r2);
}
