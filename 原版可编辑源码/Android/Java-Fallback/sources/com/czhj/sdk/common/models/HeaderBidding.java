package com.czhj.sdk.common.models;

public final class HeaderBidding extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.HeaderBidding, com.czhj.sdk.common.models.HeaderBidding.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.HeaderBidding> CREATOR = null;
    public static final java.lang.String DEFAULT_BID_TOKEN = "";
    public static final java.lang.Integer DEFAULT_CHANNEL_ID = null;
    public static final java.lang.String DEFAULT_CUR = "";
    public static final java.lang.String DEFAULT_P_ID = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String bid_token;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer channel_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String cur;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", keyAdapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.util.Map<java.lang.String, java.lang.String> options;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String p_id;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.HeaderBidding, com.czhj.sdk.common.models.HeaderBidding.Builder> {
        public java.lang.String bid_token;
        public java.lang.Integer channel_id;
        public java.lang.String cur;
        public java.util.Map<java.lang.String, java.lang.String> options;
        public java.lang.String p_id;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.bid_token = r0
                java.lang.Integer r1 = com.czhj.sdk.common.models.HeaderBidding.DEFAULT_CHANNEL_ID
                r2.channel_id = r1
                r2.p_id = r0
                r2.cur = r0
                java.util.Map r0 = com.czhj.wire.internal.Internal.newMutableMap()
                r2.options = r0
                return
        }

        public com.czhj.sdk.common.models.HeaderBidding.Builder bid_token(java.lang.String r1) {
                r0 = this;
                r0.bid_token = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.HeaderBidding build() {
                r8 = this;
                com.czhj.sdk.common.models.HeaderBidding r7 = new com.czhj.sdk.common.models.HeaderBidding
                java.lang.String r1 = r8.bid_token
                java.lang.Integer r2 = r8.channel_id
                java.util.Map<java.lang.String, java.lang.String> r3 = r8.options
                java.lang.String r4 = r8.p_id
                java.lang.String r5 = r8.cur
                com.czhj.wire.okio.ByteString r6 = super.buildUnknownFields()
                r0 = r7
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return r7
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.HeaderBidding r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.HeaderBidding.Builder channel_id(java.lang.Integer r1) {
                r0 = this;
                r0.channel_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.HeaderBidding.Builder cur(java.lang.String r1) {
                r0 = this;
                r0.cur = r1
                return r0
        }

        public com.czhj.sdk.common.models.HeaderBidding.Builder options(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.options = r1
                return r0
        }

        public com.czhj.sdk.common.models.HeaderBidding.Builder p_id(java.lang.String r1) {
                r0 = this;
                r0.p_id = r1
                return r0
        }
    }

    private static final class ProtoAdapter_HeaderBidding extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> {
        private final com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> options;

        public ProtoAdapter_HeaderBidding() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.HeaderBidding> r1 = com.czhj.sdk.common.models.HeaderBidding.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = com.czhj.wire.ProtoAdapter.newMapAdapter(r0, r1)
                r2.options = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.HeaderBidding decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.HeaderBidding$Builder r0 = new com.czhj.sdk.common.models.HeaderBidding$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L6d
                r4 = 1
                if (r3 == r4) goto L61
                r4 = 2
                if (r3 == r4) goto L55
                r4 = 3
                if (r3 == r4) goto L47
                r4 = 4
                if (r3 == r4) goto L3b
                r4 = 5
                if (r3 == r4) goto L2f
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.cur(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.p_id(r3)
                goto L9
            L47:
                java.util.Map<java.lang.String, java.lang.String> r3 = r0.options
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r4 = r6.options
                java.lang.Object r4 = r4.decode(r7)
                java.util.Map r4 = (java.util.Map) r4
                r3.putAll(r4)
                goto L9
            L55:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.channel_id(r3)
                goto L9
            L61:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.bid_token(r3)
                goto L9
            L6d:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.HeaderBidding r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.HeaderBidding decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.HeaderBidding r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.HeaderBidding r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.bid_token
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.channel_id
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r0 = r3.options
                java.util.Map<java.lang.String, java.lang.String> r1 = r5.options
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.p_id
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.cur
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.HeaderBidding r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.HeaderBidding r2 = (com.czhj.sdk.common.models.HeaderBidding) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.HeaderBidding r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.bid_token
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.channel_id
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.util.Map<java.lang.String, java.lang.String>> r1 = r4.options
                java.util.Map<java.lang.String, java.lang.String> r2 = r5.options
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.p_id
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.cur
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.HeaderBidding r1) {
                r0 = this;
                com.czhj.sdk.common.models.HeaderBidding r1 = (com.czhj.sdk.common.models.HeaderBidding) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.HeaderBidding redact(com.czhj.sdk.common.models.HeaderBidding r1) {
                r0 = this;
                com.czhj.sdk.common.models.HeaderBidding$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.HeaderBidding r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.HeaderBidding redact(com.czhj.sdk.common.models.HeaderBidding r1) {
                r0 = this;
                com.czhj.sdk.common.models.HeaderBidding r1 = (com.czhj.sdk.common.models.HeaderBidding) r1
                com.czhj.sdk.common.models.HeaderBidding r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.HeaderBidding$ProtoAdapter_HeaderBidding r0 = new com.czhj.sdk.common.models.HeaderBidding$ProtoAdapter_HeaderBidding
            r0.<init>()
            com.czhj.sdk.common.models.HeaderBidding.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.HeaderBidding.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.HeaderBidding.DEFAULT_CHANNEL_ID = r0
            return
    }

    public HeaderBidding(java.lang.String r8, java.lang.Integer r9, java.util.Map<java.lang.String, java.lang.String> r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            com.czhj.wire.okio.ByteString r6 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public HeaderBidding(java.lang.String r2, java.lang.Integer r3, java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5, java.lang.String r6, com.czhj.wire.okio.ByteString r7) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.HeaderBidding> r0 = com.czhj.sdk.common.models.HeaderBidding.ADAPTER
            r1.<init>(r0, r7)
            r1.bid_token = r2
            r1.channel_id = r3
            java.lang.String r2 = "options"
            java.util.Map r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r4)
            r1.options = r2
            r1.p_id = r5
            r1.cur = r6
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.HeaderBidding
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.HeaderBidding r5 = (com.czhj.sdk.common.models.HeaderBidding) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L4d
            java.lang.String r1 = r4.bid_token
            java.lang.String r3 = r5.bid_token
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.Integer r1 = r4.channel_id
            java.lang.Integer r3 = r5.channel_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.options
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L4d
            java.lang.String r1 = r4.p_id
            java.lang.String r3 = r5.p_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            java.lang.String r1 = r4.cur
            java.lang.String r5 = r5.cur
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L4d
            goto L4e
        L4d:
            r0 = r2
        L4e:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L4a
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.bid_token
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.channel_id
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.options
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.p_id
            if (r1 == 0) goto L3b
            int r1 = r1.hashCode()
            goto L3c
        L3b:
            r1 = r2
        L3c:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.cur
            if (r1 == 0) goto L47
            int r2 = r1.hashCode()
        L47:
            int r0 = r0 + r2
            r3.hashCode = r0
        L4a:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.HeaderBidding.Builder newBuilder() {
            r3 = this;
            com.czhj.sdk.common.models.HeaderBidding$Builder r0 = new com.czhj.sdk.common.models.HeaderBidding$Builder
            r0.<init>()
            java.lang.String r1 = r3.bid_token
            r0.bid_token = r1
            java.lang.Integer r1 = r3.channel_id
            r0.channel_id = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.options
            java.lang.String r2 = "options"
            java.util.Map r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.options = r1
            java.lang.String r1 = r3.p_id
            r0.p_id = r1
            java.lang.String r1 = r3.cur
            r0.cur = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.HeaderBidding$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.bid_token
            if (r1 == 0) goto L13
            java.lang.String r1 = ", bid_token="
            r0.append(r1)
            java.lang.String r1 = r4.bid_token
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.channel_id
            if (r1 == 0) goto L21
            java.lang.String r1 = ", channel_id="
            r0.append(r1)
            java.lang.Integer r1 = r4.channel_id
            r0.append(r1)
        L21:
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L33
            java.lang.String r1 = ", options="
            r0.append(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.options
            r0.append(r1)
        L33:
            java.lang.String r1 = r4.p_id
            if (r1 == 0) goto L41
            java.lang.String r1 = ", p_id="
            r0.append(r1)
            java.lang.String r1 = r4.p_id
            r0.append(r1)
        L41:
            java.lang.String r1 = r4.cur
            if (r1 == 0) goto L4f
            java.lang.String r1 = ", cur="
            r0.append(r1)
            java.lang.String r1 = r4.cur
            r0.append(r1)
        L4f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "HeaderBidding{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
