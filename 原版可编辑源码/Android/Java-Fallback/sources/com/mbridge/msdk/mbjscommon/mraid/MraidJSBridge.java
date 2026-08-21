package com.mbridge.msdk.mbjscommon.mraid;

public class MraidJSBridge extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    private com.mbridge.msdk.mbjscommon.mraid.b a;

    public MraidJSBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    public void close(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r5 = "MRAID close"
            java.lang.String r0 = "MraidJSBridge"
            boolean r1 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r1 == 0) goto L15
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a
            java.lang.String r2 = "close"
            r1.a(r4, r2)
        L15:
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> L22
            com.mbridge.msdk.mbjscommon.mraid.b r4 = r3.a     // Catch: java.lang.Throwable -> L22
            if (r4 == 0) goto L26
            com.mbridge.msdk.mbjscommon.mraid.b r4 = r3.a     // Catch: java.lang.Throwable -> L22
            r4.close()     // Catch: java.lang.Throwable -> L22
            goto L26
        L22:
            r4 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L26:
            return
    }

    public void expand(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "MraidJSBridge"
            boolean r1 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r1 == 0) goto L13
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a
            java.lang.String r2 = "expand"
            r1.a(r4, r2)
        L13:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L60
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L60
            java.lang.String r5 = "url"
            java.lang.String r5 = r4.optString(r5)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = "shouldUseCustomClose"
            java.lang.String r4 = r4.optString(r1)     // Catch: java.lang.Throwable -> L60
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60
            r1.<init>()     // Catch: java.lang.Throwable -> L60
            java.lang.String r2 = "MRAID expand "
            r1.append(r2)     // Catch: java.lang.Throwable -> L60
            r1.append(r5)     // Catch: java.lang.Throwable -> L60
            java.lang.String r2 = " "
            r1.append(r2)     // Catch: java.lang.Throwable -> L60
            r1.append(r4)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L60
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L60
            if (r1 != 0) goto L66
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L60
            if (r1 != 0) goto L66
            com.mbridge.msdk.mbjscommon.mraid.b r1 = r3.a     // Catch: java.lang.Throwable -> L60
            if (r1 == 0) goto L66
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = "true"
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.mbjscommon.mraid.b r1 = r3.a     // Catch: java.lang.Throwable -> L60
            r1.expand(r5, r4)     // Catch: java.lang.Throwable -> L60
            goto L66
        L60:
            r4 = move-exception
            java.lang.String r5 = "MRAID expand"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L66:
            return
    }

    @Override
    public void initialize(android.content.Context r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3) {
            r1 = this;
            super.initialize(r2, r3)
            boolean r0 = r2 instanceof com.mbridge.msdk.mbjscommon.mraid.b     // Catch: java.lang.Exception -> L39
            if (r0 == 0) goto Lc
            com.mbridge.msdk.mbjscommon.mraid.b r2 = (com.mbridge.msdk.mbjscommon.mraid.b) r2     // Catch: java.lang.Exception -> L39
            r1.a = r2     // Catch: java.lang.Exception -> L39
            goto L41
        Lc:
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Exception -> L39
            boolean r2 = r2 instanceof com.mbridge.msdk.mbjscommon.mraid.b     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Exception -> L39
            com.mbridge.msdk.mbjscommon.mraid.b r2 = (com.mbridge.msdk.mbjscommon.mraid.b) r2     // Catch: java.lang.Exception -> L39
            r1.a = r2     // Catch: java.lang.Exception -> L39
        L22:
            java.lang.Object r2 = r3.getMraidObject()     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L41
            java.lang.Object r2 = r3.getMraidObject()     // Catch: java.lang.Exception -> L39
            boolean r2 = r2 instanceof com.mbridge.msdk.mbjscommon.mraid.b     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L41
            java.lang.Object r2 = r3.getMraidObject()     // Catch: java.lang.Exception -> L39
            com.mbridge.msdk.mbjscommon.mraid.b r2 = (com.mbridge.msdk.mbjscommon.mraid.b) r2     // Catch: java.lang.Exception -> L39
            r1.a = r2     // Catch: java.lang.Exception -> L39
            goto L41
        L39:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L41
            r2.printStackTrace()
        L41:
            return
    }

    public void open(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "MraidJSBridge"
            boolean r1 = r6 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r1 == 0) goto L14
            com.mbridge.msdk.mbjscommon.windvane.a r6 = (com.mbridge.msdk.mbjscommon.windvane.a) r6
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r6.a
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            java.lang.String r2 = "open"
            r1.a(r6, r2)
            goto L15
        L14:
            r6 = 0
        L15:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L67
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L67
            java.lang.String r7 = "url"
            java.lang.String r7 = r1.optString(r7)     // Catch: java.lang.Throwable -> L67
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            r1.<init>()     // Catch: java.lang.Throwable -> L67
            java.lang.String r2 = "MRAID Open "
            r1.append(r2)     // Catch: java.lang.Throwable -> L67
            r1.append(r7)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L67
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L67
            com.mbridge.msdk.mbjscommon.mraid.b r1 = r5.a     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L6d
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L67
            if (r1 != 0) goto L6d
            if (r6 == 0) goto L61
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L67
            long r3 = r6.lastTouchTime     // Catch: java.lang.Throwable -> L67
            long r1 = r1 - r3
            int r3 = com.mbridge.msdk.click.b.a.c     // Catch: java.lang.Throwable -> L67
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L67
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L61
            com.mbridge.msdk.mbjscommon.mraid.b r1 = r5.a     // Catch: java.lang.Throwable -> L67
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.getMraidCampaign()     // Catch: java.lang.Throwable -> L67
            java.lang.String r6 = r6.getUrl()     // Catch: java.lang.Throwable -> L67
            int r2 = com.mbridge.msdk.click.b.a.a     // Catch: java.lang.Throwable -> L67
            boolean r6 = com.mbridge.msdk.click.b.a.a(r1, r6, r2)     // Catch: java.lang.Throwable -> L67
            if (r6 == 0) goto L61
            return
        L61:
            com.mbridge.msdk.mbjscommon.mraid.b r6 = r5.a     // Catch: java.lang.Throwable -> L67
            r6.open(r7)     // Catch: java.lang.Throwable -> L67
            goto L6d
        L67:
            r6 = move-exception
            java.lang.String r7 = "MRAID Open"
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r6)
        L6d:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            r0.open(r1, r2)
            return
    }

    public void setOrientationProperties(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "MRAID setOrientationProperties"
            java.lang.String r1 = "MraidJSBridge"
            boolean r2 = r5 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r2 == 0) goto L15
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5
            com.mbridge.msdk.mbjscommon.mraid.a r2 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r5.a
            java.lang.String r3 = "setOrientationProperties"
            r2.a(r5, r3)
        L15:
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5f
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r6 = "allowOrientationChange"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = "forceOrientation"
            java.lang.String r5 = r5.optString(r2)     // Catch: java.lang.Throwable -> L5f
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L5f
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L5f
            if (r2 != 0) goto L63
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5f
            if (r2 != 0) goto L63
            com.mbridge.msdk.mbjscommon.mraid.b r2 = r4.a     // Catch: java.lang.Throwable -> L5f
            if (r2 == 0) goto L63
            java.lang.String r6 = r6.toLowerCase()     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = "true"
            r6.equals(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r5 = r5.toLowerCase()     // Catch: java.lang.Throwable -> L5f
            int r6 = r5.hashCode()     // Catch: java.lang.Throwable -> L5f
            r2 = 729267099(0x2b77bb9b, float:8.8012383E-13)
            if (r6 == r2) goto L5c
            r2 = 1430647483(0x5545f2bb, float:1.3602894E13)
            if (r6 == r2) goto L55
            goto L63
        L55:
            java.lang.String r6 = "landscape"
        L57:
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L5f
            goto L63
        L5c:
            java.lang.String r6 = "portrait"
            goto L57
        L5f:
            r5 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r5)
        L63:
            return
    }

    public void unload(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r5 = "MRAID unload"
            java.lang.String r0 = "MraidJSBridge"
            boolean r1 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r1 == 0) goto L15
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a
            java.lang.String r2 = "unload"
            r1.a(r4, r2)
        L15:
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> L22
            com.mbridge.msdk.mbjscommon.mraid.b r4 = r3.a     // Catch: java.lang.Throwable -> L22
            if (r4 == 0) goto L26
            com.mbridge.msdk.mbjscommon.mraid.b r4 = r3.a     // Catch: java.lang.Throwable -> L22
            r4.unload()     // Catch: java.lang.Throwable -> L22
            goto L26
        L22:
            r4 = move-exception
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L26:
            return
    }

    public void useCustomClose(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "MraidJSBridge"
            boolean r1 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r1 == 0) goto L13
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a
            java.lang.String r2 = "useCustomClose"
            r1.a(r4, r2)
        L13:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4c
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r5 = "shouldUseCustomClose"
            java.lang.String r4 = r4.optString(r5)     // Catch: java.lang.Throwable -> L4c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r5.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = "MRAID useCustomClose "
            r5.append(r1)     // Catch: java.lang.Throwable -> L4c
            r5.append(r4)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L4c
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> L4c
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L4c
            if (r5 != 0) goto L52
            com.mbridge.msdk.mbjscommon.mraid.b r5 = r3.a     // Catch: java.lang.Throwable -> L4c
            if (r5 == 0) goto L52
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r5 = "true"
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L4c
            com.mbridge.msdk.mbjscommon.mraid.b r5 = r3.a     // Catch: java.lang.Throwable -> L4c
            r5.useCustomClose(r4)     // Catch: java.lang.Throwable -> L4c
            goto L52
        L4c:
            r4 = move-exception
            java.lang.String r5 = "MRAID useCustomClose"
            com.mbridge.msdk.foundation.tools.z.c(r0, r5, r4)
        L52:
            return
    }
}
