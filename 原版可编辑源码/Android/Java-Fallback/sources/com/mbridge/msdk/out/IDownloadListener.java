package com.mbridge.msdk.out;

public interface IDownloadListener {
    void onEnd(int r1, int r2, java.lang.String r3);

    void onProgressUpdate(int r1);

    void onStart();

    void onStatus(int r1);
}
