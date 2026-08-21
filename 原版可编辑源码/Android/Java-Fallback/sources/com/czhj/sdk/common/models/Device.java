package com.czhj.sdk.common.models;

public final class Device extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.Device, com.czhj.sdk.common.models.Device.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.Device> CREATOR = null;
    public static final java.lang.Integer DEFAULT_ANDROID_API_LEVEL = null;
    public static final java.lang.Float DEFAULT_BATTERY_LEVEL = null;
    public static final java.lang.Boolean DEFAULT_BATTERY_SAVE_ENABLED = null;
    public static final java.lang.Integer DEFAULT_BATTERY_STATE = null;
    public static final java.lang.String DEFAULT_BOOT_MARK = "";
    public static final java.lang.String DEFAULT_DEVICE_NAME = "";
    public static final java.lang.Integer DEFAULT_DEVICE_TYPE = null;
    public static final java.lang.Long DEFAULT_DISK_SIZE = null;
    public static final java.lang.Integer DEFAULT_DPI = null;
    public static final java.lang.Long DEFAULT_FREE_DISK_SIZE = null;
    public static final java.lang.String DEFAULT_INTERNAL_NAME = "";
    public static final java.lang.Boolean DEFAULT_IS_ROOT = null;
    public static final java.lang.Long DEFAULT_MEM_SIZE = null;
    public static final java.lang.String DEFAULT_MODEL = "";
    public static final java.lang.Integer DEFAULT_OS_TYPE = null;
    public static final java.lang.Long DEFAULT_SD_FREE_DISK_SIZE = null;
    public static final java.lang.Long DEFAULT_SD_TOTAL_DISK_SIZE = null;
    public static final java.lang.Long DEFAULT_START_TIMESTAMP = null;
    public static final java.lang.String DEFAULT_SYSTEM_UPDATE_TIME = "";
    public static final java.lang.Long DEFAULT_TOTAL_DISK_SIZE = null;
    public static final java.lang.String DEFAULT_UPDATE_MARK = "";
    public static final java.lang.String DEFAULT_VENDOR = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 18)
    public final java.lang.Integer android_api_level;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 14)
    public final java.lang.Float battery_level;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 15)
    public final java.lang.Boolean battery_save_enabled;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 13)
    public final java.lang.Integer battery_state;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 27)
    public final java.lang.String boot_mark;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 16)
    public final java.lang.String device_name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer device_type;

    @com.czhj.wire.WireField(adapter = "DeviceId#ADAPTER", tag = 6)
    public final com.czhj.sdk.common.models.DeviceId did;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 11)
    public final java.lang.Long disk_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 9)
    public final java.lang.Integer dpi;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 21)
    public final java.lang.Long free_disk_size;

    @com.czhj.wire.WireField(adapter = "Geo#ADAPTER", tag = 8)
    public final com.czhj.sdk.common.models.Geo geo;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 26)
    public final java.lang.String internal_name;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 10)
    public final java.lang.Boolean is_root;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 19)
    public final java.lang.Long mem_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 5)
    public final java.lang.String model;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer os_type;

    @com.czhj.wire.WireField(adapter = "Version#ADAPTER", tag = 3)
    public final com.czhj.sdk.common.models.Version os_version;

    @com.czhj.wire.WireField(adapter = "Size#ADAPTER", tag = 24)
    public final com.czhj.sdk.common.models.Size resolution;

    @com.czhj.wire.WireField(adapter = "Size#ADAPTER", tag = 7)
    public final com.czhj.sdk.common.models.Size screen_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 23)
    public final java.lang.Long sd_free_disk_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 22)
    public final java.lang.Long sd_total_disk_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT64", tag = 17)
    public final java.lang.Long start_timestamp;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 25)
    public final java.lang.String system_update_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT64", tag = 20)
    public final java.lang.Long total_disk_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 28)
    public final java.lang.String update_mark;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String vendor;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.Device, com.czhj.sdk.common.models.Device.Builder> {
        public java.lang.Integer android_api_level;
        public java.lang.Float battery_level;
        public java.lang.Boolean battery_save_enabled;
        public java.lang.Integer battery_state;
        public java.lang.String boot_mark;
        public java.lang.String device_name;
        public java.lang.Integer device_type;
        public com.czhj.sdk.common.models.DeviceId did;
        public java.lang.Long disk_size;
        public java.lang.Integer dpi;
        public java.lang.Long free_disk_size;
        public com.czhj.sdk.common.models.Geo geo;
        public java.lang.String internal_name;
        public java.lang.Boolean is_root;
        public java.lang.Long mem_size;
        public java.lang.String model;
        public java.lang.Integer os_type;
        public com.czhj.sdk.common.models.Version os_version;
        public com.czhj.sdk.common.models.Size resolution;
        public com.czhj.sdk.common.models.Size screen_size;
        public java.lang.Long sd_free_disk_size;
        public java.lang.Long sd_total_disk_size;
        public java.lang.Long start_timestamp;
        public java.lang.String system_update_time;
        public java.lang.Long total_disk_size;
        public java.lang.String update_mark;
        public java.lang.String vendor;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.Integer r0 = com.czhj.sdk.common.models.Device.DEFAULT_DEVICE_TYPE
                r2.device_type = r0
                java.lang.Integer r0 = com.czhj.sdk.common.models.Device.DEFAULT_OS_TYPE
                r2.os_type = r0
                java.lang.String r0 = ""
                r2.vendor = r0
                r2.model = r0
                java.lang.Integer r1 = com.czhj.sdk.common.models.Device.DEFAULT_DPI
                r2.dpi = r1
                java.lang.Boolean r1 = com.czhj.sdk.common.models.Device.DEFAULT_IS_ROOT
                r2.is_root = r1
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_DISK_SIZE
                r2.disk_size = r1
                java.lang.Integer r1 = com.czhj.sdk.common.models.Device.DEFAULT_BATTERY_STATE
                r2.battery_state = r1
                java.lang.Float r1 = com.czhj.sdk.common.models.Device.DEFAULT_BATTERY_LEVEL
                r2.battery_level = r1
                java.lang.Boolean r1 = com.czhj.sdk.common.models.Device.DEFAULT_BATTERY_SAVE_ENABLED
                r2.battery_save_enabled = r1
                r2.device_name = r0
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_START_TIMESTAMP
                r2.start_timestamp = r1
                java.lang.Integer r1 = com.czhj.sdk.common.models.Device.DEFAULT_ANDROID_API_LEVEL
                r2.android_api_level = r1
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_MEM_SIZE
                r2.mem_size = r1
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_TOTAL_DISK_SIZE
                r2.total_disk_size = r1
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_FREE_DISK_SIZE
                r2.free_disk_size = r1
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_SD_TOTAL_DISK_SIZE
                r2.sd_total_disk_size = r1
                java.lang.Long r1 = com.czhj.sdk.common.models.Device.DEFAULT_SD_FREE_DISK_SIZE
                r2.sd_free_disk_size = r1
                r2.system_update_time = r0
                r2.internal_name = r0
                r2.boot_mark = r0
                r2.update_mark = r0
                return
        }

        public com.czhj.sdk.common.models.Device.Builder android_api_level(java.lang.Integer r1) {
                r0 = this;
                r0.android_api_level = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder battery_level(java.lang.Float r1) {
                r0 = this;
                r0.battery_level = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder battery_save_enabled(java.lang.Boolean r1) {
                r0 = this;
                r0.battery_save_enabled = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder battery_state(java.lang.Integer r1) {
                r0 = this;
                r0.battery_state = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder boot_mark(java.lang.String r1) {
                r0 = this;
                r0.boot_mark = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.Device build() {
                r32 = this;
                r0 = r32
                com.czhj.sdk.common.models.Device r30 = new com.czhj.sdk.common.models.Device
                r1 = r30
                java.lang.Integer r2 = r0.device_type
                java.lang.Integer r3 = r0.os_type
                com.czhj.sdk.common.models.Version r4 = r0.os_version
                java.lang.String r5 = r0.vendor
                java.lang.String r6 = r0.model
                com.czhj.sdk.common.models.DeviceId r7 = r0.did
                com.czhj.sdk.common.models.Size r8 = r0.screen_size
                com.czhj.sdk.common.models.Geo r9 = r0.geo
                java.lang.Integer r10 = r0.dpi
                java.lang.Boolean r11 = r0.is_root
                java.lang.Long r12 = r0.disk_size
                java.lang.Integer r13 = r0.battery_state
                java.lang.Float r14 = r0.battery_level
                java.lang.Boolean r15 = r0.battery_save_enabled
                r31 = r1
                java.lang.String r1 = r0.device_name
                r16 = r1
                java.lang.Long r1 = r0.start_timestamp
                r17 = r1
                java.lang.Integer r1 = r0.android_api_level
                r18 = r1
                java.lang.Long r1 = r0.mem_size
                r19 = r1
                java.lang.Long r1 = r0.total_disk_size
                r20 = r1
                java.lang.Long r1 = r0.free_disk_size
                r21 = r1
                java.lang.Long r1 = r0.sd_total_disk_size
                r22 = r1
                java.lang.Long r1 = r0.sd_free_disk_size
                r23 = r1
                com.czhj.sdk.common.models.Size r1 = r0.resolution
                r24 = r1
                java.lang.String r1 = r0.system_update_time
                r25 = r1
                java.lang.String r1 = r0.internal_name
                r26 = r1
                java.lang.String r1 = r0.boot_mark
                r27 = r1
                java.lang.String r1 = r0.update_mark
                r28 = r1
                com.czhj.wire.okio.ByteString r29 = super.buildUnknownFields()
                r1 = r31
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29)
                return r30
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.Device r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder device_name(java.lang.String r1) {
                r0 = this;
                r0.device_name = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder device_type(java.lang.Integer r1) {
                r0 = this;
                r0.device_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder did(com.czhj.sdk.common.models.DeviceId r1) {
                r0 = this;
                r0.did = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder disk_size(java.lang.Long r1) {
                r0 = this;
                r0.disk_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder dpi(java.lang.Integer r1) {
                r0 = this;
                r0.dpi = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder free_disk_size(java.lang.Long r1) {
                r0 = this;
                r0.free_disk_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder geo(com.czhj.sdk.common.models.Geo r1) {
                r0 = this;
                r0.geo = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder internal_name(java.lang.String r1) {
                r0 = this;
                r0.internal_name = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder is_root(java.lang.Boolean r1) {
                r0 = this;
                r0.is_root = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder mem_size(java.lang.Long r1) {
                r0 = this;
                r0.mem_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder model(java.lang.String r1) {
                r0 = this;
                r0.model = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder os_type(java.lang.Integer r1) {
                r0 = this;
                r0.os_type = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder os_version(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                r0.os_version = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder resolution(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                r0.resolution = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder screen_size(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                r0.screen_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder sd_free_disk_size(java.lang.Long r1) {
                r0 = this;
                r0.sd_free_disk_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder sd_total_disk_size(java.lang.Long r1) {
                r0 = this;
                r0.sd_total_disk_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder start_timestamp(java.lang.Long r1) {
                r0 = this;
                r0.start_timestamp = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder system_update_time(java.lang.String r1) {
                r0 = this;
                r0.system_update_time = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder total_disk_size(java.lang.Long r1) {
                r0 = this;
                r0.total_disk_size = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder update_mark(java.lang.String r1) {
                r0 = this;
                r0.update_mark = r1
                return r0
        }

        public com.czhj.sdk.common.models.Device.Builder vendor(java.lang.String r1) {
                r0 = this;
                r0.vendor = r1
                return r0
        }
    }

    private static final class ProtoAdapter_Device extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> {
        public ProtoAdapter_Device() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.Device> r1 = com.czhj.sdk.common.models.Device.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.Device decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.Device$Builder r0 = new com.czhj.sdk.common.models.Device$Builder
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
                    case 12: goto L13;
                    case 13: goto Lde;
                    case 14: goto Ld1;
                    case 15: goto Lc4;
                    case 16: goto Lb7;
                    case 17: goto Laa;
                    case 18: goto L9d;
                    case 19: goto L90;
                    case 20: goto L83;
                    case 21: goto L77;
                    case 22: goto L6b;
                    case 23: goto L5f;
                    case 24: goto L53;
                    case 25: goto L47;
                    case 26: goto L3b;
                    case 27: goto L2f;
                    case 28: goto L23;
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
                r0.update_mark(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.boot_mark(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.internal_name(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.system_update_time(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r3 = com.czhj.sdk.common.models.Size.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Size r3 = (com.czhj.sdk.common.models.Size) r3
                r0.resolution(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.sd_free_disk_size(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.sd_total_disk_size(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.free_disk_size(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.total_disk_size(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.mem_size(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.android_api_level(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.start_timestamp(r3)
                goto L9
            Lb7:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.device_name(r3)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.battery_save_enabled(r3)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.battery_level(r3)
                goto L9
            Lde:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.battery_state(r3)
                goto L9
            Leb:
                com.czhj.wire.ProtoAdapter<java.lang.Long> r3 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Long r3 = (java.lang.Long) r3
                r0.disk_size(r3)
                goto L9
            Lf8:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_root(r3)
                goto L9
            L105:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.dpi(r3)
                goto L9
            L112:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> r3 = com.czhj.sdk.common.models.Geo.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Geo r3 = (com.czhj.sdk.common.models.Geo) r3
                r0.geo(r3)
                goto L9
            L11f:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r3 = com.czhj.sdk.common.models.Size.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Size r3 = (com.czhj.sdk.common.models.Size) r3
                r0.screen_size(r3)
                goto L9
            L12c:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> r3 = com.czhj.sdk.common.models.DeviceId.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.DeviceId r3 = (com.czhj.sdk.common.models.DeviceId) r3
                r0.did(r3)
                goto L9
            L139:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.model(r3)
                goto L9
            L146:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.vendor(r3)
                goto L9
            L153:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r3 = com.czhj.sdk.common.models.Version.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Version r3 = (com.czhj.sdk.common.models.Version) r3
                r0.os_version(r3)
                goto L9
            L160:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.os_type(r3)
                goto L9
            L16d:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.device_type(r3)
                goto L9
            L17a:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.Device r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.Device decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Device r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.Device r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.device_type
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.os_type
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r5.os_version
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.vendor
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.model
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> r0 = com.czhj.sdk.common.models.DeviceId.ADAPTER
                com.czhj.sdk.common.models.DeviceId r1 = r5.did
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r5.screen_size
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> r0 = com.czhj.sdk.common.models.Geo.ADAPTER
                com.czhj.sdk.common.models.Geo r1 = r5.geo
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.dpi
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_root
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.disk_size
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.battery_state
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.battery_level
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.battery_save_enabled
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.device_name
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Long r1 = r5.start_timestamp
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.android_api_level
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.mem_size
                r2 = 19
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.total_disk_size
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.free_disk_size
                r2 = 21
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.sd_total_disk_size
                r2 = 22
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r1 = r5.sd_free_disk_size
                r2 = 23
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r5.resolution
                r2 = 24
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.system_update_time
                r2 = 25
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.internal_name
                r2 = 26
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.boot_mark
                r2 = 27
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.update_mark
                r2 = 28
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.Device r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.Device r2 = (com.czhj.sdk.common.models.Device) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.Device r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.device_type
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.os_type
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r1 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r2 = r5.os_version
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.vendor
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.model
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> r1 = com.czhj.sdk.common.models.DeviceId.ADAPTER
                com.czhj.sdk.common.models.DeviceId r2 = r5.did
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r1 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r2 = r5.screen_size
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> r1 = com.czhj.sdk.common.models.Geo.ADAPTER
                com.czhj.sdk.common.models.Geo r2 = r5.geo
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.dpi
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_root
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.disk_size
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.battery_state
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.battery_level
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.battery_save_enabled
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.device_name
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.INT64
                java.lang.Long r2 = r5.start_timestamp
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.android_api_level
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.mem_size
                r3 = 19
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.total_disk_size
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.free_disk_size
                r3 = 21
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.sd_total_disk_size
                r3 = 22
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Long> r1 = com.czhj.wire.ProtoAdapter.UINT64
                java.lang.Long r2 = r5.sd_free_disk_size
                r3 = 23
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r1 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r2 = r5.resolution
                r3 = 24
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.system_update_time
                r3 = 25
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.internal_name
                r3 = 26
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.boot_mark
                r3 = 27
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.update_mark
                r3 = 28
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.Device r1) {
                r0 = this;
                com.czhj.sdk.common.models.Device r1 = (com.czhj.sdk.common.models.Device) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.Device redact(com.czhj.sdk.common.models.Device r3) {
                r2 = this;
                com.czhj.sdk.common.models.Device$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.Version r0 = r3.os_version
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r3.os_version
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Version r0 = (com.czhj.sdk.common.models.Version) r0
                r3.os_version = r0
            L14:
                com.czhj.sdk.common.models.DeviceId r0 = r3.did
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.DeviceId> r0 = com.czhj.sdk.common.models.DeviceId.ADAPTER
                com.czhj.sdk.common.models.DeviceId r1 = r3.did
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.DeviceId r0 = (com.czhj.sdk.common.models.DeviceId) r0
                r3.did = r0
            L24:
                com.czhj.sdk.common.models.Size r0 = r3.screen_size
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r3.screen_size
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Size r0 = (com.czhj.sdk.common.models.Size) r0
                r3.screen_size = r0
            L34:
                com.czhj.sdk.common.models.Geo r0 = r3.geo
                if (r0 == 0) goto L44
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Geo> r0 = com.czhj.sdk.common.models.Geo.ADAPTER
                com.czhj.sdk.common.models.Geo r1 = r3.geo
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Geo r0 = (com.czhj.sdk.common.models.Geo) r0
                r3.geo = r0
            L44:
                com.czhj.sdk.common.models.Size r0 = r3.resolution
                if (r0 == 0) goto L54
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r3.resolution
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Size r0 = (com.czhj.sdk.common.models.Size) r0
                r3.resolution = r0
            L54:
                r3.clearUnknownFields()
                com.czhj.sdk.common.models.Device r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.sdk.common.models.Device redact(com.czhj.sdk.common.models.Device r1) {
                r0 = this;
                com.czhj.sdk.common.models.Device r1 = (com.czhj.sdk.common.models.Device) r1
                com.czhj.sdk.common.models.Device r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.Device$ProtoAdapter_Device r0 = new com.czhj.sdk.common.models.Device$ProtoAdapter_Device
            r0.<init>()
            com.czhj.sdk.common.models.Device.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.Device.CREATOR = r0
            r0 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.Device.DEFAULT_DEVICE_TYPE = r0
            com.czhj.sdk.common.models.Device.DEFAULT_OS_TYPE = r0
            com.czhj.sdk.common.models.Device.DEFAULT_DPI = r0
            com.czhj.sdk.common.models.Device.DEFAULT_IS_ROOT = r1
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            com.czhj.sdk.common.models.Device.DEFAULT_DISK_SIZE = r2
            com.czhj.sdk.common.models.Device.DEFAULT_BATTERY_STATE = r0
            r3 = 0
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            com.czhj.sdk.common.models.Device.DEFAULT_BATTERY_LEVEL = r3
            com.czhj.sdk.common.models.Device.DEFAULT_BATTERY_SAVE_ENABLED = r1
            com.czhj.sdk.common.models.Device.DEFAULT_START_TIMESTAMP = r2
            com.czhj.sdk.common.models.Device.DEFAULT_ANDROID_API_LEVEL = r0
            com.czhj.sdk.common.models.Device.DEFAULT_MEM_SIZE = r2
            com.czhj.sdk.common.models.Device.DEFAULT_TOTAL_DISK_SIZE = r2
            com.czhj.sdk.common.models.Device.DEFAULT_FREE_DISK_SIZE = r2
            com.czhj.sdk.common.models.Device.DEFAULT_SD_TOTAL_DISK_SIZE = r2
            com.czhj.sdk.common.models.Device.DEFAULT_SD_FREE_DISK_SIZE = r2
            return
    }

    public Device(java.lang.Integer r30, java.lang.Integer r31, com.czhj.sdk.common.models.Version r32, java.lang.String r33, java.lang.String r34, com.czhj.sdk.common.models.DeviceId r35, com.czhj.sdk.common.models.Size r36, com.czhj.sdk.common.models.Geo r37, java.lang.Integer r38, java.lang.Boolean r39, java.lang.Long r40, java.lang.Integer r41, java.lang.Float r42, java.lang.Boolean r43, java.lang.String r44, java.lang.Long r45, java.lang.Integer r46, java.lang.Long r47, java.lang.Long r48, java.lang.Long r49, java.lang.Long r50, java.lang.Long r51, com.czhj.sdk.common.models.Size r52, java.lang.String r53, java.lang.String r54, java.lang.String r55, java.lang.String r56) {
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

    public Device(java.lang.Integer r4, java.lang.Integer r5, com.czhj.sdk.common.models.Version r6, java.lang.String r7, java.lang.String r8, com.czhj.sdk.common.models.DeviceId r9, com.czhj.sdk.common.models.Size r10, com.czhj.sdk.common.models.Geo r11, java.lang.Integer r12, java.lang.Boolean r13, java.lang.Long r14, java.lang.Integer r15, java.lang.Float r16, java.lang.Boolean r17, java.lang.String r18, java.lang.Long r19, java.lang.Integer r20, java.lang.Long r21, java.lang.Long r22, java.lang.Long r23, java.lang.Long r24, java.lang.Long r25, com.czhj.sdk.common.models.Size r26, java.lang.String r27, java.lang.String r28, java.lang.String r29, java.lang.String r30, com.czhj.wire.okio.ByteString r31) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Device> r1 = com.czhj.sdk.common.models.Device.ADAPTER
            r2 = r31
            r3.<init>(r1, r2)
            r1 = r4
            r0.device_type = r1
            r1 = r5
            r0.os_type = r1
            r1 = r6
            r0.os_version = r1
            r1 = r7
            r0.vendor = r1
            r1 = r8
            r0.model = r1
            r1 = r9
            r0.did = r1
            r1 = r10
            r0.screen_size = r1
            r1 = r11
            r0.geo = r1
            r1 = r12
            r0.dpi = r1
            r1 = r13
            r0.is_root = r1
            r1 = r14
            r0.disk_size = r1
            r1 = r15
            r0.battery_state = r1
            r1 = r16
            r0.battery_level = r1
            r1 = r17
            r0.battery_save_enabled = r1
            r1 = r18
            r0.device_name = r1
            r1 = r19
            r0.start_timestamp = r1
            r1 = r20
            r0.android_api_level = r1
            r1 = r21
            r0.mem_size = r1
            r1 = r22
            r0.total_disk_size = r1
            r1 = r23
            r0.free_disk_size = r1
            r1 = r24
            r0.sd_total_disk_size = r1
            r1 = r25
            r0.sd_free_disk_size = r1
            r1 = r26
            r0.resolution = r1
            r1 = r27
            r0.system_update_time = r1
            r1 = r28
            r0.internal_name = r1
            r1 = r29
            r0.boot_mark = r1
            r1 = r30
            r0.update_mark = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.Device
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.Device r5 = (com.czhj.sdk.common.models.Device) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L129
            java.lang.Integer r1 = r4.device_type
            java.lang.Integer r3 = r5.device_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Integer r1 = r4.os_type
            java.lang.Integer r3 = r5.os_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            com.czhj.sdk.common.models.Version r1 = r4.os_version
            com.czhj.sdk.common.models.Version r3 = r5.os_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.vendor
            java.lang.String r3 = r5.vendor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.model
            java.lang.String r3 = r5.model
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            com.czhj.sdk.common.models.DeviceId r1 = r4.did
            com.czhj.sdk.common.models.DeviceId r3 = r5.did
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            com.czhj.sdk.common.models.Size r1 = r4.screen_size
            com.czhj.sdk.common.models.Size r3 = r5.screen_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            com.czhj.sdk.common.models.Geo r1 = r4.geo
            com.czhj.sdk.common.models.Geo r3 = r5.geo
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Integer r1 = r4.dpi
            java.lang.Integer r3 = r5.dpi
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Boolean r1 = r4.is_root
            java.lang.Boolean r3 = r5.is_root
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.disk_size
            java.lang.Long r3 = r5.disk_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Integer r1 = r4.battery_state
            java.lang.Integer r3 = r5.battery_state
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Float r1 = r4.battery_level
            java.lang.Float r3 = r5.battery_level
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Boolean r1 = r4.battery_save_enabled
            java.lang.Boolean r3 = r5.battery_save_enabled
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.device_name
            java.lang.String r3 = r5.device_name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.start_timestamp
            java.lang.Long r3 = r5.start_timestamp
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Integer r1 = r4.android_api_level
            java.lang.Integer r3 = r5.android_api_level
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.mem_size
            java.lang.Long r3 = r5.mem_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.total_disk_size
            java.lang.Long r3 = r5.total_disk_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.free_disk_size
            java.lang.Long r3 = r5.free_disk_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.sd_total_disk_size
            java.lang.Long r3 = r5.sd_total_disk_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.Long r1 = r4.sd_free_disk_size
            java.lang.Long r3 = r5.sd_free_disk_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            com.czhj.sdk.common.models.Size r1 = r4.resolution
            com.czhj.sdk.common.models.Size r3 = r5.resolution
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.system_update_time
            java.lang.String r3 = r5.system_update_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.internal_name
            java.lang.String r3 = r5.internal_name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.boot_mark
            java.lang.String r3 = r5.boot_mark
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L129
            java.lang.String r1 = r4.update_mark
            java.lang.String r5 = r5.update_mark
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
            java.lang.Integer r1 = r3.device_type
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.os_type
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Version r1 = r3.os_version
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.vendor
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.model
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.DeviceId r1 = r3.did
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Size r1 = r3.screen_size
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Geo r1 = r3.geo
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.dpi
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_root
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.disk_size
            if (r1 == 0) goto L9a
            int r1 = r1.hashCode()
            goto L9b
        L9a:
            r1 = r2
        L9b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.battery_state
            if (r1 == 0) goto La7
            int r1 = r1.hashCode()
            goto La8
        La7:
            r1 = r2
        La8:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.battery_level
            if (r1 == 0) goto Lb4
            int r1 = r1.hashCode()
            goto Lb5
        Lb4:
            r1 = r2
        Lb5:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.battery_save_enabled
            if (r1 == 0) goto Lc1
            int r1 = r1.hashCode()
            goto Lc2
        Lc1:
            r1 = r2
        Lc2:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.device_name
            if (r1 == 0) goto Lce
            int r1 = r1.hashCode()
            goto Lcf
        Lce:
            r1 = r2
        Lcf:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.start_timestamp
            if (r1 == 0) goto Ldb
            int r1 = r1.hashCode()
            goto Ldc
        Ldb:
            r1 = r2
        Ldc:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.android_api_level
            if (r1 == 0) goto Le8
            int r1 = r1.hashCode()
            goto Le9
        Le8:
            r1 = r2
        Le9:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.mem_size
            if (r1 == 0) goto Lf5
            int r1 = r1.hashCode()
            goto Lf6
        Lf5:
            r1 = r2
        Lf6:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.total_disk_size
            if (r1 == 0) goto L102
            int r1 = r1.hashCode()
            goto L103
        L102:
            r1 = r2
        L103:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.free_disk_size
            if (r1 == 0) goto L10f
            int r1 = r1.hashCode()
            goto L110
        L10f:
            r1 = r2
        L110:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.sd_total_disk_size
            if (r1 == 0) goto L11c
            int r1 = r1.hashCode()
            goto L11d
        L11c:
            r1 = r2
        L11d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Long r1 = r3.sd_free_disk_size
            if (r1 == 0) goto L129
            int r1 = r1.hashCode()
            goto L12a
        L129:
            r1 = r2
        L12a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Size r1 = r3.resolution
            if (r1 == 0) goto L136
            int r1 = r1.hashCode()
            goto L137
        L136:
            r1 = r2
        L137:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.system_update_time
            if (r1 == 0) goto L143
            int r1 = r1.hashCode()
            goto L144
        L143:
            r1 = r2
        L144:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.internal_name
            if (r1 == 0) goto L150
            int r1 = r1.hashCode()
            goto L151
        L150:
            r1 = r2
        L151:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.boot_mark
            if (r1 == 0) goto L15d
            int r1 = r1.hashCode()
            goto L15e
        L15d:
            r1 = r2
        L15e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.update_mark
            if (r1 == 0) goto L169
            int r2 = r1.hashCode()
        L169:
            int r0 = r0 + r2
            r3.hashCode = r0
        L16c:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.Device.Builder newBuilder() {
            r2 = this;
            com.czhj.sdk.common.models.Device$Builder r0 = new com.czhj.sdk.common.models.Device$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.device_type
            r0.device_type = r1
            java.lang.Integer r1 = r2.os_type
            r0.os_type = r1
            com.czhj.sdk.common.models.Version r1 = r2.os_version
            r0.os_version = r1
            java.lang.String r1 = r2.vendor
            r0.vendor = r1
            java.lang.String r1 = r2.model
            r0.model = r1
            com.czhj.sdk.common.models.DeviceId r1 = r2.did
            r0.did = r1
            com.czhj.sdk.common.models.Size r1 = r2.screen_size
            r0.screen_size = r1
            com.czhj.sdk.common.models.Geo r1 = r2.geo
            r0.geo = r1
            java.lang.Integer r1 = r2.dpi
            r0.dpi = r1
            java.lang.Boolean r1 = r2.is_root
            r0.is_root = r1
            java.lang.Long r1 = r2.disk_size
            r0.disk_size = r1
            java.lang.Integer r1 = r2.battery_state
            r0.battery_state = r1
            java.lang.Float r1 = r2.battery_level
            r0.battery_level = r1
            java.lang.Boolean r1 = r2.battery_save_enabled
            r0.battery_save_enabled = r1
            java.lang.String r1 = r2.device_name
            r0.device_name = r1
            java.lang.Long r1 = r2.start_timestamp
            r0.start_timestamp = r1
            java.lang.Integer r1 = r2.android_api_level
            r0.android_api_level = r1
            java.lang.Long r1 = r2.mem_size
            r0.mem_size = r1
            java.lang.Long r1 = r2.total_disk_size
            r0.total_disk_size = r1
            java.lang.Long r1 = r2.free_disk_size
            r0.free_disk_size = r1
            java.lang.Long r1 = r2.sd_total_disk_size
            r0.sd_total_disk_size = r1
            java.lang.Long r1 = r2.sd_free_disk_size
            r0.sd_free_disk_size = r1
            com.czhj.sdk.common.models.Size r1 = r2.resolution
            r0.resolution = r1
            java.lang.String r1 = r2.system_update_time
            r0.system_update_time = r1
            java.lang.String r1 = r2.internal_name
            r0.internal_name = r1
            java.lang.String r1 = r2.boot_mark
            r0.boot_mark = r1
            java.lang.String r1 = r2.update_mark
            r0.update_mark = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.Device$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.device_type
            if (r1 == 0) goto L13
            java.lang.String r1 = ", device_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.device_type
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.os_type
            if (r1 == 0) goto L21
            java.lang.String r1 = ", os_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.os_type
            r0.append(r1)
        L21:
            com.czhj.sdk.common.models.Version r1 = r4.os_version
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", os_version="
            r0.append(r1)
            com.czhj.sdk.common.models.Version r1 = r4.os_version
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.vendor
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", vendor="
            r0.append(r1)
            java.lang.String r1 = r4.vendor
            r0.append(r1)
        L3d:
            java.lang.String r1 = r4.model
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", model="
            r0.append(r1)
            java.lang.String r1 = r4.model
            r0.append(r1)
        L4b:
            com.czhj.sdk.common.models.DeviceId r1 = r4.did
            if (r1 == 0) goto L59
            java.lang.String r1 = ", did="
            r0.append(r1)
            com.czhj.sdk.common.models.DeviceId r1 = r4.did
            r0.append(r1)
        L59:
            com.czhj.sdk.common.models.Size r1 = r4.screen_size
            if (r1 == 0) goto L67
            java.lang.String r1 = ", screen_size="
            r0.append(r1)
            com.czhj.sdk.common.models.Size r1 = r4.screen_size
            r0.append(r1)
        L67:
            com.czhj.sdk.common.models.Geo r1 = r4.geo
            if (r1 == 0) goto L75
            java.lang.String r1 = ", geo="
            r0.append(r1)
            com.czhj.sdk.common.models.Geo r1 = r4.geo
            r0.append(r1)
        L75:
            java.lang.Integer r1 = r4.dpi
            if (r1 == 0) goto L83
            java.lang.String r1 = ", dpi="
            r0.append(r1)
            java.lang.Integer r1 = r4.dpi
            r0.append(r1)
        L83:
            java.lang.Boolean r1 = r4.is_root
            if (r1 == 0) goto L91
            java.lang.String r1 = ", is_root="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_root
            r0.append(r1)
        L91:
            java.lang.Long r1 = r4.disk_size
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", disk_size="
            r0.append(r1)
            java.lang.Long r1 = r4.disk_size
            r0.append(r1)
        L9f:
            java.lang.Integer r1 = r4.battery_state
            if (r1 == 0) goto Lad
            java.lang.String r1 = ", battery_state="
            r0.append(r1)
            java.lang.Integer r1 = r4.battery_state
            r0.append(r1)
        Lad:
            java.lang.Float r1 = r4.battery_level
            if (r1 == 0) goto Lbb
            java.lang.String r1 = ", battery_level="
            r0.append(r1)
            java.lang.Float r1 = r4.battery_level
            r0.append(r1)
        Lbb:
            java.lang.Boolean r1 = r4.battery_save_enabled
            if (r1 == 0) goto Lc9
            java.lang.String r1 = ", battery_save_enabled="
            r0.append(r1)
            java.lang.Boolean r1 = r4.battery_save_enabled
            r0.append(r1)
        Lc9:
            java.lang.String r1 = r4.device_name
            if (r1 == 0) goto Ld7
            java.lang.String r1 = ", device_name="
            r0.append(r1)
            java.lang.String r1 = r4.device_name
            r0.append(r1)
        Ld7:
            java.lang.Long r1 = r4.start_timestamp
            if (r1 == 0) goto Le5
            java.lang.String r1 = ", start_timestamp="
            r0.append(r1)
            java.lang.Long r1 = r4.start_timestamp
            r0.append(r1)
        Le5:
            java.lang.Integer r1 = r4.android_api_level
            if (r1 == 0) goto Lf3
            java.lang.String r1 = ", android_api_level="
            r0.append(r1)
            java.lang.Integer r1 = r4.android_api_level
            r0.append(r1)
        Lf3:
            java.lang.Long r1 = r4.mem_size
            if (r1 == 0) goto L101
            java.lang.String r1 = ", mem_size="
            r0.append(r1)
            java.lang.Long r1 = r4.mem_size
            r0.append(r1)
        L101:
            java.lang.Long r1 = r4.total_disk_size
            if (r1 == 0) goto L10f
            java.lang.String r1 = ", total_disk_size="
            r0.append(r1)
            java.lang.Long r1 = r4.total_disk_size
            r0.append(r1)
        L10f:
            java.lang.Long r1 = r4.free_disk_size
            if (r1 == 0) goto L11d
            java.lang.String r1 = ", free_disk_size="
            r0.append(r1)
            java.lang.Long r1 = r4.free_disk_size
            r0.append(r1)
        L11d:
            java.lang.Long r1 = r4.sd_total_disk_size
            if (r1 == 0) goto L12b
            java.lang.String r1 = ", sd_total_disk_size="
            r0.append(r1)
            java.lang.Long r1 = r4.sd_total_disk_size
            r0.append(r1)
        L12b:
            java.lang.Long r1 = r4.sd_free_disk_size
            if (r1 == 0) goto L139
            java.lang.String r1 = ", sd_free_disk_size="
            r0.append(r1)
            java.lang.Long r1 = r4.sd_free_disk_size
            r0.append(r1)
        L139:
            com.czhj.sdk.common.models.Size r1 = r4.resolution
            if (r1 == 0) goto L147
            java.lang.String r1 = ", resolution="
            r0.append(r1)
            com.czhj.sdk.common.models.Size r1 = r4.resolution
            r0.append(r1)
        L147:
            java.lang.String r1 = r4.system_update_time
            if (r1 == 0) goto L155
            java.lang.String r1 = ", system_update_time="
            r0.append(r1)
            java.lang.String r1 = r4.system_update_time
            r0.append(r1)
        L155:
            java.lang.String r1 = r4.internal_name
            if (r1 == 0) goto L163
            java.lang.String r1 = ", internal_name="
            r0.append(r1)
            java.lang.String r1 = r4.internal_name
            r0.append(r1)
        L163:
            java.lang.String r1 = r4.boot_mark
            if (r1 == 0) goto L171
            java.lang.String r1 = ", boot_mark="
            r0.append(r1)
            java.lang.String r1 = r4.boot_mark
            r0.append(r1)
        L171:
            java.lang.String r1 = r4.update_mark
            if (r1 == 0) goto L17f
            java.lang.String r1 = ", update_mark="
            r0.append(r1)
            java.lang.String r1 = r4.update_mark
            r0.append(r1)
        L17f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "Device{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
