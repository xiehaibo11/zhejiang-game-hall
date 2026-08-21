package com.kwad.sdk.utils;

public final class AbiUtil {
    private static com.kwad.sdk.utils.AbiUtil.Abi aHH;

    public enum Abi extends java.lang.Enum<com.kwad.sdk.utils.AbiUtil.Abi> {
        private static final com.kwad.sdk.utils.AbiUtil.Abi[] $VALUES = null;
        public static final com.kwad.sdk.utils.AbiUtil.Abi ARM64_V8A = null;
        public static final com.kwad.sdk.utils.AbiUtil.Abi ARMEABI_V7A = null;
        public static final com.kwad.sdk.utils.AbiUtil.Abi UNKNOWN = null;

        static {
                com.kwad.sdk.utils.AbiUtil$Abi r0 = new com.kwad.sdk.utils.AbiUtil$Abi
                r1 = 0
                java.lang.String r2 = "UNKNOWN"
                r0.<init>(r2, r1)
                com.kwad.sdk.utils.AbiUtil.Abi.UNKNOWN = r0
                com.kwad.sdk.utils.AbiUtil$Abi r0 = new com.kwad.sdk.utils.AbiUtil$Abi
                r2 = 1
                java.lang.String r3 = "ARMEABI_V7A"
                r0.<init>(r3, r2)
                com.kwad.sdk.utils.AbiUtil.Abi.ARMEABI_V7A = r0
                com.kwad.sdk.utils.AbiUtil$Abi r0 = new com.kwad.sdk.utils.AbiUtil$Abi
                r3 = 2
                java.lang.String r4 = "ARM64_V8A"
                r0.<init>(r4, r3)
                com.kwad.sdk.utils.AbiUtil.Abi.ARM64_V8A = r0
                r4 = 3
                com.kwad.sdk.utils.AbiUtil$Abi[] r4 = new com.kwad.sdk.utils.AbiUtil.Abi[r4]
                com.kwad.sdk.utils.AbiUtil$Abi r5 = com.kwad.sdk.utils.AbiUtil.Abi.UNKNOWN
                r4[r1] = r5
                com.kwad.sdk.utils.AbiUtil$Abi r1 = com.kwad.sdk.utils.AbiUtil.Abi.ARMEABI_V7A
                r4[r2] = r1
                r4[r3] = r0
                com.kwad.sdk.utils.AbiUtil.Abi.$VALUES = r4
                return
        }

        Abi(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.sdk.utils.AbiUtil.Abi valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.utils.AbiUtil$Abi> r0 = com.kwad.sdk.utils.AbiUtil.Abi.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.utils.AbiUtil$Abi r1 = (com.kwad.sdk.utils.AbiUtil.Abi) r1
                return r1
        }

        public static com.kwad.sdk.utils.AbiUtil.Abi[] values() {
                com.kwad.sdk.utils.AbiUtil$Abi[] r0 = com.kwad.sdk.utils.AbiUtil.Abi.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.utils.AbiUtil$Abi[] r0 = (com.kwad.sdk.utils.AbiUtil.Abi[]) r0
                return r0
        }
    }

    public static java.lang.String bD(android.content.Context r0) {
            boolean r0 = isArm64(r0)
            if (r0 == 0) goto L9
            java.lang.String r0 = "arm64-v8a"
            return r0
        L9:
            java.lang.String r0 = "armeabi-v7a"
            return r0
    }

    private static com.kwad.sdk.utils.AbiUtil.Abi bE(android.content.Context r4) {
            com.kwad.sdk.utils.AbiUtil$Abi r0 = com.kwad.sdk.utils.AbiUtil.aHH
            if (r0 == 0) goto L5
            return r0
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L10
        Lb:
            com.kwad.sdk.utils.AbiUtil$Abi r4 = com.kwad.sdk.utils.AbiUtil.Abi.ARMEABI_V7A
        Ld:
            com.kwad.sdk.utils.AbiUtil.aHH = r4
            goto L67
        L10:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r0 < r2) goto L1f
            boolean r4 = android.os.Process.is64Bit()
            if (r4 == 0) goto Lb
            com.kwad.sdk.utils.AbiUtil$Abi r4 = com.kwad.sdk.utils.AbiUtil.Abi.ARM64_V8A
            goto Ld
        L1f:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L67
            java.lang.String r0 = "dalvik.system.VMRuntime"
            java.lang.String r1 = "getRuntime"
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L46
            java.lang.Object r0 = com.kwad.sdk.utils.s.a(r0, r1, r3)     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "is64Bit"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L46
            java.lang.Object r0 = com.kwad.sdk.utils.s.f(r0, r1, r2)     // Catch: java.lang.Throwable -> L46
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L46
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L46
            if (r0 == 0) goto L41
            com.kwad.sdk.utils.AbiUtil$Abi r0 = com.kwad.sdk.utils.AbiUtil.Abi.ARM64_V8A     // Catch: java.lang.Throwable -> L46
            goto L43
        L41:
            com.kwad.sdk.utils.AbiUtil$Abi r0 = com.kwad.sdk.utils.AbiUtil.Abi.ARMEABI_V7A     // Catch: java.lang.Throwable -> L46
        L43:
            com.kwad.sdk.utils.AbiUtil.aHH = r0     // Catch: java.lang.Throwable -> L46
            goto L67
        L46:
            r0 = move-exception
            r0.printStackTrace()
            android.content.pm.ApplicationInfo r4 = r4.getApplicationInfo()     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = r4.nativeLibraryDir     // Catch: java.lang.Throwable -> L60
            java.lang.String r0 = "arm64"
            boolean r4 = r4.contains(r0)     // Catch: java.lang.Throwable -> L60
            if (r4 == 0) goto L5d
            com.kwad.sdk.utils.AbiUtil$Abi r4 = com.kwad.sdk.utils.AbiUtil.Abi.ARM64_V8A     // Catch: java.lang.Throwable -> L60
        L5a:
            com.kwad.sdk.utils.AbiUtil.aHH = r4     // Catch: java.lang.Throwable -> L60
            goto L67
        L5d:
            com.kwad.sdk.utils.AbiUtil$Abi r4 = com.kwad.sdk.utils.AbiUtil.Abi.UNKNOWN     // Catch: java.lang.Throwable -> L60
            goto L5a
        L60:
            r4 = move-exception
            r4.printStackTrace()
            com.kwad.sdk.utils.AbiUtil$Abi r4 = com.kwad.sdk.utils.AbiUtil.Abi.UNKNOWN
            goto Ld
        L67:
            com.kwad.sdk.utils.AbiUtil$Abi r4 = com.kwad.sdk.utils.AbiUtil.aHH
            return r4
    }

    public static boolean isArm64(android.content.Context r1) {
            com.kwad.sdk.utils.AbiUtil$Abi r1 = bE(r1)
            com.kwad.sdk.utils.AbiUtil$Abi r0 = com.kwad.sdk.utils.AbiUtil.Abi.ARM64_V8A
            if (r1 != r0) goto La
            r1 = 1
            return r1
        La:
            r1 = 0
            return r1
    }
}
