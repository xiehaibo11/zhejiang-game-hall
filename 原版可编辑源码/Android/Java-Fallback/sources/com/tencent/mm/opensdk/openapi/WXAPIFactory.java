package com.tencent.mm.opensdk.openapi;

public class WXAPIFactory {
    private static final java.lang.String TAG = "MicroMsg.PaySdk.WXFactory";

    private WXAPIFactory() {
            r3 = this;
            r3.<init>()
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Class<com.tencent.mm.opensdk.openapi.WXAPIFactory> r2 = com.tencent.mm.opensdk.openapi.WXAPIFactory.class
            java.lang.String r2 = r2.getSimpleName()
            r1.append(r2)
            java.lang.String r2 = " should not be instantiated"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public static com.tencent.mm.opensdk.openapi.IWXAPI createWXAPI(android.content.Context r1, java.lang.String r2) {
            r0 = 1
            com.tencent.mm.opensdk.openapi.IWXAPI r1 = createWXAPI(r1, r2, r0)
            return r1
    }

    public static com.tencent.mm.opensdk.openapi.IWXAPI createWXAPI(android.content.Context r2, java.lang.String r3, boolean r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "createWXAPI, appId = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ", checkSignature = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MicroMsg.PaySdk.WXFactory"
            com.tencent.mm.opensdk.utils.Log.d(r1, r0)
            r0 = 2
            com.tencent.mm.opensdk.openapi.IWXAPI r2 = createWXAPI(r2, r3, r4, r0)
            return r2
    }

    public static com.tencent.mm.opensdk.openapi.IWXAPI createWXAPI(android.content.Context r2, java.lang.String r3, boolean r4, int r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "createWXAPI, appId = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ", checkSignature = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ", launchMode = "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MicroMsg.PaySdk.WXFactory"
            com.tencent.mm.opensdk.utils.Log.d(r1, r0)
            com.tencent.mm.opensdk.openapi.WXApiImplV10 r0 = new com.tencent.mm.opensdk.openapi.WXApiImplV10
            r0.<init>(r2, r3, r4, r5)
            return r0
    }
}
