package com.kwad.components.offline.api.core.utils;

public class LiveStringUtil {
    public LiveStringUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String emptyIfNull(java.lang.String r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.String r0 = ""
            return r0
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
