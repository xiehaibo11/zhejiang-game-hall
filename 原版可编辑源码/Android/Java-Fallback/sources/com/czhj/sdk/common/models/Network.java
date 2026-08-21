package com.czhj.sdk.common.models;

public final class Network extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.Network, com.czhj.sdk.common.models.Network.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.Network> CREATOR = null;
    public static final java.lang.String DEFAULT_CARRIER_NAME = "";
    public static final java.lang.Integer DEFAULT_CONNECTION_TYPE = null;
    public static final java.lang.String DEFAULT_IPV4 = "";
    public static final java.lang.String DEFAULT_MAC = "";
    public static final java.lang.String DEFAULT_OPERATOR = "";
    public static final java.lang.Integer DEFAULT_OPERATOR_TYPE = null;
    public static final java.lang.String DEFAULT_UA = "";
    public static final java.lang.String DEFAULT_WIFI_ID = "";
    public static final java.lang.String DEFAULT_WIFI_MAC = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 10)
    public final java.lang.String carrier_name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer connection_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 9)
    public final java.util.Map<java.lang.String, java.lang.String> ips;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String ipv4;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 6)
    public final java.lang.String mac;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String operator;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer operator_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String ua;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String wifi_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String wifi_mac;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.Network, com.czhj.sdk.common.models.Network.Builder> {
        public java.lang.String carrier_name;
        public java.lang.Integer connection_type;
        public java.util.Map<java.lang.String, java.lang.String> ips;
        public java.lang.String ipv4;
        public java.lang.String mac;
        public java.lang.String operator;
        public java.lang.Integer operator_type;
        public java.lang.String ua;
        public java.lang.String wifi_id;
        public java.lang.String wifi_mac;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.ipv4 = r0
                java.lang.Integer r1 = com.czhj.sdk.common.models.Network.DEFAULT_CONNECTION_TYPE
                r2.connection_type = r1
                java.lang.Integer r1 = com.czhj.sdk.common.models.Network.DEFAULT_OPERATOR_TYPE
                r2.operator_type = r1
                r2.ua = r0
                r2.operator = r0
                r2.mac = r0
                r2.wifi_mac = r0
                r2.wifi_id = r0
                r2.carrier_name = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.ips = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.Network build() {
                r13 = this;
                com.czhj.sdk.common.models.Network r12 = new com.czhj.sdk.common.models.Network
                java.lang.String r1 = r13.ipv4
                java.lang.Integer r2 = r13.connection_type
                java.lang.Integer r3 = r13.operator_type
                java.lang.String r4 = r13.ua
                java.lang.String r5 = r13.operator
                java.lang.String r6 = r13.mac
                java.lang.String r7 = r13.wifi_mac
                java.lang.String r8 = r13.wifi_id
                java.util.Map<java.lang.String, java.lang.String> r9 = r13.ips
                java.lang.String r10 = r13.carrier_name
                com.czhj.wire.okio.ByteString r11 = super.buildUnknownFields()
                r0 = r12
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
                return r12
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.Network r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder carrier_name(java.lang.String r1) {
                r0 = this;
                r0.carrier_name = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder connection_type(java.lang.Integer r1) {
                r0 = this;
                r0.connection_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder ips(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ips = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder ipv4(java.lang.String r1) {
                r0 = this;
                r0.ipv4 = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder mac(java.lang.String r1) {
                r0 = this;
                r0.mac = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder operator(java.lang.String r1) {
                r0 = this;
                r0.operator = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder operator_type(java.lang.Integer r1) {
                r0 = this;
                r0.operator_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder ua(java.lang.String r1) {
                r0 = this;
                r0.ua = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder wifi_id(java.lang.String r1) {
                r0 = this;
                r0.wifi_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.Network.Builder wifi_mac(java.lang.String r1) {
                r0 = this;
                r0.wifi_mac = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Network extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> {
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> ips;

        public ProtoAdapter_Network() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.Network> r1 = com.czhj.sdk.common.models.Network.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.ips = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.Network decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.Network$Builder r0 = new com.czhj.sdk.common.models.Network$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L9f
                switch(r3) {
                    case 1: goto L92;
                    case 2: goto L85;
                    case 3: goto L79;
                    case 4: goto L6d;
                    case 5: goto L61;
                    case 6: goto L55;
                    case 7: goto L49;
                    case 8: goto L3d;
                    case 9: goto L2f;
                    case 10: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.carrier_name(r3)
                goto L9
            L2f:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.ips
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.ips
                java.lang.Object r4 = r4.decode(r7)
                java.util.Map r4 = (java.util.Map) r4
                r3.putAll(r4)
                goto L9
            L3d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.wifi_id(r3)
                goto L9
            L49:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.wifi_mac(r3)
                goto L9
            L55:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.mac(r3)
                goto L9
            L61:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.operator(r3)
                goto L9
            L6d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.ua(r3)
                goto L9
            L79:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.operator_type(r3)
                goto L9
            L85:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.connection_type(r3)
                goto L9
            L92:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.ipv4(r3)
                goto L9
            L9f:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.Network r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.Network decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Network r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.Network r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.ipv4
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.connection_type
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.operator_type
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.ua
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.operator
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.mac
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wifi_mac
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.wifi_id
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.ips
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.ips
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.carrier_name
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.Network r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Network r2 = (com.czhj.sdk.common.models.Network) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.Network r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.ipv4
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.connection_type
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.operator_type
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.ua
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.operator
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.mac
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.wifi_mac
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.wifi_id
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.ips
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.ips
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.carrier_name
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.Network r1) {
                r0 = this;
                com.czhj.sdk.common.models.Network r1 = (com.czhj.sdk.common.models.Network) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.Network redact(com.czhj.sdk.common.models.Network r1) {
                r0 = this;
                com.czhj.sdk.common.models.Network$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.Network r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.Network redact(com.czhj.sdk.common.models.Network r1) {
                r0 = this;
                com.czhj.sdk.common.models.Network r1 = (com.czhj.sdk.common.models.Network) r1
                com.czhj.sdk.common.models.Network r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.Network$ProtoAdapter_Network r0 = new com.czhj.sdk.common.models.Network$ProtoAdapter_Network
            r0.<init>()
            com.czhj.sdk.common.models.Network.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.Network.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.Network.DEFAULT_CONNECTION_TYPE = r0
            com.czhj.sdk.common.models.Network.DEFAULT_OPERATOR_TYPE = r0
            return
    }

    public Network(java.lang.String r13, java.lang.Integer r14, java.lang.Integer r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, java.util.Map<java.lang.String, java.lang.String> r21, java.lang.String r22) {
            r12 = this;
            com.czhj.wire.okio.ByteString r11 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return
    }

    public Network(java.lang.String r2, java.lang.Integer r3, java.lang.Integer r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.util.Map<java.lang.String, java.lang.String> r10, java.lang.String r11, com.czhj.wire.okio.ByteString r12) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r0 = com.czhj.sdk.common.models.Network.ADAPTER
            r1.<init>(r0, r12)
            r1.ipv4 = r2
            r1.connection_type = r3
            r1.operator_type = r4
            r1.ua = r5
            r1.operator = r6
            r1.mac = r7
            r1.wifi_mac = r8
            r1.wifi_id = r9
            java.lang.String r2 = "ips"
            java.util.Map r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r10)
            r1.ips = r2
            r1.carrier_name = r11
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.Network
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.Network r5 = (com.czhj.sdk.common.models.Network) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.ipv4
            java.lang.String r3 = r5.ipv4
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.Integer r1 = r4.connection_type
            java.lang.Integer r3 = r5.connection_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.Integer r1 = r4.operator_type
            java.lang.Integer r3 = r5.operator_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.ua
            java.lang.String r3 = r5.ua
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.operator
            java.lang.String r3 = r5.operator
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.mac
            java.lang.String r3 = r5.mac
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.wifi_mac
            java.lang.String r3 = r5.wifi_mac
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.wifi_id
            java.lang.String r3 = r5.wifi_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L7f
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ips
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.ips
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7f
            java.lang.String r1 = r4.carrier_name
            java.lang.String r5 = r5.carrier_name
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L7f
            goto L80
        L7f:
            r0 = r2
        L80:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L8b
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.ipv4
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.connection_type
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.operator_type
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.ua
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.operator
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.mac
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.wifi_mac
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.wifi_id
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ips
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.carrier_name
            if (r1 == 0) goto L88
            int r2 = r1.hashCode()
        L88:
            int r0 = r0 + r2
            r3.hashCode = r0
        L8b:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.Network.Builder newBuilder() {
            r3 = this;
            com.czhj.sdk.common.models.Network$Builder r0 = new com.czhj.sdk.common.models.Network$Builder
            r0.<init>()
            java.lang.String r1 = r3.ipv4
            r0.ipv4 = r1
            java.lang.Integer r1 = r3.connection_type
            r0.connection_type = r1
            java.lang.Integer r1 = r3.operator_type
            r0.operator_type = r1
            java.lang.String r1 = r3.ua
            r0.ua = r1
            java.lang.String r1 = r3.operator
            r0.operator = r1
            java.lang.String r1 = r3.mac
            r0.mac = r1
            java.lang.String r1 = r3.wifi_mac
            r0.wifi_mac = r1
            java.lang.String r1 = r3.wifi_id
            r0.wifi_id = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.ips
            java.lang.String r2 = "ips"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ips = r1
            java.lang.String r1 = r3.carrier_name
            r0.carrier_name = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.Network$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.ipv4
            if (r1 == 0) goto L13
            java.lang.String r1 = ", ipv4="
            r0.append(r1)
            java.lang.String r1 = r4.ipv4
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.connection_type
            if (r1 == 0) goto L21
            java.lang.String r1 = ", connection_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.connection_type
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.operator_type
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", operator_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.operator_type
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.ua
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", ua="
            r0.append(r1)
            java.lang.String r1 = r4.ua
            r0.append(r1)
        L3d:
            java.lang.String r1 = r4.operator
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", operator="
            r0.append(r1)
            java.lang.String r1 = r4.operator
            r0.append(r1)
        L4b:
            java.lang.String r1 = r4.mac
            if (r1 == 0) goto L59
            java.lang.String r1 = ", mac="
            r0.append(r1)
            java.lang.String r1 = r4.mac
            r0.append(r1)
        L59:
            java.lang.String r1 = r4.wifi_mac
            if (r1 == 0) goto L67
            java.lang.String r1 = ", wifi_mac="
            r0.append(r1)
            java.lang.String r1 = r4.wifi_mac
            r0.append(r1)
        L67:
            java.lang.String r1 = r4.wifi_id
            if (r1 == 0) goto L75
            java.lang.String r1 = ", wifi_id="
            r0.append(r1)
            java.lang.String r1 = r4.wifi_id
            r0.append(r1)
        L75:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ips
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L87
            java.lang.String r1 = ", ips="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.ips
            r0.append(r1)
        L87:
            java.lang.String r1 = r4.carrier_name
            if (r1 == 0) goto L95
            java.lang.String r1 = ", carrier_name="
            r0.append(r1)
            java.lang.String r1 = r4.carrier_name
            r0.append(r1)
        L95:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Network{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
