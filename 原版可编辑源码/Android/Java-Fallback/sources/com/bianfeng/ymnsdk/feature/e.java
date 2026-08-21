package com.bianfeng.ymnsdk.feature;

public class e {
    private static java.lang.String a;
    private static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.entity.UrlConfig> b;
    public static com.bianfeng.ymnsdk.entity.UrlLocalState c;

    static {
            java.lang.String r0 = "http:47.102.108.186:8087/"
            new java.lang.String[]{r0}
            java.lang.String r0 = ""
            com.bianfeng.ymnsdk.feature.e.a = r0
            return
    }

    private static java.lang.String a() {
            java.lang.String r0 = "url_host_public"
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "YmnProperties.getValue(KEY_URL_HOST_PUBLIC) :"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "YmnURLManager"
            com.bianfeng.ymnsdk.util.Logger.d(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L3e
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.getHostUrl()
            java.lang.String r0 = a(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "keyToUrl(AppConfig.getHostUrl():"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r2, r1)
        L3e:
            return r0
    }

    private static java.lang.String a(java.lang.String r1) {
            java.lang.String r0 = "http"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "V2"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L14
            java.lang.String r0 = "ymn.bianfeng.com"
            return r0
        L14:
            java.lang.String r0 = "ymnsdk.bianfeng.com"
            return r0
    }

    private static void a(android.content.Context r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "localState is "
            r0.append(r1)
            com.bianfeng.ymnsdk.entity.UrlLocalState r1 = com.bianfeng.ymnsdk.feature.e.c
            java.lang.String r1 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "YmnURLManager"
            com.bianfeng.ymnsdk.util.Logger.d(r1, r0)
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isNormalHost()
            if (r0 == 0) goto L5b
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isNormalContinuedFailsLimited()
            if (r0 == 0) goto La5
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.resetNormalContinuedFails()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.resetBackupContinuedFails()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.resetBackupRemainTime()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.setCurrentHostToBackup()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "set host to backup "
            r0.append(r2)
            com.bianfeng.ymnsdk.entity.UrlLocalState r2 = com.bianfeng.ymnsdk.feature.e.c
            java.lang.String r2 = r2.getCurrentHost()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.w(r1, r0)
            goto La5
        L5b:
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isBackupHost()
            if (r0 == 0) goto La5
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isBackupRemainTimeUseup()
            if (r0 == 0) goto L95
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.resetBackupRemainTime()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.resetNormalContinuedFails()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.setCurrentHostToNormal()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "set host to normal "
            r0.append(r2)
            com.bianfeng.ymnsdk.entity.UrlLocalState r2 = com.bianfeng.ymnsdk.feature.e.c
            java.lang.String r2 = r2.getCurrentHost()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.w(r1, r0)
            goto La5
        L95:
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isBackupContinuedFailsLimited()
            if (r0 == 0) goto La5
            b(r3)
            java.lang.String r0 = "cleaned local state"
            com.bianfeng.ymnsdk.util.Logger.w(r1, r0)
        La5:
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c     // Catch: java.lang.Exception -> Lb6
            if (r0 == 0) goto Lb2
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c     // Catch: java.lang.Exception -> Lb6
            java.lang.String r0 = r0.getCurrentHost()     // Catch: java.lang.Exception -> Lb6
            com.bianfeng.ymnsdk.feature.e.a = r0     // Catch: java.lang.Exception -> Lb6
            goto Lb5
        Lb2:
            g(r3)     // Catch: java.lang.Exception -> Lb6
        Lb5:
            goto Lba
        Lb6:
            r0 = move-exception
            r0.printStackTrace()
        Lba:
            return
    }

    public static void a(android.content.Context r1, com.bianfeng.ymnsdk.entity.UrlConfig r2) {
            com.bianfeng.ymnsdk.feature.d.a(r1, r2)     // Catch: java.lang.Exception -> L7
            g(r1)     // Catch: java.lang.Exception -> L7
            goto Lb
        L7:
            r0 = move-exception
            r0.printStackTrace()
        Lb:
            return
    }

    public static void a(android.content.Context r0, com.bianfeng.ymnsdk.entity.UrlLocalState r1) {
            com.bianfeng.ymnsdk.feature.d.a(r0, r1)
            return
    }

    private static java.lang.String b() {
            java.lang.String r0 = "url_host_test"
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = "119.97.159.53:8080"
        Le:
            return r0
    }

    public static void b(android.content.Context r1) {
            com.bianfeng.ymnsdk.feature.d.a(r1)     // Catch: java.lang.Exception -> Lf
            r0 = 0
            com.bianfeng.ymnsdk.feature.e.c = r0     // Catch: java.lang.Exception -> Lf
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.entity.UrlConfig> r0 = com.bianfeng.ymnsdk.feature.e.b     // Catch: java.lang.Exception -> Lf
            r0.clear()     // Catch: java.lang.Exception -> Lf
            g(r1)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r0 = move-exception
            r0.printStackTrace()
        L13:
            return
    }

    public static java.lang.String c(android.content.Context r3) {
            d(r3)     // Catch: java.lang.Exception -> L4
            goto L8
        L4:
            r0 = move-exception
            r0.printStackTrace()
        L8:
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.e.a
            java.lang.String r1 = "http"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L52
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.e.a
            java.lang.String r1 = "ymnsdk.bianfeng.com"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L3d
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.e.a
            java.lang.String r1 = "ymn.bianfeng.com"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L27
            goto L3d
        L27:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "http://"
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.feature.e.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.feature.e.a = r0
            goto L52
        L3d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://"
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.feature.e.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.feature.e.a = r0
        L52:
            r0 = 0
            java.lang.String r1 = "SP_YMN_CHANGE_HOST"
            android.content.SharedPreferences r0 = r3.getSharedPreferences(r1, r0)
            java.lang.String r2 = ""
            java.lang.String r1 = r0.getString(r1, r2)
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto L67
            com.bianfeng.ymnsdk.feature.e.a = r1
        L67:
            java.lang.String r2 = com.bianfeng.ymnsdk.feature.e.a
            return r2
    }

    public static void d(android.content.Context r1) {
            f(r1)     // Catch: java.lang.Exception -> La
            e(r1)     // Catch: java.lang.Exception -> La
            g(r1)     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    public static com.bianfeng.ymnsdk.entity.UrlLocalState e(android.content.Context r1) {
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.d.e(r1)
            com.bianfeng.ymnsdk.feature.e.c = r0
            return r0
    }

    private static void f(android.content.Context r1) {
            java.util.Map r0 = com.bianfeng.ymnsdk.feature.d.f(r1)
            com.bianfeng.ymnsdk.feature.e.b = r0
            return
    }

    private static void g(android.content.Context r3) throws java.lang.Exception {
            java.lang.String r0 = k(r3)
            com.bianfeng.ymnsdk.feature.e.a = r0
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.e.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "YmnURLManager"
            if (r0 == 0) goto L2c
            java.lang.String r0 = j(r3)
            com.bianfeng.ymnsdk.feature.e.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "从私有文件（远程）读取请求地址 "
            r0.append(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.feature.e.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r1, r0)
        L2c:
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.e.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L47
            boolean r0 = com.bianfeng.platform.executor.AppConfig.isDebug()
            if (r0 == 0) goto L41
            java.lang.String r0 = b()
            com.bianfeng.ymnsdk.feature.e.a = r0
            goto L47
        L41:
            java.lang.String r0 = a()
            com.bianfeng.ymnsdk.feature.e.a = r0
        L47:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "runtime host is "
            r0.append(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.feature.e.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r1, r0)
            return
    }

    public static void h(android.content.Context r1) {
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            if (r0 == 0) goto L25
            boolean r0 = r0.isNormalHost()
            if (r0 == 0) goto L10
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.increaseNormalContinuedFails()
            goto L1d
        L10:
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isBackupHost()
            if (r0 == 0) goto L1d
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.increaseBackupContinuedFails()
        L1d:
            a(r1)
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            a(r1, r0)
        L25:
            return
    }

    public static void i(android.content.Context r1) {
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            if (r0 == 0) goto L21
            r0.resetNormalContinuedFails()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.resetBackupContinuedFails()
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            boolean r0 = r0.isBackupHost()
            if (r0 == 0) goto L1c
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            r0.reduceBackupRemainTime()
            a(r1)
        L1c:
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            a(r1, r0)
        L21:
            return
    }

    private static java.lang.String j(android.content.Context r1) {
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.c
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getCurrentHost()
            return r0
        L9:
            r0 = 0
            return r0
    }

    private static java.lang.String k(android.content.Context r4) throws java.lang.Exception {
            java.lang.String r0 = ""
            boolean r1 = com.bianfeng.ymnsdk.util.ResourceUtil.isSdcardReady()     // Catch: java.lang.Exception -> L3e
            if (r1 != 0) goto L9
            return r0
        L9:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3e
            r2.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = com.bianfeng.ymnsdk.util.ResourceUtil.getSdcardPath()     // Catch: java.lang.Exception -> L3e
            r2.append(r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = ".bftj/sdk/ymnDebug"
            r2.append(r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L3e
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L3e
            if (r2 != 0) goto L2a
            return r0
        L2a:
            java.util.Properties r2 = new java.util.Properties     // Catch: java.lang.Exception -> L3e
            r2.<init>()     // Catch: java.lang.Exception -> L3e
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L3e
            r3.<init>(r1)     // Catch: java.lang.Exception -> L3e
            r2.load(r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = "url_host_ymnsdk"
            java.lang.String r0 = r2.getProperty(r3)     // Catch: java.lang.Exception -> L3e
            return r0
        L3e:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}
