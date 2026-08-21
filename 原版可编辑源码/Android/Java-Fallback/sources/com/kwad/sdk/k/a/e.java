package com.kwad.sdk.k.a;

public final class e extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public java.util.List<java.lang.Float> aGv;
    public int sensorType;
    public long timestamp;

    public e() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.sensorType = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.aGv = r0
            r0 = 0
            r2.timestamp = r0
            return
    }

    public static com.kwad.sdk.k.a.e a(android.hardware.SensorEvent r3, long r4) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            com.kwad.sdk.k.a.e r0 = new com.kwad.sdk.k.a.e
            r0.<init>()
            android.hardware.Sensor r1 = r3.sensor
            int r1 = r1.getType()
            r0.sensorType = r1
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r1
            r0.timestamp = r4
            float[] r3 = r3.values
            int r4 = r3.length
            r5 = 0
        L1a:
            if (r5 >= r4) goto L2a
            r1 = r3[r5]
            java.util.List<java.lang.Float> r2 = r0.aGv
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r2.add(r1)
            int r5 = r5 + 1
            goto L1a
        L2a:
            return r0
    }

    private void a(com.kwad.sdk.k.a.e r3, org.json.JSONObject r4) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "sensorType"
            int r0 = r4.optInt(r0)
            r3.sensorType = r0
            java.lang.String r0 = "timestamp"
            long r0 = r4.optLong(r0)
            r3.timestamp = r0
            super.afterToJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.k.a.e r2, org.json.JSONObject r3) {
            int r0 = r2.sensorType
            java.lang.String r1 = "sensorType"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            long r0 = r2.timestamp
            java.lang.String r2 = "timestamp"
            com.kwad.sdk.utils.t.putValue(r3, r2, r0)
            return r3
    }

    @Override
    public final void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            java.util.List<java.lang.Float> r0 = r2.aGv
            java.lang.String r1 = "values"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            r0.a(r0, r1)
            r0.afterParseJson(r1)
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r0 = b(r1, r0)
            r1.afterToJson(r0)
            return r0
    }
}
