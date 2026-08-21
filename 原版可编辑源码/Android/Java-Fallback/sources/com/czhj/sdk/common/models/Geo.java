package com.czhj.sdk.common.models;

public final class Geo extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.Geo, com.czhj.sdk.common.models.Geo.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.Geo> CREATOR = null;
    public static final java.lang.Double DEFAULT_ACCURACY = null;
    public static final java.lang.Long DEFAULT_CITY_CODE = null;
    public static final java.lang.String DEFAULT_COUNTRY = "";
    public static final java.lang.String DEFAULT_LANGUAGE = "";
    public static final java.lang.Float DEFAULT_LAT = null;
    public static final java.lang.Float DEFAULT_LON = null;
    public static final java.lang.String DEFAULT_REGION_CODE = "";
    public static final java.lang.String DEFAULT_SECONDSFROMGMT = "";
    public static final java.lang.String DEFAULT_TIMEZONE = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#DOUBLE", tag = 9)
    public final java.lang.Double accuracy;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 5)
    public final java.lang.Long city_code;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 6)
    public final java.lang.String country;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String language;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 1)
    public final java.lang.Float lat;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 2)
    public final java.lang.Float lon;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String region_code;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String secondsFromGMT;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String timeZone;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.Geo, com.czhj.sdk.common.models.Geo.Builder> {
        public java.lang.Double accuracy;
        public java.lang.Long city_code;
        public java.lang.String country;
        public java.lang.String language;
        public java.lang.Float lat;
        public java.lang.Float lon;
        public java.lang.String region_code;
        public java.lang.String secondsFromGMT;
        public java.lang.String timeZone;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.Float r0 = com.czhj.sdk.common.models.Geo.DEFAULT_LAT
                r2.lat = r0
                java.lang.Float r0 = com.czhj.sdk.common.models.Geo.DEFAULT_LON
                r2.lon = r0
                java.lang.String r0 = ""
                r2.language = r0
                r2.timeZone = r0
                java.lang.Long r1 = com.czhj.sdk.common.models.Geo.DEFAULT_CITY_CODE
                r2.city_code = r1
                r2.country = r0
                r2.region_code = r0
                r2.secondsFromGMT = r0
                java.lang.Double r0 = com.czhj.sdk.common.models.Geo.DEFAULT_ACCURACY
                r2.accuracy = r0
                return
        }

        public com.czhj.sdk.common.models.Geo.Builder accuracy(java.lang.Double r1) {
                r0 = this;
                r0.accuracy = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.Geo build() {
                r12 = this;
                com.czhj.sdk.common.models.Geo r11 = new com.czhj.sdk.common.models.Geo
                java.lang.Float r1 = r12.lat
                java.lang.Float r2 = r12.lon
                java.lang.String r3 = r12.language
                java.lang.String r4 = r12.timeZone
                java.lang.Long r5 = r12.city_code
                java.lang.String r6 = r12.country
                java.lang.String r7 = r12.region_code
                java.lang.String r8 = r12.secondsFromGMT
                java.lang.Double r9 = r12.accuracy
                com.czhj.wire.okio.ByteString r10 = super.buildUnknownFields()
                r0 = r11
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return r11
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.Geo r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder city_code(java.lang.Long r1) {
                r0 = this;
                r0.city_code = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder country(java.lang.String r1) {
                r0 = this;
                r0.country = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder language(java.lang.String r1) {
                r0 = this;
                r0.language = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder lat(java.lang.Float r1) {
                r0 = this;
                r0.lat = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder lon(java.lang.Float r1) {
                r0 = this;
                r0.lon = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder region_code(java.lang.String r1) {
                r0 = this;
                r0.region_code = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder secondsFromGMT(java.lang.String r1) {
                r0 = this;
                r0.secondsFromGMT = r1
                return r0
        }

        public com.czhj.sdk.common.models.Geo.Builder timeZone(java.lang.String r1) {
                r0 = this;
                r0.timeZone = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Geo extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> {
        public ProtoAdapter_Geo() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.Geo> r1 = com.czhj.sdk.common.models.Geo.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.Geo decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.Geo$Builder r0 = new com.czhj.sdk.common.models.Geo$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L90
                switch(r3) {
                    case 1: goto L83;
                    case 2: goto L77;
                    case 3: goto L6b;
                    case 4: goto L5f;
                    case 5: goto L53;
                    case 6: goto L47;
                    case 7: goto L3b;
                    case 8: goto L2f;
                    case 9: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Double> r3 = com.czhj.wire.ProtoAdapter.DOUBLE
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Double r3 = (java.lang.Double) r3
                r0.accuracy(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.secondsFromGMT(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.region_code(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.country(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.city_code(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.timeZone(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.language(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.lon(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.lat(r3)
                goto L9
            L90:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.Geo r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.Geo decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Geo r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.Geo r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.lat
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.lon
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.language
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.timeZone
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.city_code
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.country
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.region_code
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.secondsFromGMT
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Double> r0 = com.czhj.wire.ProtoAdapter.DOUBLE
                java.lang.Double r1 = r5.accuracy
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.Geo r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Geo r2 = (com.czhj.sdk.common.models.Geo) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.Geo r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.lat
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.lon
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.language
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.timeZone
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.city_code
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.country
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.region_code
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.secondsFromGMT
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Double> r1 = com.czhj.wire.ProtoAdapter.DOUBLE
                java.lang.Double r2 = r5.accuracy
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.Geo r1) {
                r0 = this;
                com.czhj.sdk.common.models.Geo r1 = (com.czhj.sdk.common.models.Geo) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.Geo redact(com.czhj.sdk.common.models.Geo r1) {
                r0 = this;
                com.czhj.sdk.common.models.Geo$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.Geo r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.Geo redact(com.czhj.sdk.common.models.Geo r1) {
                r0 = this;
                com.czhj.sdk.common.models.Geo r1 = (com.czhj.sdk.common.models.Geo) r1
                com.czhj.sdk.common.models.Geo r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.Geo$ProtoAdapter_Geo r0 = new com.czhj.sdk.common.models.Geo$ProtoAdapter_Geo
            r0.<init>()
            com.czhj.sdk.common.models.Geo.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.Geo.CREATOR = r0
            r0 = 0
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            com.czhj.sdk.common.models.Geo.DEFAULT_LAT = r0
            com.czhj.sdk.common.models.Geo.DEFAULT_LON = r0
            r0 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            com.czhj.sdk.common.models.Geo.DEFAULT_CITY_CODE = r0
            r0 = 0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            com.czhj.sdk.common.models.Geo.DEFAULT_ACCURACY = r0
            return
    }

    public Geo(java.lang.Float r12, java.lang.Float r13, java.lang.String r14, java.lang.String r15, java.lang.Long r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.Double r20) {
            r11 = this;
            com.czhj.wire.okio.ByteString r10 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public Geo(java.lang.Float r2, java.lang.Float r3, java.lang.String r4, java.lang.String r5, java.lang.Long r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.Double r10, com.czhj.wire.okio.ByteString r11) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> r0 = com.czhj.sdk.common.models.Geo.ADAPTER
            r1.<init>(r0, r11)
            r1.lat = r2
            r1.lon = r3
            r1.language = r4
            r1.timeZone = r5
            r1.city_code = r6
            r1.country = r7
            r1.region_code = r8
            r1.secondsFromGMT = r9
            r1.accuracy = r10
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.Geo
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.Geo r5 = (com.czhj.sdk.common.models.Geo) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L75
            java.lang.Float r1 = r4.lat
            java.lang.Float r3 = r5.lat
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Float r1 = r4.lon
            java.lang.Float r3 = r5.lon
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.language
            java.lang.String r3 = r5.language
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.timeZone
            java.lang.String r3 = r5.timeZone
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Long r1 = r4.city_code
            java.lang.Long r3 = r5.city_code
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.country
            java.lang.String r3 = r5.country
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.region_code
            java.lang.String r3 = r5.region_code
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.String r1 = r4.secondsFromGMT
            java.lang.String r3 = r5.secondsFromGMT
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L75
            java.lang.Double r1 = r4.accuracy
            java.lang.Double r5 = r5.accuracy
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L75
            goto L76
        L75:
            r0 = r2
        L76:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L82
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Float r1 = r3.lat
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.lon
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.language
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.timeZone
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.city_code
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.country
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.region_code
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.secondsFromGMT
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Double r1 = r3.accuracy
            if (r1 == 0) goto L7f
            int r2 = r1.hashCode()
        L7f:
            int r0 = r0 + r2
            r3.hashCode = r0
        L82:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.Geo.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.Geo$Builder r0 = new com.czhj.sdk.common.models.Geo$Builder
            r0.<init>()
            java.lang.Float r1 = r2.lat
            r0.lat = r1
            java.lang.Float r1 = r2.lon
            r0.lon = r1
            java.lang.String r1 = r2.language
            r0.language = r1
            java.lang.String r1 = r2.timeZone
            r0.timeZone = r1
            java.lang.Long r1 = r2.city_code
            r0.city_code = r1
            java.lang.String r1 = r2.country
            r0.country = r1
            java.lang.String r1 = r2.region_code
            r0.region_code = r1
            java.lang.String r1 = r2.secondsFromGMT
            r0.secondsFromGMT = r1
            java.lang.Double r1 = r2.accuracy
            r0.accuracy = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.Geo$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Float r1 = r4.lat
            if (r1 == 0) goto L13
            java.lang.String r1 = ", lat="
            r0.append(r1)
            java.lang.Float r1 = r4.lat
            r0.append(r1)
        L13:
            java.lang.Float r1 = r4.lon
            if (r1 == 0) goto L21
            java.lang.String r1 = ", lon="
            r0.append(r1)
            java.lang.Float r1 = r4.lon
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.language
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", language="
            r0.append(r1)
            java.lang.String r1 = r4.language
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.timeZone
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", timeZone="
            r0.append(r1)
            java.lang.String r1 = r4.timeZone
            r0.append(r1)
        L3d:
            java.lang.Long r1 = r4.city_code
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", city_code="
            r0.append(r1)
            java.lang.Long r1 = r4.city_code
            r0.append(r1)
        L4b:
            java.lang.String r1 = r4.country
            if (r1 == 0) goto L59
            java.lang.String r1 = ", country="
            r0.append(r1)
            java.lang.String r1 = r4.country
            r0.append(r1)
        L59:
            java.lang.String r1 = r4.region_code
            if (r1 == 0) goto L67
            java.lang.String r1 = ", region_code="
            r0.append(r1)
            java.lang.String r1 = r4.region_code
            r0.append(r1)
        L67:
            java.lang.String r1 = r4.secondsFromGMT
            if (r1 == 0) goto L75
            java.lang.String r1 = ", secondsFromGMT="
            r0.append(r1)
            java.lang.String r1 = r4.secondsFromGMT
            r0.append(r1)
        L75:
            java.lang.Double r1 = r4.accuracy
            if (r1 == 0) goto L83
            java.lang.String r1 = ", accuracy="
            r0.append(r1)
            java.lang.Double r1 = r4.accuracy
            r0.append(r1)
        L83:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Geo{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
