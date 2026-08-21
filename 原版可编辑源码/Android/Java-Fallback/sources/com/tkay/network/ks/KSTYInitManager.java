package com.tkay.network.ks;

public class KSTYInitManager extends com.tkay.core.api.TYInitMediation {
    private static final java.lang.String d = null;
    private static volatile com.tkay.network.ks.KSTYInitManager e;
    java.lang.Boolean a;
    java.lang.Boolean b;
    int c;
    private android.os.Handler f;
    private final java.lang.Object g;
    private boolean h;
    private com.tkay.network.ks.KSTYCustomController i;
    private java.util.Map<java.lang.String, java.lang.ref.WeakReference> j;



    static {
            java.lang.Class<com.tkay.network.ks.KSTYInitManager> r0 = com.tkay.network.ks.KSTYInitManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.ks.KSTYInitManager.d = r0
            return
    }

    private KSTYInitManager() {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.g = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.j = r0
            r0 = 0
            r2.c = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.f = r0
            return
    }

    static java.lang.Object a(com.tkay.network.ks.KSTYInitManager r0) {
            java.lang.Object r0 = r0.g
            return r0
    }

    private void a() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r3.j     // Catch: java.lang.Throwable -> L2c
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
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r2 = r3.j     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            return
    }

    static void a(com.tkay.network.ks.KSTYInitManager r0, java.lang.Runnable r1) {
            r0.runOnThreadPool(r1)
            return
    }

    private void b() {
            r5 = this;
            int r0 = r5.c
            r1 = 0
            r2 = 1
            r3 = 2
            if (r0 != r3) goto L9
            r0 = r1
            goto La
        L9:
            r0 = r2
        La:
            int r4 = r5.c
            if (r4 != r3) goto Lf
            goto L10
        Lf:
            r1 = r2
        L10:
            java.lang.Boolean r2 = r5.a
            if (r2 == 0) goto L18
            boolean r0 = r2.booleanValue()
        L18:
            java.lang.Boolean r2 = r5.b
            if (r2 == 0) goto L20
            boolean r1 = r2.booleanValue()
        L20:
            com.kwad.sdk.api.KsAdSDK.setPersonalRecommend(r0)
            com.kwad.sdk.api.KsAdSDK.setProgrammaticRecommend(r1)
            boolean r2 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r2 == 0) goto L4a
            java.lang.String r2 = com.tkay.network.ks.KSTYInitManager.d
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r3 = "PersonalRecommend: "
            java.lang.String r0 = r3.concat(r0)
            android.util.Log.i(r2, r0)
            java.lang.String r0 = com.tkay.network.ks.KSTYInitManager.d
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "ProgrammaticRecommend: "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.i(r0, r1)
        L4a:
            return
    }

    static boolean b(com.tkay.network.ks.KSTYInitManager r0) {
            boolean r0 = r0.h
            return r0
    }

    static com.tkay.network.ks.KSTYCustomController c(com.tkay.network.ks.KSTYInitManager r0) {
            com.tkay.network.ks.KSTYCustomController r0 = r0.i
            return r0
    }

    static void d(com.tkay.network.ks.KSTYInitManager r0) {
            r0.b()
            return
    }

    static boolean e(com.tkay.network.ks.KSTYInitManager r1) {
            r0 = 1
            r1.h = r0
            return r0
    }

    public static com.tkay.network.ks.KSTYInitManager getInstance() {
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.e
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.network.ks.KSTYInitManager> r0 = com.tkay.network.ks.KSTYInitManager.class
            monitor-enter(r0)
            com.tkay.network.ks.KSTYInitManager r1 = com.tkay.network.ks.KSTYInitManager.e     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.network.ks.KSTYInitManager r1 = new com.tkay.network.ks.KSTYInitManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.network.ks.KSTYInitManager.e = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.e
            return r0
    }

    final void a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.util.Map<java.lang.String, java.lang.Object> r4, com.tkay.core.api.TYBidRequestInfoListener r5) {
            r1 = this;
            com.tkay.network.ks.KSTYInitManager$2 r0 = new com.tkay.network.ks.KSTYInitManager$2
            r0.<init>(r1, r3, r4, r5)
            r1.initSDK(r2, r3, r0)
            return
    }

    protected final void a(java.lang.String r2, java.lang.ref.WeakReference r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r1.j     // Catch: java.lang.Throwable -> L5
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "Kuaishou"
            return r0
    }

    @Override
    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = "com.kwad.sdk.api.KsAdSDK"
            return r0
    }

    @Override
    public java.lang.String getNetworkVersion() {
            r1 = this;
            java.lang.String r0 = com.tkay.network.ks.KSTYConst.getNetworkVersion()
            return r0
    }

    public java.lang.String getPayloadInfo(java.lang.String r4, double r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L22
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "adBids"
            org.json.JSONArray r1 = r0.getJSONArray(r1)     // Catch: java.lang.Throwable -> L22
            r2 = 0
            org.json.JSONObject r1 = r1.getJSONObject(r2)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "bidEcpm"
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L22
            java.lang.String r5 = com.tkay.network.ks.KSTYInitManager.d     // Catch: java.lang.Throwable -> L22
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L22
            android.util.Log.i(r5, r6)     // Catch: java.lang.Throwable -> L22
        L22:
            return r4
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Boolean> getPluginClassStatus() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            java.lang.String r2 = "recyclerview-*.aar"
            r0.put(r2, r1)
            java.lang.Class<android.support.v7.widget.RecyclerView> r1 = android.support.v7.widget.RecyclerView.class
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L14
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L14
            goto L18
        L14:
            r1 = move-exception
            r1.printStackTrace()
        L18:
            return r0
    }

    @Override
    public java.util.List getResourceStatus() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "ksad_reward_order_end_dialog"
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
    public void initSDK(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5, com.tkay.core.api.MediationInitCallback r6) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r0 = r3.j     // Catch: java.lang.Throwable -> L2c
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
            java.util.Map<java.lang.String, java.lang.ref.WeakReference> r2 = r3.j     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L2c
            r2.remove(r1)     // Catch: java.lang.Throwable -> L2c
            goto La
        L2c:
            android.content.Context r4 = r4.getApplicationContext()
            int r0 = com.tkay.core.api.TYSDK.getPersionalizedAdStatus()     // Catch: java.lang.Throwable -> L36
            r3.c = r0     // Catch: java.lang.Throwable -> L36
        L36:
            boolean r0 = r3.h
            if (r0 == 0) goto L43
            r3.b()
            if (r6 == 0) goto L42
            r6.onSuccess()
        L42:
            return
        L43:
            java.lang.String r0 = "app_id"
            java.lang.String r5 = getStringFromMap(r5, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L59
            android.os.Handler r0 = r3.f
            com.tkay.network.ks.KSTYInitManager$1 r1 = new com.tkay.network.ks.KSTYInitManager$1
            r1.<init>(r3, r6, r5, r4)
            r0.post(r1)
        L59:
            return
    }

    public void setKSTYCustomController(com.tkay.network.ks.KSTYCustomController r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.i = r1
        L4:
            return
    }

    public void setPersonalRecommend(boolean r1) {
            r0 = this;
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.a = r1
            return
    }

    public void setProgrammaticRecommend(boolean r1) {
            r0 = this;
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.b = r1
            return
    }
}
