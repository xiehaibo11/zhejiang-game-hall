package com.kwad.sdk.utils;

public final class as {
    private static java.lang.String aJc;
    private static java.lang.String aJd;

    public static boolean IS() {
            java.lang.String r0 = "EMUI"
            boolean r0 = W(r0)
            return r0
    }

    public static boolean IT() {
            java.lang.String r0 = "MIUI"
            boolean r0 = W(r0)
            return r0
    }

    public static boolean IU() {
            java.lang.String r0 = "FLYME"
            boolean r0 = W(r0)
            return r0
    }

    private static boolean W(java.lang.String r2) {
            java.lang.String r0 = com.kwad.sdk.utils.as.aJc
            if (r0 == 0) goto L9
            boolean r2 = r0.contains(r2)
            return r2
        L9:
            java.lang.String r0 = "ro.build.version.opporom"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            com.kwad.sdk.utils.as.aJd = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            java.lang.String r0 = "OPPO"
        L19:
            com.kwad.sdk.utils.as.aJc = r0
            goto La4
        L1d:
            java.lang.String r0 = "ro.vivo.os.version"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            com.kwad.sdk.utils.as.aJd = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2e
            java.lang.String r0 = "VIVO"
            goto L19
        L2e:
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            com.kwad.sdk.utils.as.aJd = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3f
            java.lang.String r0 = "EMUI"
            goto L19
        L3f:
            java.lang.String r0 = "ro.miui.ui.version.name"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            com.kwad.sdk.utils.as.aJd = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L50
            java.lang.String r0 = "MIUI"
            goto L19
        L50:
            java.lang.String r0 = "ro.product.system.manufacturer"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            com.kwad.sdk.utils.as.aJd = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L61
            java.lang.String r0 = "OnePlus"
            goto L19
        L61:
            java.lang.String r0 = "ro.smartisan.version"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            com.kwad.sdk.utils.as.aJd = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L72
            java.lang.String r0 = "SMARTISAN"
            goto L19
        L72:
            java.lang.String r0 = "ro.product.manufacturer"
            java.lang.String r0 = com.kwad.sdk.utils.bd.get(r0)
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r1 = "SAMSUNG"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L87
        L84:
            com.kwad.sdk.utils.as.aJc = r1
            goto La4
        L87:
            java.lang.String r0 = android.os.Build.DISPLAY
            com.kwad.sdk.utils.as.aJd = r0
            java.lang.String r0 = r0.toUpperCase()
            java.lang.String r1 = "FLYME"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L98
            goto L84
        L98:
            java.lang.String r0 = "unknown"
            com.kwad.sdk.utils.as.aJd = r0
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r0 = r0.toUpperCase()
            goto L19
        La4:
            java.lang.String r0 = com.kwad.sdk.utils.as.aJc
            boolean r2 = r0.contains(r2)
            return r2
    }

    public static java.lang.String getName() {
            java.lang.String r0 = com.kwad.sdk.utils.as.aJc
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            W(r0)
        L9:
            java.lang.String r0 = com.kwad.sdk.utils.as.aJc
            return r0
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = com.kwad.sdk.utils.as.aJd
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            W(r0)
        L9:
            java.lang.String r0 = com.kwad.sdk.utils.as.aJd
            return r0
    }
}
