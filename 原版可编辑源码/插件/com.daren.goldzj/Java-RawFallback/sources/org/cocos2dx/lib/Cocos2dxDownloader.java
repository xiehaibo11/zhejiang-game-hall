package org.cocos2dx.lib;

public class Cocos2dxDownloader {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> _resumingSupport;
    private int _countOfMaxProcessingTasks;
    private org.cocos2dx.okhttp3.OkHttpClient _httpClient;
    private int _id;
    private int _runningTaskCount;
    private java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.okhttp3.Call> _taskMap;
    private java.util.Queue<java.lang.Runnable> _taskQueue;
    private java.lang.String _tempFileNameSuffix;



    class 3 implements java.lang.Runnable {
        java.lang.String domain;
        long downloadStart;
        java.io.File finalFile;
        java.lang.String host;
        java.io.File tempFile;
        final org.cocos2dx.lib.Cocos2dxDownloader val$downloader;
        final java.lang.String[] val$header;
        final int val$id;
        final java.lang.String val$path;
        final java.lang.String val$url;



        3(java.lang.String r1, java.lang.String r2, org.cocos2dx.lib.Cocos2dxDownloader r3, java.lang.String[] r4, int r5) {
                r0 = this;
                r0.val$path = r1
                r0.val$url = r2
                r0.val$downloader = r3
                r0.val$header = r4
                r0.val$id = r5
                r0.<init>()
                r1 = 0
                r0.domain = r1
                r0.host = r1
                r0.tempFile = r1
                r0.finalFile = r1
                r1 = 0
                r0.downloadStart = r1
                return
        }

        @Override
        public void run() {
                r7 = this;
                java.lang.String r0 = r7.val$path
                int r0 = r0.length()
                r1 = 0
                if (r0 <= 0) goto Lc0
                java.net.URI r0 = new java.net.URI     // Catch: java.lang.NullPointerException -> Lb5 java.net.URISyntaxException -> Lba
                java.lang.String r3 = r7.val$url     // Catch: java.lang.NullPointerException -> Lb5 java.net.URISyntaxException -> Lba
                r0.<init>(r3)     // Catch: java.lang.NullPointerException -> Lb5 java.net.URISyntaxException -> Lba
                java.lang.String r0 = r0.getHost()     // Catch: java.lang.NullPointerException -> Lb5 java.net.URISyntaxException -> Lba
                r7.domain = r0     // Catch: java.lang.NullPointerException -> Lb5 java.net.URISyntaxException -> Lba
                java.io.File r0 = new java.io.File
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = r7.val$path
                r3.append(r4)
                org.cocos2dx.lib.Cocos2dxDownloader r4 = r7.val$downloader
                java.lang.String r4 = org.cocos2dx.lib.Cocos2dxDownloader.access$100(r4)
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                r0.<init>(r3)
                r7.tempFile = r0
                java.io.File r0 = r7.tempFile
                boolean r0 = r0.isDirectory()
                if (r0 == 0) goto L3f
                goto Lbe
            L3f:
                java.io.File r0 = r7.tempFile
                java.io.File r0 = r0.getParentFile()
                boolean r3 = r0.isDirectory()
                if (r3 != 0) goto L52
                boolean r0 = r0.mkdirs()
                if (r0 != 0) goto L52
                goto Lbe
            L52:
                java.io.File r0 = new java.io.File
                java.lang.String r3 = r7.val$path
                r0.<init>(r3)
                r7.finalFile = r0
                java.io.File r0 = r7.finalFile
                boolean r0 = r0.isDirectory()
                if (r0 == 0) goto L64
                goto Lbe
            L64:
                java.io.File r0 = r7.tempFile
                long r3 = r0.length()
                java.lang.String r0 = r7.domain
                java.lang.String r5 = "www."
                boolean r0 = r0.startsWith(r5)
                if (r0 == 0) goto L7c
                java.lang.String r0 = r7.domain
                r5 = 4
                java.lang.String r0 = r0.substring(r5)
                goto L7e
            L7c:
                java.lang.String r0 = r7.domain
            L7e:
                r7.host = r0
                int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r0 <= 0) goto Lc0
                java.util.concurrent.ConcurrentHashMap r0 = org.cocos2dx.lib.Cocos2dxDownloader.access$200()
                java.lang.String r5 = r7.host
                boolean r0 = r0.containsKey(r5)
                if (r0 == 0) goto La5
                java.util.concurrent.ConcurrentHashMap r0 = org.cocos2dx.lib.Cocos2dxDownloader.access$200()
                java.lang.String r5 = r7.host
                java.lang.Object r0 = r0.get(r5)
                java.lang.Boolean r0 = (java.lang.Boolean) r0
                boolean r0 = r0.booleanValue()
                if (r0 == 0) goto La5
                r7.downloadStart = r3
                goto Lc0
            La5:
                java.io.PrintWriter r0 = new java.io.PrintWriter     // Catch: java.io.FileNotFoundException -> Lc0
                java.io.File r3 = r7.tempFile     // Catch: java.io.FileNotFoundException -> Lc0
                r0.<init>(r3)     // Catch: java.io.FileNotFoundException -> Lc0
                java.lang.String r3 = ""
                r0.print(r3)     // Catch: java.io.FileNotFoundException -> Lc0
                r0.close()     // Catch: java.io.FileNotFoundException -> Lc0
                goto Lc0
            Lb5:
                r0 = move-exception
                r0.printStackTrace()
                goto Lbe
            Lba:
                r0 = move-exception
                r0.printStackTrace()
            Lbe:
                r0 = 0
                goto L11a
            Lc0:
                org.cocos2dx.okhttp3.Request$Builder r0 = new org.cocos2dx.okhttp3.Request$Builder
                r0.<init>()
                java.lang.String r3 = r7.val$url
                org.cocos2dx.okhttp3.Request$Builder r0 = r0.url(r3)
                r3 = 0
            Lcc:
                java.lang.String[] r4 = r7.val$header
                int r5 = r4.length
                int r5 = r5 / 2
                if (r3 >= r5) goto Le1
                int r5 = r3 * 2
                r6 = r4[r5]
                int r5 = r5 + 1
                r4 = r4[r5]
                r0.addHeader(r6, r4)
                int r3 = r3 + 1
                goto Lcc
            Le1:
                long r3 = r7.downloadStart
                int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r5 <= 0) goto L104
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "bytes="
                r1.append(r2)
                long r2 = r7.downloadStart
                r1.append(r2)
                java.lang.String r2 = "-"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "RANGE"
                r0.addHeader(r2, r1)
            L104:
                org.cocos2dx.okhttp3.Request r0 = r0.build()
                org.cocos2dx.lib.Cocos2dxDownloader r1 = r7.val$downloader
                org.cocos2dx.okhttp3.OkHttpClient r1 = org.cocos2dx.lib.Cocos2dxDownloader.access$300(r1)
                org.cocos2dx.okhttp3.Call r0 = r1.newCall(r0)
                org.cocos2dx.lib.Cocos2dxDownloader$3$1 r1 = new org.cocos2dx.lib.Cocos2dxDownloader$3$1
                r1.<init>(r7)
                r0.enqueue(r1)
            L11a:
                if (r0 != 0) goto L138
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Can't create DownloadTask for "
                r0.append(r1)
                java.lang.String r1 = r7.val$url
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                org.cocos2dx.lib.Cocos2dxDownloader$3$2 r1 = new org.cocos2dx.lib.Cocos2dxDownloader$3$2
                r1.<init>(r7, r0)
                org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r1)
                goto L147
            L138:
                org.cocos2dx.lib.Cocos2dxDownloader r1 = r7.val$downloader
                java.util.concurrent.ConcurrentHashMap r1 = org.cocos2dx.lib.Cocos2dxDownloader.access$700(r1)
                int r2 = r7.val$id
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r1.put(r2, r0)
            L147:
                return
        }
    }



    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxDownloader._resumingSupport = r0
            return
    }

    public Cocos2dxDownloader() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1._httpClient = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1._taskMap = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1._taskQueue = r0
            r0 = 0
            r1._runningTaskCount = r0
            return
    }

    public static void abort(org.cocos2dx.lib.Cocos2dxDownloader r2, int r3) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            org.cocos2dx.lib.Cocos2dxDownloader$4 r1 = new org.cocos2dx.lib.Cocos2dxDownloader$4
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    static int access$000(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            int r0 = r0._id
            return r0
    }

    static java.lang.String access$100(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            java.lang.String r0 = r0._tempFileNameSuffix
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap access$200() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = org.cocos2dx.lib.Cocos2dxDownloader._resumingSupport
            return r0
    }

    static org.cocos2dx.okhttp3.OkHttpClient access$300(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            org.cocos2dx.okhttp3.OkHttpClient r0 = r0._httpClient
            return r0
    }

    static void access$400(org.cocos2dx.lib.Cocos2dxDownloader r0, int r1, int r2, java.lang.String r3, byte[] r4) {
            r0.onFinish(r1, r2, r3, r4)
            return
    }

    static void access$500(org.cocos2dx.lib.Cocos2dxDownloader r0, int r1, long r2, long r4, long r6) {
            r0.onProgress(r1, r2, r4, r6)
            return
    }

    static void access$600(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            r0.runNextTaskIfExists()
            return
    }

    static java.util.concurrent.ConcurrentHashMap access$700(org.cocos2dx.lib.Cocos2dxDownloader r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.okhttp3.Call> r0 = r0._taskMap
            return r0
    }

    public static void cancelAllRequests(org.cocos2dx.lib.Cocos2dxDownloader r2) {
            android.app.Activity r0 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            org.cocos2dx.lib.Cocos2dxDownloader$5 r1 = new org.cocos2dx.lib.Cocos2dxDownloader$5
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static org.cocos2dx.lib.Cocos2dxDownloader createDownloader(int r3, int r4, java.lang.String r5, int r6) {
            org.cocos2dx.lib.Cocos2dxDownloader r0 = new org.cocos2dx.lib.Cocos2dxDownloader
            r0.<init>()
            r0._id = r3
            r3 = 1
            if (r4 <= 0) goto L29
            org.cocos2dx.okhttp3.OkHttpClient r1 = new org.cocos2dx.okhttp3.OkHttpClient
            r1.<init>()
            org.cocos2dx.okhttp3.OkHttpClient$Builder r1 = r1.newBuilder()
            org.cocos2dx.okhttp3.OkHttpClient$Builder r1 = r1.followRedirects(r3)
            org.cocos2dx.okhttp3.OkHttpClient$Builder r3 = r1.followSslRedirects(r3)
            long r1 = (long) r4
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS
            org.cocos2dx.okhttp3.OkHttpClient$Builder r3 = r3.callTimeout(r1, r4)
            org.cocos2dx.okhttp3.OkHttpClient r3 = r3.build()
            r0._httpClient = r3
            goto L40
        L29:
            org.cocos2dx.okhttp3.OkHttpClient r4 = new org.cocos2dx.okhttp3.OkHttpClient
            r4.<init>()
            org.cocos2dx.okhttp3.OkHttpClient$Builder r4 = r4.newBuilder()
            org.cocos2dx.okhttp3.OkHttpClient$Builder r4 = r4.followRedirects(r3)
            org.cocos2dx.okhttp3.OkHttpClient$Builder r3 = r4.followSslRedirects(r3)
            org.cocos2dx.okhttp3.OkHttpClient r3 = r3.build()
            r0._httpClient = r3
        L40:
            r0._tempFileNameSuffix = r5
            r0._countOfMaxProcessingTasks = r6
            return r0
    }

    public static void createTask(org.cocos2dx.lib.Cocos2dxDownloader r7, int r8, java.lang.String r9, java.lang.String r10, java.lang.String[] r11) {
            org.cocos2dx.lib.Cocos2dxDownloader$3 r6 = new org.cocos2dx.lib.Cocos2dxDownloader$3
            r0 = r6
            r1 = r10
            r2 = r9
            r3 = r7
            r4 = r11
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r7.enqueueTask(r6)
            return
    }

    private void enqueueTask(java.lang.Runnable r4) {
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

    private void onFinish(int r8, int r9, java.lang.String r10, byte[] r11) {
            r7 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.okhttp3.Call> r0 = r7._taskMap
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            java.lang.Object r0 = r0.get(r1)
            org.cocos2dx.okhttp3.Call r0 = (org.cocos2dx.okhttp3.Call) r0
            if (r0 != 0) goto Lf
            return
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.okhttp3.Call> r0 = r7._taskMap
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            r0.remove(r1)
            int r0 = r7._runningTaskCount
            int r0 = r0 + (-1)
            r7._runningTaskCount = r0
            org.cocos2dx.lib.Cocos2dxDownloader$2 r0 = new org.cocos2dx.lib.Cocos2dxDownloader$2
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            r7.runNextTaskIfExists()
            return
    }

    private void onProgress(int r11, long r12, long r14, long r16) {
            r10 = this;
            org.cocos2dx.lib.Cocos2dxDownloader$1 r9 = new org.cocos2dx.lib.Cocos2dxDownloader$1
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r5 = r14
            r7 = r16
            r0.<init>(r1, r2, r3, r5, r7)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r9)
            return
    }

    private void runNextTaskIfExists() {
            r3 = this;
            java.util.Queue<java.lang.Runnable> r0 = r3._taskQueue
            monitor-enter(r0)
        L3:
            int r1 = r3._runningTaskCount     // Catch: java.lang.Throwable -> L29
            int r2 = r3._countOfMaxProcessingTasks     // Catch: java.lang.Throwable -> L29
            if (r1 >= r2) goto L27
            java.util.Queue<java.lang.Runnable> r1 = r3._taskQueue     // Catch: java.lang.Throwable -> L29
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L29
            if (r1 <= 0) goto L27
            java.util.Queue<java.lang.Runnable> r1 = r3._taskQueue     // Catch: java.lang.Throwable -> L29
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L29
            java.lang.Runnable r1 = (java.lang.Runnable) r1     // Catch: java.lang.Throwable -> L29
            android.app.Activity r2 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()     // Catch: java.lang.Throwable -> L29
            r2.runOnUiThread(r1)     // Catch: java.lang.Throwable -> L29
            int r1 = r3._runningTaskCount     // Catch: java.lang.Throwable -> L29
            int r1 = r1 + 1
            r3._runningTaskCount = r1     // Catch: java.lang.Throwable -> L29
            goto L3
        L27:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    native void nativeOnFinish(int r1, int r2, int r3, java.lang.String r4, byte[] r5);

    native void nativeOnProgress(int r1, int r2, long r3, long r5, long r7);
}
