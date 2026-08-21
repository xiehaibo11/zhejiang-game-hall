package org.cocos2dx.lib;

class FileTaskHandler extends com.loopj.android.http.FileAsyncHttpResponseHandler {
    private org.cocos2dx.lib.Cocos2dxDownloader _downloader;
    java.io.File _finalFile;
    int _id;
    private long _initFileLen;
    private long _lastBytesWritten;

    public FileTaskHandler(org.cocos2dx.lib.Cocos2dxDownloader r2, int r3, java.io.File r4, java.io.File r5) {
            r1 = this;
            r0 = 1
            r1.<init>(r4, r0)
            r1._finalFile = r5
            r1._downloader = r2
            r1._id = r3
            java.io.File r2 = r1.getTargetFile()
            long r2 = r2.length()
            r1._initFileLen = r2
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
    public void onFailure(int r3, cz.msebera.android.httpclient.Header[] r4, java.lang.Throwable r5, java.io.File r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onFailure(i:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " headers:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " throwable:"
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = " file:"
            r0.append(r4)
            r0.append(r6)
            java.lang.String r4 = r0.toString()
            r2.LogD(r4)
            if (r5 == 0) goto L33
            java.lang.String r4 = r5.toString()
            goto L35
        L33:
            java.lang.String r4 = ""
        L35:
            org.cocos2dx.lib.Cocos2dxDownloader r5 = r2._downloader
            int r6 = r2._id
            r0 = 0
            r5.onFinish(r6, r3, r4, r0)
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
            long r0 = r10._initFileLen
            long r6 = r11 + r0
            long r8 = r13 + r0
            org.cocos2dx.lib.Cocos2dxDownloader r2 = r10._downloader
            int r3 = r10._id
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
    public void onSuccess(int r3, cz.msebera.android.httpclient.Header[] r4, java.io.File r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSuccess(i:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " headers:"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = " file:"
            r0.append(r3)
            r0.append(r5)
            java.lang.String r3 = r0.toString()
            r2.LogD(r3)
            java.io.File r3 = r2._finalFile
            boolean r3 = r3.exists()
            r4 = 0
            if (r3 == 0) goto L6d
            java.io.File r3 = r2._finalFile
            boolean r3 = r3.isDirectory()
            if (r3 == 0) goto L4d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "Dest file is directory:"
            r3.append(r5)
            java.io.File r5 = r2._finalFile
            java.lang.String r5 = r5.getAbsolutePath()
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            goto L77
        L4d:
            java.io.File r3 = r2._finalFile
            boolean r3 = r3.delete()
            if (r3 != 0) goto L6d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "Can't remove old file:"
            r3.append(r5)
            java.io.File r5 = r2._finalFile
            java.lang.String r5 = r5.getAbsolutePath()
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            goto L77
        L6d:
            java.io.File r3 = r2.getTargetFile()
            java.io.File r5 = r2._finalFile
            r3.renameTo(r5)
            r3 = r4
        L77:
            org.cocos2dx.lib.Cocos2dxDownloader r5 = r2._downloader
            int r0 = r2._id
            r1 = 0
            r5.onFinish(r0, r1, r3, r4)
            return
    }
}
