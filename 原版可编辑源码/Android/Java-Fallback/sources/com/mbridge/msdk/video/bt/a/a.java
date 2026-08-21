package com.mbridge.msdk.video.bt.a;

public class a {
    private static final java.lang.String c = null;
    private static java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> e;
    int a;
    int b;
    private java.lang.String d;

    private static final class a {
        private static com.mbridge.msdk.video.bt.a.a a;

        static {
                com.mbridge.msdk.video.bt.a.a r0 = new com.mbridge.msdk.video.bt.a.a
                r0.<init>()
                com.mbridge.msdk.video.bt.a.a.a.a = r0
                return
        }

        static com.mbridge.msdk.video.bt.a.a a() {
                com.mbridge.msdk.video.bt.a.a r0 = com.mbridge.msdk.video.bt.a.a.a.a
                return r0
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.video.bt.a.a> r0 = com.mbridge.msdk.video.bt.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.video.bt.a.a.c = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.a.e = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "handlerNativeResult"
            r1.d = r0
            r0 = 0
            r1.a = r0
            r0 = 1
            r1.b = r0
            return
    }

    public static com.mbridge.msdk.video.bt.a.a a() {
            com.mbridge.msdk.video.bt.a.a r0 = com.mbridge.msdk.video.bt.a.a.a.a()
            return r0
    }

    private void a(int r3, java.lang.String r4, java.lang.Object r5) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            r0.<init>()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            java.lang.String r1 = "code"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            java.lang.String r3 = "message"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            r0 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r0)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            r3.a(r5, r4)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L2f
            goto L39
        L24:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.video.bt.a.a.c
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            goto L39
        L2f:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.video.bt.a.a.c
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L39:
            return
    }

    public final void a(java.lang.Object r11, java.lang.String r12, org.json.JSONArray r13, int r14) {
            r10 = this;
            java.lang.String r14 = ""
            java.lang.String r0 = "value"
            r1 = 7
            java.lang.String r2 = "type"
            java.lang.String r3 = "key"
            if (r13 == 0) goto L2e
            int r4 = r13.length()     // Catch: java.lang.Throwable -> L155
            if (r4 <= 0) goto L2e
            r4 = 0
            org.json.JSONObject r4 = r13.optJSONObject(r4)     // Catch: java.lang.Throwable -> L155
            if (r4 == 0) goto L2e
            java.lang.String r5 = r4.optString(r3)     // Catch: java.lang.Throwable -> L155
            int r6 = r4.optInt(r2, r1)     // Catch: java.lang.Throwable -> L155
            java.lang.String r7 = "instanceId"
            boolean r5 = r7.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L155
            if (r5 == 0) goto L2e
            if (r6 != 0) goto L2e
            java.lang.String r14 = r4.optString(r0)     // Catch: java.lang.Throwable -> L155
        L2e:
            boolean r4 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L155
            if (r4 == 0) goto L3c
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            java.lang.String r13 = "instanceId find error"
            r10.a(r12, r13, r11)     // Catch: java.lang.Throwable -> L155
            return
        L3c:
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r4 = com.mbridge.msdk.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            boolean r4 = r4.containsKey(r14)     // Catch: java.lang.Throwable -> L155
            if (r4 != 0) goto L4c
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            java.lang.String r13 = "can not find player"
            r10.a(r12, r13, r11)     // Catch: java.lang.Throwable -> L155
            return
        L4c:
            java.lang.String r4 = "play"
            boolean r4 = r4.equalsIgnoreCase(r12)     // Catch: java.lang.Throwable -> L155
            java.lang.String r5 = "player is null"
            if (r4 == 0) goto L6a
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r12 = com.mbridge.msdk.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r12 = r12.get(r14)     // Catch: java.lang.Throwable -> L155
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r12 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r12     // Catch: java.lang.Throwable -> L155
            if (r12 == 0) goto L64
            r12.play()     // Catch: java.lang.Throwable -> L155
            goto L69
        L64:
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            r10.a(r12, r5, r11)     // Catch: java.lang.Throwable -> L155
        L69:
            return
        L6a:
            java.lang.String r4 = "pause"
            boolean r4 = r4.equalsIgnoreCase(r12)     // Catch: java.lang.Throwable -> L155
            if (r4 == 0) goto L86
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r12 = com.mbridge.msdk.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r12 = r12.get(r14)     // Catch: java.lang.Throwable -> L155
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r12 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r12     // Catch: java.lang.Throwable -> L155
            if (r12 == 0) goto L80
            r12.pause()     // Catch: java.lang.Throwable -> L155
            goto L85
        L80:
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            r10.a(r12, r5, r11)     // Catch: java.lang.Throwable -> L155
        L85:
            return
        L86:
            java.lang.String r4 = "stop"
            boolean r4 = r4.equalsIgnoreCase(r12)     // Catch: java.lang.Throwable -> L155
            if (r4 == 0) goto La2
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r12 = com.mbridge.msdk.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r12 = r12.get(r14)     // Catch: java.lang.Throwable -> L155
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r12 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r12     // Catch: java.lang.Throwable -> L155
            if (r12 == 0) goto L9c
            r12.stop()     // Catch: java.lang.Throwable -> L155
            goto La1
        L9c:
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            r10.a(r12, r5, r11)     // Catch: java.lang.Throwable -> L155
        La1:
            return
        La2:
            java.lang.String r4 = "setVolume"
            boolean r4 = r4.equalsIgnoreCase(r12)     // Catch: java.lang.Throwable -> L155
            r6 = 3
            r7 = 1
            if (r4 == 0) goto L10a
            r12 = 0
            if (r13 == 0) goto Lf5
            int r4 = r13.length()     // Catch: java.lang.Throwable -> L155
            r8 = 2
            if (r4 <= r8) goto Lf5
            org.json.JSONObject r4 = r13.optJSONObject(r7)     // Catch: java.lang.Throwable -> L155
            org.json.JSONObject r13 = r13.optJSONObject(r8)     // Catch: java.lang.Throwable -> L155
            if (r4 == 0) goto Ld8
            java.lang.String r7 = r4.optString(r3)     // Catch: java.lang.Throwable -> L155
            int r8 = r4.optInt(r2, r1)     // Catch: java.lang.Throwable -> L155
            java.lang.String r9 = "leftVolume"
            boolean r7 = r9.equalsIgnoreCase(r7)     // Catch: java.lang.Throwable -> L155
            if (r7 == 0) goto Ld8
            if (r8 != r6) goto Ld8
            double r7 = r4.optDouble(r0)     // Catch: java.lang.Throwable -> L155
            float r4 = (float) r7     // Catch: java.lang.Throwable -> L155
            goto Ld9
        Ld8:
            r4 = r12
        Ld9:
            if (r13 == 0) goto Lf2
            java.lang.String r3 = r13.optString(r3)     // Catch: java.lang.Throwable -> L155
            int r1 = r13.optInt(r2, r1)     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = "rightVolume"
            boolean r2 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L155
            if (r2 == 0) goto Lf2
            if (r1 != r6) goto Lf2
            double r12 = r13.optDouble(r0)     // Catch: java.lang.Throwable -> L155
            float r12 = (float) r12     // Catch: java.lang.Throwable -> L155
        Lf2:
            r13 = r12
            r12 = r4
            goto Lf6
        Lf5:
            r13 = r12
        Lf6:
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r0 = com.mbridge.msdk.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r14 = r0.get(r14)     // Catch: java.lang.Throwable -> L155
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r14 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r14     // Catch: java.lang.Throwable -> L155
            if (r14 == 0) goto L104
            r14.setVolume(r12, r13)     // Catch: java.lang.Throwable -> L155
            goto L109
        L104:
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            r10.a(r12, r5, r11)     // Catch: java.lang.Throwable -> L155
        L109:
            return
        L10a:
            java.lang.String r4 = "setPlaybackParams"
            boolean r12 = r4.equalsIgnoreCase(r12)     // Catch: java.lang.Throwable -> L155
            if (r12 == 0) goto L14d
            r12 = 1065353216(0x3f800000, float:1.0)
            if (r13 == 0) goto L139
            int r4 = r13.length()     // Catch: java.lang.Throwable -> L155
            if (r4 <= r7) goto L139
            org.json.JSONObject r13 = r13.optJSONObject(r7)     // Catch: java.lang.Throwable -> L155
            if (r13 == 0) goto L139
            java.lang.String r3 = r13.optString(r3)     // Catch: java.lang.Throwable -> L155
            int r1 = r13.optInt(r2, r1)     // Catch: java.lang.Throwable -> L155
            java.lang.String r2 = "speed"
            boolean r2 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L155
            if (r2 == 0) goto L139
            if (r1 != r6) goto L139
            double r12 = r13.optDouble(r0)     // Catch: java.lang.Throwable -> L155
            float r12 = (float) r12     // Catch: java.lang.Throwable -> L155
        L139:
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r13 = com.mbridge.msdk.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r13 = r13.get(r14)     // Catch: java.lang.Throwable -> L155
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r13 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r13     // Catch: java.lang.Throwable -> L155
            if (r13 == 0) goto L147
            r13.setPlaybackParams(r12)     // Catch: java.lang.Throwable -> L155
            goto L14c
        L147:
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            r10.a(r12, r5, r11)     // Catch: java.lang.Throwable -> L155
        L14c:
            return
        L14d:
            int r12 = r10.b     // Catch: java.lang.Throwable -> L155
            java.lang.String r13 = "method not found"
            r10.a(r12, r13, r11)     // Catch: java.lang.Throwable -> L155
            goto L179
        L155:
            r12 = move-exception
            java.lang.String r13 = com.mbridge.msdk.video.bt.a.a.c
            java.lang.String r14 = r12.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r13, r14)
            int r13 = r10.b
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = "exception："
            r14.append(r0)
            java.lang.String r12 = r12.getMessage()
            r14.append(r12)
            java.lang.String r12 = r14.toString()
            r10.a(r13, r12, r11)
        L179:
            return
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r0 = com.mbridge.msdk.video.bt.a.a.e
            r0.remove(r2)
            return
    }

    public final void a(java.lang.String r2, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r3) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.video.bt.module.MBridgeBTVideoView> r0 = com.mbridge.msdk.video.bt.a.a.e
            r0.put(r2, r3)
            return
    }
}
