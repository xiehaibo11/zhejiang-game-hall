package com.tkay.network.toutiao;

public class TTTYInitManager extends com.tkay.core.api.TYInitMediation {
    public static final java.lang.String TAG = null;
    private static volatile com.tkay.network.toutiao.TTTYInitManager d;
    com.bykv.vk.openvk.TTCustomController a;
    int b;
    java.lang.String c;
    private android.os.Handler e;
    private boolean f;
    private java.util.Map<java.lang.String, java.lang.ref.WeakReference> g;
    private boolean h;
    private java.util.concurrent.atomic.AtomicBoolean i;
    private java.util.List<com.tkay.core.api.MediationInitCallback> j;
    private final java.lang.Object k;
    private final long l;

    final class 1 implements java.lang.Runnable {
        final java.lang.String a;
        final java.lang.String b;
        final int[] c;
        final android.content.Context d;
        final com.tkay.network.toutiao.TTTYInitManager e;


        1(com.tkay.network.toutiao.TTTYInitManager r1, java.lang.String r2, java.lang.String r3, int[] r4, android.content.Context r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r4 = this;
                r0 = 0
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = new com.bykv.vk.openvk.TTVfConfig$Builder     // Catch: java.lang.Throwable -> L4b
                r1.<init>()     // Catch: java.lang.Throwable -> L4b
                java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.appId(r2)     // Catch: java.lang.Throwable -> L4b
                r2 = 1
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.useTextureView(r2)     // Catch: java.lang.Throwable -> L4b
                java.lang.String r3 = r4.b     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.appName(r3)     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.titleBarTheme(r2)     // Catch: java.lang.Throwable -> L4b
                int[] r2 = r4.c     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.directDownloadNetworkType(r2)     // Catch: java.lang.Throwable -> L4b
                com.tkay.network.toutiao.TTTYInitManager r2 = r4.e     // Catch: java.lang.Throwable -> L4b
                java.lang.String r2 = com.tkay.network.toutiao.TTTYInitManager.a(r2)     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.data(r2)     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig$Builder r1 = r1.supportMultiProcess(r0)     // Catch: java.lang.Throwable -> L4b
                com.tkay.network.toutiao.TTTYInitManager r2 = r4.e     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTCustomController r2 = r2.a     // Catch: java.lang.Throwable -> L4b
                if (r2 == 0) goto L3c
                com.tkay.network.toutiao.TTTYInitManager r2 = r4.e     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTCustomController r2 = r2.a     // Catch: java.lang.Throwable -> L4b
                r1.customController(r2)     // Catch: java.lang.Throwable -> L4b
            L3c:
                android.content.Context r2 = r4.d     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfConfig r1 = r1.build()     // Catch: java.lang.Throwable -> L4b
                com.tkay.network.toutiao.TTTYInitManager$1$1 r3 = new com.tkay.network.toutiao.TTTYInitManager$1$1     // Catch: java.lang.Throwable -> L4b
                r3.<init>(r4)     // Catch: java.lang.Throwable -> L4b
                com.bykv.vk.openvk.TTVfSdk.init(r2, r1, r3)     // Catch: java.lang.Throwable -> L4b
                return
            L4b:
                r1 = move-exception
                com.tkay.network.toutiao.TTTYInitManager r2 = r4.e
                java.lang.String r1 = r1.getMessage()
                java.lang.String r3 = ""
                com.tkay.network.toutiao.TTTYInitManager.a(r2, r0, r3, r1)
                return
        }
    }

    static {
            java.lang.Class<com.tkay.network.toutiao.TTTYInitManager> r0 = com.tkay.network.toutiao.TTTYInitManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.toutiao.TTTYInitManager.TAG = r0
            return
    }

    private TTTYInitManager() {
            r3 = this;
            r3.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.g = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.k = r0
            r0 = 100
            r3.l = r0
            r0 = 0
            r3.b = r0
            java.lang.String r1 = "price"
            r3.c = r1
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r3.e = r1
            r1 = 1
            r3.f = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r0)
            r3.i = r1
            return
    }

    static java.lang.String a(com.tkay.network.toutiao.TTTYInitManager r0) {
            java.lang.String r0 = r0.b()
            return r0
    }

    private void a() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r3.g     // Catch: java.lang.Throwable -> L2c
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2c
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2c
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Throwable -> L2c
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2c
            if (r2 != 0) goto La
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r2 = r3.g     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            return
    }

    static void a(com.tkay.network.toutiao.TTTYInitManager r7, boolean r8, java.lang.String r9, java.lang.String r10) {
            java.lang.Object r0 = r7.k
            monitor-enter(r0)
            java.util.List<com.tkay.core.api.MediationInitCallback> r1 = r7.j     // Catch: java.lang.Throwable -> L43
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L43
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L37
            java.util.List<com.tkay.core.api.MediationInitCallback> r4 = r7.j     // Catch: java.lang.Throwable -> L43
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L43
            com.tkay.core.api.MediationInitCallback r4 = (com.tkay.core.api.MediationInitCallback) r4     // Catch: java.lang.Throwable -> L43
            if (r4 == 0) goto L34
            if (r8 == 0) goto L1d
            r4.onSuccess()     // Catch: java.lang.Throwable -> L43
            goto L34
        L1d:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r5.<init>()     // Catch: java.lang.Throwable -> L43
            r5.append(r9)     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = " | "
            r5.append(r6)     // Catch: java.lang.Throwable -> L43
            r5.append(r10)     // Catch: java.lang.Throwable -> L43
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L43
            r4.onFail(r5)     // Catch: java.lang.Throwable -> L43
        L34:
            int r3 = r3 + 1
            goto Lb
        L37:
            java.util.List<com.tkay.core.api.MediationInitCallback> r8 = r7.j     // Catch: java.lang.Throwable -> L43
            r8.clear()     // Catch: java.lang.Throwable -> L43
            java.util.concurrent.atomic.AtomicBoolean r7 = r7.i     // Catch: java.lang.Throwable -> L43
            r7.set(r2)     // Catch: java.lang.Throwable -> L43
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    private void a(boolean r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            java.lang.Object r0 = r7.k
            monitor-enter(r0)
            java.util.List<com.tkay.core.api.MediationInitCallback> r1 = r7.j     // Catch: java.lang.Throwable -> L43
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L43
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L37
            java.util.List<com.tkay.core.api.MediationInitCallback> r4 = r7.j     // Catch: java.lang.Throwable -> L43
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L43
            com.tkay.core.api.MediationInitCallback r4 = (com.tkay.core.api.MediationInitCallback) r4     // Catch: java.lang.Throwable -> L43
            if (r4 == 0) goto L34
            if (r8 == 0) goto L1d
            r4.onSuccess()     // Catch: java.lang.Throwable -> L43
            goto L34
        L1d:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r5.<init>()     // Catch: java.lang.Throwable -> L43
            r5.append(r9)     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = " | "
            r5.append(r6)     // Catch: java.lang.Throwable -> L43
            r5.append(r10)     // Catch: java.lang.Throwable -> L43
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L43
            r4.onFail(r5)     // Catch: java.lang.Throwable -> L43
        L34:
            int r3 = r3 + 1
            goto Lb
        L37:
            java.util.List<com.tkay.core.api.MediationInitCallback> r8 = r7.j     // Catch: java.lang.Throwable -> L43
            r8.clear()     // Catch: java.lang.Throwable -> L43
            java.util.concurrent.atomic.AtomicBoolean r8 = r7.i     // Catch: java.lang.Throwable -> L43
            r8.set(r2)     // Catch: java.lang.Throwable -> L43
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    private java.lang.String b() {
            r5 = this;
            java.lang.String r0 = ""
            int r1 = com.tkay.core.api.TYSDK.getPersionalizedAdStatus()     // Catch: java.lang.Throwable -> L8
            r5.b = r1     // Catch: java.lang.Throwable -> L8
        L8:
            int r1 = r5.b     // Catch: java.lang.Exception -> L44
            r2 = 2
            if (r1 != r2) goto L10
            java.lang.String r1 = "0"
            goto L11
        L10:
            r1 = r0
        L11:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L44
            r2.<init>()     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = "name"
            java.lang.String r4 = "personal_ads_type"
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = "value"
            r2.put(r3, r1)     // Catch: java.lang.Exception -> L44
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L44
            r1.<init>()     // Catch: java.lang.Exception -> L44
            r1.put(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L44
            boolean r2 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Exception -> L44
            if (r2 == 0) goto L43
            java.lang.String r2 = com.tkay.network.toutiao.TTTYInitManager.TAG     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = "TTPrivateData:"
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L44
            android.util.Log.i(r2, r3)     // Catch: java.lang.Exception -> L44
        L43:
            return r1
        L44:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    static boolean b(com.tkay.network.toutiao.TTTYInitManager r1) {
            r0 = 1
            r1.h = r0
            return r0
    }

    static android.os.Handler c(com.tkay.network.toutiao.TTTYInitManager r0) {
            android.os.Handler r0 = r0.e
            return r0
    }

    public static com.tkay.network.toutiao.TTTYInitManager getInstance() {
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.network.toutiao.TTTYInitManager> r0 = com.tkay.network.toutiao.TTTYInitManager.class
            monitor-enter(r0)
            com.tkay.network.toutiao.TTTYInitManager r1 = com.tkay.network.toutiao.TTTYInitManager.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.network.toutiao.TTTYInitManager r1 = new com.tkay.network.toutiao.TTTYInitManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.network.toutiao.TTTYInitManager.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.network.toutiao.TTTYInitManager r0 = com.tkay.network.toutiao.TTTYInitManager.d
            return r0
    }

    protected final void a(java.lang.String r2, java.lang.ref.WeakReference r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r1.g     // Catch: java.lang.Throwable -> L5
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    protected final synchronized void a(java.util.Map<java.lang.String, java.lang.Object> r2, com.bykv.vk.openvk.TTClientBidding r3, com.tkay.core.api.TYBiddingListener r4) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.a(r2, r0, r3, r4)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    protected final synchronized void a(java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.BaseAd r6, com.bykv.vk.openvk.TTClientBidding r7, com.tkay.core.api.TYBiddingListener r8) {
            r4 = this;
            monitor-enter(r4)
            if (r8 == 0) goto L42
            r0 = 0
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L3f
            boolean r2 = r5.containsKey(r2)     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto L20
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Throwable -> L1c
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L1c
            double r0 = java.lang.Double.parseDouble(r5)     // Catch: java.lang.Throwable -> L1c
            goto L20
        L1c:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L3f
        L20:
            com.tkay.network.toutiao.TTTYBiddingNotify r5 = new com.tkay.network.toutiao.TTTYBiddingNotify     // Catch: java.lang.Throwable -> L3f
            r5.<init>(r7)     // Catch: java.lang.Throwable -> L3f
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r7.<init>()     // Catch: java.lang.Throwable -> L3f
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3f
            r7.append(r2)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L3f
            com.tkay.core.api.TYAdConst$CURRENCY r2 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT     // Catch: java.lang.Throwable -> L3f
            com.tkay.core.api.TYBiddingResult r5 = com.tkay.core.api.TYBiddingResult.success(r0, r7, r5, r2)     // Catch: java.lang.Throwable -> L3f
            r8.onC2SBiddingResultWithCache(r5, r6)     // Catch: java.lang.Throwable -> L3f
            goto L42
        L3f:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
        L42:
            monitor-exit(r4)
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "CSJ"
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = "com.bykv.vk.openvk.TTVfSdk"
            return r0
    }

    @Override
    public java.lang.String getNetworkVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.network.toutiao.TTTYConst.getNetworkVersion()
            return r0
    }

    @Override
    public java.util.List getPermissionStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "android.permission.WAKE_LOCK"
            r0.add(r1)
            return r0
    }

    @Override
    public java.util.List getProviderStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "com.bykv.vk.openvk.TTFileProvider"
            r0.add(r1)
            java.lang.String r1 = "com.bykv.vk.openvk.multipro.TTMultiProvider"
            r0.add(r1)
            return r0
    }

    public void initSDK(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r1 = this;
            r0 = 0
            r1.initSDK(r2, r3, r0)
            return
    }

    @Override
    public void initSDK(android.content.Context r10, java.util.Map<java.lang.String, java.lang.Object> r11, com.tkay.core.api.MediationInitCallback r12) {
            r9 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r9.g     // Catch: java.lang.Throwable -> L2c
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2c
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2c
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Throwable -> L2c
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2c
            if (r2 != 0) goto La
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r2 = r9.g     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            boolean r0 = com.bykv.vk.openvk.TTVfSdk.isInitSuccess()
            if (r0 != 0) goto La3
            boolean r0 = r9.h
            if (r0 == 0) goto L37
            goto La3
        L37:
            java.lang.Object r0 = r9.k
            monitor-enter(r0)
            java.util.concurrent.atomic.AtomicBoolean r1 = r9.i     // Catch: java.lang.Throwable -> La0
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> La0
            if (r1 == 0) goto L4b
            if (r12 == 0) goto L49
            java.util.List<com.tkay.core.api.MediationInitCallback> r10 = r9.j     // Catch: java.lang.Throwable -> La0
            r10.add(r12)     // Catch: java.lang.Throwable -> La0
        L49:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            return
        L4b:
            java.util.List<com.tkay.core.api.MediationInitCallback> r1 = r9.j     // Catch: java.lang.Throwable -> La0
            if (r1 != 0) goto L56
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> La0
            r1.<init>()     // Catch: java.lang.Throwable -> La0
            r9.j = r1     // Catch: java.lang.Throwable -> La0
        L56:
            java.util.concurrent.atomic.AtomicBoolean r1 = r9.i     // Catch: java.lang.Throwable -> La0
            r2 = 1
            r1.set(r2)     // Catch: java.lang.Throwable -> La0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La0
            java.lang.String r0 = "app_id"
            java.lang.Object r11 = r11.get(r0)
            r5 = r11
            java.lang.String r5 = (java.lang.String) r5
            if (r12 == 0) goto L6d
            java.util.List<com.tkay.core.api.MediationInitCallback> r11 = r9.j
            r11.add(r12)
        L6d:
            boolean r11 = r9.f
            if (r11 == 0) goto L78
            r11 = 5
            int[] r11 = new int[r11]
            r11 = {x00be: FILL_ARRAY_DATA , data: [1, 2, 3, 4, 5} // fill-array
            goto L7e
        L78:
            int[] r11 = new int[r2]
            r12 = 0
            r0 = 2
            r11[r12] = r0
        L7e:
            r7 = r11
            android.content.Context r8 = r10.getApplicationContext()
            android.content.pm.PackageManager r11 = r10.getPackageManager()
            android.content.pm.ApplicationInfo r10 = r10.getApplicationInfo()
            java.lang.CharSequence r10 = r11.getApplicationLabel(r10)
            java.lang.String r6 = r10.toString()
            android.os.Handler r10 = r9.e
            com.tkay.network.toutiao.TTTYInitManager$1 r11 = new com.tkay.network.toutiao.TTTYInitManager$1
            r3 = r11
            r4 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r10.post(r11)
            return
        La0:
            r10 = move-exception
            monitor-exit(r0)
            throw r10
        La3:
            com.bykv.vk.openvk.TTVfConfig$Builder r10 = new com.bykv.vk.openvk.TTVfConfig$Builder
            r10.<init>()
            java.lang.String r11 = r9.b()
            com.bykv.vk.openvk.TTVfConfig$Builder r10 = r10.data(r11)
            com.bykv.vk.openvk.TTVfConfig r10 = r10.build()
            com.bykv.vk.openvk.TTVfSdk.updateAdConfig(r10)
            if (r12 == 0) goto Lbc
            r12.onSuccess()
        Lbc:
            return
    }

    public void setIsOpenDirectDownload(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setTtCustomController(com.bykv.vk.openvk.TTCustomController r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
