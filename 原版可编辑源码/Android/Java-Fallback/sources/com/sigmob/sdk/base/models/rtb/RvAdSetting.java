package com.sigmob.sdk.base.models.rtb;

public final class RvAdSetting extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.RvAdSetting, com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.RvAdSetting> CREATOR = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_AUTO_LOAD = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_EXIT_ON_VIDEO_CLOSE = null;
    public static final java.lang.Integer DEFAULT_ENDCARD_CLOSE_IMAGE = null;
    public static final java.lang.Integer DEFAULT_ENDCARD_CLOSE_POSITION = null;
    public static final java.lang.Integer DEFAULT_END_IMPRESSION_TIME = null;
    public static final java.lang.Integer DEFAULT_END_TIME = null;
    public static final java.lang.Float DEFAULT_FINISHED = null;
    public static final java.lang.Boolean DEFAULT_FULL_CLICK_ON_VIDEO = null;
    public static final java.lang.Integer DEFAULT_IF_MUTE = null;
    public static final java.lang.Boolean DEFAULT_INVISIBLE_AD_LABEL = null;
    public static final java.lang.Integer DEFAULT_MUTE_POSTION = null;
    public static final java.lang.Integer DEFAULT_SKIP_PERCENT = null;
    public static final java.lang.Integer DEFAULT_SKIP_SECONDS = null;
    public static final java.lang.Integer DEFAULT_VIDEO_CLOSE_POSITION = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "ClickAreaSetting#ADAPTER", tag = 10)
    public final com.sigmob.sdk.base.models.rtb.ClickAreaSetting click_setting;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 15)
    public final java.lang.Boolean disable_auto_load;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 8)
    public final java.lang.Boolean enable_exit_on_video_close;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 14)
    public final java.lang.Integer end_impression_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 12)
    public final java.lang.Integer end_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 13)
    public final java.lang.Integer endcard_close_image;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 4)
    public final java.lang.Integer endcard_close_position;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 2)
    public final java.lang.Float finished;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 9)
    public final java.lang.Boolean full_click_on_video;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 1)
    public final java.lang.Integer if_mute;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 11)
    public final java.lang.Boolean invisible_ad_label;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 5)
    public final java.lang.Integer mute_postion;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 6)
    public final java.lang.Integer skip_percent;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 7)
    public final java.lang.Integer skip_seconds;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 3)
    public final java.lang.Integer video_close_position;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.RvAdSetting, com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder> {
        public com.sigmob.sdk.base.models.rtb.ClickAreaSetting click_setting;
        public java.lang.Boolean disable_auto_load;
        public java.lang.Boolean enable_exit_on_video_close;
        public java.lang.Integer end_impression_time;
        public java.lang.Integer end_time;
        public java.lang.Integer endcard_close_image;
        public java.lang.Integer endcard_close_position;
        public java.lang.Float finished;
        public java.lang.Boolean full_click_on_video;
        public java.lang.Integer if_mute;
        public java.lang.Boolean invisible_ad_label;
        public java.lang.Integer mute_postion;
        public java.lang.Integer skip_percent;
        public java.lang.Integer skip_seconds;
        public java.lang.Integer video_close_position;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_IF_MUTE
                r1.if_mute = r0
                java.lang.Float r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_FINISHED
                r1.finished = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_VIDEO_CLOSE_POSITION
                r1.video_close_position = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_ENDCARD_CLOSE_POSITION
                r1.endcard_close_position = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_MUTE_POSTION
                r1.mute_postion = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_SKIP_PERCENT
                r1.skip_percent = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_SKIP_SECONDS
                r1.skip_seconds = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_ENABLE_EXIT_ON_VIDEO_CLOSE
                r1.enable_exit_on_video_close = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_FULL_CLICK_ON_VIDEO
                r1.full_click_on_video = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_INVISIBLE_AD_LABEL
                r1.invisible_ad_label = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_END_TIME
                r1.end_time = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_ENDCARD_CLOSE_IMAGE
                r1.endcard_close_image = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_END_IMPRESSION_TIME
                r1.end_impression_time = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_DISABLE_AUTO_LOAD
                r1.disable_auto_load = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.RvAdSetting build() {
                r20 = this;
                r0 = r20
                com.sigmob.sdk.base.models.rtb.RvAdSetting r18 = new com.sigmob.sdk.base.models.rtb.RvAdSetting
                r1 = r18
                java.lang.Integer r2 = r0.if_mute
                java.lang.Float r3 = r0.finished
                java.lang.Integer r4 = r0.video_close_position
                java.lang.Integer r5 = r0.endcard_close_position
                java.lang.Integer r6 = r0.mute_postion
                java.lang.Integer r7 = r0.skip_percent
                java.lang.Integer r8 = r0.skip_seconds
                java.lang.Boolean r9 = r0.enable_exit_on_video_close
                java.lang.Boolean r10 = r0.full_click_on_video
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r11 = r0.click_setting
                java.lang.Boolean r12 = r0.invisible_ad_label
                java.lang.Integer r13 = r0.end_time
                java.lang.Integer r14 = r0.endcard_close_image
                java.lang.Integer r15 = r0.end_impression_time
                r19 = r1
                java.lang.Boolean r1 = r0.disable_auto_load
                r16 = r1
                com.czhj.wire.okio.ByteString r17 = super.buildUnknownFields()
                r1 = r19
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
                return r18
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder click_setting(com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1) {
                r0 = this;
                r0.click_setting = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder disable_auto_load(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_auto_load = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder enable_exit_on_video_close(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_exit_on_video_close = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder end_impression_time(java.lang.Integer r1) {
                r0 = this;
                r0.end_impression_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder end_time(java.lang.Integer r1) {
                r0 = this;
                r0.end_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder endcard_close_image(java.lang.Integer r1) {
                r0 = this;
                r0.endcard_close_image = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder endcard_close_position(java.lang.Integer r1) {
                r0 = this;
                r0.endcard_close_position = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder finished(java.lang.Float r1) {
                r0 = this;
                r0.finished = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder full_click_on_video(java.lang.Boolean r1) {
                r0 = this;
                r0.full_click_on_video = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder if_mute(java.lang.Integer r1) {
                r0 = this;
                r0.if_mute = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder invisible_ad_label(java.lang.Boolean r1) {
                r0 = this;
                r0.invisible_ad_label = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder mute_postion(java.lang.Integer r1) {
                r0 = this;
                r0.mute_postion = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder skip_percent(java.lang.Integer r1) {
                r0 = this;
                r0.skip_percent = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder skip_seconds(java.lang.Integer r1) {
                r0 = this;
                r0.skip_seconds = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder video_close_position(java.lang.Integer r1) {
                r0 = this;
                r0.video_close_position = r1
                return r0
        }
    }

    private static final class ProtoAdapter_RvAdSetting extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> {
        public ProtoAdapter_RvAdSetting() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.RvAdSetting> r1 = com.sigmob.sdk.base.models.rtb.RvAdSetting.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.RvAdSetting decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.RvAdSetting$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto Lde
                switch(r3) {
                    case 1: goto Ld1;
                    case 2: goto Lc4;
                    case 3: goto Lb7;
                    case 4: goto Laa;
                    case 5: goto L9d;
                    case 6: goto L90;
                    case 7: goto L83;
                    case 8: goto L77;
                    case 9: goto L6b;
                    case 10: goto L5f;
                    case 11: goto L53;
                    case 12: goto L47;
                    case 13: goto L3b;
                    case 14: goto L2f;
                    case 15: goto L23;
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
                r0.disable_auto_load(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.end_impression_time(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.endcard_close_image(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.end_time(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.invisible_ad_label(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> r3 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r3 = (com.sigmob.sdk.base.models.rtb.ClickAreaSetting) r3
                r0.click_setting(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.full_click_on_video(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_exit_on_video_close(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.skip_seconds(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.skip_percent(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.mute_postion(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.endcard_close_position(r3)
                goto L9
            Lb7:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.video_close_position(r3)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.finished(r3)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.if_mute(r3)
                goto L9
            Lde:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.RvAdSetting r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.RvAdSetting decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.RvAdSetting r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.if_mute
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.finished
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.video_close_position
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.endcard_close_position
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.mute_postion
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.skip_percent
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.skip_seconds
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_exit_on_video_close
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.full_click_on_video
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r5.click_setting
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.invisible_ad_label
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.end_time
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.endcard_close_image
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.end_impression_time
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_auto_load
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.RvAdSetting r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting r2 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.RvAdSetting r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.if_mute
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.finished
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.video_close_position
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.endcard_close_position
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.mute_postion
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.skip_percent
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.skip_seconds
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_exit_on_video_close
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.full_click_on_video
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> r1 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r2 = r5.click_setting
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.invisible_ad_label
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.end_time
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.endcard_close_image
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.end_impression_time
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_auto_load
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.RvAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.RvAdSetting redact(com.sigmob.sdk.base.models.rtb.RvAdSetting r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r0 = r3.click_setting
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ClickAreaSetting> r0 = com.sigmob.sdk.base.models.rtb.ClickAreaSetting.ADAPTER
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r3.click_setting
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.ClickAreaSetting r0 = (com.sigmob.sdk.base.models.rtb.ClickAreaSetting) r0
                r3.click_setting = r0
            L14:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.RvAdSetting r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.RvAdSetting redact(com.sigmob.sdk.base.models.rtb.RvAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r1
                com.sigmob.sdk.base.models.rtb.RvAdSetting r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.RvAdSetting$ProtoAdapter_RvAdSetting r0 = new com.sigmob.sdk.base.models.rtb.RvAdSetting$ProtoAdapter_RvAdSetting
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.CREATOR = r0
            r0 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_IF_MUTE = r0
            r2 = 1065353216(0x3f800000, float:1.0)
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_FINISHED = r2
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_VIDEO_CLOSE_POSITION = r2
            r2 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_ENDCARD_CLOSE_POSITION = r2
            r2 = 4
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_MUTE_POSTION = r2
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_SKIP_PERCENT = r0
            r2 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_SKIP_SECONDS = r2
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_ENABLE_EXIT_ON_VIDEO_CLOSE = r1
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_FULL_CLICK_ON_VIDEO = r1
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_INVISIBLE_AD_LABEL = r1
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_END_TIME = r0
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_ENDCARD_CLOSE_IMAGE = r0
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_END_IMPRESSION_TIME = r0
            com.sigmob.sdk.base.models.rtb.RvAdSetting.DEFAULT_DISABLE_AUTO_LOAD = r1
            return
    }

    public RvAdSetting(java.lang.Integer r18, java.lang.Float r19, java.lang.Integer r20, java.lang.Integer r21, java.lang.Integer r22, java.lang.Integer r23, java.lang.Integer r24, java.lang.Boolean r25, java.lang.Boolean r26, com.sigmob.sdk.base.models.rtb.ClickAreaSetting r27, java.lang.Boolean r28, java.lang.Integer r29, java.lang.Integer r30, java.lang.Integer r31, java.lang.Boolean r32) {
            r17 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            r3 = r20
            r4 = r21
            r5 = r22
            r6 = r23
            r7 = r24
            r8 = r25
            r9 = r26
            r10 = r27
            r11 = r28
            r12 = r29
            r13 = r30
            r14 = r31
            r15 = r32
            com.czhj.wire.okio.ByteString r16 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            return
    }

    public RvAdSetting(java.lang.Integer r4, java.lang.Float r5, java.lang.Integer r6, java.lang.Integer r7, java.lang.Integer r8, java.lang.Integer r9, java.lang.Integer r10, java.lang.Boolean r11, java.lang.Boolean r12, com.sigmob.sdk.base.models.rtb.ClickAreaSetting r13, java.lang.Boolean r14, java.lang.Integer r15, java.lang.Integer r16, java.lang.Integer r17, java.lang.Boolean r18, com.czhj.wire.okio.ByteString r19) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.RvAdSetting> r1 = com.sigmob.sdk.base.models.rtb.RvAdSetting.ADAPTER
            r2 = r19
            r3.<init>(r1, r2)
            r1 = r4
            r0.if_mute = r1
            r1 = r5
            r0.finished = r1
            r1 = r6
            r0.video_close_position = r1
            r1 = r7
            r0.endcard_close_position = r1
            r1 = r8
            r0.mute_postion = r1
            r1 = r9
            r0.skip_percent = r1
            r1 = r10
            r0.skip_seconds = r1
            r1 = r11
            r0.enable_exit_on_video_close = r1
            r1 = r12
            r0.full_click_on_video = r1
            r1 = r13
            r0.click_setting = r1
            r1 = r14
            r0.invisible_ad_label = r1
            r1 = r15
            r0.end_time = r1
            r1 = r16
            r0.endcard_close_image = r1
            r1 = r17
            r0.end_impression_time = r1
            r1 = r18
            r0.disable_auto_load = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.RvAdSetting
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.RvAdSetting r5 = (com.sigmob.sdk.base.models.rtb.RvAdSetting) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.if_mute
            java.lang.Integer r3 = r5.if_mute
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Float r1 = r4.finished
            java.lang.Float r3 = r5.finished
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.video_close_position
            java.lang.Integer r3 = r5.video_close_position
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.endcard_close_position
            java.lang.Integer r3 = r5.endcard_close_position
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.mute_postion
            java.lang.Integer r3 = r5.mute_postion
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.skip_percent
            java.lang.Integer r3 = r5.skip_percent
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.skip_seconds
            java.lang.Integer r3 = r5.skip_seconds
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.enable_exit_on_video_close
            java.lang.Boolean r3 = r5.enable_exit_on_video_close
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.full_click_on_video
            java.lang.Boolean r3 = r5.full_click_on_video
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r4.click_setting
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r3 = r5.click_setting
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.invisible_ad_label
            java.lang.Boolean r3 = r5.invisible_ad_label
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.end_time
            java.lang.Integer r3 = r5.end_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.endcard_close_image
            java.lang.Integer r3 = r5.endcard_close_image
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Integer r1 = r4.end_impression_time
            java.lang.Integer r3 = r5.end_impression_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto Lb1
            java.lang.Boolean r1 = r4.disable_auto_load
            java.lang.Boolean r5 = r5.disable_auto_load
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto Lb1
            goto Lb2
        Lb1:
            r0 = r2
        Lb2:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto Ld0
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.if_mute
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.finished
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.video_close_position
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.endcard_close_position
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.mute_postion
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.skip_percent
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.skip_seconds
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_exit_on_video_close
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.full_click_on_video
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r3.click_setting
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.invisible_ad_label
            if (r1 == 0) goto L9a
            int r1 = r1.hashCode()
            goto L9b
        L9a:
            r1 = r2
        L9b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.end_time
            if (r1 == 0) goto La7
            int r1 = r1.hashCode()
            goto La8
        La7:
            r1 = r2
        La8:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.endcard_close_image
            if (r1 == 0) goto Lb4
            int r1 = r1.hashCode()
            goto Lb5
        Lb4:
            r1 = r2
        Lb5:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.end_impression_time
            if (r1 == 0) goto Lc1
            int r1 = r1.hashCode()
            goto Lc2
        Lc1:
            r1 = r2
        Lc2:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_auto_load
            if (r1 == 0) goto Lcd
            int r2 = r1.hashCode()
        Lcd:
            int r0 = r0 + r2
            r3.hashCode = r0
        Ld0:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.RvAdSetting.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.RvAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.RvAdSetting$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.if_mute
            r0.if_mute = r1
            java.lang.Float r1 = r2.finished
            r0.finished = r1
            java.lang.Integer r1 = r2.video_close_position
            r0.video_close_position = r1
            java.lang.Integer r1 = r2.endcard_close_position
            r0.endcard_close_position = r1
            java.lang.Integer r1 = r2.mute_postion
            r0.mute_postion = r1
            java.lang.Integer r1 = r2.skip_percent
            r0.skip_percent = r1
            java.lang.Integer r1 = r2.skip_seconds
            r0.skip_seconds = r1
            java.lang.Boolean r1 = r2.enable_exit_on_video_close
            r0.enable_exit_on_video_close = r1
            java.lang.Boolean r1 = r2.full_click_on_video
            r0.full_click_on_video = r1
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r2.click_setting
            r0.click_setting = r1
            java.lang.Boolean r1 = r2.invisible_ad_label
            r0.invisible_ad_label = r1
            java.lang.Integer r1 = r2.end_time
            r0.end_time = r1
            java.lang.Integer r1 = r2.endcard_close_image
            r0.endcard_close_image = r1
            java.lang.Integer r1 = r2.end_impression_time
            r0.end_impression_time = r1
            java.lang.Boolean r1 = r2.disable_auto_load
            r0.disable_auto_load = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.if_mute
            if (r1 == 0) goto L13
            java.lang.String r1 = ", if_mute="
            r0.append(r1)
            java.lang.Integer r1 = r4.if_mute
            r0.append(r1)
        L13:
            java.lang.Float r1 = r4.finished
            if (r1 == 0) goto L21
            java.lang.String r1 = ", finished="
            r0.append(r1)
            java.lang.Float r1 = r4.finished
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.video_close_position
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", video_close_position="
            r0.append(r1)
            java.lang.Integer r1 = r4.video_close_position
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.endcard_close_position
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", endcard_close_position="
            r0.append(r1)
            java.lang.Integer r1 = r4.endcard_close_position
            r0.append(r1)
        L3d:
            java.lang.Integer r1 = r4.mute_postion
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", mute_postion="
            r0.append(r1)
            java.lang.Integer r1 = r4.mute_postion
            r0.append(r1)
        L4b:
            java.lang.Integer r1 = r4.skip_percent
            if (r1 == 0) goto L59
            java.lang.String r1 = ", skip_percent="
            r0.append(r1)
            java.lang.Integer r1 = r4.skip_percent
            r0.append(r1)
        L59:
            java.lang.Integer r1 = r4.skip_seconds
            if (r1 == 0) goto L67
            java.lang.String r1 = ", skip_seconds="
            r0.append(r1)
            java.lang.Integer r1 = r4.skip_seconds
            r0.append(r1)
        L67:
            java.lang.Boolean r1 = r4.enable_exit_on_video_close
            if (r1 == 0) goto L75
            java.lang.String r1 = ", enable_exit_on_video_close="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_exit_on_video_close
            r0.append(r1)
        L75:
            java.lang.Boolean r1 = r4.full_click_on_video
            if (r1 == 0) goto L83
            java.lang.String r1 = ", full_click_on_video="
            r0.append(r1)
            java.lang.Boolean r1 = r4.full_click_on_video
            r0.append(r1)
        L83:
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r4.click_setting
            if (r1 == 0) goto L91
            java.lang.String r1 = ", click_setting="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.ClickAreaSetting r1 = r4.click_setting
            r0.append(r1)
        L91:
            java.lang.Boolean r1 = r4.invisible_ad_label
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", invisible_ad_label="
            r0.append(r1)
            java.lang.Boolean r1 = r4.invisible_ad_label
            r0.append(r1)
        L9f:
            java.lang.Integer r1 = r4.end_time
            if (r1 == 0) goto Lad
            java.lang.String r1 = ", end_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.end_time
            r0.append(r1)
        Lad:
            java.lang.Integer r1 = r4.endcard_close_image
            if (r1 == 0) goto Lbb
            java.lang.String r1 = ", endcard_close_image="
            r0.append(r1)
            java.lang.Integer r1 = r4.endcard_close_image
            r0.append(r1)
        Lbb:
            java.lang.Integer r1 = r4.end_impression_time
            if (r1 == 0) goto Lc9
            java.lang.String r1 = ", end_impression_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.end_impression_time
            r0.append(r1)
        Lc9:
            java.lang.Boolean r1 = r4.disable_auto_load
            if (r1 == 0) goto Ld7
            java.lang.String r1 = ", disable_auto_load="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_auto_load
            r0.append(r1)
        Ld7:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "RvAdSetting{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
