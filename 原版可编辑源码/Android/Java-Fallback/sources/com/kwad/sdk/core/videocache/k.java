package com.kwad.sdk.core.videocache;

public final class k {
    static void b(byte[] r2, long r3, int r5) {
            java.lang.String r0 = "Buffer must be not null!"
            com.kwad.sdk.utils.ao.h(r2, r0)
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r4 = 1
            r0 = 0
            if (r3 < 0) goto Lf
            r3 = r4
            goto L10
        Lf:
            r3 = r0
        L10:
            java.lang.String r1 = "Data offset must be positive!"
            com.kwad.sdk.utils.ao.checkArgument(r3, r1)
            if (r5 < 0) goto L1b
            int r2 = r2.length
            if (r5 > r2) goto L1b
            goto L1c
        L1b:
            r4 = r0
        L1c:
            java.lang.String r2 = "Length must be in range [0..buffer.length]"
            com.kwad.sdk.utils.ao.checkArgument(r4, r2)
            return
    }

    static java.lang.String dU(java.lang.String r2) {
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r2 = android.webkit.MimeTypeMap.getFileExtensionFromUrl(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L10
            r2 = 0
            return r2
        L10:
            java.lang.String r2 = r0.getMimeTypeFromExtension(r2)
            return r2
    }

    static java.lang.String decode(java.lang.String r2) {
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLDecoder.decode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Error decoding url"
            r0.<init>(r1, r2)
            throw r0
    }

    static java.lang.String encode(java.lang.String r2) {
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Error encoding url"
            r0.<init>(r1, r2)
            throw r0
    }
}
