package com.czhj.sdk.common.models;

public final class Privacy extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.Privacy, com.czhj.sdk.common.models.Privacy.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.Privacy> CREATOR = null;
    public static final java.lang.Integer DEFAULT_AGE = null;
    public static final java.lang.Integer DEFAULT_CHILD_PROTECTION = null;
    public static final java.lang.Integer DEFAULT_GDPR_CONSENT = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer age;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer child_protection;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer gdpr_consent;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.Privacy, com.czhj.sdk.common.models.Privacy.Builder> {
        public java.lang.Integer age;
        public java.lang.Integer child_protection;
        public java.lang.Integer gdpr_consent;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.czhj.sdk.common.models.Privacy.DEFAULT_GDPR_CONSENT
                r1.gdpr_consent = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.Privacy.DEFAULT_CHILD_PROTECTION
                r1.child_protection = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.Privacy.DEFAULT_AGE
                r1.age = r0
                return
        }

        public com.czhj.sdk.common.models.Privacy.Builder age(java.lang.Integer r1) {
                r0 = this;
                r0.age = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.Privacy build() {
                r5 = this;
                com.czhj.sdk.common.models.Privacy r0 = new com.czhj.sdk.common.models.Privacy
                java.lang.Integer r1 = r5.gdpr_consent
                java.lang.Integer r2 = r5.child_protection
                java.lang.Integer r3 = r5.age
                com.czhj.wire.okio.ByteString r4 = super.buildUnknownFields()
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.Privacy r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.Privacy.Builder child_protection(java.lang.Integer r1) {
                r0 = this;
                r0.child_protection = r1
                return r0
        }

        public com.czhj.sdk.common.models.Privacy.Builder gdpr_consent(java.lang.Integer r1) {
                r0 = this;
                r0.gdpr_consent = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Privacy extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> {
        public ProtoAdapter_Privacy() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.Privacy> r1 = com.czhj.sdk.common.models.Privacy.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.Privacy decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.Privacy$Builder r0 = new com.czhj.sdk.common.models.Privacy$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L4d
                r4 = 1
                if (r3 == r4) goto L41
                r4 = 2
                if (r3 == r4) goto L35
                r4 = 3
                if (r3 == r4) goto L29
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L29:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.age(r3)
                goto L9
            L35:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.child_protection(r3)
                goto L9
            L41:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.gdpr_consent(r3)
                goto L9
            L4d:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.Privacy r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.Privacy decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Privacy r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.Privacy r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.gdpr_consent
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.child_protection
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.age
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.Privacy r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Privacy r2 = (com.czhj.sdk.common.models.Privacy) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.Privacy r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.gdpr_consent
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.child_protection
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.age
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.Privacy r1) {
                r0 = this;
                com.czhj.sdk.common.models.Privacy r1 = (com.czhj.sdk.common.models.Privacy) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.Privacy redact(com.czhj.sdk.common.models.Privacy r1) {
                r0 = this;
                com.czhj.sdk.common.models.Privacy$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.Privacy r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.Privacy redact(com.czhj.sdk.common.models.Privacy r1) {
                r0 = this;
                com.czhj.sdk.common.models.Privacy r1 = (com.czhj.sdk.common.models.Privacy) r1
                com.czhj.sdk.common.models.Privacy r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.Privacy$ProtoAdapter_Privacy r0 = new com.czhj.sdk.common.models.Privacy$ProtoAdapter_Privacy
            r0.<init>()
            com.czhj.sdk.common.models.Privacy.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.Privacy.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.Privacy.DEFAULT_GDPR_CONSENT = r0
            com.czhj.sdk.common.models.Privacy.DEFAULT_CHILD_PROTECTION = r0
            com.czhj.sdk.common.models.Privacy.DEFAULT_AGE = r0
            return
    }

    public Privacy(java.lang.Integer r2, java.lang.Integer r3, java.lang.Integer r4) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public Privacy(java.lang.Integer r2, java.lang.Integer r3, java.lang.Integer r4, com.czhj.wire.okio.ByteString r5) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r0 = com.czhj.sdk.common.models.Privacy.ADAPTER
            r1.<init>(r0, r5)
            r1.gdpr_consent = r2
            r1.child_protection = r3
            r1.age = r4
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.Privacy
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.Privacy r5 = (com.czhj.sdk.common.models.Privacy) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.gdpr_consent
            java.lang.Integer r3 = r5.gdpr_consent
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.child_protection
            java.lang.Integer r3 = r5.child_protection
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L39
            java.lang.Integer r1 = r4.age
            java.lang.Integer r5 = r5.age
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L39
            goto L3a
        L39:
            r0 = r2
        L3a:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L34
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.gdpr_consent
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.child_protection
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.age
            if (r1 == 0) goto L31
            int r2 = r1.hashCode()
        L31:
            int r0 = r0 + r2
            r3.hashCode = r0
        L34:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.Privacy.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.Privacy$Builder r0 = new com.czhj.sdk.common.models.Privacy$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.gdpr_consent
            r0.gdpr_consent = r1
            java.lang.Integer r1 = r2.child_protection
            r0.child_protection = r1
            java.lang.Integer r1 = r2.age
            r0.age = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.Privacy$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.gdpr_consent
            if (r1 == 0) goto L13
            java.lang.String r1 = ", gdpr_consent="
            r0.append(r1)
            java.lang.Integer r1 = r4.gdpr_consent
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.child_protection
            if (r1 == 0) goto L21
            java.lang.String r1 = ", child_protection="
            r0.append(r1)
            java.lang.Integer r1 = r4.child_protection
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.age
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", age="
            r0.append(r1)
            java.lang.Integer r1 = r4.age
            r0.append(r1)
        L2f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Privacy{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
