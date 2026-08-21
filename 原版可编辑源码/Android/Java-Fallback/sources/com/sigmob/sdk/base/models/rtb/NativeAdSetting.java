package com.sigmob.sdk.base.models.rtb;

public final class NativeAdSetting extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.NativeAdSetting, com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.NativeAdSetting> CREATOR = null;
    public static final java.lang.Integer DEFAULT_DETAIL_PAGE_VIDEO_MUTE = null;
    public static final java.lang.Integer DEFAULT_END_IMPRESSION_TIME = null;
    public static final java.lang.Integer DEFAULT_IMPRESSION_PERCENT = null;
    public static final java.lang.Integer DEFAULT_IMPRESSION_TIME = null;
    public static final java.lang.Integer DEFAULT_PREVIEW_PAGE_VIDEO_MUTE = null;
    public static final java.lang.Integer DEFAULT_VIDEO_AUTO_PLAY = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 3)
    public final java.lang.Integer detail_page_video_mute;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 6)
    public final java.lang.Integer end_impression_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 4)
    public final java.lang.Integer impression_percent;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 5)
    public final java.lang.Integer impression_time;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer preview_page_video_mute;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer video_auto_play;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.NativeAdSetting, com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder> {
        public java.lang.Integer detail_page_video_mute;
        public java.lang.Integer end_impression_time;
        public java.lang.Integer impression_percent;
        public java.lang.Integer impression_time;
        public java.lang.Integer preview_page_video_mute;
        public java.lang.Integer video_auto_play;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_VIDEO_AUTO_PLAY
                r1.video_auto_play = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_PREVIEW_PAGE_VIDEO_MUTE
                r1.preview_page_video_mute = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_DETAIL_PAGE_VIDEO_MUTE
                r1.detail_page_video_mute = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_IMPRESSION_PERCENT
                r1.impression_percent = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_IMPRESSION_TIME
                r1.impression_time = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_END_IMPRESSION_TIME
                r1.end_impression_time = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.NativeAdSetting build() {
                r9 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r8 = new com.sigmob.sdk.base.models.rtb.NativeAdSetting
                java.lang.Integer r1 = r9.video_auto_play
                java.lang.Integer r2 = r9.preview_page_video_mute
                java.lang.Integer r3 = r9.detail_page_video_mute
                java.lang.Integer r4 = r9.impression_percent
                java.lang.Integer r5 = r9.impression_time
                java.lang.Integer r6 = r9.end_impression_time
                com.czhj.wire.okio.ByteString r7 = super.buildUnknownFields()
                r0 = r8
                r0.<init>(r1, r2, r3, r4, r5, r6, r7)
                return r8
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder detail_page_video_mute(java.lang.Integer r1) {
                r0 = this;
                r0.detail_page_video_mute = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder end_impression_time(java.lang.Integer r1) {
                r0 = this;
                r0.end_impression_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder impression_percent(java.lang.Integer r1) {
                r0 = this;
                r0.impression_percent = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder impression_time(java.lang.Integer r1) {
                r0 = this;
                r0.impression_time = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder preview_page_video_mute(java.lang.Integer r1) {
                r0 = this;
                r0.preview_page_video_mute = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder video_auto_play(java.lang.Integer r1) {
                r0 = this;
                r0.video_auto_play = r1
                return r0
        }
    }

    private static final class ProtoAdapter_NativeAdSetting extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> {
        public ProtoAdapter_NativeAdSetting() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.NativeAdSetting> r1 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.NativeAdSetting decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.NativeAdSetting$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L6b
                switch(r3) {
                    case 1: goto L5f;
                    case 2: goto L53;
                    case 3: goto L47;
                    case 4: goto L3b;
                    case 5: goto L2f;
                    case 6: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.end_impression_time(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.impression_time(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.impression_percent(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.detail_page_video_mute(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.preview_page_video_mute(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.video_auto_play(r3)
                goto L9
            L6b:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.NativeAdSetting decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.NativeAdSetting r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.video_auto_play
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.preview_page_video_mute
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.detail_page_video_mute
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.impression_percent
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.impression_time
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.end_impression_time
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.NativeAdSetting r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r2 = (com.sigmob.sdk.base.models.rtb.NativeAdSetting) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.NativeAdSetting r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.video_auto_play
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.preview_page_video_mute
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.detail_page_video_mute
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.impression_percent
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.impression_time
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.end_impression_time
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.NativeAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = (com.sigmob.sdk.base.models.rtb.NativeAdSetting) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.NativeAdSetting redact(com.sigmob.sdk.base.models.rtb.NativeAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting$Builder r1 = r1.newBuilder()
                r1.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r1.build()
                return r1
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.NativeAdSetting redact(com.sigmob.sdk.base.models.rtb.NativeAdSetting r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = (com.sigmob.sdk.base.models.rtb.NativeAdSetting) r1
                com.sigmob.sdk.base.models.rtb.NativeAdSetting r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.NativeAdSetting$ProtoAdapter_NativeAdSetting r0 = new com.sigmob.sdk.base.models.rtb.NativeAdSetting$ProtoAdapter_NativeAdSetting
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.CREATOR = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_VIDEO_AUTO_PLAY = r0
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_PREVIEW_PAGE_VIDEO_MUTE = r0
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_DETAIL_PAGE_VIDEO_MUTE = r0
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_IMPRESSION_PERCENT = r0
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_IMPRESSION_TIME = r0
            com.sigmob.sdk.base.models.rtb.NativeAdSetting.DEFAULT_END_IMPRESSION_TIME = r0
            return
    }

    public NativeAdSetting(java.lang.Integer r9, java.lang.Integer r10, java.lang.Integer r11, java.lang.Integer r12, java.lang.Integer r13, java.lang.Integer r14) {
            r8 = this;
            com.czhj.wire.okio.ByteString r7 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public NativeAdSetting(java.lang.Integer r2, java.lang.Integer r3, java.lang.Integer r4, java.lang.Integer r5, java.lang.Integer r6, java.lang.Integer r7, com.czhj.wire.okio.ByteString r8) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.NativeAdSetting> r0 = com.sigmob.sdk.base.models.rtb.NativeAdSetting.ADAPTER
            r1.<init>(r0, r8)
            r1.video_auto_play = r2
            r1.preview_page_video_mute = r3
            r1.detail_page_video_mute = r4
            r1.impression_percent = r5
            r1.impression_time = r6
            r1.end_impression_time = r7
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.NativeAdSetting
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r5 = (com.sigmob.sdk.base.models.rtb.NativeAdSetting) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L57
            java.lang.Integer r1 = r4.video_auto_play
            java.lang.Integer r3 = r5.video_auto_play
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Integer r1 = r4.preview_page_video_mute
            java.lang.Integer r3 = r5.preview_page_video_mute
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Integer r1 = r4.detail_page_video_mute
            java.lang.Integer r3 = r5.detail_page_video_mute
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Integer r1 = r4.impression_percent
            java.lang.Integer r3 = r5.impression_percent
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Integer r1 = r4.impression_time
            java.lang.Integer r3 = r5.impression_time
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L57
            java.lang.Integer r1 = r4.end_impression_time
            java.lang.Integer r5 = r5.end_impression_time
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L57
            goto L58
        L57:
            r0 = r2
        L58:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L5b
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.video_auto_play
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.preview_page_video_mute
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.detail_page_video_mute
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.impression_percent
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.impression_time
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.end_impression_time
            if (r1 == 0) goto L58
            int r2 = r1.hashCode()
        L58:
            int r0 = r0 + r2
            r3.hashCode = r0
        L5b:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.NativeAdSetting$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.NativeAdSetting.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.NativeAdSetting$Builder r0 = new com.sigmob.sdk.base.models.rtb.NativeAdSetting$Builder
            r0.<init>()
            java.lang.Integer r1 = r2.video_auto_play
            r0.video_auto_play = r1
            java.lang.Integer r1 = r2.preview_page_video_mute
            r0.preview_page_video_mute = r1
            java.lang.Integer r1 = r2.detail_page_video_mute
            r0.detail_page_video_mute = r1
            java.lang.Integer r1 = r2.impression_percent
            r0.impression_percent = r1
            java.lang.Integer r1 = r2.impression_time
            r0.impression_time = r1
            java.lang.Integer r1 = r2.end_impression_time
            r0.end_impression_time = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.video_auto_play
            if (r1 == 0) goto L13
            java.lang.String r1 = ", video_auto_play="
            r0.append(r1)
            java.lang.Integer r1 = r4.video_auto_play
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.preview_page_video_mute
            if (r1 == 0) goto L21
            java.lang.String r1 = ", preview_page_video_mute="
            r0.append(r1)
            java.lang.Integer r1 = r4.preview_page_video_mute
            r0.append(r1)
        L21:
            java.lang.Integer r1 = r4.detail_page_video_mute
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", detail_page_video_mute="
            r0.append(r1)
            java.lang.Integer r1 = r4.detail_page_video_mute
            r0.append(r1)
        L2f:
            java.lang.Integer r1 = r4.impression_percent
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", impression_percent="
            r0.append(r1)
            java.lang.Integer r1 = r4.impression_percent
            r0.append(r1)
        L3d:
            java.lang.Integer r1 = r4.impression_time
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", impression_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.impression_time
            r0.append(r1)
        L4b:
            java.lang.Integer r1 = r4.end_impression_time
            if (r1 == 0) goto L59
            java.lang.String r1 = ", end_impression_time="
            r0.append(r1)
            java.lang.Integer r1 = r4.end_impression_time
            r0.append(r1)
        L59:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "NativeAdSetting{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
