package com.sigmob.sdk.base.models.rtb;

public final class CompanionEndcard extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.CompanionEndcard, com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.CompanionEndcard> CREATOR = null;
    public static final java.lang.Integer DEFAULT_ANIMATE_TYPE = null;
    public static final java.lang.String DEFAULT_BUTTON_TEXT = "";
    public static final java.lang.Integer DEFAULT_CLICK_TYPE = null;
    public static final java.lang.String DEFAULT_DESC = "";
    public static final java.lang.String DEFAULT_ICON_URL = "";
    public static final java.lang.Float DEFAULT_SCORE = null;
    public static final java.lang.Integer DEFAULT_SHOW_DELAY_SECS = null;
    public static final java.lang.String DEFAULT_TITLE = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 10)
    public final java.lang.Integer animate_type;

    @com.czhj.wire.WireField(adapter = "Color#ADAPTER", tag = 8)
    public final com.sigmob.sdk.base.models.rtb.Color bar_color;

    @com.czhj.wire.WireField(adapter = "Color#ADAPTER", tag = 5)
    public final com.sigmob.sdk.base.models.rtb.Color button_color;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String button_text;

    @com.czhj.wire.WireField(adapter = "Color#ADAPTER", tag = 6)
    public final com.sigmob.sdk.base.models.rtb.Color button_text_color;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 7)
    public final java.lang.Integer click_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 9)
    public final java.lang.String desc;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 1)
    public final java.lang.String icon_url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 3)
    public final java.lang.Float score;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 11)
    public final java.lang.Integer show_delay_secs;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String title;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.CompanionEndcard, com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder> {
        public java.lang.Integer animate_type;
        public com.sigmob.sdk.base.models.rtb.Color bar_color;
        public com.sigmob.sdk.base.models.rtb.Color button_color;
        public java.lang.String button_text;
        public com.sigmob.sdk.base.models.rtb.Color button_text_color;
        public java.lang.Integer click_type;
        public java.lang.String desc;
        public java.lang.String icon_url;
        public java.lang.Float score;
        public java.lang.Integer show_delay_secs;
        public java.lang.String title;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.icon_url = r0
                r2.title = r0
                java.lang.Float r1 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_SCORE
                r2.score = r1
                r2.button_text = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_CLICK_TYPE
                r2.click_type = r1
                r2.desc = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_ANIMATE_TYPE
                r2.animate_type = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_SHOW_DELAY_SECS
                r2.show_delay_secs = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder animate_type(java.lang.Integer r1) {
                r0 = this;
                r0.animate_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder bar_color(com.sigmob.sdk.base.models.rtb.Color r1) {
                r0 = this;
                r0.bar_color = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.CompanionEndcard build() {
                r14 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r13 = new com.sigmob.sdk.base.models.rtb.CompanionEndcard
                java.lang.String r1 = r14.icon_url
                java.lang.String r2 = r14.title
                java.lang.Float r3 = r14.score
                java.lang.String r4 = r14.button_text
                com.sigmob.sdk.base.models.rtb.Color r5 = r14.button_color
                com.sigmob.sdk.base.models.rtb.Color r6 = r14.button_text_color
                java.lang.Integer r7 = r14.click_type
                com.sigmob.sdk.base.models.rtb.Color r8 = r14.bar_color
                java.lang.String r9 = r14.desc
                java.lang.Integer r10 = r14.animate_type
                java.lang.Integer r11 = r14.show_delay_secs
                com.czhj.wire.okio.ByteString r12 = super.buildUnknownFields()
                r0 = r13
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                return r13
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder button_color(com.sigmob.sdk.base.models.rtb.Color r1) {
                r0 = this;
                r0.button_color = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder button_text(java.lang.String r1) {
                r0 = this;
                r0.button_text = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder button_text_color(com.sigmob.sdk.base.models.rtb.Color r1) {
                r0 = this;
                r0.button_text_color = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder click_type(java.lang.Integer r1) {
                r0 = this;
                r0.click_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder desc(java.lang.String r1) {
                r0 = this;
                r0.desc = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder icon_url(java.lang.String r1) {
                r0 = this;
                r0.icon_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder score(java.lang.Float r1) {
                r0 = this;
                r0.score = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder show_delay_secs(java.lang.Integer r1) {
                r0 = this;
                r0.show_delay_secs = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder title(java.lang.String r1) {
                r0 = this;
                r0.title = r1
                return r0
        }
    }

    private static final class ProtoAdapter_CompanionEndcard extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> {
        public ProtoAdapter_CompanionEndcard() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.CompanionEndcard> r1 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.CompanionEndcard decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard$Builder r0 = new com.sigmob.sdk.base.models.rtb.CompanionEndcard$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto Laa
                switch(r3) {
                    case 1: goto L9d;
                    case 2: goto L90;
                    case 3: goto L83;
                    case 4: goto L77;
                    case 5: goto L6b;
                    case 6: goto L5f;
                    case 7: goto L53;
                    case 8: goto L47;
                    case 9: goto L3b;
                    case 10: goto L2f;
                    case 11: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.show_delay_secs(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.animate_type(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.desc(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r3 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.Color r3 = (com.sigmob.sdk.base.models.rtb.Color) r3
                r0.bar_color(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.click_type(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r3 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.Color r3 = (com.sigmob.sdk.base.models.rtb.Color) r3
                r0.button_text_color(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r3 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.Color r3 = (com.sigmob.sdk.base.models.rtb.Color) r3
                r0.button_color(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.button_text(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.score(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.title(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.icon_url(r3)
                goto L9
            Laa:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.CompanionEndcard decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.CompanionEndcard r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.icon_url
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.title
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.score
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.button_text
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r0 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r1 = r5.button_color
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r0 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r1 = r5.button_text_color
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.click_type
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r0 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r1 = r5.bar_color
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.desc
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.animate_type
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.show_delay_secs
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.CompanionEndcard r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r2 = (com.sigmob.sdk.base.models.rtb.CompanionEndcard) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.CompanionEndcard r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.icon_url
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.title
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.score
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.button_text
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r1 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r2 = r5.button_color
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r1 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r2 = r5.button_text_color
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.click_type
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r1 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r2 = r5.bar_color
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.desc
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.animate_type
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.show_delay_secs
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.CompanionEndcard r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = (com.sigmob.sdk.base.models.rtb.CompanionEndcard) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.CompanionEndcard redact(com.sigmob.sdk.base.models.rtb.CompanionEndcard r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard$Builder r3 = r3.newBuilder()
                com.sigmob.sdk.base.models.rtb.Color r0 = r3.button_color
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r0 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r1 = r3.button_color
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.Color r0 = (com.sigmob.sdk.base.models.rtb.Color) r0
                r3.button_color = r0
            L14:
                com.sigmob.sdk.base.models.rtb.Color r0 = r3.button_text_color
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r0 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r1 = r3.button_text_color
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.Color r0 = (com.sigmob.sdk.base.models.rtb.Color) r0
                r3.button_text_color = r0
            L24:
                com.sigmob.sdk.base.models.rtb.Color r0 = r3.bar_color
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Color> r0 = com.sigmob.sdk.base.models.rtb.Color.ADAPTER
                com.sigmob.sdk.base.models.rtb.Color r1 = r3.bar_color
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.Color r0 = (com.sigmob.sdk.base.models.rtb.Color) r0
                r3.bar_color = r0
            L34:
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.CompanionEndcard redact(com.sigmob.sdk.base.models.rtb.CompanionEndcard r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = (com.sigmob.sdk.base.models.rtb.CompanionEndcard) r1
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.CompanionEndcard$ProtoAdapter_CompanionEndcard r0 = new com.sigmob.sdk.base.models.rtb.CompanionEndcard$ProtoAdapter_CompanionEndcard
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.CompanionEndcard.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.CompanionEndcard.CREATOR = r0
            r0 = 0
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_SCORE = r0
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_CLICK_TYPE = r0
            com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_ANIMATE_TYPE = r0
            com.sigmob.sdk.base.models.rtb.CompanionEndcard.DEFAULT_SHOW_DELAY_SECS = r0
            return
    }

    public CompanionEndcard(java.lang.String r14, java.lang.String r15, java.lang.Float r16, java.lang.String r17, com.sigmob.sdk.base.models.rtb.Color r18, com.sigmob.sdk.base.models.rtb.Color r19, java.lang.Integer r20, com.sigmob.sdk.base.models.rtb.Color r21, java.lang.String r22, java.lang.Integer r23, java.lang.Integer r24) {
            r13 = this;
            com.czhj.wire.okio.ByteString r12 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r13
            r1 = r14
            r2 = r15
            r3 = r16
            r4 = r17
            r5 = r18
            r6 = r19
            r7 = r20
            r8 = r21
            r9 = r22
            r10 = r23
            r11 = r24
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return
    }

    public CompanionEndcard(java.lang.String r2, java.lang.String r3, java.lang.Float r4, java.lang.String r5, com.sigmob.sdk.base.models.rtb.Color r6, com.sigmob.sdk.base.models.rtb.Color r7, java.lang.Integer r8, com.sigmob.sdk.base.models.rtb.Color r9, java.lang.String r10, java.lang.Integer r11, java.lang.Integer r12, com.czhj.wire.okio.ByteString r13) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> r0 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.ADAPTER
            r1.<init>(r0, r13)
            r1.icon_url = r2
            r1.title = r3
            r1.score = r4
            r1.button_text = r5
            r1.button_color = r6
            r1.button_text_color = r7
            r1.click_type = r8
            r1.bar_color = r9
            r1.desc = r10
            r1.animate_type = r11
            r1.show_delay_secs = r12
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.CompanionEndcard
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r5 = (com.sigmob.sdk.base.models.rtb.CompanionEndcard) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L89
            java.lang.String r1 = r4.icon_url
            java.lang.String r3 = r5.icon_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.String r1 = r4.title
            java.lang.String r3 = r5.title
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.Float r1 = r4.score
            java.lang.Float r3 = r5.score
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.String r1 = r4.button_text
            java.lang.String r3 = r5.button_text
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.button_color
            com.sigmob.sdk.base.models.rtb.Color r3 = r5.button_color
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.button_text_color
            com.sigmob.sdk.base.models.rtb.Color r3 = r5.button_text_color
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.Integer r1 = r4.click_type
            java.lang.Integer r3 = r5.click_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.bar_color
            com.sigmob.sdk.base.models.rtb.Color r3 = r5.bar_color
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.String r1 = r4.desc
            java.lang.String r3 = r5.desc
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.Integer r1 = r4.animate_type
            java.lang.Integer r3 = r5.animate_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L89
            java.lang.Integer r1 = r4.show_delay_secs
            java.lang.Integer r5 = r5.show_delay_secs
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L89
            goto L8a
        L89:
            r0 = r2
        L8a:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L9c
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.String r1 = r3.icon_url
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.title
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.score
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.button_text
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.Color r1 = r3.button_color
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.Color r1 = r3.button_text_color
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.click_type
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.Color r1 = r3.bar_color
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.desc
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.animate_type
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.show_delay_secs
            if (r1 == 0) goto L99
            int r2 = r1.hashCode()
        L99:
            int r0 = r0 + r2
            r3.hashCode = r0
        L9c:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.CompanionEndcard$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.CompanionEndcard.Builder newBuilder() {
            r2 = this;
            com.sigmob.sdk.base.models.rtb.CompanionEndcard$Builder r0 = new com.sigmob.sdk.base.models.rtb.CompanionEndcard$Builder
            r0.<init>()
            java.lang.String r1 = r2.icon_url
            r0.icon_url = r1
            java.lang.String r1 = r2.title
            r0.title = r1
            java.lang.Float r1 = r2.score
            r0.score = r1
            java.lang.String r1 = r2.button_text
            r0.button_text = r1
            com.sigmob.sdk.base.models.rtb.Color r1 = r2.button_color
            r0.button_color = r1
            com.sigmob.sdk.base.models.rtb.Color r1 = r2.button_text_color
            r0.button_text_color = r1
            java.lang.Integer r1 = r2.click_type
            r0.click_type = r1
            com.sigmob.sdk.base.models.rtb.Color r1 = r2.bar_color
            r0.bar_color = r1
            java.lang.String r1 = r2.desc
            r0.desc = r1
            java.lang.Integer r1 = r2.animate_type
            r0.animate_type = r1
            java.lang.Integer r1 = r2.show_delay_secs
            r0.show_delay_secs = r1
            com.czhj.wire.okio.ByteString r1 = r2.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.icon_url
            if (r1 == 0) goto L13
            java.lang.String r1 = ", icon_url="
            r0.append(r1)
            java.lang.String r1 = r4.icon_url
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.title
            if (r1 == 0) goto L21
            java.lang.String r1 = ", title="
            r0.append(r1)
            java.lang.String r1 = r4.title
            r0.append(r1)
        L21:
            java.lang.Float r1 = r4.score
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", score="
            r0.append(r1)
            java.lang.Float r1 = r4.score
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.button_text
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", button_text="
            r0.append(r1)
            java.lang.String r1 = r4.button_text
            r0.append(r1)
        L3d:
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.button_color
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", button_color="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.button_color
            r0.append(r1)
        L4b:
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.button_text_color
            if (r1 == 0) goto L59
            java.lang.String r1 = ", button_text_color="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.button_text_color
            r0.append(r1)
        L59:
            java.lang.Integer r1 = r4.click_type
            if (r1 == 0) goto L67
            java.lang.String r1 = ", click_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.click_type
            r0.append(r1)
        L67:
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.bar_color
            if (r1 == 0) goto L75
            java.lang.String r1 = ", bar_color="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.Color r1 = r4.bar_color
            r0.append(r1)
        L75:
            java.lang.String r1 = r4.desc
            if (r1 == 0) goto L83
            java.lang.String r1 = ", desc="
            r0.append(r1)
            java.lang.String r1 = r4.desc
            r0.append(r1)
        L83:
            java.lang.Integer r1 = r4.animate_type
            if (r1 == 0) goto L91
            java.lang.String r1 = ", animate_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.animate_type
            r0.append(r1)
        L91:
            java.lang.Integer r1 = r4.show_delay_secs
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", show_delay_secs="
            r0.append(r1)
            java.lang.Integer r1 = r4.show_delay_secs
            r0.append(r1)
        L9f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "CompanionEndcard{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
