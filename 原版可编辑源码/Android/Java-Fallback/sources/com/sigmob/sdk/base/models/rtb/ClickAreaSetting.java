package com.sigmob.sdk.base.models.rtb;

public final class ClickAreaSetting extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.ClickAreaSetting, com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> CREATOR = null;
    public static final java.lang.Float DEFAULT_BOTTOM = null;
    public static final java.lang.Float DEFAULT_LEFT = null;
    public static final java.lang.Float DEFAULT_RIGHT = null;
    public static final java.lang.Float DEFAULT_TOP = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 3)
    public final java.lang.Float bottom;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 2)
    public final java.lang.Float left;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 4)
    public final java.lang.Float right;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 1)
    public final java.lang.Float top;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.ClickAreaSetting, com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder> {
        public java.lang.Float bottom;
        public java.lang.Float left;
        public java.lang.Float right;
        public java.lang.Float top;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Float r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_TOP
                r1.top = r0
                java.lang.Float r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_LEFT
                r1.left = r0
                java.lang.Float r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_BOTTOM
                r1.bottom = r0
                java.lang.Float r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_RIGHT
                r1.right = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder bottom(java.lang.Float r1) {
                r0 = this;
                r0.bottom = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting build() {
                r7 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r6 = new com.sigmob.sdk.base.models.rtb.ClickAreaSetting
                java.lang.Float r1 = r7.top
                java.lang.Float r2 = r7.left
                java.lang.Float r3 = r7.bottom
                java.lang.Float r4 = r7.right
                com.czhj.wire.okio.ByteString r5 = super.buildUnknownFields()
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder left(java.lang.Float r1) {
                r0 = this;
                r0.left = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder right(java.lang.Float r1) {
                r0 = this;
                r0.right = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder top(java.lang.Float r1) {
                r0 = this;
                r0.top = r1
                return r0
        }
    }

    private static final class ProtoAdapter_ClickAreaSetting extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> {
        public ProtoAdapter_ClickAreaSetting() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> r1 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L5c
                r4 = 1
                if (r3 == r4) goto L50
                r4 = 2
                if (r3 == r4) goto L44
                r4 = 3
                if (r3 == r4) goto L38
                r4 = 4
                if (r3 == r4) goto L2c
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L2c:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.right(r3)
                goto L9
            L38:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.bottom(r3)
                goto L9
            L44:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.left(r3)
                goto L9
            L50:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.top(r3)
                goto L9
            L5c:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.ClickAreaSetting r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.top
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.left
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.bottom
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.right
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.ClickAreaSetting r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r2 = (com.sigmob.sdk.base.models.rtb.ClickAreaSetting) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.ClickAreaSetting r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.top
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.left
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.bottom
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.right
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = (com.sigmob.sdk.base.models.rtb.ClickAreaSetting) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting redact(com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting redact(com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = (com.sigmob.sdk.base.models.rtb.ClickAreaSetting) r1
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting$ProtoAdapter_ClickAreaSetting r0 = new com.sigmob.sdk.base.models.rtb.ClickAreaSetting$ProtoAdapter_ClickAreaSetting
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting.CREATOR = r0
            r0 = 0
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_TOP = r0
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_LEFT = r0
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_BOTTOM = r0
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting.DEFAULT_RIGHT = r0
            return
    }

    public ClickAreaSetting(java.lang.Float r7, java.lang.Float r8, java.lang.Float r9, java.lang.Float r10) {
            r6 = this;
            com.czhj.wire.okio.ByteString r5 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public ClickAreaSetting(java.lang.Float r2, java.lang.Float r3, java.lang.Float r4, java.lang.Float r5, com.czhj.wire.okio.ByteString r6) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.ADAPTER
            r1.<init>(r0, r6)
            r1.top = r2
            r1.left = r3
            r1.bottom = r4
            r1.right = r5
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.ClickAreaSetting
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r5 = (com.sigmob.sdk.base.models.rtb.ClickAreaSetting) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L43
            java.lang.Float r1 = r4.top
            java.lang.Float r3 = r5.top
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Float r1 = r4.left
            java.lang.Float r3 = r5.left
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Float r1 = r4.bottom
            java.lang.Float r3 = r5.bottom
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Float r1 = r4.right
            java.lang.Float r5 = r5.right
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L43
            goto L44
        L43:
            r0 = r2
        L44:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L41
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Float r1 = r3.top
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.left
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.bottom
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.right
            if (r1 == 0) goto L3e
            int r2 = r1.hashCode()
        L3e:
            int r0 = r0 + r2
            r3.hashCode = r0
        L41:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.ClickAreaSetting.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.ClickAreaSetting$Builder
            r0.<init>()
            java.lang.Float r1 = r2.top
            r0.top = r1
            java.lang.Float r1 = r2.left
            r0.left = r1
            java.lang.Float r1 = r2.bottom
            r0.bottom = r1
            java.lang.Float r1 = r2.right
            r0.right = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Float r1 = r4.top
            if (r1 == 0) goto L13
            java.lang.String r1 = ", top="
            r0.append(r1)
            java.lang.Float r1 = r4.top
            r0.append(r1)
        L13:
            java.lang.Float r1 = r4.left
            if (r1 == 0) goto L21
            java.lang.String r1 = ", left="
            r0.append(r1)
            java.lang.Float r1 = r4.left
            r0.append(r1)
        L21:
            java.lang.Float r1 = r4.bottom
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", bottom="
            r0.append(r1)
            java.lang.Float r1 = r4.bottom
            r0.append(r1)
        L2f:
            java.lang.Float r1 = r4.right
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", right="
            r0.append(r1)
            java.lang.Float r1 = r4.right
            r0.append(r1)
        L3d:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "ClickAreaSetting{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
