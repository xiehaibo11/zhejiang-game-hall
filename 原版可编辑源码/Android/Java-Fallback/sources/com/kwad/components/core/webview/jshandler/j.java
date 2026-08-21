package com.kwad.components.core.webview.jshandler;

public final class j implements android.hardware.SensorEventListener, com.kwad.sdk.core.webview.c.a {
    private java.util.Map<java.lang.Integer, com.kwad.sdk.core.webview.c.c> TC;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public int TF;
        public java.util.ArrayList<java.lang.Float> TG;
        public int accuracy;
        public long timestamp;
        public int type;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r4) {
                r3 = this;
                if (r4 != 0) goto L3
                return
            L3:
                if (r4 != 0) goto L6
                return
            L6:
                java.lang.String r0 = "type"
                int r0 = r4.optInt(r0)
                r3.type = r0
                java.lang.String r0 = "interval"
                int r0 = r4.optInt(r0)
                r3.TF = r0
                java.lang.String r0 = "timestamp"
                long r0 = r4.optLong(r0)
                r3.timestamp = r0
                java.lang.String r0 = "accuracy"
                int r0 = r4.optInt(r0)
                r3.accuracy = r0
                java.lang.String r0 = "values"
                org.json.JSONArray r4 = r4.optJSONArray(r0)
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                if (r4 != 0) goto L36
                r3.TG = r0
                return
            L36:
                r1 = 0
            L37:
                int r2 = r4.length()     // Catch: java.lang.Throwable -> L4b
                if (r1 >= r2) goto L4b
                java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Throwable -> L4b
                if (r2 == 0) goto L48
                java.lang.Float r2 = (java.lang.Float) r2     // Catch: java.lang.Throwable -> L4b
                r0.add(r2)     // Catch: java.lang.Throwable -> L4b
            L48:
                int r1 = r1 + 1
                goto L37
            L4b:
                r3.TG = r0
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r5 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r5.type
                if (r1 == 0) goto Le
                java.lang.String r2 = "type"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            Le:
                int r1 = r5.TF
                if (r1 == 0) goto L17
                java.lang.String r2 = "interval"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            L17:
                long r1 = r5.timestamp
                r3 = 0
                int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r3 == 0) goto L24
                java.lang.String r3 = "timestamp"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            L24:
                int r1 = r5.accuracy
                if (r1 == 0) goto L2d
                java.lang.String r2 = "accuracy"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            L2d:
                java.util.ArrayList<java.lang.Float> r1 = r5.TG
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L3c
                java.util.ArrayList<java.lang.Float> r1 = r5.TG
                java.lang.String r2 = "values"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            L3c:
                return r0
        }
    }

    public j() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.TC = r0
            return
    }

    private void a(int r3, int r4, com.kwad.sdk.core.webview.c.c r5) {
            r2 = this;
            com.kwad.components.core.t.l r0 = com.kwad.components.core.t.l.qr()
            com.kwad.components.core.webview.jshandler.j$1 r1 = new com.kwad.components.core.webview.jshandler.j$1
            r1.<init>(r2, r5)
            r0.a(r3, r4, r2, r1)
            return
    }

    private void a(android.hardware.SensorEvent r6) {
            r5 = this;
            android.hardware.Sensor r0 = r6.sensor
            int r0 = r0.getType()
            r1 = 4
            if (r0 == r1) goto L10
            r1 = 10
            if (r0 == r1) goto Le
            goto L11
        Le:
            r0 = 1
            goto L11
        L10:
            r0 = 2
        L11:
            java.util.Map<java.lang.Integer, com.kwad.sdk.core.webview.c.c> r1 = r5.TC
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.Object r0 = r1.get(r0)
            com.kwad.sdk.core.webview.c.c r0 = (com.kwad.sdk.core.webview.c.c) r0
            if (r0 == 0) goto L4a
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        L25:
            float[] r3 = r6.values
            int r3 = r3.length
            if (r2 >= r3) goto L38
            float[] r3 = r6.values
            r3 = r3[r2]
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            r1.add(r3)
            int r2 = r2 + 1
            goto L25
        L38:
            com.kwad.components.core.webview.jshandler.j$a r2 = new com.kwad.components.core.webview.jshandler.j$a
            r2.<init>()
            r2.TG = r1
            long r3 = r6.timestamp
            r2.timestamp = r3
            int r6 = r6.accuracy
            r2.accuracy = r6
            r0.a(r2)
        L4a:
            return
    }

    @Override
    public final void a(java.lang.String r3, com.kwad.sdk.core.webview.c.c r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2b
            com.kwad.components.core.webview.jshandler.j$a r0 = new com.kwad.components.core.webview.jshandler.j$a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L14
            r1.<init>(r3)     // Catch: org.json.JSONException -> L14
            r0.parseJson(r1)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r3 = move-exception
            r3.printStackTrace()
        L18:
            java.util.Map<java.lang.Integer, com.kwad.sdk.core.webview.c.c> r3 = r2.TC
            int r1 = r0.type
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3.put(r1, r4)
            int r3 = r0.type
            int r0 = r0.TF
            r2.a(r3, r0, r4)
            return
        L2b:
            r3 = -1
            java.lang.String r0 = "data is empty"
            r4.onError(r3, r0)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerSensorListener"
            return r0
    }

    @Override
    public final void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            com.kwad.components.core.t.l r0 = com.kwad.components.core.t.l.qr()
            r0.a(r1)
            return
    }

    @Override
    public final void onSensorChanged(android.hardware.SensorEvent r1) {
            r0 = this;
            r0.a(r1)
            return
    }
}
