package com.kwad.sdk.utils;

public final class bc {
    private static final java.text.SimpleDateFormat aJA = null;
    private static final java.text.SimpleDateFormat aJu = null;
    private static final java.text.SimpleDateFormat aJv = null;
    private static final java.text.SimpleDateFormat aJw = null;
    private static final java.text.SimpleDateFormat aJx = null;
    private static final java.text.SimpleDateFormat aJy = null;
    private static final java.text.SimpleDateFormat aJz = null;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "MM/dd"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJu = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy/MM/dd"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJv = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "MM月dd日"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJw = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy年MM月dd日"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJx = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "HH:mm"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJy = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "MM-dd"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJz = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy-MM-dd"
            r0.<init>(r2, r1)
            com.kwad.sdk.utils.bc.aJA = r0
            return
    }

    public static boolean fI(java.lang.String r0) {
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean fJ(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Ld
            java.lang.String r0 = ".*\\.kpg.*"
            boolean r1 = r1.matches(r0)
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static boolean isEquals(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Le
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public static boolean isNullString(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L11
            java.lang.String r0 = "null"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto Lf
            goto L11
        Lf:
            r1 = 0
            return r1
        L11:
            r1 = 1
            return r1
    }
}
