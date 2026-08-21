package com.mbridge.msdk.foundation.download.download;

public class DownLoadH5SourceListener implements com.mbridge.msdk.foundation.download.download.H5DownLoadManager.IOnDownLoadH5Source {
    private static java.lang.String TAG = "DownLoadH5SourceListener";
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener> listeners;
    private java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> mResDownloadingMap;
    private java.lang.String mUrl;
    private com.mbridge.msdk.foundation.download.download.ResourceManager resourceManager;

    static {
            return
    }

    public DownLoadH5SourceListener(java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r2, com.mbridge.msdk.foundation.download.download.ResourceManager r3, com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.listeners = r0
            r1.mResDownloadingMap = r2
            r1.resourceManager = r3
            r0.add(r4)
            r1.mUrl = r5
            return
    }

    @Override
    public void onFailed(java.lang.String r5) {
            r4 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r0 = r4.mResDownloadingMap     // Catch: java.lang.Exception -> L38
            if (r0 != 0) goto L26
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r0 = r4.listeners     // Catch: java.lang.Exception -> L38
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L38
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r1 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener) r1     // Catch: java.lang.Exception -> L38
            if (r1 == 0) goto La
            java.lang.String r2 = r4.mUrl     // Catch: java.lang.Exception -> L38
            java.lang.String r3 = "mResDownloadingMap  is null"
            r1.onFailed(r2, r3)     // Catch: java.lang.Exception -> L38
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r2 = r4.listeners     // Catch: java.lang.Exception -> L38
            r2.remove(r1)     // Catch: java.lang.Exception -> L38
            goto La
        L25:
            return
        L26:
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r0 = r4.mResDownloadingMap     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.mUrl     // Catch: java.lang.Exception -> L38
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L38
            if (r0 == 0) goto L4f
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r0 = r4.mResDownloadingMap     // Catch: java.lang.Exception -> L38
            java.lang.String r1 = r4.mUrl     // Catch: java.lang.Exception -> L38
            r0.remove(r1)     // Catch: java.lang.Exception -> L38
            goto L4f
        L38:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L40
            r0.printStackTrace()
        L40:
            java.lang.String r5 = r0.getMessage()     // Catch: java.lang.Throwable -> L45
            goto L4f
        L45:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener.TAG
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L4f:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r0 = r4.listeners
            java.util.Iterator r0 = r0.iterator()
        L55:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6e
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r1 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener) r1
            if (r1 == 0) goto L55
            java.lang.String r2 = r4.mUrl
            r1.onFailed(r2, r5)
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r2 = r4.listeners
            r2.remove(r1)
            goto L55
        L6e:
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onSuccess(java.lang.String r2, byte[] r3, java.lang.String r4) {
            r1 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r2 = r1.mResDownloadingMap     // Catch: java.lang.Exception -> L75
            if (r2 != 0) goto L24
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r2 = r1.listeners     // Catch: java.lang.Exception -> L75
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L75
        La:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L75
            if (r3 == 0) goto L23
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L75
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r3 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener) r3     // Catch: java.lang.Exception -> L75
            if (r3 == 0) goto La
            java.lang.String r0 = "mResDownloadingMap  is null"
            r3.onFailed(r4, r0)     // Catch: java.lang.Exception -> L75
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r0 = r1.listeners     // Catch: java.lang.Exception -> L75
            r0.remove(r3)     // Catch: java.lang.Exception -> L75
            goto La
        L23:
            return
        L24:
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r2 = r1.mResDownloadingMap     // Catch: java.lang.Exception -> L75
            boolean r2 = r2.containsKey(r4)     // Catch: java.lang.Exception -> L75
            if (r2 == 0) goto L31
            java.util.concurrent.ConcurrentMap<java.lang.String, com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener> r2 = r1.mResDownloadingMap     // Catch: java.lang.Exception -> L75
            r2.remove(r4)     // Catch: java.lang.Exception -> L75
        L31:
            if (r3 == 0) goto L72
            int r2 = r3.length     // Catch: java.lang.Exception -> L75
            if (r2 <= 0) goto L72
            com.mbridge.msdk.foundation.download.download.ResourceManager r2 = r1.resourceManager     // Catch: java.lang.Exception -> L75
            java.lang.String r2 = r2.saveResFile(r4, r3)     // Catch: java.lang.Exception -> L75
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L75
            if (r3 == 0) goto L60
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r2 = r1.listeners     // Catch: java.lang.Exception -> L75
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L75
        L48:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L75
            if (r3 == 0) goto L5f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L75
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r3 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener) r3     // Catch: java.lang.Exception -> L75
            if (r3 == 0) goto L48
            r3.onSuccess(r4)     // Catch: java.lang.Exception -> L75
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r0 = r1.listeners     // Catch: java.lang.Exception -> L75
            r0.remove(r3)     // Catch: java.lang.Exception -> L75
            goto L48
        L5f:
            return
        L60:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L75
            r3.<init>()     // Catch: java.lang.Exception -> L75
            java.lang.String r0 = "data save failed:"
            r3.append(r0)     // Catch: java.lang.Exception -> L75
            r3.append(r2)     // Catch: java.lang.Exception -> L75
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L75
            goto L8e
        L72:
            java.lang.String r2 = "response data is error"
            goto L8e
        L75:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L7d
            r2.printStackTrace()
        L7d:
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L82
            goto L8e
        L82:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.foundation.download.download.DownLoadH5SourceListener.TAG
            java.lang.String r0 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
            java.lang.String r2 = ""
        L8e:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        L94:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto La6
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = (com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener) r0
            if (r0 == 0) goto L94
            r0.onFailed(r4, r2)
            goto L94
        La6:
            return
    }

    public void setZipDownloadListener(com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener> r0 = r1.listeners
            r0.add(r2)
            return
    }
}
