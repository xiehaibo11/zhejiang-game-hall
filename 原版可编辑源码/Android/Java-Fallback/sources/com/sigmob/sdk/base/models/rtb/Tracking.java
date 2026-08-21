package com.sigmob.sdk.base.models.rtb;

public final class Tracking extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.Tracking, com.sigmob.sdk.base.models.rtb.Tracking.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.Tracking> CREATOR = null;
    public static final java.lang.String DEFAULT_TRACKING_EVENT_TYPE = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String tracking_event_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 2)
    public final java.util.List<java.lang.String> tracking_url;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.Tracking, com.sigmob.sdk.base.models.rtb.Tracking.Builder> {
        public java.lang.String tracking_event_type;
        public java.util.List<java.lang.String> tracking_url;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.tracking_event_type = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.tracking_url = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.Tracking r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Tracking build() {
                r4 = this;
                com.sigmob.sdk.base.models.rtb.Tracking r0 = new com.sigmob.sdk.base.models.rtb.Tracking
                java.lang.String r1 = r4.tracking_event_type
                java.util.List<java.lang.String> r2 = r4.tracking_url
                com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3)
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Tracking.Builder tracking_event_type(java.lang.String r1) {
                r0 = this;
                r0.tracking_event_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.Tracking.Builder tracking_url(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.tracking_url = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Tracking extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> {
        public ProtoAdapter_Tracking() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.Tracking> r1 = com.sigmob.sdk.base.models.rtb.Tracking.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Tracking decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.Tracking$Builder r0 = new com.sigmob.sdk.base.models.rtb.Tracking$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L3e
                r4 = 1
                if (r3 == r4) goto L32
                r4 = 2
                if (r3 == r4) goto L26
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L26:
                java.util.List<java.lang.String> r3 = r0.tracking_url
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L32:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.tracking_event_type(r3)
                goto L9
            L3e:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.Tracking r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Tracking decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Tracking r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.Tracking r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.tracking_event_type
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.tracking_url
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.Tracking r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Tracking r2 = (com.sigmob.sdk.base.models.rtb.Tracking) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.Tracking r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.tracking_event_type
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.tracking_url
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.Tracking r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Tracking r1 = (com.sigmob.sdk.base.models.rtb.Tracking) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.Tracking redact(com.sigmob.sdk.base.models.rtb.Tracking r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Tracking$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.Tracking r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.Tracking redact(com.sigmob.sdk.base.models.rtb.Tracking r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.Tracking r1 = (com.sigmob.sdk.base.models.rtb.Tracking) r1
                com.sigmob.sdk.base.models.rtb.Tracking r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.Tracking$ProtoAdapter_Tracking r0 = new com.sigmob.sdk.base.models.rtb.Tracking$ProtoAdapter_Tracking
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.Tracking.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.Tracking.CREATOR = r0
            return
    }

    public Tracking(java.lang.String r2, java.util.List<java.lang.String> r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r0)
            return
    }

    public Tracking(java.lang.String r2, java.util.List<java.lang.String> r3, com.czhj.wire.okio.ByteString r4) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Tracking> r0 = com.sigmob.sdk.base.models.rtb.Tracking.ADAPTER
            r1.<init>(r0, r4)
            r1.tracking_event_type = r2
            java.lang.String r2 = "tracking_url"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r3)
            r1.tracking_url = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.Tracking
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.Tracking r5 = (com.sigmob.sdk.base.models.rtb.Tracking) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2f
            java.lang.String r1 = r4.tracking_event_type
            java.lang.String r3 = r5.tracking_event_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L2f
            java.util.List<java.lang.String> r1 = r4.tracking_url
            java.util.List<java.lang.String> r5 = r5.tracking_url
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L2f
            goto L30
        L2f:
            r0 = r2
        L30:
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L24
            com.czhj.wire.okio.ByteString r0 = r2.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r2.tracking_event_type
            if (r1 == 0) goto L17
            int r1 = r1.hashCode()
            goto L18
        L17:
            r1 = 0
        L18:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r2.tracking_url
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r2.hashCode = r0
        L24:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.Tracking$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.Tracking.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.Tracking$Builder r0 = new com.sigmob.sdk.base.models.rtb.Tracking$Builder
            r0.<init>()
            java.lang.String r1 = r3.tracking_event_type
            r0.tracking_event_type = r1
            java.util.List<java.lang.String> r1 = r3.tracking_url
            java.lang.String r2 = "tracking_url"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.tracking_url = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.tracking_event_type
            if (r1 == 0) goto L13
            java.lang.String r1 = ", tracking_event_type="
            r0.append(r1)
            java.lang.String r1 = r4.tracking_event_type
            r0.append(r1)
        L13:
            java.util.List<java.lang.String> r1 = r4.tracking_url
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L25
            java.lang.String r1 = ", tracking_url="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.tracking_url
            r0.append(r1)
        L25:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Tracking{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
