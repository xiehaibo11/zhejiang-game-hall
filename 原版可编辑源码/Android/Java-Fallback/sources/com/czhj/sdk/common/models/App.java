package com.czhj.sdk.common.models;

public final class App extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.App, com.czhj.sdk.common.models.App.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.App> CREATOR = null;
    public static final java.lang.String DEFAULT_APP_ID = "";
    public static final java.lang.String DEFAULT_APP_PACKAGE = "";
    public static final java.lang.String DEFAULT_CHANNEL_ID = "";
    public static final java.lang.String DEFAULT_IDFV = "";
    public static final java.lang.String DEFAULT_NAME = "";
    public static final java.lang.Integer DEFAULT_ORIENTATION = null;
    public static final java.lang.String DEFAULT_PRODUCT_ID = "";
    public static final java.lang.Boolean DEFAULT_SUPPORT_HTTP = null;
    public static final java.lang.String DEFAULT_SUPPORT_SK_VERSION = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 10)
    public final java.util.List<java.lang.String> ad_network_ids;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String app_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String app_package;

    @com.czhj.wire.WireField(adapter = "Version#ADAPTER", tag = 2)
    public final com.czhj.sdk.common.models.Version app_version;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String channel_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 6)
    public final java.lang.String idfv;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 4)
    public final java.lang.Integer orientation;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String product_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", label = com.czhj.wire.WireField.Label.REPEATED, tag = 12)
    public final java.util.List<java.lang.Integer> sdk_ext_cap;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 9)
    public final java.lang.Boolean support_http;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 11)
    public final java.lang.String support_sk_version;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.App, com.czhj.sdk.common.models.App.Builder> {
        public java.util.List<java.lang.String> ad_network_ids;
        public java.lang.String app_id;
        public java.lang.String app_package;
        public com.czhj.sdk.common.models.Version app_version;
        public java.lang.String channel_id;
        public java.lang.String idfv;
        public java.lang.String name;
        public java.lang.Integer orientation;
        public java.lang.String product_id;
        public java.util.List<java.lang.Integer> sdk_ext_cap;
        public java.lang.Boolean support_http;
        public java.lang.String support_sk_version;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.app_id = r0
                r2.app_package = r0
                java.lang.Integer r1 = com.czhj.sdk.common.models.App.DEFAULT_ORIENTATION
                r2.orientation = r1
                r2.name = r0
                r2.idfv = r0
                r2.channel_id = r0
                r2.product_id = r0
                java.lang.Boolean r1 = com.czhj.sdk.common.models.App.DEFAULT_SUPPORT_HTTP
                r2.support_http = r1
                r2.support_sk_version = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.ad_network_ids = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.sdk_ext_cap = r0
                return
        }

        public com.czhj.sdk.common.models.App.Builder ad_network_ids(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.ad_network_ids = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder app_id(java.lang.String r1) {
                r0 = this;
                r0.app_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder app_package(java.lang.String r1) {
                r0 = this;
                r0.app_package = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder app_version(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                r0.app_version = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.App build() {
                r15 = this;
                com.czhj.sdk.common.models.App r14 = new com.czhj.sdk.common.models.App
                java.lang.String r1 = r15.app_id
                com.czhj.sdk.common.models.Version r2 = r15.app_version
                java.lang.String r3 = r15.app_package
                java.lang.Integer r4 = r15.orientation
                java.lang.String r5 = r15.name
                java.lang.String r6 = r15.idfv
                java.lang.String r7 = r15.channel_id
                java.lang.String r8 = r15.product_id
                java.lang.Boolean r9 = r15.support_http
                java.util.List<java.lang.String> r10 = r15.ad_network_ids
                java.lang.String r11 = r15.support_sk_version
                java.util.List<java.lang.Integer> r12 = r15.sdk_ext_cap
                com.czhj.wire.okio.ByteString r13 = super.buildUnknownFields()
                r0 = r14
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
                return r14
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.App r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder channel_id(java.lang.String r1) {
                r0 = this;
                r0.channel_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder idfv(java.lang.String r1) {
                r0 = this;
                r0.idfv = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder name(java.lang.String r1) {
                r0 = this;
                r0.name = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder orientation(java.lang.Integer r1) {
                r0 = this;
                r0.orientation = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder product_id(java.lang.String r1) {
                r0 = this;
                r0.product_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder sdk_ext_cap(java.util.List<java.lang.Integer> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.sdk_ext_cap = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder support_http(java.lang.Boolean r1) {
                r0 = this;
                r0.support_http = r1
                return r0
        }

        public com.czhj.sdk.common.models.App.Builder support_sk_version(java.lang.String r1) {
                r0 = this;
                r0.support_sk_version = r1
                return r0
        }
    }

    private static final class ProtoAdapter_App extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> {
        public ProtoAdapter_App() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.App> r1 = com.czhj.sdk.common.models.App.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.App decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.App$Builder r0 = new com.czhj.sdk.common.models.App$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto Laf
                switch(r3) {
                    case 1: goto La2;
                    case 2: goto L95;
                    case 3: goto L88;
                    case 4: goto L7c;
                    case 5: goto L70;
                    case 6: goto L64;
                    case 7: goto L58;
                    case 8: goto L4c;
                    case 9: goto L40;
                    case 10: goto L34;
                    case 11: goto L28;
                    case 12: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                java.util.List<java.lang.Integer> r3 = r0.sdk_ext_cap
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r4 = com.czhj.wire.ProtoAdapter.UINT32
                goto L38
            L28:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.support_sk_version(r3)
                goto L9
            L34:
                java.util.List<java.lang.String> r3 = r0.ad_network_ids
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
            L38:
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L40:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.support_http(r3)
                goto L9
            L4c:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.product_id(r3)
                goto L9
            L58:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.channel_id(r3)
                goto L9
            L64:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.idfv(r3)
                goto L9
            L70:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.name(r3)
                goto L9
            L7c:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.orientation(r3)
                goto L9
            L88:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.app_package(r3)
                goto L9
            L95:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r3 = com.czhj.sdk.common.models.Version.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Version r3 = (com.czhj.sdk.common.models.Version) r3
                r0.app_version(r3)
                goto L9
            La2:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.app_id(r3)
                goto L9
            Laf:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.App r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.App decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.App r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.App r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.app_id
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r5.app_version
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.app_package
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.orientation
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.name
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.idfv
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.channel_id
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.product_id
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.support_http
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.ad_network_ids
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.support_sk_version
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.Integer> r1 = r5.sdk_ext_cap
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.App r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.App r2 = (com.czhj.sdk.common.models.App) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.App r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.app_id
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r1 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r2 = r5.app_version
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.app_package
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.orientation
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.name
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.idfv
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.channel_id
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.product_id
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.support_http
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.ad_network_ids
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.support_sk_version
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.Integer> r2 = r5.sdk_ext_cap
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.App r1) {
                r0 = this;
                com.czhj.sdk.common.models.App r1 = (com.czhj.sdk.common.models.App) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.App redact(com.czhj.sdk.common.models.App r3) {
                r2 = this;
                com.czhj.sdk.common.models.App$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.Version r0 = r3.app_version
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r3.app_version
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Version r0 = (com.czhj.sdk.common.models.Version) r0
                r3.app_version = r0
            L14:
                r3.clearUnknownFields()
                com.czhj.sdk.common.models.App r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.sdk.common.models.App redact(com.czhj.sdk.common.models.App r1) {
                r0 = this;
                com.czhj.sdk.common.models.App r1 = (com.czhj.sdk.common.models.App) r1
                com.czhj.sdk.common.models.App r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.App$ProtoAdapter_App r0 = new com.czhj.sdk.common.models.App$ProtoAdapter_App
            r0.<init>()
            com.czhj.sdk.common.models.App.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.App.CREATOR = r0
            r0 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.App.DEFAULT_ORIENTATION = r1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.sdk.common.models.App.DEFAULT_SUPPORT_HTTP = r0
            return
    }

    public App(java.lang.String r15, com.czhj.sdk.common.models.Version r16, java.lang.String r17, java.lang.Integer r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22, java.lang.Boolean r23, java.util.List<java.lang.String> r24, java.lang.String r25, java.util.List<java.lang.Integer> r26) {
            r14 = this;
            com.czhj.wire.okio.ByteString r13 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r14
            r1 = r15
            r2 = r16
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r9 = r23
            r10 = r24
            r11 = r25
            r12 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return
    }

    public App(java.lang.String r2, com.czhj.sdk.common.models.Version r3, java.lang.String r4, java.lang.Integer r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.Boolean r10, java.util.List<java.lang.String> r11, java.lang.String r12, java.util.List<java.lang.Integer> r13, com.czhj.wire.okio.ByteString r14) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.App> r0 = com.czhj.sdk.common.models.App.ADAPTER
            r1.<init>(r0, r14)
            r1.app_id = r2
            r1.app_version = r3
            r1.app_package = r4
            r1.orientation = r5
            r1.name = r6
            r1.idfv = r7
            r1.channel_id = r8
            r1.product_id = r9
            r1.support_http = r10
            java.lang.String r2 = "ad_network_ids"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r11)
            r1.ad_network_ids = r2
            r1.support_sk_version = r12
            java.lang.String r2 = "sdk_ext_cap"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r13)
            r1.sdk_ext_cap = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.App
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.App r5 = (com.czhj.sdk.common.models.App) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.app_id
            java.lang.String r3 = r5.app_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            com.czhj.sdk.common.models.Version r1 = r4.app_version
            com.czhj.sdk.common.models.Version r3 = r5.app_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.app_package
            java.lang.String r3 = r5.app_package
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.Integer r1 = r4.orientation
            java.lang.Integer r3 = r5.orientation
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.idfv
            java.lang.String r3 = r5.idfv
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.channel_id
            java.lang.String r3 = r5.channel_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.product_id
            java.lang.String r3 = r5.product_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.lang.Boolean r1 = r4.support_http
            java.lang.Boolean r3 = r5.support_http
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.util.List<java.lang.String> r1 = r4.ad_network_ids
            java.util.List<java.lang.String> r3 = r5.ad_network_ids
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L93
            java.lang.String r1 = r4.support_sk_version
            java.lang.String r3 = r5.support_sk_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L93
            java.util.List<java.lang.Integer> r1 = r4.sdk_ext_cap
            java.util.List<java.lang.Integer> r5 = r5.sdk_ext_cap
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L93
            goto L94
        L93:
            r0 = r2
        L94:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto La1
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.app_id
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Version r1 = r3.app_version
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.app_package
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.orientation
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.name
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.idfv
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.channel_id
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.product_id
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.support_http
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.ad_network_ids
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.support_sk_version
            if (r1 == 0) goto L95
            int r2 = r1.hashCode()
        L95:
            int r0 = r0 + r2
            int r0 = r0 * 37
            java.util.List<java.lang.Integer> r1 = r3.sdk_ext_cap
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
        La1:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.App.Builder newBuilder() {
            r3 = this;
            com.czhj.sdk.common.models.App$Builder r0 = new com.czhj.sdk.common.models.App$Builder
            r0.<init>()
            java.lang.String r1 = r3.app_id
            r0.app_id = r1
            com.czhj.sdk.common.models.Version r1 = r3.app_version
            r0.app_version = r1
            java.lang.String r1 = r3.app_package
            r0.app_package = r1
            java.lang.Integer r1 = r3.orientation
            r0.orientation = r1
            java.lang.String r1 = r3.name
            r0.name = r1
            java.lang.String r1 = r3.idfv
            r0.idfv = r1
            java.lang.String r1 = r3.channel_id
            r0.channel_id = r1
            java.lang.String r1 = r3.product_id
            r0.product_id = r1
            java.lang.Boolean r1 = r3.support_http
            r0.support_http = r1
            java.util.List<java.lang.String> r1 = r3.ad_network_ids
            java.lang.String r2 = "ad_network_ids"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.ad_network_ids = r1
            java.lang.String r1 = r3.support_sk_version
            r0.support_sk_version = r1
            java.util.List<java.lang.Integer> r1 = r3.sdk_ext_cap
            java.lang.String r2 = "sdk_ext_cap"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.sdk_ext_cap = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.App$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.app_id
            if (r1 == 0) goto L13
            java.lang.String r1 = ", app_id="
            r0.append(r1)
            java.lang.String r1 = r4.app_id
            r0.append(r1)
        L13:
            com.czhj.sdk.common.models.Version r1 = r4.app_version
            if (r1 == 0) goto L21
            java.lang.String r1 = ", app_version="
            r0.append(r1)
            com.czhj.sdk.common.models.Version r1 = r4.app_version
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.app_package
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", app_package="
            r0.append(r1)
            java.lang.String r1 = r4.app_package
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.orientation
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", orientation="
            r0.append(r1)
            java.lang.Integer r1 = r4.orientation
            r0.append(r1)
        L3d:
            java.lang.String r1 = r4.name
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", name="
            r0.append(r1)
            java.lang.String r1 = r4.name
            r0.append(r1)
        L4b:
            java.lang.String r1 = r4.idfv
            if (r1 == 0) goto L59
            java.lang.String r1 = ", idfv="
            r0.append(r1)
            java.lang.String r1 = r4.idfv
            r0.append(r1)
        L59:
            java.lang.String r1 = r4.channel_id
            if (r1 == 0) goto L67
            java.lang.String r1 = ", channel_id="
            r0.append(r1)
            java.lang.String r1 = r4.channel_id
            r0.append(r1)
        L67:
            java.lang.String r1 = r4.product_id
            if (r1 == 0) goto L75
            java.lang.String r1 = ", product_id="
            r0.append(r1)
            java.lang.String r1 = r4.product_id
            r0.append(r1)
        L75:
            java.lang.Boolean r1 = r4.support_http
            if (r1 == 0) goto L83
            java.lang.String r1 = ", support_http="
            r0.append(r1)
            java.lang.Boolean r1 = r4.support_http
            r0.append(r1)
        L83:
            java.util.List<java.lang.String> r1 = r4.ad_network_ids
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L95
            java.lang.String r1 = ", ad_network_ids="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.ad_network_ids
            r0.append(r1)
        L95:
            java.lang.String r1 = r4.support_sk_version
            if (r1 == 0) goto La3
            java.lang.String r1 = ", support_sk_version="
            r0.append(r1)
            java.lang.String r1 = r4.support_sk_version
            r0.append(r1)
        La3:
            java.util.List<java.lang.Integer> r1 = r4.sdk_ext_cap
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto Lb5
            java.lang.String r1 = ", sdk_ext_cap="
            r0.append(r1)
            java.util.List<java.lang.Integer> r1 = r4.sdk_ext_cap
            r0.append(r1)
        Lb5:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "App{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
