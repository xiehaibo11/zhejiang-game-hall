package com.loc;

public final class c {
    private static long a;

    static {
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static double a(com.amap.api.location.DPoint r11, com.amap.api.location.DPoint r12, com.amap.api.location.DPoint r13) {
            double r0 = r11.getLongitude()
            double r2 = r12.getLongitude()
            double r0 = r0 - r2
            double r2 = r11.getLatitude()
            double r4 = r12.getLatitude()
            double r2 = r2 - r4
            double r4 = r13.getLongitude()
            double r6 = r12.getLongitude()
            double r4 = r4 - r6
            double r6 = r13.getLatitude()
            double r8 = r12.getLatitude()
            double r6 = r6 - r8
            double r0 = r0 * r4
            double r2 = r2 * r6
            double r0 = r0 + r2
            double r2 = r4 * r4
            double r8 = r6 * r6
            double r2 = r2 + r8
            double r0 = r0 / r2
            double r2 = r12.getLongitude()
            double r8 = r13.getLongitude()
            int r10 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r10 != 0) goto L49
            double r2 = r12.getLatitude()
            double r8 = r13.getLatitude()
            int r10 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r10 != 0) goto L49
            r2 = 1
            goto L4a
        L49:
            r2 = 0
        L4a:
            r8 = 0
            int r3 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r3 < 0) goto L72
            if (r2 == 0) goto L53
            goto L72
        L53:
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r8 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r8 <= 0) goto L62
            double r0 = r13.getLongitude()
            double r12 = r13.getLatitude()
            goto L7a
        L62:
            double r2 = r12.getLongitude()
            double r4 = r4 * r0
            double r2 = r2 + r4
            double r12 = r12.getLatitude()
            double r0 = r0 * r6
            double r12 = r12 + r0
            r0 = r2
            goto L7a
        L72:
            double r0 = r12.getLongitude()
            double r12 = r12.getLatitude()
        L7a:
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            double r3 = r11.getLatitude()
            double r5 = r11.getLongitude()
            r2.<init>(r3, r5)
            com.amap.api.location.DPoint r11 = new com.amap.api.location.DPoint
            r11.<init>(r12, r0)
            float r11 = com.loc.fz.a(r2, r11)
            double r11 = (double) r11
            return r11
    }

    public static int a(java.lang.String r16, java.util.List<com.amap.api.fence.GeoFence> r17, android.os.Bundle r18) {
            r0 = r17
            r1 = r18
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L126
            r3 = r16
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L126
            java.lang.String r3 = "status"
            r4 = 0
            int r3 = r2.optInt(r3, r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r5 = "infocode"
            int r5 = r2.optInt(r5, r4)     // Catch: java.lang.Throwable -> L126
            r6 = 1
            if (r3 != r6) goto L123
            java.lang.String r3 = "pois"
            org.json.JSONArray r2 = r2.optJSONArray(r3)     // Catch: java.lang.Throwable -> L126
            if (r2 == 0) goto L123
            r3 = 0
        L24:
            int r7 = r2.length()     // Catch: java.lang.Throwable -> L126
            if (r3 >= r7) goto L123
            com.amap.api.fence.GeoFence r7 = new com.amap.api.fence.GeoFence     // Catch: java.lang.Throwable -> L126
            r7.<init>()     // Catch: java.lang.Throwable -> L126
            com.amap.api.fence.PoiItem r8 = new com.amap.api.fence.PoiItem     // Catch: java.lang.Throwable -> L126
            r8.<init>()     // Catch: java.lang.Throwable -> L126
            org.json.JSONObject r9 = r2.getJSONObject(r3)     // Catch: java.lang.Throwable -> L126
            java.lang.String r10 = "id"
            java.lang.String r10 = r9.optString(r10)     // Catch: java.lang.Throwable -> L126
            r8.setPoiId(r10)     // Catch: java.lang.Throwable -> L126
            java.lang.String r10 = "name"
            java.lang.String r10 = r9.optString(r10)     // Catch: java.lang.Throwable -> L126
            r8.setPoiName(r10)     // Catch: java.lang.Throwable -> L126
            java.lang.String r10 = "type"
            java.lang.String r10 = r9.optString(r10)     // Catch: java.lang.Throwable -> L126
            r8.setPoiType(r10)     // Catch: java.lang.Throwable -> L126
            java.lang.String r10 = "typecode"
            java.lang.String r10 = r9.optString(r10)     // Catch: java.lang.Throwable -> L126
            r8.setTypeCode(r10)     // Catch: java.lang.Throwable -> L126
            java.lang.String r10 = "address"
            java.lang.String r10 = r9.optString(r10)     // Catch: java.lang.Throwable -> L126
            r8.setAddress(r10)     // Catch: java.lang.Throwable -> L126
            java.lang.String r10 = "location"
            java.lang.String r10 = r9.optString(r10)     // Catch: java.lang.Throwable -> L126
            if (r10 == 0) goto Laa
            java.lang.String r11 = ","
            java.lang.String[] r10 = r10.split(r11)     // Catch: java.lang.Throwable -> L126
            r11 = r10[r4]     // Catch: java.lang.Throwable -> L126
            double r11 = java.lang.Double.parseDouble(r11)     // Catch: java.lang.Throwable -> L126
            r8.setLongitude(r11)     // Catch: java.lang.Throwable -> L126
            r10 = r10[r6]     // Catch: java.lang.Throwable -> L126
            double r10 = java.lang.Double.parseDouble(r10)     // Catch: java.lang.Throwable -> L126
            r8.setLatitude(r10)     // Catch: java.lang.Throwable -> L126
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L126
            r10.<init>()     // Catch: java.lang.Throwable -> L126
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L126
            r11.<init>()     // Catch: java.lang.Throwable -> L126
            com.amap.api.location.DPoint r12 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L126
            double r13 = r8.getLatitude()     // Catch: java.lang.Throwable -> L126
            r15 = r5
            double r4 = r8.getLongitude()     // Catch: java.lang.Throwable -> L126
            r12.<init>(r13, r4)     // Catch: java.lang.Throwable -> L126
            r11.add(r12)     // Catch: java.lang.Throwable -> L126
            r10.add(r11)     // Catch: java.lang.Throwable -> L126
            r7.setPointList(r10)     // Catch: java.lang.Throwable -> L126
            r7.setCenter(r12)     // Catch: java.lang.Throwable -> L126
            goto Lab
        Laa:
            r15 = r5
        Lab:
            java.lang.String r4 = "tel"
            java.lang.String r4 = r9.optString(r4)     // Catch: java.lang.Throwable -> L126
            r8.setTel(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "pname"
            java.lang.String r4 = r9.optString(r4)     // Catch: java.lang.Throwable -> L126
            r8.setProvince(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "cityname"
            java.lang.String r4 = r9.optString(r4)     // Catch: java.lang.Throwable -> L126
            r8.setCity(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "adname"
            java.lang.String r4 = r9.optString(r4)     // Catch: java.lang.Throwable -> L126
            r8.setAdname(r4)     // Catch: java.lang.Throwable -> L126
            r7.setPoiItem(r8)     // Catch: java.lang.Throwable -> L126
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L126
            r4.<init>()     // Catch: java.lang.Throwable -> L126
            long r8 = a()     // Catch: java.lang.Throwable -> L126
            r4.append(r8)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L126
            r7.setFenceId(r4)     // Catch: java.lang.Throwable -> L126
            if (r1 == 0) goto L118
            java.lang.String r4 = "customId"
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L126
            r7.setCustomId(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "pendingIntentAction"
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L126
            r7.setPendingIntentAction(r4)     // Catch: java.lang.Throwable -> L126
            r4 = 2
            r7.setType(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "fenceRadius"
            float r4 = r1.getFloat(r4)     // Catch: java.lang.Throwable -> L126
            r7.setRadius(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "expiration"
            long r4 = r1.getLong(r4)     // Catch: java.lang.Throwable -> L126
            r7.setExpiration(r4)     // Catch: java.lang.Throwable -> L126
            java.lang.String r4 = "activatesAction"
            int r4 = r1.getInt(r4, r6)     // Catch: java.lang.Throwable -> L126
            r7.setActivatesAction(r4)     // Catch: java.lang.Throwable -> L126
        L118:
            if (r0 == 0) goto L11d
            r0.add(r7)     // Catch: java.lang.Throwable -> L126
        L11d:
            int r3 = r3 + 1
            r5 = r15
            r4 = 0
            goto L24
        L123:
            r15 = r5
            r5 = r15
            goto L127
        L126:
            r5 = 5
        L127:
            return r5
    }

    public static synchronized long a() {
            java.lang.Class<com.loc.c> r0 = com.loc.c.class
            monitor-enter(r0)
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L1b
            long r3 = com.loc.c.a     // Catch: java.lang.Throwable -> L1b
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 <= 0) goto L10
            com.loc.c.a = r1     // Catch: java.lang.Throwable -> L1b
            goto L17
        L10:
            long r1 = com.loc.c.a     // Catch: java.lang.Throwable -> L1b
            r3 = 1
            long r1 = r1 + r3
            com.loc.c.a = r1     // Catch: java.lang.Throwable -> L1b
        L17:
            long r1 = com.loc.c.a     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)
            return r1
        L1b:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private java.util.List<com.amap.api.location.DPoint> a(java.util.List<com.amap.api.location.DPoint> r13, float r14) {
            r12 = this;
            if (r13 != 0) goto L4
            r13 = 0
            return r13
        L4:
            int r0 = r13.size()
            r1 = 2
            if (r0 > r1) goto Lc
            return r13
        Lc:
            r0 = 0
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            java.lang.Object r4 = r13.get(r3)
            com.amap.api.location.DPoint r4 = (com.amap.api.location.DPoint) r4
            int r5 = r13.size()
            r6 = 1
            int r5 = r5 - r6
            java.lang.Object r5 = r13.get(r5)
            com.amap.api.location.DPoint r5 = (com.amap.api.location.DPoint) r5
            r7 = 1
            r8 = 0
        L28:
            int r9 = r13.size()
            int r9 = r9 - r6
            if (r7 >= r9) goto L42
            java.lang.Object r9 = r13.get(r7)
            com.amap.api.location.DPoint r9 = (com.amap.api.location.DPoint) r9
            double r9 = a(r9, r4, r5)
            int r11 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r11 <= 0) goto L3f
            r8 = r7
            r0 = r9
        L3f:
            int r7 = r7 + 1
            goto L28
        L42:
            double r9 = (double) r14
            int r7 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r7 >= 0) goto L4e
            r2.add(r4)
            r2.add(r5)
            return r2
        L4e:
            int r0 = r8 + 1
            java.util.List r0 = r13.subList(r3, r0)
            java.util.List r0 = r12.a(r0, r14)
            int r1 = r13.size()
            java.util.List r13 = r13.subList(r8, r1)
            java.util.List r13 = r12.a(r13, r14)
            r2.addAll(r0)
            int r14 = r2.size()
            int r14 = r14 - r6
            r2.remove(r14)
            r2.addAll(r13)
            return r2
    }

    public static int b(java.lang.String r0, java.util.List<com.amap.api.fence.GeoFence> r1, android.os.Bundle r2) {
            int r0 = a(r0, r1, r2)
            return r0
    }

    public final int c(java.lang.String r33, java.util.List<com.amap.api.fence.GeoFence> r34, android.os.Bundle r35) {
            r32 = this;
            r0 = r35
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1eb
            r2 = r33
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r2 = "status"
            r3 = 0
            int r2 = r1.optInt(r2, r3)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r4 = "infocode"
            int r4 = r1.optInt(r4, r3)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r5 = "customId"
            java.lang.String r5 = r0.getString(r5)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r6 = "pendingIntentAction"
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r7 = "fenceRadius"
            float r7 = r0.getFloat(r7)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r8 = "expiration"
            long r8 = r0.getLong(r8)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r10 = "activatesAction"
            r11 = 1
            int r0 = r0.getInt(r10, r11)     // Catch: java.lang.Throwable -> L1eb
            if (r2 != r11) goto L1e4
            java.lang.String r2 = "districts"
            org.json.JSONArray r1 = r1.optJSONArray(r2)     // Catch: java.lang.Throwable -> L1eb
            if (r1 == 0) goto L1e4
            r2 = 0
        L40:
            int r10 = r1.length()     // Catch: java.lang.Throwable -> L1eb
            if (r2 >= r10) goto L1e4
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1eb
            r10.<init>()     // Catch: java.lang.Throwable -> L1eb
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1eb
            r12.<init>()     // Catch: java.lang.Throwable -> L1eb
            com.amap.api.fence.GeoFence r13 = new com.amap.api.fence.GeoFence     // Catch: java.lang.Throwable -> L1eb
            r13.<init>()     // Catch: java.lang.Throwable -> L1eb
            org.json.JSONObject r14 = r1.getJSONObject(r2)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r15 = "citycode"
            java.lang.String r15 = r14.optString(r15)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r3 = "adcode"
            java.lang.String r3 = r14.optString(r3)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r11 = "name"
            java.lang.String r11 = r14.optString(r11)     // Catch: java.lang.Throwable -> L1eb
            r35 = r1
            java.lang.String r1 = "center"
            java.lang.String r1 = r14.getString(r1)     // Catch: java.lang.Throwable -> L1eb
            r17 = r4
            com.amap.api.location.DPoint r4 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L1eb
            r4.<init>()     // Catch: java.lang.Throwable -> L1eb
            r18 = r2
            java.lang.String r2 = ","
            if (r1 == 0) goto La1
            java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Throwable -> L1eb
            r16 = 1
            r19 = r1[r16]     // Catch: java.lang.Throwable -> L1eb
            r20 = r10
            r21 = r11
            double r10 = java.lang.Double.parseDouble(r19)     // Catch: java.lang.Throwable -> L1eb
            r4.setLatitude(r10)     // Catch: java.lang.Throwable -> L1eb
            r10 = 0
            r1 = r1[r10]     // Catch: java.lang.Throwable -> L1eb
            double r10 = java.lang.Double.parseDouble(r1)     // Catch: java.lang.Throwable -> L1eb
            r4.setLongitude(r10)     // Catch: java.lang.Throwable -> L1eb
            r13.setCenter(r4)     // Catch: java.lang.Throwable -> L1eb
            goto La5
        La1:
            r20 = r10
            r21 = r11
        La5:
            r13.setCustomId(r5)     // Catch: java.lang.Throwable -> L1eb
            r13.setPendingIntentAction(r6)     // Catch: java.lang.Throwable -> L1eb
            r1 = 3
            r13.setType(r1)     // Catch: java.lang.Throwable -> L1eb
            r13.setRadius(r7)     // Catch: java.lang.Throwable -> L1eb
            r13.setExpiration(r8)     // Catch: java.lang.Throwable -> L1eb
            r13.setActivatesAction(r0)     // Catch: java.lang.Throwable -> L1eb
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1eb
            r1.<init>()     // Catch: java.lang.Throwable -> L1eb
            long r10 = a()     // Catch: java.lang.Throwable -> L1eb
            r1.append(r10)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1eb
            r13.setFenceId(r1)     // Catch: java.lang.Throwable -> L1eb
            java.lang.String r1 = "polyline"
            java.lang.String r1 = r14.optString(r1)     // Catch: java.lang.Throwable -> L1eb
            r10 = 1
            r11 = 2139095039(0x7f7fffff, float:3.4028235E38)
            if (r1 == 0) goto L1c0
            java.lang.String r14 = "\\|"
            java.lang.String[] r1 = r1.split(r14)     // Catch: java.lang.Throwable -> L1eb
            int r14 = r1.length     // Catch: java.lang.Throwable -> L1eb
            r19 = r0
            r0 = 2139095039(0x7f7fffff, float:3.4028235E38)
            r10 = 0
            r11 = 1
        Le5:
            if (r10 >= r14) goto L1a0
            r22 = r5
            r5 = r1[r10]     // Catch: java.lang.Throwable -> L1eb
            r23 = r1
            com.amap.api.fence.DistrictItem r1 = new com.amap.api.fence.DistrictItem     // Catch: java.lang.Throwable -> L1eb
            r1.<init>()     // Catch: java.lang.Throwable -> L1eb
            r24 = r6
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1eb
            r6.<init>()     // Catch: java.lang.Throwable -> L1eb
            r1.setCitycode(r15)     // Catch: java.lang.Throwable -> L1eb
            r1.setAdcode(r3)     // Catch: java.lang.Throwable -> L1eb
            r25 = r3
            r3 = r21
            r1.setDistrictName(r3)     // Catch: java.lang.Throwable -> L1eb
            r21 = r3
            java.lang.String r3 = ";"
            java.lang.String[] r3 = r5.split(r3)     // Catch: java.lang.Throwable -> L1eb
            r26 = r7
            r5 = 0
        L111:
            int r7 = r3.length     // Catch: java.lang.Throwable -> L1eb
            if (r5 >= r7) goto L151
            r7 = r3[r5]     // Catch: java.lang.Throwable -> L1eb
            java.lang.String[] r7 = r7.split(r2)     // Catch: java.lang.Throwable -> L1eb
            r27 = r2
            int r2 = r7.length     // Catch: java.lang.Throwable -> L1eb
            r28 = r3
            r3 = 1
            if (r2 <= r3) goto L13e
            r2 = r7[r3]     // Catch: java.lang.Throwable -> L1eb
            r16 = 0
            r7 = r7[r16]     // Catch: java.lang.Throwable -> L1eb
            com.amap.api.location.DPoint r3 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L1eb
            r29 = r8
            double r8 = java.lang.Double.parseDouble(r2)     // Catch: java.lang.Throwable -> L1eb
            r31 = r14
            r2 = r15
            double r14 = java.lang.Double.parseDouble(r7)     // Catch: java.lang.Throwable -> L1eb
            r3.<init>(r8, r14)     // Catch: java.lang.Throwable -> L1eb
            r6.add(r3)     // Catch: java.lang.Throwable -> L1eb
            goto L145
        L13e:
            r29 = r8
            r31 = r14
            r2 = r15
            r16 = 0
        L145:
            int r5 = r5 + 1
            r15 = r2
            r2 = r27
            r3 = r28
            r8 = r29
            r14 = r31
            goto L111
        L151:
            r27 = r2
            r29 = r8
            r31 = r14
            r2 = r15
            r16 = 0
            int r3 = r6.size()     // Catch: java.lang.Throwable -> L1eb
            float r3 = (float) r3
            r5 = 1120403456(0x42c80000, float:100.0)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L16c
            r3 = r32
            java.util.List r6 = r3.a(r6, r5)     // Catch: java.lang.Throwable -> L1ed
            goto L16e
        L16c:
            r3 = r32
        L16e:
            r12.add(r6)     // Catch: java.lang.Throwable -> L1ed
            r1.setPolyline(r6)     // Catch: java.lang.Throwable -> L1ed
            r5 = r20
            r5.add(r1)     // Catch: java.lang.Throwable -> L1ed
            float r1 = com.loc.a.b(r4, r6)     // Catch: java.lang.Throwable -> L1ed
            float r11 = java.lang.Math.max(r11, r1)     // Catch: java.lang.Throwable -> L1ed
            float r1 = com.loc.a.a(r4, r6)     // Catch: java.lang.Throwable -> L1ed
            float r0 = java.lang.Math.min(r0, r1)     // Catch: java.lang.Throwable -> L1ed
            int r10 = r10 + 1
            r15 = r2
            r20 = r5
            r5 = r22
            r1 = r23
            r6 = r24
            r3 = r25
            r7 = r26
            r2 = r27
            r8 = r29
            r14 = r31
            goto Le5
        L1a0:
            r3 = r32
            r22 = r5
            r24 = r6
            r26 = r7
            r29 = r8
            r5 = r20
            r16 = 0
            r13.setMaxDis2Center(r11)     // Catch: java.lang.Throwable -> L1ed
            r13.setMinDis2Center(r0)     // Catch: java.lang.Throwable -> L1ed
            r13.setDistrictItemList(r5)     // Catch: java.lang.Throwable -> L1ed
            r13.setPointList(r12)     // Catch: java.lang.Throwable -> L1ed
            r0 = r34
            r0.add(r13)     // Catch: java.lang.Throwable -> L1ed
            goto L1d0
        L1c0:
            r3 = r32
            r19 = r0
            r22 = r5
            r24 = r6
            r26 = r7
            r29 = r8
            r16 = 0
            r0 = r34
        L1d0:
            int r2 = r18 + 1
            r1 = r35
            r4 = r17
            r0 = r19
            r5 = r22
            r6 = r24
            r7 = r26
            r8 = r29
            r3 = 0
            r11 = 1
            goto L40
        L1e4:
            r3 = r32
            r17 = r4
            r4 = r17
            goto L1ee
        L1eb:
            r3 = r32
        L1ed:
            r4 = 5
        L1ee:
            return r4
    }
}
