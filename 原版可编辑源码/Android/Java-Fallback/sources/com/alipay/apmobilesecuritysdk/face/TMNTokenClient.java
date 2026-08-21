package com.alipay.apmobilesecuritysdk.face;

public class TMNTokenClient {
    public static com.alipay.apmobilesecuritysdk.face.TMNTokenClient a;
    public android.content.Context b;


    public interface InitResultListener {
        void onResult(java.lang.String r1, int r2);
    }

    static {
            return
    }

    public TMNTokenClient(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            if (r2 == 0) goto Lb
            r1.b = r2
            return
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "TMNTokenClient initialization error: context is null."
            r2.<init>(r0)
            throw r2
    }

    public static android.content.Context a(com.alipay.apmobilesecuritysdk.face.TMNTokenClient r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    public static com.alipay.apmobilesecuritysdk.face.TMNTokenClient getInstance(android.content.Context r2) {
            com.alipay.apmobilesecuritysdk.face.TMNTokenClient r0 = com.alipay.apmobilesecuritysdk.face.TMNTokenClient.a
            if (r0 != 0) goto L17
            java.lang.Class<com.alipay.apmobilesecuritysdk.face.TMNTokenClient> r0 = com.alipay.apmobilesecuritysdk.face.TMNTokenClient.class
            monitor-enter(r0)
            com.alipay.apmobilesecuritysdk.face.TMNTokenClient r1 = com.alipay.apmobilesecuritysdk.face.TMNTokenClient.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.alipay.apmobilesecuritysdk.face.TMNTokenClient r1 = new com.alipay.apmobilesecuritysdk.face.TMNTokenClient     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.alipay.apmobilesecuritysdk.face.TMNTokenClient.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.alipay.apmobilesecuritysdk.face.TMNTokenClient r2 = com.alipay.apmobilesecuritysdk.face.TMNTokenClient.a
            return r2
    }

    public void intiToken(java.lang.String r5, java.lang.String r6, java.lang.String r7, com.alipay.apmobilesecuritysdk.face.TMNTokenClient.InitResultListener r8) {
            r4 = this;
            boolean r0 = com.alipay.sdk.m.z.a.a(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto Le
            if (r8 == 0) goto Le
            r0 = 2
            r8.onResult(r1, r0)
        Le:
            boolean r0 = com.alipay.sdk.m.z.a.a(r6)
            if (r0 == 0) goto L1a
            if (r8 == 0) goto L1a
            r0 = 3
            r8.onResult(r1, r0)
        L1a:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.content.Context r2 = r4.b
            java.lang.String r2 = com.alipay.apmobilesecuritysdk.otherid.UtdidWrapper.getUtdid(r2)
            java.lang.String r3 = "utdid"
            r0.put(r3, r2)
            java.lang.String r2 = "tid"
            r0.put(r2, r1)
            java.lang.String r2 = "userId"
            r0.put(r2, r1)
            java.lang.String r1 = "appName"
            r0.put(r1, r5)
            java.lang.String r1 = "appKeyClient"
            r0.put(r1, r6)
            java.lang.String r6 = "appchannel"
            java.lang.String r1 = "openapi"
            r0.put(r6, r1)
            java.lang.String r6 = "sessionId"
            r0.put(r6, r7)
            java.lang.String r6 = "rpcVersion"
            java.lang.String r7 = "8"
            r0.put(r6, r7)
            com.alipay.apmobilesecuritysdk.f.b r6 = com.alipay.apmobilesecuritysdk.f.b.a()
            com.alipay.apmobilesecuritysdk.face.TMNTokenClient$1 r7 = new com.alipay.apmobilesecuritysdk.face.TMNTokenClient$1
            r7.<init>(r4, r0, r8, r5)
            r6.a(r7)
            return
    }
}
