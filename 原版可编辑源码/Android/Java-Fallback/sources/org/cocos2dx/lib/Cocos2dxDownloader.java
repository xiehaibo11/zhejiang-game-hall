package org.cocos2dx.lib;

public class Cocos2dxDownloader {
    private static java.util.HashMap<java.lang.String, java.lang.Boolean> _resumingSupport;
    private int _countOfMaxProcessingTasks;
    private com.loopj.android.http.AsyncHttpClient _httpClient;
    private int _id;
    private int _runningTaskCount;
    private java.util.HashMap _taskMap;
    private java.util.Queue<java.lang.Runnable> _taskQueue;
    private java.lang.String _tempFileNameSufix;





    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxDownloader._resumingSupport = r0
            return
    }

    public Cocos2dxDownloader() {
            r1 = this;
            r1.<init>()
            com.loopj.android.http.AsyncHttpClient r0 = new com.loopj.android.http.AsyncHttpClient
            r0.<init>()
            r1._httpClient = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1._taskMap = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1._taskQueue = r0
            r0 = 0
            r1._runningTaskCount = r0
            return
    }

    static int access$000(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            int r0 = r0._id
            return r0
    }

    static com.loopj.android.http.AsyncHttpClient access$100(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            com.loopj.android.http.AsyncHttpClient r0 = r0._httpClient
            return r0
    }

    static java.util.HashMap access$200() {
            java.util.HashMap<java.lang.String, java.lang.Boolean> r0 = org.cocos2dx.lib.Cocos2dxDownloader._resumingSupport
            return r0
    }

    static java.lang.String access$300(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            java.lang.String r0 = r0._tempFileNameSufix
            return r0
    }

    static java.util.HashMap access$400(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            java.util.HashMap r0 = r0._taskMap
            return r0
    }

    public static void cancelAllRequests(org.cocos2dx.lib.Cocos2dxDownloader r2) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            org.cocos2dx.lib.Cocos2dxDownloader$4 r1 = new org.cocos2dx.lib.Cocos2dxDownloader$4
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static org.cocos2dx.lib.Cocos2dxDownloader createDownloader(int r2, int r3, java.lang.String r4, int r5) {
            org.cocos2dx.lib.Cocos2dxDownloader r0 = new org.cocos2dx.lib.Cocos2dxDownloader
            r0.<init>()
            r0._id = r2
            com.loopj.android.http.AsyncHttpClient r2 = r0._httpClient
            r1 = 1
            r2.setEnableRedirects(r1)
            if (r3 <= 0) goto L16
            com.loopj.android.http.AsyncHttpClient r2 = r0._httpClient
            int r3 = r3 * 1000
            r2.setTimeout(r3)
        L16:
            com.loopj.android.http.AsyncHttpClient r2 = r0._httpClient
            java.lang.Class<javax.net.ssl.SSLException> r2 = javax.net.ssl.SSLException.class
            com.loopj.android.http.AsyncHttpClient.allowRetryExceptionClass(r2)
            com.loopj.android.http.AsyncHttpClient r2 = r0._httpClient
            r3 = 0
            r2.setURLEncodingEnabled(r3)
            r0._tempFileNameSufix = r4
            r0._countOfMaxProcessingTasks = r5
            return r0
    }

    public static void createTask(org.cocos2dx.lib.Cocos2dxDownloader r1, int r2, java.lang.String r3, java.lang.String r4) {
            org.cocos2dx.lib.Cocos2dxDownloader$3 r0 = new org.cocos2dx.lib.Cocos2dxDownloader$3
            r0.<init>(r4, r1, r2, r3)
            r1.enqueueTask(r0)
            return
    }

    public static void setResumingSupport(java.lang.String r1, java.lang.Boolean r2) {
            java.util.HashMap<java.lang.String, java.lang.Boolean> r0 = org.cocos2dx.lib.Cocos2dxDownloader._resumingSupport
            r0.put(r1, r2)
            return
    }

    public void enqueueTask(java.lang.Runnable r4) {
            r3 = this;
            java.util.Queue<java.lang.Runnable> r0 = r3._taskQueue
            monitor-enter(r0)
            int r1 = r3._runningTaskCount     // Catch: java.lang.Throwable -> L1e
            int r2 = r3._countOfMaxProcessingTasks     // Catch: java.lang.Throwable -> L1e
            if (r1 >= r2) goto L17
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()     // Catch: java.lang.Throwable -> L1e
            r1.runOnUiThread(r4)     // Catch: java.lang.Throwable -> L1e
            int r4 = r3._runningTaskCount     // Catch: java.lang.Throwable -> L1e
            int r4 = r4 + 1
            r3._runningTaskCount = r4     // Catch: java.lang.Throwable -> L1e
            goto L1c
        L17:
            java.util.Queue<java.lang.Runnable> r1 = r3._taskQueue     // Catch: java.lang.Throwable -> L1e
            r1.add(r4)     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r4
    }

    native void nativeOnFinish(int r1, int r2, int r3, java.lang.String r4, byte[] r5);

    native void nativeOnProgress(int r1, int r2, long r3, long r5, long r7);

    public void onFinish(int r9, int r10, java.lang.String r11, byte[] r12) {
            r8 = this;
            java.util.HashMap r0 = r8._taskMap
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)
            java.lang.Object r0 = r0.get(r1)
            org.cocos2dx.lib.DownloadTask r0 = (org.cocos2dx.lib.DownloadTask) r0
            if (r0 != 0) goto Lf
            return
        Lf:
            java.util.HashMap r0 = r8._taskMap
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)
            r0.remove(r1)
            org.cocos2dx.lib.Cocos2dxDownloader$2 r0 = new org.cocos2dx.lib.Cocos2dxDownloader$2
            r2 = r0
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            return
    }

    void onProgress(int r12, long r13, long r15, long r17) {
            r11 = this;
            r9 = r11
            java.util.HashMap r0 = r9._taskMap
            java.lang.Integer r1 = java.lang.Integer.valueOf(r12)
            java.lang.Object r0 = r0.get(r1)
            org.cocos2dx.lib.DownloadTask r0 = (org.cocos2dx.lib.DownloadTask) r0
            if (r0 == 0) goto L1a
            r3 = r13
            r0.bytesReceived = r3
            r5 = r15
            r0.totalBytesReceived = r5
            r7 = r17
            r0.totalBytesExpected = r7
            goto L1e
        L1a:
            r3 = r13
            r5 = r15
            r7 = r17
        L1e:
            org.cocos2dx.lib.Cocos2dxDownloader$1 r10 = new org.cocos2dx.lib.Cocos2dxDownloader$1
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r5 = r15
            r7 = r17
            r0.<init>(r1, r2, r3, r5, r7)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r10)
            return
    }

    public void onStart(int r2) {
            r1 = this;
            java.util.HashMap r0 = r1._taskMap
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            org.cocos2dx.lib.DownloadTask r2 = (org.cocos2dx.lib.DownloadTask) r2
            if (r2 == 0) goto L11
            r2.resetStatus()
        L11:
            return
    }

    public void runNextTaskIfExists() {
            r3 = this;
            java.util.Queue<java.lang.Runnable> r0 = r3._taskQueue
            monitor-enter(r0)
            java.util.Queue<java.lang.Runnable> r1 = r3._taskQueue     // Catch: java.lang.Throwable -> L1d
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L1d
            java.lang.Runnable r1 = (java.lang.Runnable) r1     // Catch: java.lang.Throwable -> L1d
            if (r1 == 0) goto L15
            android.app.Activity r2 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()     // Catch: java.lang.Throwable -> L1d
            r2.runOnUiThread(r1)     // Catch: java.lang.Throwable -> L1d
            goto L1b
        L15:
            int r1 = r3._runningTaskCount     // Catch: java.lang.Throwable -> L1d
            int r1 = r1 + (-1)
            r3._runningTaskCount = r1     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r1
    }
}
