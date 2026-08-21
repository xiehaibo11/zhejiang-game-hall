package com.czhj.sdk.common.models;

public final class Size extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.Size, com.czhj.sdk.common.models.Size.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.Size> CREATOR = null;
    public static final java.lang.Integer DEFAULT_HEIGHT = null;
    public static final java.lang.Integer DEFAULT_WIDTH = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer height;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer width;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.Size, com.czhj.sdk.common.models.Size.Builder> {
        public java.lang.Integer height;
        public java.lang.Integer width;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.czhj.sdk.common.models.Size.DEFAULT_WIDTH
                r1.width = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.Size.DEFAULT_HEIGHT
                r1.height = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.Size build() {
                r4 = this;
                com.czhj.sdk.common.models.Size r0 = new com.czhj.sdk.common.models.Size
                java.lang.Integer r1 = r4.width
                java.lang.Integer r2 = r4.height
                com.czhj.wire.okio.ByteString r3 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3)
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.Size r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.Size.Builder height(java.lang.Integer r1) {
                r0 = this;
                r0.height = r1
                return r0
        }

        public com.czhj.sdk.common.models.Size.Builder width(java.lang.Integer r1) {
                r0 = this;
                r0.width = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Size extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> {
        public ProtoAdapter_Size() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.Size> r1 = com.czhj.sdk.common.models.Size.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.Size decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.Size$Builder r0 = new com.czhj.sdk.common.models.Size$Builder
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
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.height(r3)
                goto L9
            L32:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.width(r3)
                goto L9
            L3e:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.Size r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.Size decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Size r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.Size r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.width
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.height
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.Size r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Size r2 = (com.czhj.sdk.common.models.Size) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.Size r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.width
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.height
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                com.czhj.sdk.common.models.Size r1 = (com.czhj.sdk.common.models.Size) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.Size redact(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                com.czhj.sdk.common.models.Size$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.Size r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.Size redact(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                com.czhj.sdk.common.models.Size r1 = (com.czhj.sdk.common.models.Size) r1
                com.czhj.sdk.common.models.Size r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.Size$ProtoAdapter_Size r0 = new com.czhj.sdk.common.models.Size$ProtoAdapter_Size
            r0.<init>()
            com.czhj.sdk.common.models.Size.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.Size.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.Size.DEFAULT_WIDTH = r0
            com.czhj.sdk.common.models.Size.DEFAULT_HEIGHT = r0
            return
    }

    public Size(java.lang.Integer r2, java.lang.Integer r3) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r0)
            return
    }

    public Size(java.lang.Integer r2, java.lang.Integer r3, com.czhj.wire.okio.ByteString r4) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
            r1.<init>(r0, r4)
            r1.width = r2
            r1.height = r3
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.Size
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.Size r5 = (com.czhj.sdk.common.models.Size) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2f
            java.lang.Integer r1 = r4.width
            java.lang.Integer r3 = r5.width
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L2f
            java.lang.Integer r1 = r4.height
            java.lang.Integer r5 = r5.height
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L2f
            goto L30
        L2f:
            r0 = r2
        L30:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L27
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.width
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.height
            if (r1 == 0) goto L24
            int r2 = r1.hashCode()
        L24:
            int r0 = r0 + r2
            r3.hashCode = r0
        L27:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.Size.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.Size$Builder r0 = new com.czhj.sdk.common.models.Size$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.width
            r0.width = r1
            java.lang.Integer r1 = r2.height
            r0.height = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.Size$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.width
            if (r1 == 0) goto L13
            java.lang.String r1 = ", width="
            r0.append(r1)
            java.lang.Integer r1 = r4.width
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.height
            if (r1 == 0) goto L21
            java.lang.String r1 = ", height="
            r0.append(r1)
            java.lang.Integer r1 = r4.height
            r0.append(r1)
        L21:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Size{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
