package com.tkay.expressad.atsignalcommon.mraid;

public class CallMraidJS {
    public static final java.lang.String a = "placementType";
    public static final java.lang.String b = "state";
    public static final java.lang.String c = "viewable";
    public static final java.lang.String d = "currentAppOrientation";
    public static final java.lang.String e = "loading";
    public static final java.lang.String f = "default";
    public static final java.lang.String g = "expanded";
    public static final java.lang.String h = "hidden";
    public static final java.lang.String i = "resized";
    public static final java.lang.String j = "Interstitial";
    public static final java.lang.String k = "inline";

    private static class SingletonHolder {
        private static final com.tkay.expressad.atsignalcommon.mraid.CallMraidJS a = null;

        static {
                com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = new com.tkay.expressad.atsignalcommon.mraid.CallMraidJS
                r0.<init>()
                com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.SingletonHolder.a = r0
                return
        }

        private SingletonHolder() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.atsignalcommon.mraid.CallMraidJS a() {
                com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.SingletonHolder.a
                return r0
        }
    }

    public CallMraidJS() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.webkit.WebView r0, java.lang.String r1) {
            if (r0 == 0) goto La
            r0.loadUrl(r1)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            return
    }

    public static com.tkay.expressad.atsignalcommon.mraid.CallMraidJS getInstance() {
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.SingletonHolder.a()
            return r0
    }

    public void fireAudioVolumeChange(android.webkit.WebView r3, double r4) {
            r2 = this;
            java.util.Locale r0 = java.util.Locale.CHINA
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            r5 = 0
            r1[r5] = r4
            java.lang.String r4 = "javascript:window.mraidbridge.audioVolumeChange(%s);"
            java.lang.String r4 = java.lang.String.format(r0, r4, r1)
            a(r3, r4)
            return
    }

    public void fireChangeEventForPropertys(android.webkit.WebView r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            if (r5 == 0) goto L48
            int r0 = r5.size()
            if (r0 != 0) goto L9
            goto L48
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L16:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L30
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L30
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L30
            goto L16
        L30:
            r1 = move-exception
            r1.printStackTrace()
            goto L16
        L35:
            java.lang.String r5 = r0.toString()
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            java.lang.String r5 = "javascript:window.mraidbridge.fireChangeEvent(%s);"
            java.lang.String r5 = java.lang.String.format(r5, r0)
            a(r4, r5)
        L48:
            return
    }

    public void fireErrorEvent(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r5
            r5 = 1
            r0[r5] = r4
            java.lang.String r4 = "javascript:window.mraidbridge.fireErrorEvent('%1s', '%2s');"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            a(r3, r4)
            return
    }

    public void fireNativeMethodCompleteEvent(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "javascript:window.mraidbridge.nativeCallComplete('%s');"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            a(r3, r4)
            return
    }

    public void fireReadyEvent(android.webkit.WebView r2) {
            r1 = this;
            java.lang.String r0 = "javascript:window.mraidbridge.fireReadyEvent();"
            a(r2, r0)
            return
    }

    public void fireSetCurrentPosition(android.webkit.WebView r4, float r5, float r6, float r7, float r8) {
            r3 = this;
            java.util.Locale r0 = java.util.Locale.CHINA
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Float r5 = java.lang.Float.valueOf(r5)
            r2 = 0
            r1[r2] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r6)
            r6 = 1
            r1[r6] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r7)
            r6 = 2
            r1[r6] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r8)
            r6 = 3
            r1[r6] = r5
            java.lang.String r5 = "javascript:window.mraidbridge.setCurrentPosition(%.1f, %.1f, %.1f, %.1f);"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            a(r4, r5)
            return
    }

    public void fireSetDefaultPosition(android.webkit.WebView r4, float r5, float r6, float r7, float r8) {
            r3 = this;
            java.util.Locale r0 = java.util.Locale.CHINA
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Float r5 = java.lang.Float.valueOf(r5)
            r2 = 0
            r1[r2] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r6)
            r6 = 1
            r1[r6] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r7)
            r6 = 2
            r1[r6] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r8)
            r6 = 3
            r1[r6] = r5
            java.lang.String r5 = "javascript:window.mraidbridge.setDefaultPosition(%.1f, %.1f, %.1f, %.1f);"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            a(r4, r5)
            return
    }

    public void fireSetIsViewable(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "javascript:window.mraidbridge.setIsViewable(%s);"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            a(r3, r4)
            return
    }

    public void fireSetMaxSize(android.webkit.WebView r4, float r5, float r6) {
            r3 = this;
            java.util.Locale r0 = java.util.Locale.CHINA
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Float r5 = java.lang.Float.valueOf(r5)
            r2 = 0
            r1[r2] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r6)
            r6 = 1
            r1[r6] = r5
            java.lang.String r5 = "javascript:window.mraidbridge.setMaxSize(%.1f, %.1f);"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            a(r4, r5)
            return
    }

    public void fireSetPlacementType(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "javascript:window.mraidbridge.setPlacementType(%s);"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            a(r3, r4)
            return
    }

    public void fireSetScreenSize(android.webkit.WebView r4, float r5, float r6) {
            r3 = this;
            java.util.Locale r0 = java.util.Locale.CHINA
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Float r5 = java.lang.Float.valueOf(r5)
            r2 = 0
            r1[r2] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r6)
            r6 = 1
            r1[r6] = r5
            java.lang.String r5 = "javascript:window.mraidbridge.setScreenSize(%.1f, %.1f);"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            a(r4, r5)
            return
    }

    public void fireSizeChangeEvent(android.webkit.WebView r4, float r5, float r6) {
            r3 = this;
            java.util.Locale r0 = java.util.Locale.CHINA
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Float r5 = java.lang.Float.valueOf(r5)
            r2 = 0
            r1[r2] = r5
            java.lang.Float r5 = java.lang.Float.valueOf(r6)
            r6 = 1
            r1[r6] = r5
            java.lang.String r5 = "javascript:window.mraidbridge.notifySizeChangeEvent(%.1f, %.1f);"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            a(r4, r5)
            return
    }
}
