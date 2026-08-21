package com.alipay.apmobilesecuritysdk.face;

public class APSecuritySdk implements com.alipay.sdk.m.a0.f {
    public static com.alipay.apmobilesecuritysdk.face.APSecuritySdk a;
    public static com.alipay.apmobilesecuritysdk.face.APSecBgCheckerInterface bgChecker;
    public static com.alipay.apmobilesecuritysdk.face.IDeviceInfo c;
    public static java.lang.Object d;
    public android.content.Context b;


    public interface InitResultListener {
        void onResult(com.alipay.apmobilesecuritysdk.face.APSecuritySdk.TokenResult r1);
    }

    public class TokenResult {
        public final com.alipay.apmobilesecuritysdk.face.APSecuritySdk a;
        public java.lang.String apdid;
        public java.lang.String apdidToken;
        public java.lang.String clientKey;
        public java.lang.String umidToken;

        public TokenResult(com.alipay.apmobilesecuritysdk.face.APSecuritySdk r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk.d = r0
            return
    }

    public APSecuritySdk(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public static android.content.Context a(com.alipay.apmobilesecuritysdk.face.APSecuritySdk r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    public static com.alipay.apmobilesecuritysdk.face.IDeviceInfo getDeviceInfo() {
            com.alipay.apmobilesecuritysdk.face.IDeviceInfo r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.c
            return r0
    }

    public static com.alipay.apmobilesecuritysdk.face.APSecuritySdk getInstance(android.content.Context r2) {
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.a
            if (r0 != 0) goto L17
            java.lang.Object r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.d
            monitor-enter(r0)
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r1 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r1 = new com.alipay.apmobilesecuritysdk.face.APSecuritySdk     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r2 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.a
            return r2
    }

    public static java.lang.String getUtdid(android.content.Context r0) {
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.otherid.UtdidWrapper.getUtdid(r0)
            return r0
    }

    public static void registerBgChecker(com.alipay.apmobilesecuritysdk.face.APSecBgCheckerInterface r0) {
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk.bgChecker = r0
            return
    }

    public static void registerDeviceInfo(com.alipay.apmobilesecuritysdk.face.IDeviceInfo r0) {
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk.c = r0
            return
    }

    @Override
    public java.lang.String getAndroidId() {
            r1 = this;
            com.alipay.apmobilesecuritysdk.face.IDeviceInfo r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.c
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAndroidId()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getApdidToken() {
            r4 = this;
            android.content.Context r0 = r4.b
            java.lang.String r1 = ""
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.a.a.a(r0, r1)
            boolean r1 = com.alipay.sdk.m.z.a.a(r0)
            if (r1 == 0) goto L18
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2 = 0
            r3 = 0
            r4.initToken(r2, r1, r3)
        L18:
            return r0
    }

    public java.lang.String getSdkName() {
            r1 = this;
            java.lang.String r0 = "APPSecuritySDK-ALIPAYSDK"
            return r0
    }

    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "3.4.0.202303020703"
            return r0
    }

    @Override
    public java.lang.String getSubscriberId() {
            r1 = this;
            com.alipay.apmobilesecuritysdk.face.IDeviceInfo r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.c
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getSubscriberId()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public synchronized com.alipay.apmobilesecuritysdk.face.APSecuritySdk.TokenResult getTokenResult() {
            r4 = this;
            monitor-enter(r4)
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk$TokenResult r0 = new com.alipay.apmobilesecuritysdk.face.APSecuritySdk$TokenResult     // Catch: java.lang.Throwable -> L4c
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L4c
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = ""
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.a.a.a(r1, r2)     // Catch: java.lang.Throwable -> L4a
            r0.apdidToken = r1     // Catch: java.lang.Throwable -> L4a
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.h.f(r1)     // Catch: java.lang.Throwable -> L4a
            r0.clientKey = r1     // Catch: java.lang.Throwable -> L4a
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.a.a.a(r1)     // Catch: java.lang.Throwable -> L4a
            r0.apdid = r1     // Catch: java.lang.Throwable -> L4a
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.getSecurityToken(r1)     // Catch: java.lang.Throwable -> L4a
            r0.umidToken = r1     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r0.apdid     // Catch: java.lang.Throwable -> L4a
            boolean r1 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L40
            java.lang.String r1 = r0.apdidToken     // Catch: java.lang.Throwable -> L4a
            boolean r1 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L40
            java.lang.String r1 = r0.clientKey     // Catch: java.lang.Throwable -> L4a
            boolean r1 = com.alipay.sdk.m.z.a.a(r1)     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L4a
        L40:
            r1 = 0
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L4a
            r2.<init>()     // Catch: java.lang.Throwable -> L4a
            r3 = 0
            r4.initToken(r1, r2, r3)     // Catch: java.lang.Throwable -> L4a
        L4a:
            monitor-exit(r4)
            return r0
        L4c:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public void initToken(int r7, java.util.Map<java.lang.String, java.lang.String> r8, com.alipay.apmobilesecuritysdk.face.APSecuritySdk.InitResultListener r9) {
            r6 = this;
            com.alipay.apmobilesecuritysdk.b.a r0 = com.alipay.apmobilesecuritysdk.b.a.a()
            r0.a(r7)
            android.content.Context r7 = r6.b
            java.lang.String r7 = com.alipay.apmobilesecuritysdk.e.h.b(r7)
            com.alipay.apmobilesecuritysdk.b.a r0 = com.alipay.apmobilesecuritysdk.b.a.a()
            java.lang.String r0 = r0.c()
            boolean r1 = com.alipay.sdk.m.z.a.b(r7)
            if (r1 == 0) goto L33
            boolean r1 = com.alipay.sdk.m.z.a.a(r7, r0)
            if (r1 != 0) goto L33
            android.content.Context r1 = r6.b
            com.alipay.apmobilesecuritysdk.e.a.a(r1)
            android.content.Context r1 = r6.b
            com.alipay.apmobilesecuritysdk.e.d.a(r1)
            android.content.Context r1 = r6.b
            com.alipay.apmobilesecuritysdk.e.g.a(r1)
            com.alipay.apmobilesecuritysdk.e.i.h()
        L33:
            boolean r7 = com.alipay.sdk.m.z.a.a(r7, r0)
            if (r7 != 0) goto L3e
            android.content.Context r7 = r6.b
            com.alipay.apmobilesecuritysdk.e.h.c(r7, r0)
        L3e:
            java.lang.String r7 = "utdid"
            java.lang.String r0 = ""
            java.lang.String r1 = com.alipay.sdk.m.z.a.a(r8, r7, r0)
            java.lang.String r2 = "tid"
            java.lang.String r3 = com.alipay.sdk.m.z.a.a(r8, r2, r0)
            java.lang.String r4 = "userId"
            java.lang.String r8 = com.alipay.sdk.m.z.a.a(r8, r4, r0)
            boolean r5 = com.alipay.sdk.m.z.a.a(r1)
            if (r5 == 0) goto L5e
            android.content.Context r1 = r6.b
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.otherid.UtdidWrapper.getUtdid(r1)
        L5e:
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r5.put(r7, r1)
            r5.put(r2, r3)
            r5.put(r4, r8)
            java.lang.String r7 = "appName"
            r5.put(r7, r0)
            java.lang.String r7 = "appKeyClient"
            r5.put(r7, r0)
            java.lang.String r7 = "appchannel"
            r5.put(r7, r0)
            java.lang.String r7 = "rpcVersion"
            java.lang.String r8 = "8"
            r5.put(r7, r8)
            com.alipay.apmobilesecuritysdk.f.b r7 = com.alipay.apmobilesecuritysdk.f.b.a()
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk$1 r8 = new com.alipay.apmobilesecuritysdk.face.APSecuritySdk$1
            r8.<init>(r6, r5, r9)
            r7.a(r8)
            return
    }

    @Override
    public boolean isBackgroundRunning() {
            r1 = this;
            com.alipay.apmobilesecuritysdk.face.APSecBgCheckerInterface r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.bgChecker
            if (r0 == 0) goto L9
            boolean r0 = r0.isBackgroundRunning()
            return r0
        L9:
            r0 = 0
            return r0
    }
}
