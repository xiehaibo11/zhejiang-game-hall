package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

final class ContentMetadataInternal {
    private static final java.lang.String METADATA_NAME_CONTENT_LENGTH = "exo_len";
    private static final java.lang.String METADATA_NAME_REDIRECTED_URI = "exo_redir";
    private static final java.lang.String PREFIX = "exo_";

    private ContentMetadataInternal() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getContentLength(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r3) {
            java.lang.String r0 = "exo_len"
            r1 = -1
            long r0 = r3.get(r0, r1)
            return r0
    }

    public static android.net.Uri getRedirectedUri(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r3) {
            r0 = 0
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "exo_redir"
            java.lang.String r3 = r3.get(r2, r1)
            if (r3 != 0) goto Ld
            goto L11
        Ld:
            android.net.Uri r0 = android.net.Uri.parse(r3)
        L11:
            return r0
    }

    public static void removeContentLength(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r1) {
            java.lang.String r0 = "exo_len"
            r1.remove(r0)
            return
    }

    public static void removeRedirectedUri(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r1) {
            java.lang.String r0 = "exo_redir"
            r1.remove(r0)
            return
    }

    public static void setContentLength(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r1, long r2) {
            java.lang.String r0 = "exo_len"
            r1.set(r0, r2)
            return
    }

    public static void setRedirectedUri(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r1, android.net.Uri r2) {
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "exo_redir"
            r1.set(r0, r2)
            return
    }
}
