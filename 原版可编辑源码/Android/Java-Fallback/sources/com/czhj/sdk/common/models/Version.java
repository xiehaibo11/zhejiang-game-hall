package com.czhj.sdk.common.models;

public final class Version extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.Version, com.czhj.sdk.common.models.Version.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.Version> CREATOR = null;
    public static final java.lang.Integer DEFAULT_MAJOR = null;
    public static final java.lang.Integer DEFAULT_MICRO = null;
    public static final java.lang.Integer DEFAULT_MINOR = null;
    public static final java.lang.String DEFAULT_VERSION_STR = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer major;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer micro;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer minor;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String version_str;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.Version, com.czhj.sdk.common.models.Version.Builder> {
        public java.lang.Integer major;
        public java.lang.Integer micro;
        public java.lang.Integer minor;
        public java.lang.String version_str;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.czhj.sdk.common.models.Version.DEFAULT_MAJOR
                r1.major = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.Version.DEFAULT_MINOR
                r1.minor = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.Version.DEFAULT_MICRO
                r1.micro = r0
                java.lang.String r0 = ""
                r1.version_str = r0
                return
        }

        @Override
        public com.czhj.sdk.common.models.Version build() {
                r7 = this;
                com.czhj.sdk.common.models.Version r6 = new com.czhj.sdk.common.models.Version
                java.lang.Integer r1 = r7.major
                java.lang.Integer r2 = r7.minor
                java.lang.Integer r3 = r7.micro
                java.lang.String r4 = r7.version_str
                com.czhj.wire.okio.ByteString r5 = super.buildUnknownFields()
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.Version r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.Version.Builder major(java.lang.Integer r1) {
                r0 = this;
                r0.major = r1
                return r0
        }

        public com.czhj.sdk.common.models.Version.Builder micro(java.lang.Integer r1) {
                r0 = this;
                r0.micro = r1
                return r0
        }

        public com.czhj.sdk.common.models.Version.Builder minor(java.lang.Integer r1) {
                r0 = this;
                r0.minor = r1
                return r0
        }

        public com.czhj.sdk.common.models.Version.Builder version_str(java.lang.String r1) {
                r0 = this;
                r0.version_str = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Version extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> {
        public ProtoAdapter_Version() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.Version> r1 = com.czhj.sdk.common.models.Version.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.Version decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.Version$Builder r0 = new com.czhj.sdk.common.models.Version$Builder
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
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.version_str(r3)
                goto L9
            L38:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.micro(r3)
                goto L9
            L44:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.minor(r3)
                goto L9
            L50:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.major(r3)
                goto L9
            L5c:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.Version r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.Version decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Version r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.Version r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.major
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.minor
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.micro
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.version_str
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.Version r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Version r2 = (com.czhj.sdk.common.models.Version) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.Version r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.major
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.minor
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.micro
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.version_str
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                com.czhj.sdk.common.models.Version r1 = (com.czhj.sdk.common.models.Version) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.Version redact(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                com.czhj.sdk.common.models.Version$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.Version r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.Version redact(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                com.czhj.sdk.common.models.Version r1 = (com.czhj.sdk.common.models.Version) r1
                com.czhj.sdk.common.models.Version r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.Version$ProtoAdapter_Version r0 = new com.czhj.sdk.common.models.Version$ProtoAdapter_Version
            r0.<init>()
            com.czhj.sdk.common.models.Version.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.Version.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.Version.DEFAULT_MAJOR = r0
            com.czhj.sdk.common.models.Version.DEFAULT_MINOR = r0
            com.czhj.sdk.common.models.Version.DEFAULT_MICRO = r0
            return
    }

    public Version(java.lang.Integer r7, java.lang.Integer r8, java.lang.Integer r9, java.lang.String r10) {
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

    public Version(java.lang.Integer r2, java.lang.Integer r3, java.lang.Integer r4, java.lang.String r5, com.czhj.wire.okio.ByteString r6) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
            r1.<init>(r0, r6)
            r1.major = r2
            r1.minor = r3
            r1.micro = r4
            r1.version_str = r5
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.Version
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.Version r5 = (com.czhj.sdk.common.models.Version) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.major
            java.lang.Integer r3 = r5.major
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.minor
            java.lang.Integer r3 = r5.minor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.Integer r1 = r4.micro
            java.lang.Integer r3 = r5.micro
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L43
            java.lang.String r1 = r4.version_str
            java.lang.String r5 = r5.version_str
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
            java.lang.Integer r1 = r3.major
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.minor
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.micro
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.version_str
            if (r1 == 0) goto L3e
            int r2 = r1.hashCode()
        L3e:
            int r0 = r0 + r2
            r3.hashCode = r0
        L41:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.Version.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.Version$Builder r0 = new com.czhj.sdk.common.models.Version$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.major
            r0.major = r1
            java.lang.Integer r1 = r2.minor
            r0.minor = r1
            java.lang.Integer r1 = r2.micro
            r0.micro = r1
            java.lang.String r1 = r2.version_str
            r0.version_str = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.Version$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.major
            if (r1 == 0) goto L13
            java.lang.String r1 = ", major="
            r0.append(r1)
            java.lang.Integer r1 = r4.major
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.minor
            if (r1 == 0) goto L21
            java.lang.String r1 = ", minor="
            r0.append(r1)
            java.lang.Integer r1 = r4.minor
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.micro
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", micro="
            r0.append(r1)
            java.lang.Integer r1 = r4.micro
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.version_str
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", version_str="
            r0.append(r1)
            java.lang.String r1 = r4.version_str
            r0.append(r1)
        L3d:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Version{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
