package com.czhj.sdk.common.network;

public class Networking {
    private static final java.lang.String a = "sigmob-volley-cache";
    private static final java.lang.String b = null;
    private static volatile com.czhj.sdk.common.network.SigmobRequestQueue c;
    private static volatile com.czhj.sdk.common.network.SigmobRequestQueue d;
    private static volatile com.czhj.sdk.common.network.SigmobRequestQueue e;
    private static volatile com.czhj.sdk.common.network.SigmobRequestQueue f;
    private static volatile java.lang.String g;
    private static volatile java.lang.String h;
    private static volatile com.czhj.sdk.common.network.MaxWidthImageLoader i;
    private static boolean j;
    private static com.czhj.volley.toolbox.HurlStack.UrlRewriter k;
    private static volatile com.czhj.volley.Cache l;
    private static com.czhj.sdk.common.network.SigmobRequestQueue m;
    private static java.util.HashSet n;




    static {
            java.lang.String r0 = "http.agent"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            com.czhj.sdk.common.network.Networking.b = r0
            r0 = 0
            com.czhj.sdk.common.network.Networking.j = r0
            r0 = 0
            com.czhj.sdk.common.network.Networking.l = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.czhj.sdk.common.network.Networking.n = r0
            return
    }

    public Networking() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void AddSigmobServerURL(java.lang.String r1) {
            java.util.HashSet r0 = com.czhj.sdk.common.network.Networking.n
            r0.add(r1)
            return
    }

    private static com.czhj.volley.Cache a(android.content.Context r0) {
            com.czhj.volley.Cache r0 = com.czhj.sdk.common.network.Networking.l
            if (r0 != 0) goto Lb
            com.czhj.volley.toolbox.NoCache r0 = new com.czhj.volley.toolbox.NoCache
            r0.<init>()
            com.czhj.sdk.common.network.Networking.l = r0
        Lb:
            com.czhj.volley.Cache r0 = com.czhj.sdk.common.network.Networking.l
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.g
            return r0
    }

    static java.lang.String a(java.lang.String r0) {
            com.czhj.sdk.common.network.Networking.g = r0
            return r0
    }

    private static com.czhj.volley.toolbox.HurlStack.UrlRewriter b(android.content.Context r0) {
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r0 = com.czhj.sdk.common.network.Networking.k
            if (r0 != 0) goto Lb
            com.czhj.sdk.common.network.PlayServicesUrlRewriter r0 = new com.czhj.sdk.common.network.PlayServicesUrlRewriter
            r0.<init>()
            com.czhj.sdk.common.network.Networking.k = r0
        Lb:
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r0 = com.czhj.sdk.common.network.Networking.k
            return r0
    }

    static java.lang.String b() {
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.b
            return r0
    }

    private static com.czhj.sdk.common.network.SigmobRequestQueue c(android.content.Context r3) {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.c
            if (r0 != 0) goto L2f
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.c     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L2a
            r0 = 10000(0x2710, float:1.4013E-41)
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = com.czhj.sdk.common.network.CustomSSLSocketFactory.getDefault(r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.RequestQueueHttpStack r2 = new com.czhj.sdk.common.network.RequestQueueHttpStack     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r3 = b(r3)     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.BasicNetwork r3 = new com.czhj.volley.toolbox.BasicNetwork     // Catch: java.lang.Throwable -> L2c
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = new com.czhj.sdk.common.network.SigmobRequestQueue     // Catch: java.lang.Throwable -> L2c
            r2 = 2
            r0.<init>(r3, r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.Networking.c = r0     // Catch: java.lang.Throwable -> L2c
            r0.start()     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            throw r3
        L2f:
            return r0
    }

    private static boolean c() {
            boolean r0 = com.czhj.sdk.common.network.Networking.j
            return r0
    }

    public static synchronized void clearForTesting() {
            java.lang.Class<com.czhj.sdk.common.network.Networking> r0 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r0)
            r1 = 0
            com.czhj.sdk.common.network.Networking.c = r1     // Catch: java.lang.Throwable -> Lc
            com.czhj.sdk.common.network.Networking.i = r1     // Catch: java.lang.Throwable -> Lc
            com.czhj.sdk.common.network.Networking.g = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)
            return
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static java.lang.String d(android.content.Context r4) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r4)
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.g
            if (r0 != 0) goto L24
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.g     // Catch: java.lang.Throwable -> L21
            if (r0 != 0) goto L1f
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L21
            android.os.Looper r3 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L21
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L21
            com.czhj.sdk.common.network.Networking$3 r3 = new com.czhj.sdk.common.network.Networking$3     // Catch: java.lang.Throwable -> L21
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L21
            r2.post(r3)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L21
            goto L24
        L21:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L21
            throw r4
        L24:
            return r0
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue getAdTrackerRetryQueue() {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.f
            return r0
    }

    public static java.lang.String getBaseUrlScheme() {
            boolean r0 = c()
            if (r0 == 0) goto L9
            java.lang.String r0 = "https"
            goto Lb
        L9:
            java.lang.String r0 = "http"
        Lb:
            return r0
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue getBuriedPointRequestQueue() {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.e
            return r0
    }

    public static java.lang.String getCachedUserAgent() {
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.g
            if (r0 != 0) goto L6
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.b
        L6:
            return r0
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue getDownloadRequestQueue() {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.d
            return r0
    }

    public static com.czhj.volley.toolbox.ImageLoader getImageLoader() {
            com.czhj.sdk.common.network.MaxWidthImageLoader r0 = com.czhj.sdk.common.network.Networking.i
            return r0
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue getRequestQueue() {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.c
            return r0
    }

    public static java.lang.String getScheme() {
            java.lang.String r0 = "https"
            return r0
    }

    public static java.util.HashSet getSigmobServerURLS() {
            java.util.HashSet r0 = com.czhj.sdk.common.network.Networking.n
            return r0
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue getStreamDownloadRequestQueue() {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.m
            return r0
    }

    public static com.czhj.volley.toolbox.HurlStack.UrlRewriter getUrlRewriter() {
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r0 = com.czhj.sdk.common.network.Networking.k
            return r0
    }

    public static java.lang.String getUserAgent() {
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.h
            return r0
        Lb:
            java.lang.String r0 = com.czhj.sdk.common.network.Networking.g
            return r0
    }

    public static void initialize(android.content.Context r0) {
            initializeUserAgentCache(r0)
            d(r0)
            c(r0)
            initializeBuriedPointRequestQueue(r0)
            initializeDownloadRequestQueue(r0)
            initializeadTrackerReTryQueue(r0)
            initializeStreamDownloadRequestQueue(r0)
            initializeImageLoader(r0)
            return
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue initializeBuriedPointRequestQueue(android.content.Context r3) {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.e
            if (r0 != 0) goto L2f
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.e     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L2a
            r0 = 10000(0x2710, float:1.4013E-41)
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = com.czhj.sdk.common.network.CustomSSLSocketFactory.getDefault(r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.RequestQueueHttpStack r2 = new com.czhj.sdk.common.network.RequestQueueHttpStack     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r3 = b(r3)     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.BasicNetwork r3 = new com.czhj.volley.toolbox.BasicNetwork     // Catch: java.lang.Throwable -> L2c
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = new com.czhj.sdk.common.network.SigmobRequestQueue     // Catch: java.lang.Throwable -> L2c
            r2 = 1
            r0.<init>(r3, r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.Networking.e = r0     // Catch: java.lang.Throwable -> L2c
            r0.start()     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            throw r3
        L2f:
            return r0
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue initializeDownloadRequestQueue(android.content.Context r3) {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.d
            if (r0 != 0) goto L2f
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.d     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L2a
            r0 = 10000(0x2710, float:1.4013E-41)
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = com.czhj.sdk.common.network.CustomSSLSocketFactory.getDefault(r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.RequestQueueHttpStack r2 = new com.czhj.sdk.common.network.RequestQueueHttpStack     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r3 = b(r3)     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.FileDownloadNetwork r3 = new com.czhj.volley.toolbox.FileDownloadNetwork     // Catch: java.lang.Throwable -> L2c
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = new com.czhj.sdk.common.network.SigmobRequestQueue     // Catch: java.lang.Throwable -> L2c
            r2 = 4
            r0.<init>(r3, r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.Networking.d = r0     // Catch: java.lang.Throwable -> L2c
            r0.start()     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            throw r3
        L2f:
            return r0
    }

    public static com.czhj.volley.toolbox.ImageLoader initializeImageLoader(android.content.Context r5) {
            com.czhj.sdk.common.network.MaxWidthImageLoader r0 = com.czhj.sdk.common.network.Networking.i
            if (r0 != 0) goto L2a
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            com.czhj.sdk.common.network.MaxWidthImageLoader r0 = com.czhj.sdk.common.network.Networking.i     // Catch: java.lang.Throwable -> L27
            if (r0 != 0) goto L25
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = getRequestQueue()     // Catch: java.lang.Throwable -> L27
            int r2 = com.czhj.sdk.common.utils.DeviceUtils.memoryCacheSizeBytes(r5)     // Catch: java.lang.Throwable -> L27
            com.czhj.sdk.common.network.Networking$1 r3 = new com.czhj.sdk.common.network.Networking$1     // Catch: java.lang.Throwable -> L27
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L27
            com.czhj.sdk.common.network.MaxWidthImageLoader r2 = new com.czhj.sdk.common.network.MaxWidthImageLoader     // Catch: java.lang.Throwable -> L27
            com.czhj.sdk.common.network.Networking$2 r4 = new com.czhj.sdk.common.network.Networking$2     // Catch: java.lang.Throwable -> L27
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L27
            r2.<init>(r0, r5, r4)     // Catch: java.lang.Throwable -> L27
            com.czhj.sdk.common.network.Networking.i = r2     // Catch: java.lang.Throwable -> L27
            r0 = r2
        L25:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L27
            goto L2a
        L27:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L27
            throw r5
        L2a:
            return r0
    }

    public static void initializeMill(android.content.Context r1) {
            initializeUserAgentCache(r1)
            android.content.Context r0 = r1.getApplicationContext()
            d(r0)
            c(r1)
            initializeBuriedPointRequestQueue(r1)
            return
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue initializeStreamDownloadRequestQueue(android.content.Context r3) {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.m
            if (r0 != 0) goto L2f
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.m     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L2a
            r0 = 10000(0x2710, float:1.4013E-41)
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = com.czhj.sdk.common.network.CustomSSLSocketFactory.getDefault(r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.RequestQueueHttpStack r2 = new com.czhj.sdk.common.network.RequestQueueHttpStack     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r3 = b(r3)     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L2c
            com.czhj.volley.toolbox.FileDownloadNetwork r3 = new com.czhj.volley.toolbox.FileDownloadNetwork     // Catch: java.lang.Throwable -> L2c
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = new com.czhj.sdk.common.network.SigmobRequestQueue     // Catch: java.lang.Throwable -> L2c
            r2 = 2
            r0.<init>(r3, r2)     // Catch: java.lang.Throwable -> L2c
            com.czhj.sdk.common.network.Networking.m = r0     // Catch: java.lang.Throwable -> L2c
            r0.start()     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            throw r3
        L2f:
            return r0
    }

    public static void initializeUserAgentCache(android.content.Context r2) {
            android.content.SharedPreferences r2 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r2)
            java.lang.String r0 = "user-agent-cache"
            r1 = 0
            java.lang.String r2 = r2.getString(r0, r1)
            com.czhj.sdk.common.network.Networking.h = r2
            return
    }

    public static com.czhj.sdk.common.network.SigmobRequestQueue initializeadTrackerReTryQueue(android.content.Context r4) {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.f
            if (r0 != 0) goto L37
            java.lang.Class<com.czhj.sdk.common.network.Networking> r1 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.f     // Catch: java.lang.Throwable -> L34
            if (r0 != 0) goto L32
            r0 = 10000(0x2710, float:1.4013E-41)
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = com.czhj.sdk.common.network.CustomSSLSocketFactory.getDefault(r0)     // Catch: java.lang.Throwable -> L34
            com.czhj.sdk.common.network.RequestQueueHttpStack r2 = new com.czhj.sdk.common.network.RequestQueueHttpStack     // Catch: java.lang.Throwable -> L34
            com.czhj.volley.toolbox.HurlStack$UrlRewriter r3 = b(r4)     // Catch: java.lang.Throwable -> L34
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L34
            com.czhj.volley.toolbox.BasicNetwork r0 = new com.czhj.volley.toolbox.BasicNetwork     // Catch: java.lang.Throwable -> L34
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L34
            com.czhj.volley.Cache r2 = com.czhj.sdk.common.network.Networking.l     // Catch: java.lang.Throwable -> L34
            if (r2 != 0) goto L26
            a(r4)     // Catch: java.lang.Throwable -> L34
        L26:
            com.czhj.sdk.common.network.SigmobRequestQueue r4 = new com.czhj.sdk.common.network.SigmobRequestQueue     // Catch: java.lang.Throwable -> L34
            r2 = 2
            r4.<init>(r0, r2)     // Catch: java.lang.Throwable -> L34
            com.czhj.sdk.common.network.Networking.f = r4     // Catch: java.lang.Throwable -> L34
            r4.start()     // Catch: java.lang.Throwable -> L34
            r0 = r4
        L32:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L34
            goto L37
        L34:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L34
            throw r4
        L37:
            return r0
    }

    public static synchronized void setImageLoaderForTesting(com.czhj.sdk.common.network.MaxWidthImageLoader r1) {
            java.lang.Class<com.czhj.sdk.common.network.Networking> r0 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r0)
            com.czhj.sdk.common.network.Networking.i = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void setRequestQueueForTesting(com.czhj.sdk.common.network.SigmobRequestQueue r1) {
            java.lang.Class<com.czhj.sdk.common.network.Networking> r0 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r0)
            com.czhj.sdk.common.network.Networking.c = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void setUserAgentForTesting(java.lang.String r1) {
            java.lang.Class<com.czhj.sdk.common.network.Networking> r0 = com.czhj.sdk.common.network.Networking.class
            monitor-enter(r0)
            com.czhj.sdk.common.network.Networking.g = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void useHttps(boolean r0) {
            com.czhj.sdk.common.network.Networking.j = r0
            return
    }
}
