package com.kwad.components.core.t;

public final class j {
    public static void c(android.content.Intent r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            android.os.Bundle r1 = r1.getExtras()
            if (r0 == 0) goto L16
            if (r1 == 0) goto L16
            r1.setClassLoader(r0)
        L16:
            return
    }
}
