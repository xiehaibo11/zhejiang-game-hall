package com.loc;

public final class fo {
    private java.lang.StringBuilder a;
    private com.amap.api.location.AMapLocationClientOption b;

    public fo() {
            r1 = this;
            r1.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.a = r0
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            r1.b = r0
            return
    }

    private void a(com.loc.ew r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r2 = " "
            if (r1 != 0) goto L13
            r0.append(r5)
            r0.append(r2)
        L13:
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L1c
            r3.a(r5, r6, r0)
        L1c:
            boolean r5 = android.text.TextUtils.isEmpty(r7)
            if (r5 != 0) goto L28
            r0.append(r7)
            r0.append(r2)
        L28:
            boolean r5 = android.text.TextUtils.isEmpty(r8)
            if (r5 != 0) goto L34
            r0.append(r8)
            r0.append(r2)
        L34:
            boolean r5 = android.text.TextUtils.isEmpty(r9)
            if (r5 != 0) goto L40
            r0.append(r9)
            r0.append(r2)
        L40:
            boolean r5 = android.text.TextUtils.isEmpty(r10)
            if (r5 != 0) goto L49
            r3.a(r11, r10, r0, r4)
        L49:
            android.os.Bundle r5 = new android.os.Bundle
            r5.<init>()
            java.lang.String r6 = r4.getCityCode()
            java.lang.String r7 = "citycode"
            r5.putString(r7, r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r7 = "desc"
            r5.putString(r7, r6)
            java.lang.String r6 = r4.getAdCode()
            java.lang.String r7 = "adcode"
            r5.putString(r7, r6)
            r4.setExtras(r5)
            java.lang.String r5 = r0.toString()
            r4.g(r5)
            java.lang.String r5 = r4.getAdCode()
            if (r5 == 0) goto L9b
            java.lang.String r5 = r5.trim()
            int r5 = r5.length()
            if (r5 <= 0) goto L9b
            com.amap.api.location.AMapLocationClientOption r5 = r3.b
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r5 = r5.getGeoLanguage()
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r6 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.EN
            if (r5 == r6) goto L9b
            java.lang.String r5 = r0.toString()
            java.lang.String r6 = ""
            java.lang.String r5 = r5.replace(r2, r6)
        L97:
            r4.setAddress(r5)
            return
        L9b:
            java.lang.String r5 = r0.toString()
            goto L97
    }

    private static void a(com.loc.ew r2, short r3) {
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "-1"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L18
            r0 = -1
            if (r3 != r0) goto L11
            r3 = 0
            goto L14
        L11:
            if (r3 != 0) goto L14
            r3 = -1
        L14:
            r2.setConScenario(r3)
            return
        L18:
            r0 = 101(0x65, float:1.42E-43)
            if (r3 != r0) goto L1e
            r3 = 100
        L1e:
            r2.setConScenario(r3)
            return
    }

    private void a(java.lang.String r4, java.lang.String r5, java.lang.StringBuilder r6) {
            r3 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r3.b
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r0.getGeoLanguage()
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.EN
            java.lang.String r2 = " "
            if (r0 != r1) goto L19
            boolean r4 = r5.equals(r4)
            if (r4 != 0) goto L2d
            r6.append(r5)
            r6.append(r2)
            return
        L19:
            java.lang.String r0 = "市"
            boolean r0 = r4.contains(r0)
            if (r0 == 0) goto L27
            boolean r4 = r4.equals(r5)
            if (r4 != 0) goto L2d
        L27:
            r6.append(r5)
            r6.append(r2)
        L2d:
            return
    }

    private void a(java.lang.String r2, java.lang.String r3, java.lang.StringBuilder r4, com.loc.ew r5) {
            r1 = this;
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L34
            com.amap.api.location.AMapLocationClientOption r2 = r1.b
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r2.getGeoLanguage()
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.EN
            if (r2 == r0) goto L34
            java.lang.String r2 = "靠近"
            r4.append(r2)
            r4.append(r3)
            java.lang.String r2 = " "
            r4.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r4 = "在"
            r2.<init>(r4)
            r2.append(r3)
            java.lang.String r3 = "附近"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
        L30:
            r5.setDescription(r2)
            return
        L34:
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "Near "
            java.lang.String r2 = r0.concat(r2)
            r4.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r2 = r0.concat(r2)
            goto L30
    }

    private static java.lang.String b(java.lang.String r1) {
            java.lang.String r0 = "[]"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto La
            java.lang.String r1 = ""
        La:
            return r1
    }

    public final com.loc.ew a(com.loc.ew r22, byte[] r23, com.loc.eq r24) {
            r21 = this;
            r10 = r21
            r0 = r22
            r11 = r24
            java.lang.String r12 = "#0505"
            r13 = 5
            r15 = 0
            java.lang.String r9 = ""
            if (r23 != 0) goto L32
            r0.setErrorCode(r13)     // Catch: java.lang.Throwable -> L254
            java.lang.String r1 = "#0504"
            r11.f(r1)     // Catch: java.lang.Throwable -> L254
            java.lang.StringBuilder r1 = r10.a     // Catch: java.lang.Throwable -> L254
            java.lang.String r2 = "binaryResult is null#0504"
            r1.append(r2)     // Catch: java.lang.Throwable -> L254
            java.lang.StringBuilder r1 = r10.a     // Catch: java.lang.Throwable -> L254
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L254
            r0.setLocationDetail(r1)     // Catch: java.lang.Throwable -> L254
            java.lang.StringBuilder r1 = r10.a     // Catch: java.lang.Throwable -> L254
            java.lang.StringBuilder r2 = r10.a     // Catch: java.lang.Throwable -> L254
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L254
            r1.delete(r15, r2)     // Catch: java.lang.Throwable -> L254
            return r0
        L32:
            java.nio.ByteBuffer r8 = java.nio.ByteBuffer.wrap(r23)     // Catch: java.lang.Throwable -> L254
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L24f
            if (r1 != 0) goto L53
            short r1 = r8.getShort()     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L50
            r0.b(r1)     // Catch: java.lang.Throwable -> L50
            r8.clear()     // Catch: java.lang.Throwable -> L50
            if (r8 == 0) goto L4f
            r8.clear()
        L4f:
            return r0
        L50:
            r0 = move-exception
            goto L251
        L53:
            int r1 = r8.getInt()     // Catch: java.lang.Throwable -> L24f
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L24f
            r3 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            double r1 = r1 / r3
            double r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L24f
            r0.setLongitude(r1)     // Catch: java.lang.Throwable -> L24f
            int r1 = r8.getInt()     // Catch: java.lang.Throwable -> L24f
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L24f
            double r1 = r1 / r3
            double r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L24f
            r0.setLatitude(r1)     // Catch: java.lang.Throwable -> L24f
            short r1 = r8.getShort()     // Catch: java.lang.Throwable -> L24f
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L24f
            r0.setAccuracy(r1)     // Catch: java.lang.Throwable -> L24f
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L24f
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L24f
            r0.c(r1)     // Catch: java.lang.Throwable -> L24f
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L24f
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L24f
            r0.d(r1)     // Catch: java.lang.Throwable -> L24f
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L24f
            r7 = 1
            java.lang.String r6 = "UTF-8"
            if (r1 != r7) goto L193
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> Lac
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> Lac
            r0.setCountry(r2)     // Catch: java.lang.Throwable -> Lac
        Lac:
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> Lc0
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> Lc0
            r0.setProvince(r2)     // Catch: java.lang.Throwable -> Lc1
            goto Lc1
        Lc0:
            r2 = r9
        Lc1:
            r3 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> Ld6
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> Ld6
            r0.setCity(r2)     // Catch: java.lang.Throwable -> Ld7
            goto Ld7
        Ld6:
            r2 = r9
        Ld7:
            r4 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> Lec
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> Lec
            r0.setDistrict(r2)     // Catch: java.lang.Throwable -> Led
            goto Led
        Lec:
            r2 = r9
        Led:
            r5 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L105
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> L105
            r0.setStreet(r2)     // Catch: java.lang.Throwable -> L106
            r0.setRoad(r2)     // Catch: java.lang.Throwable -> L106
            goto L106
        L105:
            r2 = r9
        L106:
            r16 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L11c
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> L11c
            r0.setNumber(r2)     // Catch: java.lang.Throwable -> L11d
            goto L11d
        L11c:
            r2 = r9
        L11d:
            r17 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L133
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> L133
            r0.setPoiName(r2)     // Catch: java.lang.Throwable -> L134
            goto L134
        L133:
            r2 = r9
        L134:
            r18 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L149
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> L149
            r0.setAoiName(r2)     // Catch: java.lang.Throwable -> L149
        L149:
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L15d
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> L15d
            r0.setAdCode(r2)     // Catch: java.lang.Throwable -> L15e
            goto L15e
        L15d:
            r2 = r9
        L15e:
            r19 = r2
            byte r1 = r8.get()     // Catch: java.lang.Throwable -> L18e
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L18e
            r8.get(r1)     // Catch: java.lang.Throwable -> L18e
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L173
            r2.<init>(r1, r6)     // Catch: java.lang.Throwable -> L173
            r0.setCityCode(r2)     // Catch: java.lang.Throwable -> L173
        L173:
            r1 = r21
            r2 = r22
            r14 = r6
            r6 = r16
            r13 = 1
            r7 = r17
            r23 = r8
            r8 = r18
            r20 = r9
            r9 = r19
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L189
            goto L199
        L189:
            r0 = move-exception
            r8 = r23
            goto L258
        L18e:
            r0 = move-exception
            r23 = r8
            goto L251
        L193:
            r14 = r6
            r23 = r8
            r20 = r9
            r13 = 1
        L199:
            byte r1 = r23.get()     // Catch: java.lang.Throwable -> L24a
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L24a
            r2 = r23
            r2.get(r1)     // Catch: java.lang.Throwable -> L248
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            if (r1 != r13) goto L1b5
            r2.getInt()     // Catch: java.lang.Throwable -> L248
            r2.getInt()     // Catch: java.lang.Throwable -> L248
            r2.getShort()     // Catch: java.lang.Throwable -> L248
        L1b5:
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            if (r1 != r13) goto L1e1
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L248
            r2.get(r1)     // Catch: java.lang.Throwable -> L248
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L1ce
            r3.<init>(r1, r14)     // Catch: java.lang.Throwable -> L1ce
            r0.setBuildingId(r3)     // Catch: java.lang.Throwable -> L1ce
        L1ce:
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L248
            r2.get(r1)     // Catch: java.lang.Throwable -> L248
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L1e1
            r3.<init>(r1, r14)     // Catch: java.lang.Throwable -> L1e1
            r0.setFloor(r3)     // Catch: java.lang.Throwable -> L1e1
        L1e1:
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            if (r1 != r13) goto L1f0
            r2.get()     // Catch: java.lang.Throwable -> L248
            r2.getInt()     // Catch: java.lang.Throwable -> L248
            r2.get()     // Catch: java.lang.Throwable -> L248
        L1f0:
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            if (r1 != r13) goto L1fd
            long r3 = r2.getLong()     // Catch: java.lang.Throwable -> L248
            r0.setTime(r3)     // Catch: java.lang.Throwable -> L248
        L1fd:
            short r1 = r2.getShort()     // Catch: java.lang.Throwable -> L248
            if (r1 <= 0) goto L216
            byte[] r3 = new byte[r1]     // Catch: java.lang.Throwable -> L248
            r2.get(r3)     // Catch: java.lang.Throwable -> L248
            if (r1 <= 0) goto L216
            byte[] r1 = android.util.Base64.decode(r3, r15)     // Catch: java.lang.Throwable -> L216
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L216
            r3.<init>(r1, r14)     // Catch: java.lang.Throwable -> L216
            r0.a(r3)     // Catch: java.lang.Throwable -> L216
        L216:
            short r1 = r2.getShort()     // Catch: java.lang.Throwable -> L248
            if (r1 <= 0) goto L221
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L248
            r2.get(r1)     // Catch: java.lang.Throwable -> L248
        L221:
            java.lang.String r1 = com.loc.fr.a     // Catch: java.lang.Throwable -> L248
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Throwable -> L248
            double r3 = r1.doubleValue()     // Catch: java.lang.Throwable -> L248
            r5 = 4617428107952285286(0x4014666666666666, double:5.1)
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 < 0) goto L242
            short r1 = r2.getShort()     // Catch: java.lang.Throwable -> L248
            a(r0, r1)     // Catch: java.lang.Throwable -> L248
            byte r1 = r2.get()     // Catch: java.lang.Throwable -> L248
            r0.a(r1)     // Catch: java.lang.Throwable -> L248
        L242:
            if (r2 == 0) goto L295
            r2.clear()
            goto L295
        L248:
            r0 = move-exception
            goto L24d
        L24a:
            r0 = move-exception
            r2 = r23
        L24d:
            r8 = r2
            goto L258
        L24f:
            r0 = move-exception
            r2 = r8
        L251:
            r20 = r9
            goto L258
        L254:
            r0 = move-exception
            r20 = r9
            r8 = 0
        L258:
            com.loc.ew r1 = new com.loc.ew     // Catch: java.lang.Throwable -> L2a7
            r2 = r20
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2a7
            r2 = 5
            r1.setErrorCode(r2)     // Catch: java.lang.Throwable -> L2a7
            r11.f(r12)     // Catch: java.lang.Throwable -> L2a7
            java.lang.StringBuilder r2 = r10.a     // Catch: java.lang.Throwable -> L2a7
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r4 = "parser data error:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L2a7
            r3.append(r0)     // Catch: java.lang.Throwable -> L2a7
            r3.append(r12)     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L2a7
            r2.append(r0)     // Catch: java.lang.Throwable -> L2a7
            r0 = 2054(0x806, float:2.878E-42)
            r2 = 0
            com.loc.fx.a(r2, r0)     // Catch: java.lang.Throwable -> L2a7
            java.lang.StringBuilder r0 = r10.a     // Catch: java.lang.Throwable -> L2a7
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2a7
            r1.setLocationDetail(r0)     // Catch: java.lang.Throwable -> L2a7
            if (r8 == 0) goto L294
            r8.clear()
        L294:
            r0 = r1
        L295:
            java.lang.StringBuilder r1 = r10.a
            int r1 = r1.length()
            if (r1 <= 0) goto L2a6
            java.lang.StringBuilder r1 = r10.a
            int r2 = r1.length()
            r1.delete(r15, r2)
        L2a6:
            return r0
        L2a7:
            r0 = move-exception
            if (r8 == 0) goto L2ad
            r8.clear()
        L2ad:
            throw r0
    }

    public final com.loc.ew a(java.lang.String r14) {
            r13 = this;
            r0 = 0
            com.loc.ew r10 = new com.loc.ew     // Catch: java.lang.Throwable -> L105
            java.lang.String r1 = ""
            r10.<init>(r1)     // Catch: java.lang.Throwable -> L105
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L105
            r1.<init>(r14)     // Catch: java.lang.Throwable -> L105
            java.lang.String r14 = "regeocode"
            org.json.JSONObject r14 = r1.optJSONObject(r14)     // Catch: java.lang.Throwable -> L105
            java.lang.String r1 = "addressComponent"
            org.json.JSONObject r1 = r14.optJSONObject(r1)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "country"
            java.lang.String r2 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = b(r2)     // Catch: java.lang.Throwable -> L105
            r10.setCountry(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "province"
            java.lang.String r2 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r3 = b(r2)     // Catch: java.lang.Throwable -> L105
            r10.setProvince(r3)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "citycode"
            java.lang.String r2 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = b(r2)     // Catch: java.lang.Throwable -> L105
            r10.setCityCode(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r4 = "city"
            java.lang.String r4 = r1.optString(r4)     // Catch: java.lang.Throwable -> L105
            java.lang.String r5 = "010"
            boolean r5 = r2.endsWith(r5)     // Catch: java.lang.Throwable -> L105
            if (r5 != 0) goto L6f
            java.lang.String r5 = "021"
            boolean r5 = r2.endsWith(r5)     // Catch: java.lang.Throwable -> L105
            if (r5 != 0) goto L6f
            java.lang.String r5 = "022"
            boolean r5 = r2.endsWith(r5)     // Catch: java.lang.Throwable -> L105
            if (r5 != 0) goto L6f
            java.lang.String r5 = "023"
            boolean r2 = r2.endsWith(r5)     // Catch: java.lang.Throwable -> L105
            if (r2 == 0) goto L67
            goto L6f
        L67:
            java.lang.String r4 = b(r4)     // Catch: java.lang.Throwable -> L105
            r10.setCity(r4)     // Catch: java.lang.Throwable -> L105
            goto L7b
        L6f:
            if (r3 == 0) goto L7b
            int r2 = r3.length()     // Catch: java.lang.Throwable -> L105
            if (r2 <= 0) goto L7b
            r10.setCity(r3)     // Catch: java.lang.Throwable -> L105
            r4 = r3
        L7b:
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L105
            if (r2 == 0) goto L85
            r10.setCity(r3)     // Catch: java.lang.Throwable -> L105
            r4 = r3
        L85:
            java.lang.String r2 = "district"
            java.lang.String r2 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r5 = b(r2)     // Catch: java.lang.Throwable -> L105
            r10.setDistrict(r5)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "adcode"
            java.lang.String r2 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r9 = b(r2)     // Catch: java.lang.Throwable -> L105
            r10.setAdCode(r9)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "streetNumber"
            org.json.JSONObject r1 = r1.optJSONObject(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "street"
            java.lang.String r2 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r6 = b(r2)     // Catch: java.lang.Throwable -> L105
            r10.setStreet(r6)     // Catch: java.lang.Throwable -> L105
            r10.setRoad(r6)     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "number"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r7 = b(r1)     // Catch: java.lang.Throwable -> L105
            r10.setNumber(r7)     // Catch: java.lang.Throwable -> L105
            java.lang.String r1 = "pois"
            org.json.JSONArray r1 = r14.optJSONArray(r1)     // Catch: java.lang.Throwable -> L105
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L105
            java.lang.String r8 = "name"
            r11 = 0
            if (r2 <= 0) goto Le2
            org.json.JSONObject r1 = r1.getJSONObject(r11)     // Catch: java.lang.Throwable -> L105
            java.lang.String r1 = r1.optString(r8)     // Catch: java.lang.Throwable -> L105
            java.lang.String r1 = b(r1)     // Catch: java.lang.Throwable -> L105
            r10.setPoiName(r1)     // Catch: java.lang.Throwable -> L105
            r12 = r1
            goto Le3
        Le2:
            r12 = r0
        Le3:
            java.lang.String r1 = "aois"
            org.json.JSONArray r14 = r14.optJSONArray(r1)     // Catch: java.lang.Throwable -> L105
            int r1 = r14.length()     // Catch: java.lang.Throwable -> L105
            if (r1 <= 0) goto Lfe
            org.json.JSONObject r14 = r14.getJSONObject(r11)     // Catch: java.lang.Throwable -> L105
            java.lang.String r14 = r14.optString(r8)     // Catch: java.lang.Throwable -> L105
            java.lang.String r14 = b(r14)     // Catch: java.lang.Throwable -> L105
            r10.setAoiName(r14)     // Catch: java.lang.Throwable -> L105
        Lfe:
            r1 = r13
            r2 = r10
            r8 = r12
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L105
            return r10
        L105:
            return r0
    }

    public final com.loc.ew a(java.lang.String r10, android.content.Context r11, com.loc.bu r12, com.loc.eq r13) {
            r9 = this;
            java.lang.String r0 = "#0701"
            java.lang.String r1 = "#0702"
            java.lang.String r2 = "status"
            com.loc.ew r3 = new com.loc.ew
            java.lang.String r4 = ""
            r3.<init>(r4)
            r4 = 7
            r3.setErrorCode(r4)
            java.lang.StringBuffer r4 = new java.lang.StringBuffer
            r4.<init>()
            r5 = 0
            java.lang.String r6 = "#SHA1AndPackage#"
            r4.append(r6)     // Catch: java.lang.Throwable -> L56
            java.lang.String r11 = com.loc.l.e(r11)     // Catch: java.lang.Throwable -> L56
            r4.append(r11)     // Catch: java.lang.Throwable -> L56
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r11 = r12.b     // Catch: java.lang.Throwable -> L56
            java.lang.String r6 = "gsid"
            java.lang.Object r11 = r11.get(r6)     // Catch: java.lang.Throwable -> L56
            java.util.List r11 = (java.util.List) r11     // Catch: java.lang.Throwable -> L56
            java.lang.Object r11 = r11.get(r5)     // Catch: java.lang.Throwable -> L56
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Throwable -> L56
            boolean r6 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L56
            if (r6 != 0) goto L41
            java.lang.String r6 = "#gsid#"
            r4.append(r6)     // Catch: java.lang.Throwable -> L56
            r4.append(r11)     // Catch: java.lang.Throwable -> L56
        L41:
            java.lang.String r11 = r12.c     // Catch: java.lang.Throwable -> L56
            boolean r6 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L56
            if (r6 != 0) goto L56
            java.lang.String r6 = "#csid#"
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Throwable -> L56
            java.lang.String r11 = r6.concat(r11)     // Catch: java.lang.Throwable -> L56
            r4.append(r11)     // Catch: java.lang.Throwable -> L56
        L56:
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lab
            r11.<init>(r10)     // Catch: java.lang.Throwable -> Lab
            boolean r6 = r11.has(r2)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r7 = "info"
            if (r6 == 0) goto L69
            boolean r6 = r11.has(r7)     // Catch: java.lang.Throwable -> Lab
            if (r6 != 0) goto L7c
        L69:
            r13.f(r1)     // Catch: java.lang.Throwable -> Lab
            java.lang.StringBuilder r6 = r9.a     // Catch: java.lang.Throwable -> Lab
            java.lang.String r8 = "json is error:"
            r6.append(r8)     // Catch: java.lang.Throwable -> Lab
            r6.append(r10)     // Catch: java.lang.Throwable -> Lab
            r6.append(r4)     // Catch: java.lang.Throwable -> Lab
            r6.append(r1)     // Catch: java.lang.Throwable -> Lab
        L7c:
            java.lang.String r10 = r11.getString(r2)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r1 = r11.getString(r7)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "infocode"
            java.lang.String r11 = r11.getString(r2)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "0"
            boolean r10 = r2.equals(r10)     // Catch: java.lang.Throwable -> Lab
            if (r10 == 0) goto Lcc
            r13.f(r0)     // Catch: java.lang.Throwable -> Lab
            java.lang.StringBuilder r10 = r9.a     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "auth fail:"
            r10.append(r2)     // Catch: java.lang.Throwable -> Lab
            r10.append(r1)     // Catch: java.lang.Throwable -> Lab
            r10.append(r4)     // Catch: java.lang.Throwable -> Lab
            r10.append(r0)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r10 = r12.d     // Catch: java.lang.Throwable -> Lab
            com.loc.fx.a(r10, r11, r1)     // Catch: java.lang.Throwable -> Lab
            goto Lcc
        Lab:
            r10 = move-exception
            java.lang.String r11 = "#0703"
            r13.f(r11)
            java.lang.StringBuilder r12 = r9.a
            java.lang.String r13 = "json exception error:"
            r12.append(r13)
            java.lang.String r13 = r10.getMessage()
            r12.append(r13)
            r12.append(r4)
            r12.append(r11)
            java.lang.String r11 = "parser"
            java.lang.String r12 = "paseAuthFailurJson"
            com.loc.fr.a(r10, r11, r12)
        Lcc:
            java.lang.StringBuilder r10 = r9.a
            java.lang.String r10 = r10.toString()
            r3.setLocationDetail(r10)
            java.lang.StringBuilder r10 = r9.a
            int r10 = r10.length()
            if (r10 <= 0) goto Le6
            java.lang.StringBuilder r10 = r9.a
            int r11 = r10.length()
            r10.delete(r5, r11)
        Le6:
            return r3
    }

    public final void a(com.amap.api.location.AMapLocationClientOption r1) {
            r0 = this;
            if (r1 != 0) goto La
            com.amap.api.location.AMapLocationClientOption r1 = new com.amap.api.location.AMapLocationClientOption
            r1.<init>()
            r0.b = r1
            return
        La:
            r0.b = r1
            return
    }
}
