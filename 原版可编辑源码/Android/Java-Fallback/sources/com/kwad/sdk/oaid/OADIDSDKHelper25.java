package com.kwad.sdk.oaid;

public class OADIDSDKHelper25 {
    private static final java.lang.String SUB_TAG = "OADIDSDKHelper25:";
    private static final java.lang.String TAG = "KSAdSDK";
    private static boolean mIsRequestIng;
    private static boolean sGetOaidFail;


    static class IIdentifierListener25 implements com.bun.miitmdid.interfaces.IIdentifierListener {
        private final com.kwad.sdk.oaid.OADIDSDKHelper25.a mOaidListener;
        private final long mStartTime;

        public IIdentifierListener25(long r1, com.kwad.sdk.oaid.OADIDSDKHelper25.a r3) {
                r0 = this;
                r0.<init>()
                r0.mStartTime = r1
                r0.mOaidListener = r3
                return
        }

        public void OnSupport(boolean r5, com.bun.miitmdid.interfaces.IdSupplier r6) {
                r4 = this;
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r4.mStartTime
                long r0 = r0 - r2
                if (r6 == 0) goto L38
                java.lang.String r5 = r6.getOAID()
                boolean r6 = android.text.TextUtils.isEmpty(r5)
                if (r6 != 0) goto L34
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                java.lang.String r2 = "OADIDSDKHelper25:oaid time="
                r6.<init>(r2)
                r6.append(r0)
                java.lang.String r0 = "--OAID:"
                r6.append(r0)
                r6.append(r5)
                java.lang.String r6 = r6.toString()
                java.lang.String r0 = "KSAdSDK"
                android.util.Log.d(r0, r6)
                com.kwad.sdk.oaid.OADIDSDKHelper25$a r6 = r4.mOaidListener
                r6.dr(r5)
                goto L38
            L34:
                r5 = 1
                com.kwad.sdk.oaid.OADIDSDKHelper25.access$002(r5)
            L38:
                r5 = 0
                com.kwad.sdk.oaid.OADIDSDKHelper25.access$102(r5)
                return
        }
    }

    public interface a {
        void dr(java.lang.String r1);
    }

    static {
            return
    }

    public OADIDSDKHelper25() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$002(boolean r0) {
            com.kwad.sdk.oaid.OADIDSDKHelper25.sGetOaidFail = r0
            return r0
    }

    static boolean access$102(boolean r0) {
            com.kwad.sdk.oaid.OADIDSDKHelper25.mIsRequestIng = r0
            return r0
    }

    public static void getOAId(android.content.Context r7, com.kwad.sdk.oaid.OADIDSDKHelper25.a r8) {
            java.lang.String r0 = "KSAdSDK"
            if (r7 == 0) goto L54
            boolean r1 = com.kwad.sdk.oaid.OADIDSDKHelper25.sGetOaidFail
            if (r1 == 0) goto L9
            goto L54
        L9:
            boolean r1 = isSupport()
            r2 = 1
            if (r1 != 0) goto L13
            com.kwad.sdk.oaid.OADIDSDKHelper25.sGetOaidFail = r2
            return
        L13:
            boolean r1 = com.kwad.sdk.oaid.OADIDSDKHelper25.mIsRequestIng
            if (r1 == 0) goto L18
            return
        L18:
            com.kwad.sdk.oaid.OADIDSDKHelper25.mIsRequestIng = r2
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4a
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.oaid.OADIDSDKHelper25$IIdentifierListener25 r1 = new com.kwad.sdk.oaid.OADIDSDKHelper25$IIdentifierListener25     // Catch: java.lang.Throwable -> L4a
            r1.<init>(r3, r8)     // Catch: java.lang.Throwable -> L4a
            int r7 = com.bun.miitmdid.core.MdidSdkHelper.InitSdk(r7, r2, r1)     // Catch: java.lang.Throwable -> L4a
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4a
            long r5 = r5 - r3
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = "OADIDSDKHelper25:sdk init time="
            r8.<init>(r1)     // Catch: java.lang.Throwable -> L4a
            r8.append(r5)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = "--result="
            r8.append(r1)     // Catch: java.lang.Throwable -> L4a
            r8.append(r7)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L4a
            android.util.Log.d(r0, r7)     // Catch: java.lang.Throwable -> L4a
            return
        L4a:
            java.lang.String r7 = "OADIDSDKHelper25:oaid sdk not find "
            android.util.Log.d(r0, r7)
            r7 = 0
            com.kwad.sdk.oaid.OADIDSDKHelper25.mIsRequestIng = r7
            com.kwad.sdk.oaid.OADIDSDKHelper25.sGetOaidFail = r2
        L54:
            return
    }

    public static boolean isSupport() {
            java.lang.String r0 = "KSAdSDK"
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 0
            r3 = 21
            if (r1 >= r3) goto La
            return r2
        La:
            com.kwad.sdk.oaid.OADIDSDKHelper25$1 r1 = new com.kwad.sdk.oaid.OADIDSDKHelper25$1     // Catch: java.lang.Throwable -> L26
            r1.<init>()     // Catch: java.lang.Throwable -> L26
            r3 = 0
            r4 = 1
            r1.OnSupport(r4, r3)     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "com.bun.miitmdid.core.MdidSdkHelper"
            java.lang.Class<com.kwad.sdk.oaid.OADIDSDKHelper25> r3 = com.kwad.sdk.oaid.OADIDSDKHelper25.class
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L20
            java.lang.Class.forName(r1, r2, r3)     // Catch: java.lang.Throwable -> L20
            return r4
        L20:
            java.lang.String r1 = "OADIDSDKHelper25:com.bun.miitmdid.core.MdidSdkHelper oaid sdk not find "
        L22:
            android.util.Log.d(r0, r1)
            return r2
        L26:
            java.lang.String r1 = "OADIDSDKHelper25:isSupport oaid sdk not find "
            goto L22
    }
}
