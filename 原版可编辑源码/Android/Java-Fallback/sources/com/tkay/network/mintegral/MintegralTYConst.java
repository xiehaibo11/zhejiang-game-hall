package com.tkay.network.mintegral;

public class MintegralTYConst {
    public static final int NETWORK_FIRM_ID = 6;

    public static class DEBUGGER_CONFIG {
        public static final int Mintegral_INTERSTITIAL_IMAGE = 1;
        public static final int Mintegral_INTERSTITIAL_VIDEO = 2;
        public static final int Mintegral_NATIVE_SELF_RENDER = 1;
        public static final int Mintegral_NATIVE_TEMPLATE = 2;
        public static final int Mintegral_NETWORK = 6;

        public DEBUGGER_CONFIG() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public MintegralTYConst() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getNetworkVersion() {
            java.lang.String r0 = "com.mbridge.msdk.out.MBConfiguration"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L42
            java.lang.reflect.Field[] r1 = r0.getFields()     // Catch: java.lang.Throwable -> L42
            int r2 = r1.length     // Catch: java.lang.Throwable -> L42
            r3 = 0
        Lc:
            if (r3 >= r2) goto L42
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L42
            r5 = 1
            r4.setAccessible(r5)     // Catch: java.lang.Throwable -> L42
            java.lang.Class r5 = r4.getType()     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L42
            java.lang.String r6 = "java.lang.String"
            boolean r5 = r5.endsWith(r6)     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L3f
            int r5 = r4.getModifiers()     // Catch: java.lang.Throwable -> L42
            boolean r5 = java.lang.reflect.Modifier.isStatic(r5)     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L3f
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "MAL"
            boolean r5 = r4.startsWith(r5)     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L3f
            return r4
        L3f:
            int r3 = r3 + 1
            goto Lc
        L42:
            java.lang.String r0 = ""
            return r0
    }

    public static boolean isChinaSdk() {
            java.lang.String r0 = getNetworkVersion()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L14
            java.lang.String r1 = "2"
            boolean r0 = r0.endsWith(r1)
            if (r0 == 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }
}
