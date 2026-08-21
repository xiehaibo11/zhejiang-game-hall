package com.kwad.sdk.core.b.a;

public final class eg implements com.kwad.sdk.core.d<com.kwad.sdk.core.imageloader.ImageLoaderInfo> {
    public eg() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.imageloader.ImageLoaderInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "total_count"
            int r0 = r3.optInt(r0)
            r2.totalCount = r0
            java.lang.String r0 = "failed_count"
            int r0 = r3.optInt(r0)
            r2.failedCount = r0
            java.lang.String r0 = "success_count"
            int r0 = r3.optInt(r0)
            r2.successCount = r0
            java.lang.String r0 = "duration"
            double r0 = r3.optDouble(r0)
            r2.duration = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.imageloader.ImageLoaderInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            int r0 = r4.totalCount
            if (r0 == 0) goto L12
            int r0 = r4.totalCount
            java.lang.String r1 = "total_count"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            int r0 = r4.failedCount
            if (r0 == 0) goto L1d
            int r0 = r4.failedCount
            java.lang.String r1 = "failed_count"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L1d:
            int r0 = r4.successCount
            if (r0 == 0) goto L28
            int r0 = r4.successCount
            java.lang.String r1 = "success_count"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L28:
            double r0 = r4.duration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L37
            double r0 = r4.duration
            java.lang.String r4 = "duration"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L37:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.imageloader.ImageLoaderInfo r1 = (com.kwad.sdk.core.imageloader.ImageLoaderInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.imageloader.ImageLoaderInfo r1 = (com.kwad.sdk.core.imageloader.ImageLoaderInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
