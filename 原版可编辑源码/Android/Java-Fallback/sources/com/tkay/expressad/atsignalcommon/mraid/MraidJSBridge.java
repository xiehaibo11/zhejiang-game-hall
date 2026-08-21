package com.tkay.expressad.atsignalcommon.mraid;

public class MraidJSBridge extends com.tkay.expressad.atsignalcommon.windvane.l {
    protected static final java.lang.String a = "MraidJSBridge";
    private com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge b;

    public MraidJSBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    public void close(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r3 = r2 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r3 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.a r2 = (com.tkay.expressad.atsignalcommon.windvane.a) r2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r3 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r2.a
            java.lang.String r0 = "close"
            r3.fireNativeMethodCompleteEvent(r2, r0)
        L11:
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = r1.b     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = r1.b     // Catch: java.lang.Throwable -> L1a
            r2.close()     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    public void expand(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a
            java.lang.String r1 = "expand"
            r0.fireNativeMethodCompleteEvent(r3, r1)
        L11:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L53
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = "url"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = "shouldUseCustomClose"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "MRAID expand "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L53
            r0.append(r4)     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = " "
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            r0.append(r3)     // Catch: java.lang.Throwable -> L53
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L53
            if (r0 != 0) goto L53
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L53
            if (r0 != 0) goto L53
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r0 = r2.b     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L53
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = "true"
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> L53
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r0 = r2.b     // Catch: java.lang.Throwable -> L53
            r0.expand(r4, r3)     // Catch: java.lang.Throwable -> L53
        L53:
            return
    }

    @Override
    public void initialize(android.content.Context r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3) {
            r1 = this;
            super.initialize(r2, r3)
            boolean r0 = r2 instanceof com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge     // Catch: java.lang.Exception -> L39
            if (r0 == 0) goto Lc
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = (com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge) r2     // Catch: java.lang.Exception -> L39
            r1.b = r2     // Catch: java.lang.Exception -> L39
            return
        Lc:
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Exception -> L39
            boolean r2 = r2 instanceof com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = (com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge) r2     // Catch: java.lang.Exception -> L39
            r1.b = r2     // Catch: java.lang.Exception -> L39
        L22:
            java.lang.Object r2 = r3.getMraidObject()     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L38
            java.lang.Object r2 = r3.getMraidObject()     // Catch: java.lang.Exception -> L39
            boolean r2 = r2 instanceof com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L38
            java.lang.Object r2 = r3.getMraidObject()     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = (com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge) r2     // Catch: java.lang.Exception -> L39
            r1.b = r2     // Catch: java.lang.Exception -> L39
        L38:
            return
        L39:
            r2 = move-exception
            boolean r3 = com.tkay.expressad.b.a
            if (r3 == 0) goto L41
            r2.printStackTrace()
        L41:
            return
    }

    public void open(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r5 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L12
            com.tkay.expressad.atsignalcommon.windvane.a r5 = (com.tkay.expressad.atsignalcommon.windvane.a) r5
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r5.a
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            java.lang.String r1 = "open"
            r0.fireNativeMethodCompleteEvent(r5, r1)
            goto L13
        L12:
            r5 = 0
        L13:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4f
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r6 = "url"
            java.lang.String r6 = r0.optString(r6)     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r0 = r4.b     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L4f
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L4f
            if (r5 == 0) goto L4a
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4f
            long r2 = r5.lastTouchTime     // Catch: java.lang.Throwable -> L4f
            long r0 = r0 - r2
            int r2 = com.tkay.expressad.a.b.a.c     // Catch: java.lang.Throwable -> L4f
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L4f
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L4a
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r0 = r4.b     // Catch: java.lang.Throwable -> L4f
            com.tkay.expressad.foundation.d.c r0 = r0.getMraidCampaign()     // Catch: java.lang.Throwable -> L4f
            r5.getUrl()     // Catch: java.lang.Throwable -> L4f
            int r5 = com.tkay.expressad.a.b.a.a     // Catch: java.lang.Throwable -> L4f
            boolean r5 = com.tkay.expressad.a.b.a.a(r0)     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L4a
            return
        L4a:
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r5 = r4.b     // Catch: java.lang.Throwable -> L4f
            r5.open(r6)     // Catch: java.lang.Throwable -> L4f
        L4f:
            return
    }

    public void setOrientationProperties(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a
            java.lang.String r1 = "setOrientationProperties"
            r0.fireNativeMethodCompleteEvent(r3, r1)
        L11:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5c
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = "allowOrientationChange"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "forceOrientation"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Throwable -> L5c
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L5c
            if (r0 != 0) goto L5c
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L5c
            if (r0 != 0) goto L5c
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r0 = r2.b     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L5c
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "true"
            r4.equals(r0)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Throwable -> L5c
            int r4 = r3.hashCode()     // Catch: java.lang.Throwable -> L5c
            r0 = 729267099(0x2b77bb9b, float:8.8012383E-13)
            if (r4 == r0) goto L54
            r0 = 1430647483(0x5545f2bb, float:1.3602894E13)
            if (r4 == r0) goto L4e
            goto L5c
        L4e:
            java.lang.String r4 = "landscape"
            r3.equals(r4)     // Catch: java.lang.Throwable -> L5c
            goto L5c
        L54:
            java.lang.String r4 = "portrait"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L5c
            if (r3 == 0) goto L5c
        L5c:
            return
    }

    public void unload(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r3 = r2 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r3 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.a r2 = (com.tkay.expressad.atsignalcommon.windvane.a) r2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r3 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r2.a
            java.lang.String r0 = "unload"
            r3.fireNativeMethodCompleteEvent(r2, r0)
        L11:
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = r1.b     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r2 = r1.b     // Catch: java.lang.Throwable -> L1a
            r2.unload()     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    public void useCustomClose(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3 instanceof com.tkay.expressad.atsignalcommon.windvane.a
            if (r0 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a
            java.lang.String r1 = "useCustomClose"
            r0.fireNativeMethodCompleteEvent(r3, r1)
        L11:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "shouldUseCustomClose"
            java.lang.String r3 = r3.optString(r4)     // Catch: java.lang.Throwable -> L35
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L35
            if (r4 != 0) goto L35
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r4 = r2.b     // Catch: java.lang.Throwable -> L35
            if (r4 == 0) goto L35
            java.lang.String r3 = r3.toLowerCase()     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "true"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L35
            com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge r4 = r2.b     // Catch: java.lang.Throwable -> L35
            r4.useCustomClose(r3)     // Catch: java.lang.Throwable -> L35
        L35:
            return
    }
}
