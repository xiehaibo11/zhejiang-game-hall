package com.kwad.components.ad.splashscreen;

public final class SplashPreloadManager {
    private java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager.PreLoadItem> BZ;
    private java.util.List<java.lang.String> Ca;
    private volatile android.content.SharedPreferences Cb;
    private final java.lang.Object mLock;

    public static class PreLoadItem extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        public long cacheTime;
        public long expiredTime;
        public java.lang.String preloadId;

        public PreLoadItem() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static class a {
        private static final com.kwad.components.ad.splashscreen.SplashPreloadManager Cc = null;

        static {
                com.kwad.components.ad.splashscreen.SplashPreloadManager r0 = new com.kwad.components.ad.splashscreen.SplashPreloadManager
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.ad.splashscreen.SplashPreloadManager.a.Cc = r0
                return
        }

        static com.kwad.components.ad.splashscreen.SplashPreloadManager kC() {
                com.kwad.components.ad.splashscreen.SplashPreloadManager r0 = com.kwad.components.ad.splashscreen.SplashPreloadManager.a.Cc
                return r0
        }
    }

    private SplashPreloadManager() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mLock = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.BZ = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Ca = r0
            r1.init()
            return
    }

    SplashPreloadManager(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean W(java.lang.String r4) {
            r0 = 0
            if (r4 == 0) goto L3d
            com.kwad.sdk.core.diskcache.b.a r1 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r1 = r1.bR(r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "check preloadId "
            r2.<init>(r3)
            r2.append(r4)
            java.lang.String r4 = " file exists "
            r2.append(r4)
            if (r1 != 0) goto L1f
            java.lang.String r4 = "null"
            goto L27
        L1f:
            boolean r4 = r1.exists()
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
        L27:
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            java.lang.String r2 = "PreloadManager"
            com.kwad.sdk.core.e.c.d(r2, r4)
            if (r1 == 0) goto L3d
            boolean r4 = r1.exists()
            if (r4 == 0) goto L3d
            r4 = 1
            return r4
        L3d:
            return r0
    }

    public static java.io.File X(java.lang.String r2) {
            if (r2 == 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getVideoFile preloadId "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r1 = "  url "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PreloadManager"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.Au()
            java.io.File r2 = r0.bR(r2)
            if (r2 == 0) goto L2e
            boolean r0 = r2.exists()
            if (r0 == 0) goto L2e
            return r2
        L2e:
            r2 = 0
            return r2
    }

    public static boolean d(com.kwad.components.core.response.model.AdResultData r2) {
            java.util.List r0 = r2.getAdTemplateList()
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 != 0) goto L2a
            java.util.List r2 = r2.getAdTemplateList()
            java.lang.Object r2 = r2.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r2.adInfoList
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2a
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r2 = r2.adInfoList
            java.lang.Object r2 = r2.get(r1)
            com.kwad.sdk.core.response.model.AdInfo r2 = (com.kwad.sdk.core.response.model.AdInfo) r2
            boolean r2 = com.kwad.sdk.core.response.b.a.aV(r2)
            return r2
        L2a:
            return r1
    }

    private void init() {
            r3 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            if (r0 == 0) goto L16
            r1 = 0
            java.lang.String r2 = "ksadsdk_splash_preload_id_list"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            r3.Cb = r0
            r3.initData()
        L16:
            return
    }

    private void initData() {
            r7 = this;
            android.content.SharedPreferences r0 = r7.Cb
            java.util.Map r0 = r0.getAll()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.Set r2 = r0.keySet()
            java.util.Iterator r2 = r2.iterator()
        L13:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L90
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem r4 = new com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem
            r4.<init>()
            java.lang.Object r5 = r0.get(r3)     // Catch: java.lang.Exception -> L8b
            boolean r6 = r5 instanceof java.lang.String     // Catch: java.lang.Exception -> L8b
            if (r6 == 0) goto L13
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L8b
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L8b
            if (r6 != 0) goto L13
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L8b
            r6.<init>(r5)     // Catch: java.lang.Exception -> L8b
            r4.parseJson(r6)     // Catch: java.lang.Exception -> L8b
            java.lang.String r5 = r4.preloadId     // Catch: java.lang.Exception -> L8b
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L8b
            if (r5 != 0) goto L13
            com.kwad.sdk.core.diskcache.b.a r5 = com.kwad.sdk.core.diskcache.b.a.Au()     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = r4.preloadId     // Catch: java.lang.Exception -> L8b
            java.io.File r5 = r5.bR(r6)     // Catch: java.lang.Exception -> L8b
            if (r5 == 0) goto L70
            boolean r5 = r5.exists()     // Catch: java.lang.Exception -> L8b
            if (r5 == 0) goto L70
            java.lang.Object r5 = r7.mLock     // Catch: java.lang.Exception -> L8b
            monitor-enter(r5)     // Catch: java.lang.Exception -> L8b
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r6 = r7.BZ     // Catch: java.lang.Throwable -> L6d
            r6.put(r3, r4)     // Catch: java.lang.Throwable -> L6d
            java.util.List<java.lang.String> r4 = r7.Ca     // Catch: java.lang.Throwable -> L6d
            boolean r4 = r4.contains(r3)     // Catch: java.lang.Throwable -> L6d
            if (r4 != 0) goto L6b
            java.util.List<java.lang.String> r4 = r7.Ca     // Catch: java.lang.Throwable -> L6d
            r4.add(r3)     // Catch: java.lang.Throwable -> L6d
        L6b:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L6d
            goto L13
        L6d:
            r3 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L6d
            throw r3     // Catch: java.lang.Exception -> L8b
        L70:
            java.lang.String r3 = r4.preloadId     // Catch: java.lang.Exception -> L8b
            r1.add(r3)     // Catch: java.lang.Exception -> L8b
            java.lang.String r3 = "PreloadManager"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "Remove null file list "
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = r4.preloadId     // Catch: java.lang.Exception -> L8b
            r5.append(r4)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> L8b
            com.kwad.sdk.core.e.c.d(r3, r4)     // Catch: java.lang.Exception -> L8b
            goto L13
        L8b:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            goto L13
        L90:
            android.content.SharedPreferences r0 = r7.Cb
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.Iterator r1 = r1.iterator()
        L9a:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Laa
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            r0.remove(r2)
            goto L9a
        Laa:
            r0.apply()
            return
    }

    private void kA() {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Object r2 = r10.mLock
            monitor-enter(r2)
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lf3
            r3.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r4 = r10.BZ     // Catch: java.lang.Throwable -> Lf3
            java.util.Set r4 = r4.keySet()     // Catch: java.lang.Throwable -> Lf3
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> Lf3
        L16:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lf3
            if (r5 == 0) goto L36
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Lf3
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r6 = r10.BZ     // Catch: java.lang.Throwable -> Lf3
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Throwable -> Lf3
            com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem r6 = (com.kwad.components.ad.splashscreen.SplashPreloadManager.PreLoadItem) r6     // Catch: java.lang.Throwable -> Lf3
            if (r6 == 0) goto L16
            long r6 = r6.expiredTime     // Catch: java.lang.Throwable -> Lf3
            int r6 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r6 >= 0) goto L16
            r3.add(r5)     // Catch: java.lang.Throwable -> Lf3
            goto L16
        L36:
            android.content.SharedPreferences r0 = r10.Cb     // Catch: java.lang.Throwable -> Lf3
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> Lf3
            java.util.Iterator r1 = r3.iterator()     // Catch: java.lang.Throwable -> Lf3
        L40:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> Lf3
            if (r3 == 0) goto L61
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lf3
            java.util.List<java.lang.String> r4 = r10.Ca     // Catch: java.lang.Throwable -> Lf3
            r4.remove(r3)     // Catch: java.lang.Throwable -> Lf3
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r4 = r10.BZ     // Catch: java.lang.Throwable -> Lf3
            r4.remove(r3)     // Catch: java.lang.Throwable -> Lf3
            r0.remove(r3)     // Catch: java.lang.Throwable -> Lf3
            com.kwad.sdk.core.diskcache.b.a r4 = com.kwad.sdk.core.diskcache.b.a.Au()     // Catch: java.lang.Throwable -> Lf3
            r4.remove(r3)     // Catch: java.lang.Throwable -> Lf3
            goto L40
        L61:
            r0.apply()     // Catch: java.lang.Throwable -> Lf3
            java.util.List<java.lang.String> r0 = r10.Ca     // Catch: java.lang.Throwable -> Lf3
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Lf3
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lf3
            r1 = 30
            if (r0 <= r1) goto Lf2
            java.lang.String r1 = "PreloadManager"
            java.lang.String r2 = "大于 30 按失效日期远近顺序移除"
            com.kwad.sdk.core.e.c.d(r1, r2)
            int r0 = r0 + (-15)
            r1 = 0
        L79:
            if (r1 >= r0) goto Lf2
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            java.lang.Object r4 = r10.mLock
            monitor-enter(r4)
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r5 = r10.BZ     // Catch: java.lang.Throwable -> Lef
            java.util.Collection r5 = r5.values()     // Catch: java.lang.Throwable -> Lef
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> Lef
            java.lang.String r6 = ""
        L8f:
            boolean r7 = r5.hasNext()     // Catch: java.lang.Throwable -> Lef
            if (r7 == 0) goto La6
            java.lang.Object r7 = r5.next()     // Catch: java.lang.Throwable -> Lef
            com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem r7 = (com.kwad.components.ad.splashscreen.SplashPreloadManager.PreLoadItem) r7     // Catch: java.lang.Throwable -> Lef
            long r8 = r7.expiredTime     // Catch: java.lang.Throwable -> Lef
            int r8 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r8 >= 0) goto L8f
            long r2 = r7.expiredTime     // Catch: java.lang.Throwable -> Lef
            java.lang.String r6 = r7.preloadId     // Catch: java.lang.Throwable -> Lef
            goto L8f
        La6:
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lef
            if (r5 != 0) goto Lde
            java.util.List<java.lang.String> r5 = r10.Ca     // Catch: java.lang.Throwable -> Lef
            r5.remove(r6)     // Catch: java.lang.Throwable -> Lef
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r5 = r10.BZ     // Catch: java.lang.Throwable -> Lef
            r5.remove(r6)     // Catch: java.lang.Throwable -> Lef
            android.content.SharedPreferences r5 = r10.Cb     // Catch: java.lang.Throwable -> Lef
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> Lef
            android.content.SharedPreferences$Editor r5 = r5.remove(r6)     // Catch: java.lang.Throwable -> Lef
            r5.apply()     // Catch: java.lang.Throwable -> Lef
            java.lang.String r5 = "PreloadManager"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lef
            java.lang.String r8 = "移除 preloadId = "
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lef
            r7.append(r6)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r8 = " expiredTime =  "
            r7.append(r8)     // Catch: java.lang.Throwable -> Lef
            r7.append(r2)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> Lef
            com.kwad.sdk.core.e.c.d(r5, r2)     // Catch: java.lang.Throwable -> Lef
        Lde:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> Lef
            boolean r2 = android.text.TextUtils.isEmpty(r6)
            if (r2 != 0) goto Lec
            com.kwad.sdk.core.diskcache.b.a r2 = com.kwad.sdk.core.diskcache.b.a.Au()
            r2.remove(r6)
        Lec:
            int r1 = r1 + 1
            goto L79
        Lef:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> Lef
            throw r0
        Lf2:
            return
        Lf3:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lf3
            throw r0
    }

    public static com.kwad.components.ad.splashscreen.SplashPreloadManager kB() {
            com.kwad.components.ad.splashscreen.SplashPreloadManager r0 = com.kwad.components.ad.splashscreen.SplashPreloadManager.a.kC()
            android.content.SharedPreferences r1 = r0.Cb
            if (r1 != 0) goto Lb
            r0.init()
        Lb:
            return r0
    }

    private void n(com.kwad.sdk.core.response.model.AdInfo r8) {
            r7 = this;
            com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem r0 = new com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r0.cacheTime = r1
            long r1 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r3 = r8.adPreloadInfo
            int r3 = r3.validityPeriod
            long r3 = (long) r3
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            long r1 = r1 + r3
            r0.expiredTime = r1
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aS(r8)
            r0.preloadId = r1
            java.lang.Object r1 = r7.mLock
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, com.kwad.components.ad.splashscreen.SplashPreloadManager$PreLoadItem> r2 = r7.BZ     // Catch: java.lang.Throwable -> L5f
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r3 = r8.adPreloadInfo     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = r3.preloadId     // Catch: java.lang.Throwable -> L5f
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> L5f
            java.util.List<java.lang.String> r2 = r7.Ca     // Catch: java.lang.Throwable -> L5f
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r3 = r8.adPreloadInfo     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = r3.preloadId     // Catch: java.lang.Throwable -> L5f
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> L5f
            if (r2 != 0) goto L41
            java.util.List<java.lang.String> r2 = r7.Ca     // Catch: java.lang.Throwable -> L5f
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r3 = r8.adPreloadInfo     // Catch: java.lang.Throwable -> L5f
            java.lang.String r3 = r3.preloadId     // Catch: java.lang.Throwable -> L5f
            r2.add(r3)     // Catch: java.lang.Throwable -> L5f
        L41:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5f
            android.content.SharedPreferences r1 = r7.Cb
            if (r1 == 0) goto L5e
            android.content.SharedPreferences r1 = r7.Cb
            android.content.SharedPreferences$Editor r1 = r1.edit()
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r8 = r8.adPreloadInfo
            java.lang.String r8 = r8.preloadId
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r0 = r0.toString()
            r1.putString(r8, r0)
            r1.apply()
        L5e:
            return
        L5f:
            r8 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5f
            throw r8
    }

    public final java.util.List<java.lang.String> R() {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Object r1 = r5.mLock
            monitor-enter(r1)
            java.lang.String r2 = "PreloadManager"
            java.lang.String r3 = "getPreloadIdList start "
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Throwable -> L58
            r2 = 0
        L10:
            java.util.List<java.lang.String> r3 = r5.Ca     // Catch: java.lang.Throwable -> L58
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L58
            if (r2 >= r3) goto L36
            java.util.List<java.lang.String> r3 = r5.Ca     // Catch: java.lang.Throwable -> L58
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L58
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L58
            com.kwad.sdk.core.diskcache.b.a r4 = com.kwad.sdk.core.diskcache.b.a.Au()     // Catch: java.lang.Throwable -> L58
            java.io.File r4 = r4.bR(r3)     // Catch: java.lang.Throwable -> L58
            if (r4 == 0) goto L33
            boolean r4 = r4.exists()     // Catch: java.lang.Throwable -> L58
            if (r4 == 0) goto L33
            r0.add(r3)     // Catch: java.lang.Throwable -> L58
        L33:
            int r2 = r2 + 1
            goto L10
        L36:
            java.lang.String r2 = "PreloadManager"
            java.lang.String r3 = "getPreloadIdList end "
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Throwable -> L58
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L58
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "getPreloadIdList "
            r1.<init>(r2)
            java.util.List<java.lang.String> r2 = r5.Ca
            int r2 = r2.size()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PreloadManager"
            com.kwad.sdk.core.e.c.d(r2, r1)
            return r0
        L58:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L58
            throw r0
    }

    public final int b(com.kwad.components.core.response.model.AdResultData r16, boolean r17) {
            r15 = this;
            r0 = r15
            java.util.List r1 = r16.getAdTemplateList()
            java.util.Iterator r1 = r1.iterator()
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            com.kwad.components.ad.splashscreen.monitor.a.e(r16)
            r2 = 0
            r3 = r2
        L11:
            boolean r4 = r1.hasNext()
            r5 = 0
            if (r4 == 0) goto L117
            java.lang.Object r4 = r1.next()
            com.kwad.sdk.core.response.model.AdTemplate r4 = (com.kwad.sdk.core.response.model.AdTemplate) r4
            if (r4 == 0) goto L11
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r6 = r4.adInfoList
            java.util.Iterator r6 = r6.iterator()
        L26:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L11
            java.lang.Object r7 = r6.next()
            com.kwad.sdk.core.response.model.AdInfo r7 = (com.kwad.sdk.core.response.model.AdInfo) r7
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r8 = r7.adPreloadInfo
            if (r8 == 0) goto L10e
            android.content.SharedPreferences r8 = r0.Cb
            if (r8 == 0) goto L10e
            long r8 = android.os.SystemClock.elapsedRealtime()
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r10 = r7.adPreloadInfo
            java.lang.String r10 = r10.preloadId
            boolean r10 = W(r10)
            if (r10 != 0) goto Lf7
            boolean r10 = com.kwad.sdk.core.response.b.a.aU(r7)
            if (r10 == 0) goto L53
            java.lang.String r10 = com.kwad.sdk.core.response.b.a.F(r7)
            goto L61
        L53:
            boolean r10 = com.kwad.sdk.core.response.b.a.aV(r7)
            if (r10 == 0) goto L60
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r10 = com.kwad.sdk.core.response.b.a.aM(r7)
            java.lang.String r10 = r10.materialUrl
            goto L61
        L60:
            r10 = r5
        L61:
            boolean r11 = android.text.TextUtils.isEmpty(r10)
            if (r11 != 0) goto Lea
            java.lang.String r11 = com.kwad.sdk.core.response.b.a.aS(r7)
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r12 = r7.adPreloadInfo
            int r12 = r12.preloadType
            r13 = 1
            if (r12 != r13) goto L85
            com.kwad.sdk.KsAdSDKImpl r12 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r12 = r12.getContext()
            boolean r12 = com.kwad.sdk.utils.ag.isWifiConnected(r12)
            if (r12 != 0) goto L85
            if (r17 == 0) goto L83
            goto L85
        L83:
            r12 = r2
            goto L86
        L85:
            r12 = r13
        L86:
            if (r12 == 0) goto Lde
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.String r14 = "start Download preloadId "
            r12.<init>(r14)
            r12.append(r11)
            java.lang.String r14 = " true url "
            r12.append(r14)
            r12.append(r10)
            java.lang.String r12 = r12.toString()
            java.lang.String r14 = "PreloadManager"
            com.kwad.sdk.core.e.c.d(r14, r12)
            r15.kA()
            com.kwad.sdk.core.network.a.a$a r12 = new com.kwad.sdk.core.network.a.a$a
            r12.<init>()
            boolean r10 = com.kwad.components.core.video.j.a(r10, r11, r12)
            if (r10 == 0) goto Lc8
            r15.n(r7)
            int r3 = r3 + 1
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            long r10 = android.os.SystemClock.elapsedRealtime()
            long r9 = r10 - r8
            r11 = 1
            long r12 = r4.posId
            r8 = r7
            com.kwad.components.ad.splashscreen.monitor.a.a(r8, r9, r11, r12)
            goto L26
        Lc8:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            r8 = 4
            java.lang.String r9 = r12.msg
            long r10 = r4.posId
            com.kwad.components.ad.splashscreen.monitor.a.a(r7, r8, r9, r10)
            com.kwad.components.core.o.a r7 = com.kwad.components.core.o.a.pA()
            java.lang.String r8 = r12.msg
            r7.c(r4, r13, r8)
            goto L26
        Lde:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            long r8 = r4.posId
            java.lang.String r10 = "networkError"
            com.kwad.components.ad.splashscreen.monitor.a.a(r7, r13, r10, r8)
            goto L26
        Lea:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            r8 = 2
            long r9 = r4.posId
            java.lang.String r11 = "urlError"
        Lf2:
            com.kwad.components.ad.splashscreen.monitor.a.a(r7, r8, r11, r9)
            goto L26
        Lf7:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            long r10 = android.os.SystemClock.elapsedRealtime()
            long r9 = r10 - r8
            r11 = 2
            long r12 = r4.posId
            r8 = r7
            com.kwad.components.ad.splashscreen.monitor.a.a(r8, r9, r11, r12)
            r15.n(r7)
            int r3 = r3 + 1
            goto L26
        L10e:
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            r8 = 3
            long r9 = r4.posId
            java.lang.String r11 = "preloadIdError"
            goto Lf2
        L117:
            java.util.List r1 = r16.getAdTemplateList()
            int r1 = r1.size()
            if (r1 <= 0) goto L12c
            java.util.List r1 = r16.getAdTemplateList()
            java.lang.Object r1 = r1.get(r2)
            r5 = r1
            com.kwad.sdk.core.response.model.AdTemplate r5 = (com.kwad.sdk.core.response.model.AdTemplate) r5
        L12c:
            java.lang.String r1 = "splashAd_"
            if (r3 <= 0) goto L13d
            java.lang.String r2 = "onSplashVideoAdCacheSuccess"
            com.kwad.sdk.utils.i.am(r1, r2)
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            r1.f(r5, r3)
            goto L142
        L13d:
            java.lang.String r2 = "onSplashVideoAdCacheFailed"
            com.kwad.sdk.utils.i.am(r1, r2)
        L142:
            return r3
    }

    public final boolean c(com.kwad.components.core.response.model.AdResultData r3) {
            r2 = this;
            java.util.List r0 = r3.getAdTemplateList()
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 != 0) goto L32
            java.util.List r3 = r3.getAdTemplateList()
            java.lang.Object r3 = r3.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r3.adInfoList
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L32
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r3 = r3.adInfoList
            java.lang.Object r3 = r3.get(r1)
            com.kwad.sdk.core.response.model.AdInfo r3 = (com.kwad.sdk.core.response.model.AdInfo) r3
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r0 = r3.adPreloadInfo
            if (r0 == 0) goto L32
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aS(r3)
            boolean r3 = W(r3)
            return r3
        L32:
            return r1
    }
}
