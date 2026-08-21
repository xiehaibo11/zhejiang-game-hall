package com.sigmob.sdk.base.models.config;

public final class SdkConfigRequest extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.config.SdkConfigRequest, com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigRequest> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.config.SdkConfigRequest> CREATOR = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.App#ADAPTER", tag = 1)
    public final com.czhj.sdk.common.models.App app;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Device#ADAPTER", tag = 2)
    public final com.czhj.sdk.common.models.Device device;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Network#ADAPTER", tag = 3)
    public final com.czhj.sdk.common.models.Network network;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Privacy#ADAPTER", tag = 4)
    public final com.czhj.sdk.common.models.Privacy privacy;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.sigdsp.pb.User#ADAPTER", tag = 5)
    public final com.czhj.sdk.common.models.User user;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.config.SdkConfigRequest, com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder> {
        public com.czhj.sdk.common.models.App app;
        public com.czhj.sdk.common.models.Device device;
        public com.czhj.sdk.common.models.Network network;
        public com.czhj.sdk.common.models.Privacy privacy;
        public com.czhj.sdk.common.models.User user;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder app(com.czhj.sdk.common.models.App r1) {
                r0 = this;
                r0.app = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigRequest build() {
                r8 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest r7 = new com.sigmob.sdk.base.models.config.SdkConfigRequest
                com.czhj.sdk.common.models.App r1 = r8.app
                com.czhj.sdk.common.models.Device r2 = r8.device
                com.czhj.sdk.common.models.Network r3 = r8.network
                com.czhj.sdk.common.models.Privacy r4 = r8.privacy
                com.czhj.sdk.common.models.User r5 = r8.user
                com.czhj.wire.okio.ByteString r6 = super.buildUnknownFields()
                r0 = r7
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return r7
        }

        public com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder device(com.czhj.sdk.common.models.Device r1) {
                r0 = this;
                r0.device = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder network(com.czhj.sdk.common.models.Network r1) {
                r0 = this;
                r0.network = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder privacy(com.czhj.sdk.common.models.Privacy r1) {
                r0 = this;
                r0.privacy = r1
                return r0
        }

        public com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder user(com.czhj.sdk.common.models.User r1) {
                r0 = this;
                r0.user = r1
                return r0
        }
    }

    private static final class ProtoAdapter_SdkConfigRequest extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigRequest> {
        public ProtoAdapter_SdkConfigRequest() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.config.SdkConfigRequest> r1 = com.sigmob.sdk.base.models.config.SdkConfigRequest.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigRequest decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L6b
                r4 = 1
                if (r3 == r4) goto L5f
                r4 = 2
                if (r3 == r4) goto L53
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
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r3 = com.czhj.sdk.common.models.User.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.User r3 = (com.czhj.sdk.common.models.User) r3
                r0.user(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r3 = com.czhj.sdk.common.models.Privacy.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Privacy r3 = (com.czhj.sdk.common.models.Privacy) r3
                r0.privacy(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r3 = com.czhj.sdk.common.models.Network.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Network r3 = (com.czhj.sdk.common.models.Network) r3
                r0.network(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r3 = com.czhj.sdk.common.models.Device.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Device r3 = (com.czhj.sdk.common.models.Device) r3
                r0.device(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r3 = com.czhj.sdk.common.models.App.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.App r3 = (com.czhj.sdk.common.models.App) r3
                r0.app(r3)
                goto L9
            L6b:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.config.SdkConfigRequest r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigRequest decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.config.SdkConfigRequest r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r0 = com.czhj.sdk.common.models.App.ADAPTER
                com.czhj.sdk.common.models.App r1 = r5.app
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r0 = com.czhj.sdk.common.models.Device.ADAPTER
                com.czhj.sdk.common.models.Device r1 = r5.device
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r0 = com.czhj.sdk.common.models.Network.ADAPTER
                com.czhj.sdk.common.models.Network r1 = r5.network
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r0 = com.czhj.sdk.common.models.Privacy.ADAPTER
                com.czhj.sdk.common.models.Privacy r1 = r5.privacy
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r0 = com.czhj.sdk.common.models.User.ADAPTER
                com.czhj.sdk.common.models.User r1 = r5.user
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.config.SdkConfigRequest r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest r2 = (com.sigmob.sdk.base.models.config.SdkConfigRequest) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.config.SdkConfigRequest r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r0 = com.czhj.sdk.common.models.App.ADAPTER
                com.czhj.sdk.common.models.App r1 = r5.app
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r1 = com.czhj.sdk.common.models.Device.ADAPTER
                com.czhj.sdk.common.models.Device r2 = r5.device
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r1 = com.czhj.sdk.common.models.Network.ADAPTER
                com.czhj.sdk.common.models.Network r2 = r5.network
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r1 = com.czhj.sdk.common.models.Privacy.ADAPTER
                com.czhj.sdk.common.models.Privacy r2 = r5.privacy
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r1 = com.czhj.sdk.common.models.User.ADAPTER
                com.czhj.sdk.common.models.User r2 = r5.user
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.config.SdkConfigRequest r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest r1 = (com.sigmob.sdk.base.models.config.SdkConfigRequest) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.config.SdkConfigRequest redact(com.sigmob.sdk.base.models.config.SdkConfigRequest r3) {
                r2 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.App r0 = r3.app
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r0 = com.czhj.sdk.common.models.App.ADAPTER
                com.czhj.sdk.common.models.App r1 = r3.app
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.App r0 = (com.czhj.sdk.common.models.App) r0
                r3.app = r0
            L14:
                com.czhj.sdk.common.models.Device r0 = r3.device
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r0 = com.czhj.sdk.common.models.Device.ADAPTER
                com.czhj.sdk.common.models.Device r1 = r3.device
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Device r0 = (com.czhj.sdk.common.models.Device) r0
                r3.device = r0
            L24:
                com.czhj.sdk.common.models.Network r0 = r3.network
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Network> r0 = com.czhj.sdk.common.models.Network.ADAPTER
                com.czhj.sdk.common.models.Network r1 = r3.network
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Network r0 = (com.czhj.sdk.common.models.Network) r0
                r3.network = r0
            L34:
                com.czhj.sdk.common.models.Privacy r0 = r3.privacy
                if (r0 == 0) goto L44
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Privacy> r0 = com.czhj.sdk.common.models.Privacy.ADAPTER
                com.czhj.sdk.common.models.Privacy r1 = r3.privacy
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Privacy r0 = (com.czhj.sdk.common.models.Privacy) r0
                r3.privacy = r0
            L44:
                com.czhj.sdk.common.models.User r0 = r3.user
                if (r0 == 0) goto L54
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r0 = com.czhj.sdk.common.models.User.ADAPTER
                com.czhj.sdk.common.models.User r1 = r3.user
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.User r0 = (com.czhj.sdk.common.models.User) r0
                r3.user = r0
            L54:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.config.SdkConfigRequest r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.config.SdkConfigRequest redact(com.sigmob.sdk.base.models.config.SdkConfigRequest r1) {
                r0 = this;
                com.sigmob.sdk.base.models.config.SdkConfigRequest r1 = (com.sigmob.sdk.base.models.config.SdkConfigRequest) r1
                com.sigmob.sdk.base.models.config.SdkConfigRequest r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.config.SdkConfigRequest$ProtoAdapter_SdkConfigRequest r0 = new com.sigmob.sdk.base.models.config.SdkConfigRequest$ProtoAdapter_SdkConfigRequest
            r0.<init>()
            com.sigmob.sdk.base.models.config.SdkConfigRequest.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.config.SdkConfigRequest.CREATOR = r0
            return
    }

    public SdkConfigRequest(com.czhj.sdk.common.models.App r8, com.czhj.sdk.common.models.Device r9, com.czhj.sdk.common.models.Network r10, com.czhj.sdk.common.models.Privacy r11, com.czhj.sdk.common.models.User r12) {
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

    public SdkConfigRequest(com.czhj.sdk.common.models.App r2, com.czhj.sdk.common.models.Device r3, com.czhj.sdk.common.models.Network r4, com.czhj.sdk.common.models.Privacy r5, com.czhj.sdk.common.models.User r6, com.czhj.wire.okio.ByteString r7) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigRequest> r0 = com.sigmob.sdk.base.models.config.SdkConfigRequest.ADAPTER
            r1.<init>(r0, r7)
            r1.app = r2
            r1.device = r3
            r1.network = r4
            r1.privacy = r5
            r1.user = r6
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.config.SdkConfigRequest
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.config.SdkConfigRequest r5 = (com.sigmob.sdk.base.models.config.SdkConfigRequest) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L4d
            com.czhj.sdk.common.models.App r1 = r4.app
            com.czhj.sdk.common.models.App r3 = r5.app
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            com.czhj.sdk.common.models.Device r1 = r4.device
            com.czhj.sdk.common.models.Device r3 = r5.device
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            com.czhj.sdk.common.models.Network r1 = r4.network
            com.czhj.sdk.common.models.Network r3 = r5.network
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            com.czhj.sdk.common.models.Privacy r1 = r4.privacy
            com.czhj.sdk.common.models.Privacy r3 = r5.privacy
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L4d
            com.czhj.sdk.common.models.User r1 = r4.user
            com.czhj.sdk.common.models.User r5 = r5.user
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
            if (r0 != 0) goto L4e
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            com.czhj.sdk.common.models.App r1 = r3.app
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Device r1 = r3.device
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Network r1 = r3.network
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Privacy r1 = r3.privacy
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.User r1 = r3.user
            if (r1 == 0) goto L4b
            int r2 = r1.hashCode()
        L4b:
            int r0 = r0 + r2
            r3.hashCode = r0
        L4e:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder
            r0.<init>()
            com.czhj.sdk.common.models.App r1 = r2.app
            r0.app = r1
            com.czhj.sdk.common.models.Device r1 = r2.device
            r0.device = r1
            com.czhj.sdk.common.models.Network r1 = r2.network
            r0.network = r1
            com.czhj.sdk.common.models.Privacy r1 = r2.privacy
            r0.privacy = r1
            com.czhj.sdk.common.models.User r1 = r2.user
            r0.user = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.czhj.sdk.common.models.App r1 = r4.app
            if (r1 == 0) goto L13
            java.lang.String r1 = ", app="
            r0.append(r1)
            com.czhj.sdk.common.models.App r1 = r4.app
            r0.append(r1)
        L13:
            com.czhj.sdk.common.models.Device r1 = r4.device
            if (r1 == 0) goto L21
            java.lang.String r1 = ", device="
            r0.append(r1)
            com.czhj.sdk.common.models.Device r1 = r4.device
            r0.append(r1)
        L21:
            com.czhj.sdk.common.models.Network r1 = r4.network
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", network="
            r0.append(r1)
            com.czhj.sdk.common.models.Network r1 = r4.network
            r0.append(r1)
        L2f:
            com.czhj.sdk.common.models.Privacy r1 = r4.privacy
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", privacy="
            r0.append(r1)
            com.czhj.sdk.common.models.Privacy r1 = r4.privacy
            r0.append(r1)
        L3d:
            com.czhj.sdk.common.models.User r1 = r4.user
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", user="
            r0.append(r1)
            com.czhj.sdk.common.models.User r1 = r4.user
            r0.append(r1)
        L4b:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "SdkConfigRequest{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
