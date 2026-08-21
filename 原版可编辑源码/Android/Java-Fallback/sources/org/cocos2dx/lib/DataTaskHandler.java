package org.cocos2dx.lib;

class DataTaskHandler extends com.loopj.android.http.BinaryHttpResponseHandler {
    private org.cocos2dx.lib.Cocos2dxDownloader _downloader;
    int _id;
    private long _lastBytesWritten;

    public DataTaskHandler(org.cocos2dx.lib.Cocos2dxDownloader r2, int r3) {
            r1 = this;
            java.lang.String r0 = ".*"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r1.<init>(r0)
            r1._downloader = r2
            r1._id = r3
            r2 = 0
            r1._lastBytesWritten = r2
            return
    }

    void LogD(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "Cocos2dxDownloader"
            android.util.Log.d(r0, r2)
            return
    }

    @Override
    public void onFailure(int r2, cz.msebera.android.httpclient.Header[] r3, byte[] r4, java.lang.Throwable r5) {
            r1 = this;
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "onFailure(i:"
            r4.append(r0)
            r4.append(r2)
            java.lang.String r0 = " headers:"
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = " throwable:"
            r4.append(r3)
            r4.append(r5)
            java.lang.String r3 = r4.toString()
            r1.LogD(r3)
            if (r5 == 0) goto L2b
            java.lang.String r3 = r5.toString()
            goto L2d
        L2b:
            java.lang.String r3 = ""
        L2d:
            org.cocos2dx.lib.Cocos2dxDownloader r4 = r1._downloader
            int r5 = r1._id
            r0 = 0
            r4.onFinish(r5, r2, r3, r0)
            return
    }

    @Override
    public void onFinish() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxDownloader r0 = r1._downloader
            r0.runNextTaskIfExists()
            return
    }

    @Override
    public void onProgress(long r11, long r13) {
            r10 = this;
            long r0 = r10._lastBytesWritten
            long r4 = r11 - r0
            org.cocos2dx.lib.Cocos2dxDownloader r2 = r10._downloader
            int r3 = r10._id
            r6 = r11
            r8 = r13
            r2.onProgress(r3, r4, r6, r8)
            r10._lastBytesWritten = r11
            return
    }

    @Override
    public void onStart() {
            r2 = this;
            org.cocos2dx.lib.Cocos2dxDownloader r0 = r2._downloader
            int r1 = r2._id
            r0.onStart(r1)
            return
    }

    @Override
    public void onSuccess(int r3, cz.msebera.android.httpclient.Header[] r4, byte[] r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSuccess(i:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " headers:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            r2.LogD(r3)
            org.cocos2dx.lib.Cocos2dxDownloader r3 = r2._downloader
            int r4 = r2._id
            r0 = 0
            r1 = 0
            r3.onFinish(r4, r0, r1, r5)
            return
    }
}
