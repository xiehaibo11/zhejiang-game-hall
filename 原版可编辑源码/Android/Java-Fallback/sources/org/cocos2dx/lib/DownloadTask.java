package org.cocos2dx.lib;

class DownloadTask {
    long bytesReceived;
    byte[] data;
    com.loopj.android.http.RequestHandle handle;
    com.loopj.android.http.AsyncHttpResponseHandler handler;
    long totalBytesExpected;
    long totalBytesReceived;

    DownloadTask() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.handle = r0
            r1.handler = r0
            r1.resetStatus()
            return
    }

    void resetStatus() {
            r2 = this;
            r0 = 0
            r2.bytesReceived = r0
            r2.totalBytesReceived = r0
            r2.totalBytesExpected = r0
            r0 = 0
            r2.data = r0
            return
    }
}
