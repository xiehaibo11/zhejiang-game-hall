package org.cocos2dx.lib;

class HeadTaskHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    private org.cocos2dx.lib.Cocos2dxDownloader _downloader;
    java.lang.String _host;
    int _id;
    java.lang.String _path;
    java.lang.String _url;

    public HeadTaskHandler(org.cocos2dx.lib.Cocos2dxDownloader r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>()
            r0._downloader = r1
            r0._id = r2
            r0._host = r3
            r0._url = r4
            r0._path = r5
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
            java.lang.String r0 = "onFailure(code:"
            r4.append(r0)
            r4.append(r2)
            java.lang.String r0 = " headers:"
            r4.append(r0)
            r4.append(r3)
            java.lang.String r3 = " throwable:"
            r4.append(r3)
            r4.append(r5)
            java.lang.String r3 = " id:"
            r4.append(r3)
            int r3 = r1._id
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r1.LogD(r3)
            if (r5 == 0) goto L35
            java.lang.String r3 = r5.toString()
            goto L37
        L35:
            java.lang.String r3 = ""
        L37:
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
    public void onSuccess(int r4, cz.msebera.android.httpclient.Header[] r5, byte[] r6) {
            r3 = this;
            r4 = 0
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)
        L5:
            int r0 = r5.length
            if (r4 >= r0) goto L28
            r0 = r5[r4]
            java.lang.String r1 = r0.getName()
            java.lang.String r2 = "Accept-Ranges"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L25
            java.lang.String r4 = r0.getValue()
            java.lang.String r5 = "bytes"
            boolean r4 = r4.equals(r5)
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)
            goto L28
        L25:
            int r4 = r4 + 1
            goto L5
        L28:
            java.lang.String r4 = r3._host
            org.cocos2dx.lib.Cocos2dxDownloader.setResumingSupport(r4, r6)
            org.cocos2dx.lib.Cocos2dxDownloader r4 = r3._downloader
            int r5 = r3._id
            java.lang.String r6 = r3._url
            java.lang.String r0 = r3._path
            org.cocos2dx.lib.Cocos2dxDownloader.createTask(r4, r5, r6, r0)
            return
    }
}
