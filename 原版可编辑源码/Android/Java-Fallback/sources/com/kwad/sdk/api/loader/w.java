package com.kwad.sdk.api.loader;

final class w {
    static boolean is64Bit() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            boolean r0 = android.os.Process.is64Bit()
            return r0
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            r2 = 0
            if (r0 < r1) goto L33
            java.lang.String r0 = "dalvik.system.VMRuntime"
            com.kwad.sdk.api.loader.Reflect r0 = com.kwad.sdk.api.loader.Reflect.ca(r0)     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "getRuntime"
            com.kwad.sdk.api.loader.Reflect r0 = r0.cd(r1)     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "is64Bit"
            com.kwad.sdk.api.loader.Reflect r0 = r0.cd(r1)     // Catch: java.lang.Exception -> L2f
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L2f
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> L2f
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> L2f
            return r0
        L2f:
            r0 = move-exception
            r0.printStackTrace()
        L33:
            return r2
    }

    public static java.lang.String wO() {
            boolean r0 = is64Bit()
            if (r0 == 0) goto L9
            java.lang.String r0 = "arm64-v8a"
            return r0
        L9:
            java.lang.String r0 = "armeabi-v7a"
            return r0
    }
}
