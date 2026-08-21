package com.czhj.sdk.common.models;

public final class DeviceId extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.DeviceId, com.czhj.sdk.common.models.DeviceId.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.DeviceId> CREATOR = null;
    public static final java.lang.String DEFAULT_AAID = "";
    public static final java.lang.String DEFAULT_ANDROID_ID = "";
    public static final java.lang.String DEFAULT_ANDROID_ID_MD5 = "";
    public static final java.lang.String DEFAULT_ANDROID_UUID = "";
    public static final java.lang.String DEFAULT_BRAND = "";
    public static final java.lang.String DEFAULT_GAID = "";
    public static final java.lang.String DEFAULT_GAID_MD5 = "";
    public static final java.lang.String DEFAULT_IDFA = "";
    public static final java.lang.String DEFAULT_IDFA_MD5 = "";
    public static final java.lang.String DEFAULT_IMEI = "";
    public static final java.lang.String DEFAULT_IMEI1 = "";
    public static final java.lang.String DEFAULT_IMEI1_MD5 = "";
    public static final java.lang.String DEFAULT_IMEI2 = "";
    public static final java.lang.String DEFAULT_IMEI2_MD5 = "";
    public static final java.lang.String DEFAULT_IMEI_MD5 = "";
    public static final java.lang.String DEFAULT_IMSI = "";
    public static final java.lang.Boolean DEFAULT_IS_CUSTOM_ANDROID_ID = null;
    public static final java.lang.Boolean DEFAULT_IS_CUSTOM_IDFA = null;
    public static final java.lang.Boolean DEFAULT_IS_CUSTOM_IMEI = null;
    public static final java.lang.Boolean DEFAULT_IS_CUSTOM_OAID = null;
    public static final java.lang.String DEFAULT_MSA_UDID = "";
    public static final java.lang.String DEFAULT_OAID = "";
    public static final java.lang.String DEFAULT_OAID_MD5 = "";
    public static final java.lang.String DEFAULT_UDID = "";
    public static final java.lang.String DEFAULT_UID = "";
    public static final java.lang.String DEFAULT_USER_ID = "";
    public static final java.lang.String DEFAULT_VAID = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 15)
    public final java.lang.String aaid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String android_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 19)
    public final java.lang.String android_id_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 6)
    public final java.lang.String android_uuid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 10)
    public final java.lang.String brand;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String gaid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 20)
    public final java.lang.String gaid_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String idfa;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 17)
    public final java.lang.String idfa_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String imei;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 11)
    public final java.lang.String imei1;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 22)
    public final java.lang.String imei1_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 12)
    public final java.lang.String imei2;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 23)
    public final java.lang.String imei2_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 18)
    public final java.lang.String imei_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 7)
    public final java.lang.String imsi;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 27)
    public final java.lang.Boolean is_custom_android_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 26)
    public final java.lang.Boolean is_custom_idfa;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 24)
    public final java.lang.Boolean is_custom_imei;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 25)
    public final java.lang.Boolean is_custom_oaid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 16)
    public final java.lang.String msa_udid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 13)
    public final java.lang.String oaid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 21)
    public final java.lang.String oaid_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String udid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 9)
    public final java.lang.String uid;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String user_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 14)
    public final java.lang.String vaid;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.DeviceId, com.czhj.sdk.common.models.DeviceId.Builder> {
        public java.lang.String aaid;
        public java.lang.String android_id;
        public java.lang.String android_id_md5;
        public java.lang.String android_uuid;
        public java.lang.String brand;
        public java.lang.String gaid;
        public java.lang.String gaid_md5;
        public java.lang.String idfa;
        public java.lang.String idfa_md5;
        public java.lang.String imei;
        public java.lang.String imei1;
        public java.lang.String imei1_md5;
        public java.lang.String imei2;
        public java.lang.String imei2_md5;
        public java.lang.String imei_md5;
        public java.lang.String imsi;
        public java.lang.Boolean is_custom_android_id;
        public java.lang.Boolean is_custom_idfa;
        public java.lang.Boolean is_custom_imei;
        public java.lang.Boolean is_custom_oaid;
        public java.lang.String msa_udid;
        public java.lang.String oaid;
        public java.lang.String oaid_md5;
        public java.lang.String udid;
        public java.lang.String uid;
        public java.lang.String user_id;
        public java.lang.String vaid;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.idfa = r0
                r1.udid = r0
                r1.user_id = r0
                r1.imei = r0
                r1.android_id = r0
                r1.android_uuid = r0
                r1.imsi = r0
                r1.gaid = r0
                r1.uid = r0
                r1.brand = r0
                r1.imei1 = r0
                r1.imei2 = r0
                r1.oaid = r0
                r1.vaid = r0
                r1.aaid = r0
                r1.msa_udid = r0
                r1.idfa_md5 = r0
                r1.imei_md5 = r0
                r1.android_id_md5 = r0
                r1.gaid_md5 = r0
                r1.oaid_md5 = r0
                r1.imei1_md5 = r0
                r1.imei2_md5 = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_IMEI
                r1.is_custom_imei = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_OAID
                r1.is_custom_oaid = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_IDFA
                r1.is_custom_idfa = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_ANDROID_ID
                r1.is_custom_android_id = r0
                return
        }

        public com.czhj.sdk.common.models.DeviceId.Builder aaid(java.lang.String r1) {
                r0 = this;
                r0.aaid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder android_id(java.lang.String r1) {
                r0 = this;
                r0.android_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder android_id_md5(java.lang.String r1) {
                r0 = this;
                r0.android_id_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder android_uuid(java.lang.String r1) {
                r0 = this;
                r0.android_uuid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder brand(java.lang.String r1) {
                r0 = this;
                r0.brand = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.DeviceId build() {
                r32 = this;
                r0 = r32
                com.czhj.sdk.common.models.DeviceId r30 = new com.czhj.sdk.common.models.DeviceId
                r1 = r30
                java.lang.String r2 = r0.idfa
                java.lang.String r3 = r0.udid
                java.lang.String r4 = r0.user_id
                java.lang.String r5 = r0.imei
                java.lang.String r6 = r0.android_id
                java.lang.String r7 = r0.android_uuid
                java.lang.String r8 = r0.imsi
                java.lang.String r9 = r0.gaid
                java.lang.String r10 = r0.uid
                java.lang.String r11 = r0.brand
                java.lang.String r12 = r0.imei1
                java.lang.String r13 = r0.imei2
                java.lang.String r14 = r0.oaid
                java.lang.String r15 = r0.vaid
                r31 = r1
                java.lang.String r1 = r0.aaid
                r16 = r1
                java.lang.String r1 = r0.msa_udid
                r17 = r1
                java.lang.String r1 = r0.idfa_md5
                r18 = r1
                java.lang.String r1 = r0.imei_md5
                r19 = r1
                java.lang.String r1 = r0.android_id_md5
                r20 = r1
                java.lang.String r1 = r0.gaid_md5
                r21 = r1
                java.lang.String r1 = r0.oaid_md5
                r22 = r1
                java.lang.String r1 = r0.imei1_md5
                r23 = r1
                java.lang.String r1 = r0.imei2_md5
                r24 = r1
                java.lang.Boolean r1 = r0.is_custom_imei
                r25 = r1
                java.lang.Boolean r1 = r0.is_custom_oaid
                r26 = r1
                java.lang.Boolean r1 = r0.is_custom_idfa
                r27 = r1
                java.lang.Boolean r1 = r0.is_custom_android_id
                r28 = r1
                com.czhj.wire.okio.ByteString r29 = super.buildUnknownFields()
                r1 = r31
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29)
                return r30
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.DeviceId r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder gaid(java.lang.String r1) {
                r0 = this;
                r0.gaid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder gaid_md5(java.lang.String r1) {
                r0 = this;
                r0.gaid_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder idfa(java.lang.String r1) {
                r0 = this;
                r0.idfa = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder idfa_md5(java.lang.String r1) {
                r0 = this;
                r0.idfa_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imei(java.lang.String r1) {
                r0 = this;
                r0.imei = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imei1(java.lang.String r1) {
                r0 = this;
                r0.imei1 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imei1_md5(java.lang.String r1) {
                r0 = this;
                r0.imei1_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imei2(java.lang.String r1) {
                r0 = this;
                r0.imei2 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imei2_md5(java.lang.String r1) {
                r0 = this;
                r0.imei2_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imei_md5(java.lang.String r1) {
                r0 = this;
                r0.imei_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder imsi(java.lang.String r1) {
                r0 = this;
                r0.imsi = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder is_custom_android_id(java.lang.Boolean r1) {
                r0 = this;
                r0.is_custom_android_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder is_custom_idfa(java.lang.Boolean r1) {
                r0 = this;
                r0.is_custom_idfa = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder is_custom_imei(java.lang.Boolean r1) {
                r0 = this;
                r0.is_custom_imei = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder is_custom_oaid(java.lang.Boolean r1) {
                r0 = this;
                r0.is_custom_oaid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder msa_udid(java.lang.String r1) {
                r0 = this;
                r0.msa_udid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder oaid(java.lang.String r1) {
                r0 = this;
                r0.oaid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder oaid_md5(java.lang.String r1) {
                r0 = this;
                r0.oaid_md5 = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder udid(java.lang.String r1) {
                r0 = this;
                r0.udid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder uid(java.lang.String r1) {
                r0 = this;
                r0.uid = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder user_id(java.lang.String r1) {
                r0 = this;
                r0.user_id = r1
                return r0
        }

        public com.czhj.sdk.common.models.DeviceId.Builder vaid(java.lang.String r1) {
                r0 = this;
                r0.vaid = r1
                return r0
        }
    }

    private static final class ProtoAdapter_DeviceId extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> {
        public ProtoAdapter_DeviceId() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.DeviceId> r1 = com.czhj.sdk.common.models.DeviceId.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.DeviceId decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.DeviceId$Builder r0 = new com.czhj.sdk.common.models.DeviceId$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L17a
                switch(r3) {
                    case 1: goto L16d;
                    case 2: goto L160;
                    case 3: goto L153;
                    case 4: goto L146;
                    case 5: goto L139;
                    case 6: goto L12c;
                    case 7: goto L11f;
                    case 8: goto L112;
                    case 9: goto L105;
                    case 10: goto Lf8;
                    case 11: goto Leb;
                    case 12: goto Lde;
                    case 13: goto Ld1;
                    case 14: goto Lc4;
                    case 15: goto Lb7;
                    case 16: goto Laa;
                    case 17: goto L9d;
                    case 18: goto L90;
                    case 19: goto L83;
                    case 20: goto L77;
                    case 21: goto L6b;
                    case 22: goto L5f;
                    case 23: goto L53;
                    case 24: goto L47;
                    case 25: goto L3b;
                    case 26: goto L2f;
                    case 27: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_custom_android_id(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_custom_idfa(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_custom_oaid(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_custom_imei(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imei2_md5(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imei1_md5(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.oaid_md5(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.gaid_md5(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.android_id_md5(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imei_md5(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.idfa_md5(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.msa_udid(r3)
                goto L9
            Lb7:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.aaid(r3)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.vaid(r3)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.oaid(r3)
                goto L9
            Lde:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imei2(r3)
                goto L9
            Leb:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imei1(r3)
                goto L9
            Lf8:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.brand(r3)
                goto L9
            L105:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.uid(r3)
                goto L9
            L112:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.gaid(r3)
                goto L9
            L11f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imsi(r3)
                goto L9
            L12c:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.android_uuid(r3)
                goto L9
            L139:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.android_id(r3)
                goto L9
            L146:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.imei(r3)
                goto L9
            L153:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.user_id(r3)
                goto L9
            L160:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.udid(r3)
                goto L9
            L16d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.idfa(r3)
                goto L9
            L17a:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.DeviceId r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.DeviceId decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.DeviceId r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.DeviceId r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.idfa
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.udid
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.user_id
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imei
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.android_id
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.android_uuid
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imsi
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.gaid
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.uid
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.brand
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imei1
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imei2
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.oaid
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.vaid
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.aaid
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.msa_udid
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.idfa_md5
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imei_md5
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.android_id_md5
                r2 = 19
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.gaid_md5
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.oaid_md5
                r2 = 21
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imei1_md5
                r2 = 22
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.imei2_md5
                r2 = 23
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_custom_imei
                r2 = 24
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_custom_oaid
                r2 = 25
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_custom_idfa
                r2 = 26
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_custom_android_id
                r2 = 27
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.DeviceId r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.DeviceId r2 = (com.czhj.sdk.common.models.DeviceId) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.DeviceId r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.idfa
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.udid
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.user_id
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imei
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.android_id
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.android_uuid
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imsi
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.gaid
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.uid
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.brand
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imei1
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imei2
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.oaid
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.vaid
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.aaid
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.msa_udid
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.idfa_md5
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imei_md5
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.android_id_md5
                r3 = 19
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.gaid_md5
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.oaid_md5
                r3 = 21
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imei1_md5
                r3 = 22
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.imei2_md5
                r3 = 23
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_custom_imei
                r3 = 24
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_custom_oaid
                r3 = 25
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_custom_idfa
                r3 = 26
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_custom_android_id
                r3 = 27
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.DeviceId r1) {
                r0 = this;
                com.czhj.sdk.common.models.DeviceId r1 = (com.czhj.sdk.common.models.DeviceId) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.DeviceId redact(com.czhj.sdk.common.models.DeviceId r1) {
                r0 = this;
                com.czhj.sdk.common.models.DeviceId$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.czhj.sdk.common.models.DeviceId r1 = r1.build()
                return r1
        }

        @Override
        public com.czhj.sdk.common.models.DeviceId redact(com.czhj.sdk.common.models.DeviceId r1) {
                r0 = this;
                com.czhj.sdk.common.models.DeviceId r1 = (com.czhj.sdk.common.models.DeviceId) r1
                com.czhj.sdk.common.models.DeviceId r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.DeviceId$ProtoAdapter_DeviceId r0 = new com.czhj.sdk.common.models.DeviceId$ProtoAdapter_DeviceId
            r0.<init>()
            com.czhj.sdk.common.models.DeviceId.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.DeviceId.CREATOR = r0
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_IMEI = r0
            com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_OAID = r0
            com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_IDFA = r0
            com.czhj.sdk.common.models.DeviceId.DEFAULT_IS_CUSTOM_ANDROID_ID = r0
            return
    }

    public DeviceId(java.lang.String r30, java.lang.String r31, java.lang.String r32, java.lang.String r33, java.lang.String r34, java.lang.String r35, java.lang.String r36, java.lang.String r37, java.lang.String r38, java.lang.String r39, java.lang.String r40, java.lang.String r41, java.lang.String r42, java.lang.String r43, java.lang.String r44, java.lang.String r45, java.lang.String r46, java.lang.String r47, java.lang.String r48, java.lang.String r49, java.lang.String r50, java.lang.String r51, java.lang.String r52, java.lang.Boolean r53, java.lang.Boolean r54, java.lang.Boolean r55, java.lang.Boolean r56) {
            r29 = this;
            r0 = r29
            r1 = r30
            r2 = r31
            r3 = r32
            r4 = r33
            r5 = r34
            r6 = r35
            r7 = r36
            r8 = r37
            r9 = r38
            r10 = r39
            r11 = r40
            r12 = r41
            r13 = r42
            r14 = r43
            r15 = r44
            r16 = r45
            r17 = r46
            r18 = r47
            r19 = r48
            r20 = r49
            r21 = r50
            r22 = r51
            r23 = r52
            r24 = r53
            r25 = r54
            r26 = r55
            r27 = r56
            com.czhj.wire.okio.ByteString r28 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28)
            return
    }

    public DeviceId(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22, java.lang.String r23, java.lang.String r24, java.lang.String r25, java.lang.String r26, java.lang.Boolean r27, java.lang.Boolean r28, java.lang.Boolean r29, java.lang.Boolean r30, com.czhj.wire.okio.ByteString r31) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> r1 = com.czhj.sdk.common.models.DeviceId.ADAPTER
            r2 = r31
            r3.<init>(r1, r2)
            r1 = r4
            r0.idfa = r1
            r1 = r5
            r0.udid = r1
            r1 = r6
            r0.user_id = r1
            r1 = r7
            r0.imei = r1
            r1 = r8
            r0.android_id = r1
            r1 = r9
            r0.android_uuid = r1
            r1 = r10
            r0.imsi = r1
            r1 = r11
            r0.gaid = r1
            r1 = r12
            r0.uid = r1
            r1 = r13
            r0.brand = r1
            r1 = r14
            r0.imei1 = r1
            r1 = r15
            r0.imei2 = r1
            r1 = r16
            r0.oaid = r1
            r1 = r17
            r0.vaid = r1
            r1 = r18
            r0.aaid = r1
            r1 = r19
            r0.msa_udid = r1
            r1 = r20
            r0.idfa_md5 = r1
            r1 = r21
            r0.imei_md5 = r1
            r1 = r22
            r0.android_id_md5 = r1
            r1 = r23
            r0.gaid_md5 = r1
            r1 = r24
            r0.oaid_md5 = r1
            r1 = r25
            r0.imei1_md5 = r1
            r1 = r26
            r0.imei2_md5 = r1
            r1 = r27
            r0.is_custom_imei = r1
            r1 = r28
            r0.is_custom_oaid = r1
            r1 = r29
            r0.is_custom_idfa = r1
            r1 = r30
            r0.is_custom_android_id = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.DeviceId
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.DeviceId r5 = (com.czhj.sdk.common.models.DeviceId) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.idfa
            java.lang.String r3 = r5.idfa
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.udid
            java.lang.String r3 = r5.udid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.user_id
            java.lang.String r3 = r5.user_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imei
            java.lang.String r3 = r5.imei
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.android_id
            java.lang.String r3 = r5.android_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.android_uuid
            java.lang.String r3 = r5.android_uuid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imsi
            java.lang.String r3 = r5.imsi
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.gaid
            java.lang.String r3 = r5.gaid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.uid
            java.lang.String r3 = r5.uid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.brand
            java.lang.String r3 = r5.brand
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imei1
            java.lang.String r3 = r5.imei1
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imei2
            java.lang.String r3 = r5.imei2
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.oaid
            java.lang.String r3 = r5.oaid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.vaid
            java.lang.String r3 = r5.vaid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.aaid
            java.lang.String r3 = r5.aaid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.msa_udid
            java.lang.String r3 = r5.msa_udid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.idfa_md5
            java.lang.String r3 = r5.idfa_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imei_md5
            java.lang.String r3 = r5.imei_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.android_id_md5
            java.lang.String r3 = r5.android_id_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.gaid_md5
            java.lang.String r3 = r5.gaid_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.oaid_md5
            java.lang.String r3 = r5.oaid_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imei1_md5
            java.lang.String r3 = r5.imei1_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.imei2_md5
            java.lang.String r3 = r5.imei2_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Boolean r1 = r4.is_custom_imei
            java.lang.Boolean r3 = r5.is_custom_imei
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Boolean r1 = r4.is_custom_oaid
            java.lang.Boolean r3 = r5.is_custom_oaid
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Boolean r1 = r4.is_custom_idfa
            java.lang.Boolean r3 = r5.is_custom_idfa
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Boolean r1 = r4.is_custom_android_id
            java.lang.Boolean r5 = r5.is_custom_android_id
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L129
            goto L12a
        L129:
            r0 = r2
        L12a:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L16c
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.idfa
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.udid
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.user_id
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imei
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.android_id
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.android_uuid
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imsi
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.gaid
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.uid
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.brand
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imei1
            if (r1 == 0) goto L9a
            int r1 = r1.hashCode()
            goto L9b
        L9a:
            r1 = r2
        L9b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imei2
            if (r1 == 0) goto La7
            int r1 = r1.hashCode()
            goto La8
        La7:
            r1 = r2
        La8:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.oaid
            if (r1 == 0) goto Lb4
            int r1 = r1.hashCode()
            goto Lb5
        Lb4:
            r1 = r2
        Lb5:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.vaid
            if (r1 == 0) goto Lc1
            int r1 = r1.hashCode()
            goto Lc2
        Lc1:
            r1 = r2
        Lc2:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.aaid
            if (r1 == 0) goto Lce
            int r1 = r1.hashCode()
            goto Lcf
        Lce:
            r1 = r2
        Lcf:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.msa_udid
            if (r1 == 0) goto Ldb
            int r1 = r1.hashCode()
            goto Ldc
        Ldb:
            r1 = r2
        Ldc:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.idfa_md5
            if (r1 == 0) goto Le8
            int r1 = r1.hashCode()
            goto Le9
        Le8:
            r1 = r2
        Le9:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imei_md5
            if (r1 == 0) goto Lf5
            int r1 = r1.hashCode()
            goto Lf6
        Lf5:
            r1 = r2
        Lf6:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.android_id_md5
            if (r1 == 0) goto L102
            int r1 = r1.hashCode()
            goto L103
        L102:
            r1 = r2
        L103:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.gaid_md5
            if (r1 == 0) goto L10f
            int r1 = r1.hashCode()
            goto L110
        L10f:
            r1 = r2
        L110:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.oaid_md5
            if (r1 == 0) goto L11c
            int r1 = r1.hashCode()
            goto L11d
        L11c:
            r1 = r2
        L11d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imei1_md5
            if (r1 == 0) goto L129
            int r1 = r1.hashCode()
            goto L12a
        L129:
            r1 = r2
        L12a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.imei2_md5
            if (r1 == 0) goto L136
            int r1 = r1.hashCode()
            goto L137
        L136:
            r1 = r2
        L137:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_custom_imei
            if (r1 == 0) goto L143
            int r1 = r1.hashCode()
            goto L144
        L143:
            r1 = r2
        L144:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_custom_oaid
            if (r1 == 0) goto L150
            int r1 = r1.hashCode()
            goto L151
        L150:
            r1 = r2
        L151:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_custom_idfa
            if (r1 == 0) goto L15d
            int r1 = r1.hashCode()
            goto L15e
        L15d:
            r1 = r2
        L15e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_custom_android_id
            if (r1 == 0) goto L169
            int r2 = r1.hashCode()
        L169:
            int r0 = r0 + r2
            r3.hashCode = r0
        L16c:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.DeviceId.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.DeviceId$Builder r0 = new com.czhj.sdk.common.models.DeviceId$Builder
            r0.<init>()
            java.lang.String r1 = r2.idfa
            r0.idfa = r1
            java.lang.String r1 = r2.udid
            r0.udid = r1
            java.lang.String r1 = r2.user_id
            r0.user_id = r1
            java.lang.String r1 = r2.imei
            r0.imei = r1
            java.lang.String r1 = r2.android_id
            r0.android_id = r1
            java.lang.String r1 = r2.android_uuid
            r0.android_uuid = r1
            java.lang.String r1 = r2.imsi
            r0.imsi = r1
            java.lang.String r1 = r2.gaid
            r0.gaid = r1
            java.lang.String r1 = r2.uid
            r0.uid = r1
            java.lang.String r1 = r2.brand
            r0.brand = r1
            java.lang.String r1 = r2.imei1
            r0.imei1 = r1
            java.lang.String r1 = r2.imei2
            r0.imei2 = r1
            java.lang.String r1 = r2.oaid
            r0.oaid = r1
            java.lang.String r1 = r2.vaid
            r0.vaid = r1
            java.lang.String r1 = r2.aaid
            r0.aaid = r1
            java.lang.String r1 = r2.msa_udid
            r0.msa_udid = r1
            java.lang.String r1 = r2.idfa_md5
            r0.idfa_md5 = r1
            java.lang.String r1 = r2.imei_md5
            r0.imei_md5 = r1
            java.lang.String r1 = r2.android_id_md5
            r0.android_id_md5 = r1
            java.lang.String r1 = r2.gaid_md5
            r0.gaid_md5 = r1
            java.lang.String r1 = r2.oaid_md5
            r0.oaid_md5 = r1
            java.lang.String r1 = r2.imei1_md5
            r0.imei1_md5 = r1
            java.lang.String r1 = r2.imei2_md5
            r0.imei2_md5 = r1
            java.lang.Boolean r1 = r2.is_custom_imei
            r0.is_custom_imei = r1
            java.lang.Boolean r1 = r2.is_custom_oaid
            r0.is_custom_oaid = r1
            java.lang.Boolean r1 = r2.is_custom_idfa
            r0.is_custom_idfa = r1
            java.lang.Boolean r1 = r2.is_custom_android_id
            r0.is_custom_android_id = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.DeviceId$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.idfa
            if (r1 == 0) goto L13
            java.lang.String r1 = ", idfa="
            r0.append(r1)
            java.lang.String r1 = r4.idfa
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.udid
            if (r1 == 0) goto L21
            java.lang.String r1 = ", udid="
            r0.append(r1)
            java.lang.String r1 = r4.udid
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.user_id
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", user_id="
            r0.append(r1)
            java.lang.String r1 = r4.user_id
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.imei
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", imei="
            r0.append(r1)
            java.lang.String r1 = r4.imei
            r0.append(r1)
        L3d:
            java.lang.String r1 = r4.android_id
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", android_id="
            r0.append(r1)
            java.lang.String r1 = r4.android_id
            r0.append(r1)
        L4b:
            java.lang.String r1 = r4.android_uuid
            if (r1 == 0) goto L59
            java.lang.String r1 = ", android_uuid="
            r0.append(r1)
            java.lang.String r1 = r4.android_uuid
            r0.append(r1)
        L59:
            java.lang.String r1 = r4.imsi
            if (r1 == 0) goto L67
            java.lang.String r1 = ", imsi="
            r0.append(r1)
            java.lang.String r1 = r4.imsi
            r0.append(r1)
        L67:
            java.lang.String r1 = r4.gaid
            if (r1 == 0) goto L75
            java.lang.String r1 = ", gaid="
            r0.append(r1)
            java.lang.String r1 = r4.gaid
            r0.append(r1)
        L75:
            java.lang.String r1 = r4.uid
            if (r1 == 0) goto L83
            java.lang.String r1 = ", uid="
            r0.append(r1)
            java.lang.String r1 = r4.uid
            r0.append(r1)
        L83:
            java.lang.String r1 = r4.brand
            if (r1 == 0) goto L91
            java.lang.String r1 = ", brand="
            r0.append(r1)
            java.lang.String r1 = r4.brand
            r0.append(r1)
        L91:
            java.lang.String r1 = r4.imei1
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", imei1="
            r0.append(r1)
            java.lang.String r1 = r4.imei1
            r0.append(r1)
        L9f:
            java.lang.String r1 = r4.imei2
            if (r1 == 0) goto Lad
            java.lang.String r1 = ", imei2="
            r0.append(r1)
            java.lang.String r1 = r4.imei2
            r0.append(r1)
        Lad:
            java.lang.String r1 = r4.oaid
            if (r1 == 0) goto Lbb
            java.lang.String r1 = ", oaid="
            r0.append(r1)
            java.lang.String r1 = r4.oaid
            r0.append(r1)
        Lbb:
            java.lang.String r1 = r4.vaid
            if (r1 == 0) goto Lc9
            java.lang.String r1 = ", vaid="
            r0.append(r1)
            java.lang.String r1 = r4.vaid
            r0.append(r1)
        Lc9:
            java.lang.String r1 = r4.aaid
            if (r1 == 0) goto Ld7
            java.lang.String r1 = ", aaid="
            r0.append(r1)
            java.lang.String r1 = r4.aaid
            r0.append(r1)
        Ld7:
            java.lang.String r1 = r4.msa_udid
            if (r1 == 0) goto Le5
            java.lang.String r1 = ", msa_udid="
            r0.append(r1)
            java.lang.String r1 = r4.msa_udid
            r0.append(r1)
        Le5:
            java.lang.String r1 = r4.idfa_md5
            if (r1 == 0) goto Lf3
            java.lang.String r1 = ", idfa_md5="
            r0.append(r1)
            java.lang.String r1 = r4.idfa_md5
            r0.append(r1)
        Lf3:
            java.lang.String r1 = r4.imei_md5
            if (r1 == 0) goto L101
            java.lang.String r1 = ", imei_md5="
            r0.append(r1)
            java.lang.String r1 = r4.imei_md5
            r0.append(r1)
        L101:
            java.lang.String r1 = r4.android_id_md5
            if (r1 == 0) goto L10f
            java.lang.String r1 = ", android_id_md5="
            r0.append(r1)
            java.lang.String r1 = r4.android_id_md5
            r0.append(r1)
        L10f:
            java.lang.String r1 = r4.gaid_md5
            if (r1 == 0) goto L11d
            java.lang.String r1 = ", gaid_md5="
            r0.append(r1)
            java.lang.String r1 = r4.gaid_md5
            r0.append(r1)
        L11d:
            java.lang.String r1 = r4.oaid_md5
            if (r1 == 0) goto L12b
            java.lang.String r1 = ", oaid_md5="
            r0.append(r1)
            java.lang.String r1 = r4.oaid_md5
            r0.append(r1)
        L12b:
            java.lang.String r1 = r4.imei1_md5
            if (r1 == 0) goto L139
            java.lang.String r1 = ", imei1_md5="
            r0.append(r1)
            java.lang.String r1 = r4.imei1_md5
            r0.append(r1)
        L139:
            java.lang.String r1 = r4.imei2_md5
            if (r1 == 0) goto L147
            java.lang.String r1 = ", imei2_md5="
            r0.append(r1)
            java.lang.String r1 = r4.imei2_md5
            r0.append(r1)
        L147:
            java.lang.Boolean r1 = r4.is_custom_imei
            if (r1 == 0) goto L155
            java.lang.String r1 = ", is_custom_imei="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_custom_imei
            r0.append(r1)
        L155:
            java.lang.Boolean r1 = r4.is_custom_oaid
            if (r1 == 0) goto L163
            java.lang.String r1 = ", is_custom_oaid="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_custom_oaid
            r0.append(r1)
        L163:
            java.lang.Boolean r1 = r4.is_custom_idfa
            if (r1 == 0) goto L171
            java.lang.String r1 = ", is_custom_idfa="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_custom_idfa
            r0.append(r1)
        L171:
            java.lang.Boolean r1 = r4.is_custom_android_id
            if (r1 == 0) goto L17f
            java.lang.String r1 = ", is_custom_android_id="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_custom_android_id
            r0.append(r1)
        L17f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "DeviceId{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
