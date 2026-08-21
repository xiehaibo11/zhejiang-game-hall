package com.kwad.sdk.utils;

public final class ah {
    public static boolean J(java.util.List<?> r0) {
            if (r0 == 0) goto La
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public static boolean K(java.util.List<?> r0) {
            if (r0 == 0) goto Lb
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public static boolean a(java.lang.Object r0, java.lang.Object r1) {
            if (r0 == 0) goto La
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public static void checkUiThread() {
            com.kwad.sdk.utils.SystemUtil.checkUiThread()
            return
    }
}
