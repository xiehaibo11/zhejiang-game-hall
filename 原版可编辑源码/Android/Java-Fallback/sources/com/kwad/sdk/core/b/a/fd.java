package com.kwad.sdk.core.b.a;

public final class fd implements com.kwad.sdk.core.d<com.kwad.components.core.webview.jshandler.an.a> {
    public fd() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.core.webview.jshandler.an.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "status"
            int r0 = r4.optInt(r0)
            r3.status = r0
            java.lang.String r0 = "totalWatchingDuration"
            long r0 = r4.optLong(r0)
            r3.totalWatchingDuration = r0
            java.lang.String r0 = "watchingUserCount"
            int r0 = r4.optInt(r0)
            r3.watchingUserCount = r0
            java.lang.String r0 = "displayWatchingUserCount"
            java.lang.String r0 = r4.optString(r0)
            r3.displayWatchingUserCount = r0
            java.lang.String r0 = r3.displayWatchingUserCount
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L2d
            r3.displayWatchingUserCount = r2
        L2d:
            java.lang.String r0 = "liveDuration"
            long r0 = r4.optLong(r0)
            r3.liveDuration = r0
            java.lang.String r0 = "likeUserCount"
            int r0 = r4.optInt(r0)
            r3.likeUserCount = r0
            java.lang.String r0 = "displayLikeUserCount"
            java.lang.String r4 = r4.optString(r0)
            r3.displayLikeUserCount = r4
            java.lang.String r4 = r3.displayLikeUserCount
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L4d
            r3.displayLikeUserCount = r2
        L4d:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.core.webview.jshandler.an.a r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            int r0 = r6.status
            if (r0 == 0) goto L12
            int r0 = r6.status
            java.lang.String r1 = "status"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L12:
            long r0 = r6.totalWatchingDuration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
            long r0 = r6.totalWatchingDuration
            java.lang.String r4 = "totalWatchingDuration"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L21:
            int r0 = r6.watchingUserCount
            if (r0 == 0) goto L2c
            int r0 = r6.watchingUserCount
            java.lang.String r1 = "watchingUserCount"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L2c:
            java.lang.String r0 = r6.displayWatchingUserCount
            java.lang.String r1 = ""
            if (r0 == 0) goto L41
            java.lang.String r0 = r6.displayWatchingUserCount
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L41
            java.lang.String r0 = r6.displayWatchingUserCount
            java.lang.String r4 = "displayWatchingUserCount"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L41:
            long r4 = r6.liveDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L4e
            long r2 = r6.liveDuration
            java.lang.String r0 = "liveDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L4e:
            int r0 = r6.likeUserCount
            if (r0 == 0) goto L59
            int r0 = r6.likeUserCount
            java.lang.String r2 = "likeUserCount"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L59:
            java.lang.String r0 = r6.displayLikeUserCount
            if (r0 == 0) goto L6c
            java.lang.String r0 = r6.displayLikeUserCount
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6c
            java.lang.String r6 = r6.displayLikeUserCount
            java.lang.String r0 = "displayLikeUserCount"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L6c:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.an$a r1 = (com.kwad.components.core.webview.jshandler.an.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.core.webview.jshandler.an$a r1 = (com.kwad.components.core.webview.jshandler.an.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
