package com.tkay.expressad.video.bt.a;

public class a {
    private static final java.lang.String c = null;
    private static java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> e;
    int a;
    int b;
    private java.lang.String d;

    private static final class a {
        private static com.tkay.expressad.video.bt.a.a a;

        static {
                com.tkay.expressad.video.bt.a.a r0 = new com.tkay.expressad.video.bt.a.a
                r0.<init>()
                com.tkay.expressad.video.bt.a.a.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.video.bt.a.a a() {
                com.tkay.expressad.video.bt.a.a r0 = com.tkay.expressad.video.bt.a.a.a.a
                return r0
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.video.bt.a.a> r0 = com.tkay.expressad.video.bt.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.video.bt.a.a.c = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.tkay.expressad.video.bt.a.a.e = r0
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

    public static com.tkay.expressad.video.bt.a.a a() {
            com.tkay.expressad.video.bt.a.a r0 = com.tkay.expressad.video.bt.a.a.a.a()
            return r0
    }

    private static void a(int r2, java.lang.String r3, java.lang.Object r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            java.lang.String r1 = "code"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            java.lang.String r2 = "message"
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            com.tkay.expressad.atsignalcommon.windvane.j r2 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            r2.a(r4, r3)     // Catch: java.lang.Throwable -> L24 org.json.JSONException -> L29
            return
        L24:
            r2 = move-exception
            r2.getMessage()
            return
        L29:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public static void a(java.lang.String r1) {
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r0 = com.tkay.expressad.video.bt.a.a.e
            r0.remove(r1)
            return
    }

    public static void a(java.lang.String r1, com.tkay.expressad.video.bt.module.TkayBTVideoView r2) {
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r0 = com.tkay.expressad.video.bt.a.a.e
            r0.put(r1, r2)
            return
    }

    public final void a(java.lang.Object r12, java.lang.String r13, org.json.JSONArray r14) {
            r11 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "value"
            r2 = 7
            java.lang.String r3 = "type"
            java.lang.String r4 = "key"
            if (r14 == 0) goto L2e
            int r5 = r14.length()     // Catch: java.lang.Throwable -> L155
            if (r5 <= 0) goto L2e
            r5 = 0
            org.json.JSONObject r5 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> L155
            if (r5 == 0) goto L2e
            java.lang.String r6 = r5.optString(r4)     // Catch: java.lang.Throwable -> L155
            int r7 = r5.optInt(r3, r2)     // Catch: java.lang.Throwable -> L155
            java.lang.String r8 = "instanceId"
            boolean r6 = r8.equalsIgnoreCase(r6)     // Catch: java.lang.Throwable -> L155
            if (r6 == 0) goto L2e
            if (r7 != 0) goto L2e
            java.lang.String r0 = r5.optString(r1)     // Catch: java.lang.Throwable -> L155
        L2e:
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L155
            if (r5 == 0) goto L3c
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            java.lang.String r14 = "instanceId find error"
            a(r13, r14, r12)     // Catch: java.lang.Throwable -> L155
            return
        L3c:
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r5 = com.tkay.expressad.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            boolean r5 = r5.containsKey(r0)     // Catch: java.lang.Throwable -> L155
            if (r5 != 0) goto L4c
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            java.lang.String r14 = "can not find player"
            a(r13, r14, r12)     // Catch: java.lang.Throwable -> L155
            return
        L4c:
            java.lang.String r5 = "play"
            boolean r5 = r5.equalsIgnoreCase(r13)     // Catch: java.lang.Throwable -> L155
            java.lang.String r6 = "player is null"
            if (r5 == 0) goto L6a
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r13 = com.tkay.expressad.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r13 = r13.get(r0)     // Catch: java.lang.Throwable -> L155
            com.tkay.expressad.video.bt.module.TkayBTVideoView r13 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r13     // Catch: java.lang.Throwable -> L155
            if (r13 == 0) goto L64
            r13.play()     // Catch: java.lang.Throwable -> L155
            return
        L64:
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            a(r13, r6, r12)     // Catch: java.lang.Throwable -> L155
            return
        L6a:
            java.lang.String r5 = "pause"
            boolean r5 = r5.equalsIgnoreCase(r13)     // Catch: java.lang.Throwable -> L155
            if (r5 == 0) goto L86
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r13 = com.tkay.expressad.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r13 = r13.get(r0)     // Catch: java.lang.Throwable -> L155
            com.tkay.expressad.video.bt.module.TkayBTVideoView r13 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r13     // Catch: java.lang.Throwable -> L155
            if (r13 == 0) goto L80
            r13.pause()     // Catch: java.lang.Throwable -> L155
            return
        L80:
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            a(r13, r6, r12)     // Catch: java.lang.Throwable -> L155
            return
        L86:
            java.lang.String r5 = "stop"
            boolean r5 = r5.equalsIgnoreCase(r13)     // Catch: java.lang.Throwable -> L155
            if (r5 == 0) goto La2
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r13 = com.tkay.expressad.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r13 = r13.get(r0)     // Catch: java.lang.Throwable -> L155
            com.tkay.expressad.video.bt.module.TkayBTVideoView r13 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r13     // Catch: java.lang.Throwable -> L155
            if (r13 == 0) goto L9c
            r13.stop()     // Catch: java.lang.Throwable -> L155
            return
        L9c:
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            a(r13, r6, r12)     // Catch: java.lang.Throwable -> L155
            return
        La2:
            java.lang.String r5 = "setVolume"
            boolean r5 = r5.equalsIgnoreCase(r13)     // Catch: java.lang.Throwable -> L155
            r7 = 3
            r8 = 1
            if (r5 == 0) goto L10a
            r13 = 0
            if (r14 == 0) goto Lf5
            int r5 = r14.length()     // Catch: java.lang.Throwable -> L155
            r9 = 2
            if (r5 <= r9) goto Lf5
            org.json.JSONObject r5 = r14.optJSONObject(r8)     // Catch: java.lang.Throwable -> L155
            org.json.JSONObject r14 = r14.optJSONObject(r9)     // Catch: java.lang.Throwable -> L155
            if (r5 == 0) goto Ld8
            java.lang.String r8 = r5.optString(r4)     // Catch: java.lang.Throwable -> L155
            int r9 = r5.optInt(r3, r2)     // Catch: java.lang.Throwable -> L155
            java.lang.String r10 = "leftVolume"
            boolean r8 = r10.equalsIgnoreCase(r8)     // Catch: java.lang.Throwable -> L155
            if (r8 == 0) goto Ld8
            if (r9 != r7) goto Ld8
            double r8 = r5.optDouble(r1)     // Catch: java.lang.Throwable -> L155
            float r5 = (float) r8     // Catch: java.lang.Throwable -> L155
            goto Ld9
        Ld8:
            r5 = r13
        Ld9:
            if (r14 == 0) goto Lf2
            java.lang.String r4 = r14.optString(r4)     // Catch: java.lang.Throwable -> L155
            int r2 = r14.optInt(r3, r2)     // Catch: java.lang.Throwable -> L155
            java.lang.String r3 = "rightVolume"
            boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L155
            if (r3 == 0) goto Lf2
            if (r2 != r7) goto Lf2
            double r13 = r14.optDouble(r1)     // Catch: java.lang.Throwable -> L155
            float r13 = (float) r13     // Catch: java.lang.Throwable -> L155
        Lf2:
            r14 = r13
            r13 = r5
            goto Lf6
        Lf5:
            r14 = r13
        Lf6:
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r1 = com.tkay.expressad.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Throwable -> L155
            com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r0     // Catch: java.lang.Throwable -> L155
            if (r0 == 0) goto L104
            r0.setVolume(r13, r14)     // Catch: java.lang.Throwable -> L155
            return
        L104:
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            a(r13, r6, r12)     // Catch: java.lang.Throwable -> L155
            return
        L10a:
            java.lang.String r5 = "setPlaybackParams"
            boolean r13 = r5.equalsIgnoreCase(r13)     // Catch: java.lang.Throwable -> L155
            if (r13 == 0) goto L14d
            r13 = 1065353216(0x3f800000, float:1.0)
            if (r14 == 0) goto L139
            int r5 = r14.length()     // Catch: java.lang.Throwable -> L155
            if (r5 <= r8) goto L139
            org.json.JSONObject r14 = r14.optJSONObject(r8)     // Catch: java.lang.Throwable -> L155
            if (r14 == 0) goto L139
            java.lang.String r4 = r14.optString(r4)     // Catch: java.lang.Throwable -> L155
            int r2 = r14.optInt(r3, r2)     // Catch: java.lang.Throwable -> L155
            java.lang.String r3 = "speed"
            boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L155
            if (r3 == 0) goto L139
            if (r2 != r7) goto L139
            double r13 = r14.optDouble(r1)     // Catch: java.lang.Throwable -> L155
            float r13 = (float) r13     // Catch: java.lang.Throwable -> L155
        L139:
            java.util.LinkedHashMap<java.lang.String, com.tkay.expressad.video.bt.module.TkayBTVideoView> r14 = com.tkay.expressad.video.bt.a.a.e     // Catch: java.lang.Throwable -> L155
            java.lang.Object r14 = r14.get(r0)     // Catch: java.lang.Throwable -> L155
            com.tkay.expressad.video.bt.module.TkayBTVideoView r14 = (com.tkay.expressad.video.bt.module.TkayBTVideoView) r14     // Catch: java.lang.Throwable -> L155
            if (r14 == 0) goto L147
            r14.setPlaybackParams(r13)     // Catch: java.lang.Throwable -> L155
            return
        L147:
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            a(r13, r6, r12)     // Catch: java.lang.Throwable -> L155
            return
        L14d:
            int r13 = r11.b     // Catch: java.lang.Throwable -> L155
            java.lang.String r14 = "method not found"
            a(r13, r14, r12)     // Catch: java.lang.Throwable -> L155
            return
        L155:
            r13 = move-exception
            r13.getMessage()
            int r14 = r11.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "exception:"
            r0.<init>(r1)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            a(r14, r13, r12)
            return
    }
}
