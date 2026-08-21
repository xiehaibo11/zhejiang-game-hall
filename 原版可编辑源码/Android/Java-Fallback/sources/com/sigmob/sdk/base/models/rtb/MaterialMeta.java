package com.sigmob.sdk.base.models.rtb;

public final class MaterialMeta extends com.czhj.wire.AndroidMessage<com.sigmob.sdk.base.models.rtb.MaterialMeta, com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.sigmob.sdk.base.models.rtb.MaterialMeta> CREATOR = null;
    public static final java.lang.String DEFAULT_APP_NAME = "";
    public static final java.lang.String DEFAULT_BUTTON_TEXT = "";
    public static final java.lang.Integer DEFAULT_CLICK_TYPE = null;
    public static final com.czhj.wire.okio.ByteString DEFAULT_CLOSECARD_HTML_SNIPPET = null;
    public static final java.lang.Integer DEFAULT_CREATIVE_TYPE = null;
    public static final java.lang.String DEFAULT_DEEPLINK_URL = "";
    public static final java.lang.String DEFAULT_DESC = "";
    public static final java.lang.Boolean DEFAULT_DISABLE_AUTO_DEEPLINK = null;
    public static final java.lang.Boolean DEFAULT_DOWNLOAD_DIALOG = null;
    public static final java.lang.Boolean DEFAULT_ENABLE_COLLAPSE_TOOL_BAR = null;
    public static final java.lang.String DEFAULT_ENDCARD_MD5 = "";
    public static final java.lang.String DEFAULT_ENDCARD_URL = "";
    public static final java.lang.Boolean DEFAULT_HAS_COMPANION_ENDCARD = null;
    public static final com.czhj.wire.okio.ByteString DEFAULT_HTML_SNIPPET = null;
    public static final java.lang.String DEFAULT_HTML_SRC = "";
    public static final java.lang.String DEFAULT_HTML_URL = "";
    public static final java.lang.String DEFAULT_ICON_URL = "";
    public static final java.lang.String DEFAULT_IMAGE_MD5 = "";
    public static final java.lang.String DEFAULT_IMAGE_SRC = "";
    public static final java.lang.Integer DEFAULT_IMAGE_TYPE = null;
    public static final java.lang.Integer DEFAULT_INTERACTION_TYPE = null;
    public static final java.lang.String DEFAULT_LANDING_PAGE = "";
    public static final java.lang.Integer DEFAULT_OPEN_MARKET_MODE = null;
    public static final java.lang.Integer DEFAULT_PLAY_MODE = null;
    public static final java.lang.Float DEFAULT_SCORE = null;
    public static final java.lang.Integer DEFAULT_SUB_INTERACTION_TYPE = null;
    public static final java.lang.Integer DEFAULT_TEMPLATE_ID = null;
    public static final java.lang.Integer DEFAULT_TEMPLATE_TYPE = null;
    public static final java.lang.Integer DEFAULT_THEME_DATA = null;
    public static final java.lang.String DEFAULT_TITLE = "";
    public static final java.lang.Integer DEFAULT_VIDEO_BYTE_SIZE = null;
    public static final java.lang.Integer DEFAULT_VIDEO_DURATION = null;
    public static final java.lang.String DEFAULT_VIDEO_MD5 = "";
    public static final java.lang.Integer DEFAULT_VIDEO_RECIPROCAL_MILLISECOND = null;
    public static final java.lang.String DEFAULT_VIDEO_URL = "";
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.AdPrivacy#ADAPTER", tag = 36)
    public final com.sigmob.sdk.base.models.rtb.AdPrivacy ad_privacy;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.AndroidMarket#ADAPTER", tag = 41)
    public final com.sigmob.sdk.base.models.rtb.AndroidMarket android_market;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 34)
    public final java.lang.String app_name;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.ResponseAsset#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 44)
    public final java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> asset;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 35)
    public final java.lang.String button_text;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 16)
    public final java.lang.Integer click_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BYTES", tag = 33)
    public final com.czhj.wire.okio.ByteString closecard_html_snippet;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.CompanionEndcard#ADAPTER", tag = 18)
    public final com.sigmob.sdk.base.models.rtb.CompanionEndcard companion;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer creative_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 11)
    public final java.lang.String deeplink_url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 28)
    public final java.lang.String desc;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 32)
    public final java.lang.Boolean disable_auto_deeplink;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 40)
    public final java.lang.Boolean download_dialog;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 23)
    public final java.lang.Boolean enable_collapse_tool_bar;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 10)
    public final java.lang.String endcard_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final java.lang.String endcard_url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 17)
    public final java.lang.Boolean has_companion_endcard;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BYTES", tag = 7)
    public final com.czhj.wire.okio.ByteString html_snippet;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 38)
    public final java.lang.String html_src;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 22)
    public final java.lang.String html_url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 29)
    public final java.lang.String icon_url;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 14)
    public final java.lang.String image_md5;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.Size#ADAPTER", tag = 13)
    public final com.czhj.sdk.common.models.Size image_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 12)
    public final java.lang.String image_src;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 15)
    public final java.lang.Integer image_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final java.lang.Integer interaction_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final java.lang.String landing_page;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER", tag = 42)
    public final com.sigmob.sdk.base.models.rtb.Template main_template;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.ResponseNativeAd#ADAPTER", tag = 39)
    public final com.sigmob.sdk.base.models.rtb.ResponseNativeAd native_ad;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 24)
    public final java.lang.Integer open_market_mode;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 25)
    public final java.lang.Integer play_mode;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 30)
    public final java.lang.Float score;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 26)
    public final java.lang.Integer sub_interaction_type;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER", tag = 43)
    public final com.sigmob.sdk.base.models.rtb.Template sub_template;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 31)
    public final java.lang.Integer template_id;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 20)
    public final java.lang.Integer template_type;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 45)
    public final java.lang.Integer theme_data;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 27)
    public final java.lang.String title;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 37)
    public final java.lang.Integer video_byte_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 5)
    public final java.lang.Integer video_duration;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 9)
    public final java.lang.String video_md5;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 21)
    public final java.lang.Integer video_reciprocal_millisecond;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.common.models.Size#ADAPTER", tag = 6)
    public final com.czhj.sdk.common.models.Size video_size;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final java.lang.String video_url;

    @com.czhj.wire.WireField(adapter = "com.sigmob.sdk.base.models.rtb.WebEventHandle#ADAPTER", tag = 19)
    public final com.sigmob.sdk.base.models.WebEventHandle web_event_handle;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.sigmob.sdk.base.models.rtb.MaterialMeta, com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder> {
        public com.sigmob.sdk.base.models.rtb.AdPrivacy ad_privacy;
        public com.sigmob.sdk.base.models.rtb.AndroidMarket android_market;
        public java.lang.String app_name;
        public java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> asset;
        public java.lang.String button_text;
        public java.lang.Integer click_type;
        public com.czhj.wire.okio.ByteString closecard_html_snippet;
        public com.sigmob.sdk.base.models.rtb.CompanionEndcard companion;
        public java.lang.Integer creative_type;
        public java.lang.String deeplink_url;
        public java.lang.String desc;
        public java.lang.Boolean disable_auto_deeplink;
        public java.lang.Boolean download_dialog;
        public java.lang.Boolean enable_collapse_tool_bar;
        public java.lang.String endcard_md5;
        public java.lang.String endcard_url;
        public java.lang.Boolean has_companion_endcard;
        public com.czhj.wire.okio.ByteString html_snippet;
        public java.lang.String html_src;
        public java.lang.String html_url;
        public java.lang.String icon_url;
        public java.lang.String image_md5;
        public com.czhj.sdk.common.models.Size image_size;
        public java.lang.String image_src;
        public java.lang.Integer image_type;
        public java.lang.Integer interaction_type;
        public java.lang.String landing_page;
        public com.sigmob.sdk.base.models.rtb.Template main_template;
        public com.sigmob.sdk.base.models.rtb.ResponseNativeAd native_ad;
        public java.lang.Integer open_market_mode;
        public java.lang.Integer play_mode;
        public java.lang.Float score;
        public java.lang.Integer sub_interaction_type;
        public com.sigmob.sdk.base.models.rtb.Template sub_template;
        public java.lang.Integer template_id;
        public java.lang.Integer template_type;
        public java.lang.Integer theme_data;
        public java.lang.String title;
        public java.lang.Integer video_byte_size;
        public java.lang.Integer video_duration;
        public java.lang.String video_md5;
        public java.lang.Integer video_reciprocal_millisecond;
        public com.czhj.sdk.common.models.Size video_size;
        public java.lang.String video_url;
        public com.sigmob.sdk.base.models.WebEventHandle web_event_handle;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_CREATIVE_TYPE
                r2.creative_type = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_INTERACTION_TYPE
                r2.interaction_type = r0
                java.lang.String r0 = ""
                r2.landing_page = r0
                r2.video_url = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_VIDEO_DURATION
                r2.video_duration = r1
                com.czhj.wire.okio.ByteString r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_HTML_SNIPPET
                r2.html_snippet = r1
                r2.endcard_url = r0
                r2.video_md5 = r0
                r2.endcard_md5 = r0
                r2.deeplink_url = r0
                r2.image_src = r0
                r2.image_md5 = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_IMAGE_TYPE
                r2.image_type = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_CLICK_TYPE
                r2.click_type = r1
                java.lang.Boolean r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_HAS_COMPANION_ENDCARD
                r2.has_companion_endcard = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_TEMPLATE_TYPE
                r2.template_type = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_VIDEO_RECIPROCAL_MILLISECOND
                r2.video_reciprocal_millisecond = r1
                r2.html_url = r0
                java.lang.Boolean r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_ENABLE_COLLAPSE_TOOL_BAR
                r2.enable_collapse_tool_bar = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_OPEN_MARKET_MODE
                r2.open_market_mode = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_PLAY_MODE
                r2.play_mode = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_SUB_INTERACTION_TYPE
                r2.sub_interaction_type = r1
                r2.title = r0
                r2.desc = r0
                r2.icon_url = r0
                java.lang.Float r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_SCORE
                r2.score = r1
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_TEMPLATE_ID
                r2.template_id = r1
                java.lang.Boolean r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_DISABLE_AUTO_DEEPLINK
                r2.disable_auto_deeplink = r1
                com.czhj.wire.okio.ByteString r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_CLOSECARD_HTML_SNIPPET
                r2.closecard_html_snippet = r1
                r2.app_name = r0
                r2.button_text = r0
                java.lang.Integer r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_VIDEO_BYTE_SIZE
                r2.video_byte_size = r1
                r2.html_src = r0
                java.lang.Boolean r0 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_DOWNLOAD_DIALOG
                r2.download_dialog = r0
                java.lang.Integer r0 = com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_THEME_DATA
                r2.theme_data = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r2.asset = r0
                return
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder ad_privacy(com.sigmob.sdk.base.models.rtb.AdPrivacy r1) {
                r0 = this;
                r0.ad_privacy = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder android_market(com.sigmob.sdk.base.models.rtb.AndroidMarket r1) {
                r0 = this;
                r0.android_market = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder app_name(java.lang.String r1) {
                r0 = this;
                r0.app_name = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder asset(java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.asset = r1
                return r0
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r1.build()
                return r0
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.MaterialMeta build() {
                r50 = this;
                r0 = r50
                com.sigmob.sdk.base.models.rtb.MaterialMeta r48 = new com.sigmob.sdk.base.models.rtb.MaterialMeta
                r1 = r48
                java.lang.Integer r2 = r0.creative_type
                java.lang.Integer r3 = r0.interaction_type
                java.lang.String r4 = r0.landing_page
                java.lang.String r5 = r0.video_url
                java.lang.Integer r6 = r0.video_duration
                com.czhj.sdk.common.models.Size r7 = r0.video_size
                com.czhj.wire.okio.ByteString r8 = r0.html_snippet
                java.lang.String r9 = r0.endcard_url
                java.lang.String r10 = r0.video_md5
                java.lang.String r11 = r0.endcard_md5
                java.lang.String r12 = r0.deeplink_url
                java.lang.String r13 = r0.image_src
                com.czhj.sdk.common.models.Size r14 = r0.image_size
                java.lang.String r15 = r0.image_md5
                r49 = r1
                java.lang.Integer r1 = r0.image_type
                r16 = r1
                java.lang.Integer r1 = r0.click_type
                r17 = r1
                java.lang.Boolean r1 = r0.has_companion_endcard
                r18 = r1
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r0.companion
                r19 = r1
                com.sigmob.sdk.base.models.WebEventHandle r1 = r0.web_event_handle
                r20 = r1
                java.lang.Integer r1 = r0.template_type
                r21 = r1
                java.lang.Integer r1 = r0.video_reciprocal_millisecond
                r22 = r1
                java.lang.String r1 = r0.html_url
                r23 = r1
                java.lang.Boolean r1 = r0.enable_collapse_tool_bar
                r24 = r1
                java.lang.Integer r1 = r0.open_market_mode
                r25 = r1
                java.lang.Integer r1 = r0.play_mode
                r26 = r1
                java.lang.Integer r1 = r0.sub_interaction_type
                r27 = r1
                java.lang.String r1 = r0.title
                r28 = r1
                java.lang.String r1 = r0.desc
                r29 = r1
                java.lang.String r1 = r0.icon_url
                r30 = r1
                java.lang.Float r1 = r0.score
                r31 = r1
                java.lang.Integer r1 = r0.template_id
                r32 = r1
                java.lang.Boolean r1 = r0.disable_auto_deeplink
                r33 = r1
                com.czhj.wire.okio.ByteString r1 = r0.closecard_html_snippet
                r34 = r1
                java.lang.String r1 = r0.app_name
                r35 = r1
                java.lang.String r1 = r0.button_text
                r36 = r1
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r0.ad_privacy
                r37 = r1
                java.lang.Integer r1 = r0.video_byte_size
                r38 = r1
                java.lang.String r1 = r0.html_src
                r39 = r1
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r0.native_ad
                r40 = r1
                java.lang.Boolean r1 = r0.download_dialog
                r41 = r1
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r0.android_market
                r42 = r1
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.main_template
                r43 = r1
                com.sigmob.sdk.base.models.rtb.Template r1 = r0.sub_template
                r44 = r1
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r0.asset
                r45 = r1
                java.lang.Integer r1 = r0.theme_data
                r46 = r1
                com.czhj.wire.okio.ByteString r47 = super.buildUnknownFields()
                r1 = r49
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46, r47)
                return r48
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder button_text(java.lang.String r1) {
                r0 = this;
                r0.button_text = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder click_type(java.lang.Integer r1) {
                r0 = this;
                r0.click_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder closecard_html_snippet(com.czhj.wire.okio.ByteString r1) {
                r0 = this;
                r0.closecard_html_snippet = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder companion(com.sigmob.sdk.base.models.rtb.CompanionEndcard r1) {
                r0 = this;
                r0.companion = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder creative_type(java.lang.Integer r1) {
                r0 = this;
                r0.creative_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder deeplink_url(java.lang.String r1) {
                r0 = this;
                r0.deeplink_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder desc(java.lang.String r1) {
                r0 = this;
                r0.desc = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder disable_auto_deeplink(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_auto_deeplink = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder download_dialog(java.lang.Boolean r1) {
                r0 = this;
                r0.download_dialog = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder enable_collapse_tool_bar(java.lang.Boolean r1) {
                r0 = this;
                r0.enable_collapse_tool_bar = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder endcard_md5(java.lang.String r1) {
                r0 = this;
                r0.endcard_md5 = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder endcard_url(java.lang.String r1) {
                r0 = this;
                r0.endcard_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder has_companion_endcard(java.lang.Boolean r1) {
                r0 = this;
                r0.has_companion_endcard = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder html_snippet(com.czhj.wire.okio.ByteString r1) {
                r0 = this;
                r0.html_snippet = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder html_src(java.lang.String r1) {
                r0 = this;
                r0.html_src = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder html_url(java.lang.String r1) {
                r0 = this;
                r0.html_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder icon_url(java.lang.String r1) {
                r0 = this;
                r0.icon_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder image_md5(java.lang.String r1) {
                r0 = this;
                r0.image_md5 = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder image_size(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                r0.image_size = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder image_src(java.lang.String r1) {
                r0 = this;
                r0.image_src = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder image_type(java.lang.Integer r1) {
                r0 = this;
                r0.image_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder interaction_type(java.lang.Integer r1) {
                r0 = this;
                r0.interaction_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder landing_page(java.lang.String r1) {
                r0 = this;
                r0.landing_page = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder main_template(com.sigmob.sdk.base.models.rtb.Template r1) {
                r0 = this;
                r0.main_template = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder native_ad(com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1) {
                r0 = this;
                r0.native_ad = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder open_market_mode(java.lang.Integer r1) {
                r0 = this;
                r0.open_market_mode = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder play_mode(java.lang.Integer r1) {
                r0 = this;
                r0.play_mode = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder score(java.lang.Float r1) {
                r0 = this;
                r0.score = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder sub_interaction_type(java.lang.Integer r1) {
                r0 = this;
                r0.sub_interaction_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder sub_template(com.sigmob.sdk.base.models.rtb.Template r1) {
                r0 = this;
                r0.sub_template = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder template_id(java.lang.Integer r1) {
                r0 = this;
                r0.template_id = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder template_type(java.lang.Integer r1) {
                r0 = this;
                r0.template_type = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder theme_data(java.lang.Integer r1) {
                r0 = this;
                r0.theme_data = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder title(java.lang.String r1) {
                r0 = this;
                r0.title = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder video_byte_size(java.lang.Integer r1) {
                r0 = this;
                r0.video_byte_size = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder video_duration(java.lang.Integer r1) {
                r0 = this;
                r0.video_duration = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder video_md5(java.lang.String r1) {
                r0 = this;
                r0.video_md5 = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder video_reciprocal_millisecond(java.lang.Integer r1) {
                r0 = this;
                r0.video_reciprocal_millisecond = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder video_size(com.czhj.sdk.common.models.Size r1) {
                r0 = this;
                r0.video_size = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder video_url(java.lang.String r1) {
                r0 = this;
                r0.video_url = r1
                return r0
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder web_event_handle(com.sigmob.sdk.base.models.WebEventHandle r1) {
                r0 = this;
                r0.web_event_handle = r1
                return r0
        }
    }

    private static final class ProtoAdapter_MaterialMeta extends com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> {
        public ProtoAdapter_MaterialMeta() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.MaterialMeta decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder r0 = new com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L264
                switch(r3) {
                    case 1: goto L257;
                    case 2: goto L24a;
                    case 3: goto L23d;
                    case 4: goto L230;
                    case 5: goto L223;
                    case 6: goto L216;
                    case 7: goto L209;
                    case 8: goto L1fc;
                    case 9: goto L1ef;
                    case 10: goto L1e2;
                    case 11: goto L1d5;
                    case 12: goto L1c8;
                    case 13: goto L1bb;
                    case 14: goto L1ae;
                    case 15: goto L1a1;
                    case 16: goto L194;
                    case 17: goto L187;
                    case 18: goto L17a;
                    case 19: goto L16d;
                    case 20: goto L160;
                    case 21: goto L153;
                    case 22: goto L146;
                    case 23: goto L139;
                    case 24: goto L12c;
                    case 25: goto L11f;
                    case 26: goto L112;
                    case 27: goto L105;
                    case 28: goto Lf8;
                    case 29: goto Leb;
                    case 30: goto Lde;
                    case 31: goto Ld1;
                    case 32: goto Lc4;
                    case 33: goto Lb7;
                    case 34: goto Laa;
                    case 35: goto L9d;
                    case 36: goto L90;
                    case 37: goto L83;
                    case 38: goto L77;
                    case 39: goto L6b;
                    case 40: goto L5f;
                    case 41: goto L53;
                    case 42: goto L47;
                    case 43: goto L3b;
                    case 44: goto L2f;
                    case 45: goto L23;
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
                r0.theme_data(r3)
                goto L9
            L2f:
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r3 = r0.asset
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r4 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r3 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.Template r3 = (com.sigmob.sdk.base.models.rtb.Template) r3
                r0.sub_template(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r3 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.Template r3 = (com.sigmob.sdk.base.models.rtb.Template) r3
                r0.main_template(r3)
                goto L9
            L53:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> r3 = com.sigmob.sdk.base.models.rtb.AndroidMarket.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.AndroidMarket r3 = (com.sigmob.sdk.base.models.rtb.AndroidMarket) r3
                r0.android_market(r3)
                goto L9
            L5f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.download_dialog(r3)
                goto L9
            L6b:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> r3 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r3 = (com.sigmob.sdk.base.models.rtb.ResponseNativeAd) r3
                r0.native_ad(r3)
                goto L9
            L77:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.html_src(r3)
                goto L9
            L83:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.video_byte_size(r3)
                goto L9
            L90:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> r3 = com.sigmob.sdk.base.models.rtb.AdPrivacy.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.AdPrivacy r3 = (com.sigmob.sdk.base.models.rtb.AdPrivacy) r3
                r0.ad_privacy(r3)
                goto L9
            L9d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.button_text(r3)
                goto L9
            Laa:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.app_name(r3)
                goto L9
            Lb7:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r3 = com.czhj.wire.ProtoAdapter.BYTES
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.okio.ByteString r3 = (com.czhj.wire.okio.ByteString) r3
                r0.closecard_html_snippet(r3)
                goto L9
            Lc4:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.disable_auto_deeplink(r3)
                goto L9
            Ld1:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.template_id(r3)
                goto L9
            Lde:
                com.czhj.wire.ProtoAdapter<java.lang.Float> r3 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Float r3 = (java.lang.Float) r3
                r0.score(r3)
                goto L9
            Leb:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.icon_url(r3)
                goto L9
            Lf8:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.desc(r3)
                goto L9
            L105:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.title(r3)
                goto L9
            L112:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.sub_interaction_type(r3)
                goto L9
            L11f:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.play_mode(r3)
                goto L9
            L12c:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.open_market_mode(r3)
                goto L9
            L139:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.enable_collapse_tool_bar(r3)
                goto L9
            L146:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.html_url(r3)
                goto L9
            L153:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.video_reciprocal_millisecond(r3)
                goto L9
            L160:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.template_type(r3)
                goto L9
            L16d:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> r3 = com.sigmob.sdk.base.models.WebEventHandle.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.WebEventHandle r3 = (com.sigmob.sdk.base.models.WebEventHandle) r3
                r0.web_event_handle(r3)
                goto L9
            L17a:
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> r3 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r3 = (com.sigmob.sdk.base.models.rtb.CompanionEndcard) r3
                r0.companion(r3)
                goto L9
            L187:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.has_companion_endcard(r3)
                goto L9
            L194:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.click_type(r3)
                goto L9
            L1a1:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.image_type(r3)
                goto L9
            L1ae:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.image_md5(r3)
                goto L9
            L1bb:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r3 = com.czhj.sdk.common.models.Size.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Size r3 = (com.czhj.sdk.common.models.Size) r3
                r0.image_size(r3)
                goto L9
            L1c8:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.image_src(r3)
                goto L9
            L1d5:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.deeplink_url(r3)
                goto L9
            L1e2:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.endcard_md5(r3)
                goto L9
            L1ef:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.video_md5(r3)
                goto L9
            L1fc:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.endcard_url(r3)
                goto L9
            L209:
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r3 = com.czhj.wire.ProtoAdapter.BYTES
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.wire.okio.ByteString r3 = (com.czhj.wire.okio.ByteString) r3
                r0.html_snippet(r3)
                goto L9
            L216:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r3 = com.czhj.sdk.common.models.Size.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Size r3 = (com.czhj.sdk.common.models.Size) r3
                r0.video_size(r3)
                goto L9
            L223:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.video_duration(r3)
                goto L9
            L230:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.video_url(r3)
                goto L9
            L23d:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.landing_page(r3)
                goto L9
            L24a:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.interaction_type(r3)
                goto L9
            L257:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.creative_type(r3)
                goto L9
            L264:
                r7.endMessage(r1)
                com.sigmob.sdk.base.models.rtb.MaterialMeta r7 = r0.build()
                return r7
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.MaterialMeta decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.sigmob.sdk.base.models.rtb.MaterialMeta r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.creative_type
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.interaction_type
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.landing_page
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.video_url
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.video_duration
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r5.video_size
                r2 = 6
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r0 = com.czhj.wire.ProtoAdapter.BYTES
                com.czhj.wire.okio.ByteString r1 = r5.html_snippet
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.endcard_url
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.video_md5
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.endcard_md5
                r2 = 10
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.deeplink_url
                r2 = 11
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.image_src
                r2 = 12
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r5.image_size
                r2 = 13
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.image_md5
                r2 = 14
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.image_type
                r2 = 15
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.click_type
                r2 = 16
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.has_companion_endcard
                r2 = 17
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> r0 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.ADAPTER
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r5.companion
                r2 = 18
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> r0 = com.sigmob.sdk.base.models.WebEventHandle.ADAPTER
                com.sigmob.sdk.base.models.WebEventHandle r1 = r5.web_event_handle
                r2 = 19
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.template_type
                r2 = 20
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r1 = r5.video_reciprocal_millisecond
                r2 = 21
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.html_url
                r2 = 22
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.enable_collapse_tool_bar
                r2 = 23
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.open_market_mode
                r2 = 24
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.play_mode
                r2 = 25
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.sub_interaction_type
                r2 = 26
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.title
                r2 = 27
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.desc
                r2 = 28
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.icon_url
                r2 = 29
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Float> r0 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r1 = r5.score
                r2 = 30
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.template_id
                r2 = 31
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_auto_deeplink
                r2 = 32
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r0 = com.czhj.wire.ProtoAdapter.BYTES
                com.czhj.wire.okio.ByteString r1 = r5.closecard_html_snippet
                r2 = 33
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.app_name
                r2 = 34
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.button_text
                r2 = 35
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> r0 = com.sigmob.sdk.base.models.rtb.AdPrivacy.ADAPTER
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r5.ad_privacy
                r2 = 36
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.video_byte_size
                r2 = 37
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.html_src
                r2 = 38
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> r0 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r5.native_ad
                r2 = 39
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.download_dialog
                r2 = 40
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> r0 = com.sigmob.sdk.base.models.rtb.AndroidMarket.ADAPTER
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r5.android_market
                r2 = 41
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r0 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r1 = r5.main_template
                r2 = 42
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r0 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r1 = r5.sub_template
                r2 = 43
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r5.asset
                r2 = 44
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.theme_data
                r2 = 45
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.sigmob.sdk.base.models.rtb.MaterialMeta r2) throws java.io.IOException {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta r2 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.sigmob.sdk.base.models.rtb.MaterialMeta r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.creative_type
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.interaction_type
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.landing_page
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.video_url
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.video_duration
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r1 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r2 = r5.video_size
                r3 = 6
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r1 = com.czhj.wire.ProtoAdapter.BYTES
                com.czhj.wire.okio.ByteString r2 = r5.html_snippet
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.endcard_url
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.video_md5
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.endcard_md5
                r3 = 10
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.deeplink_url
                r3 = 11
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.image_src
                r3 = 12
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r1 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r2 = r5.image_size
                r3 = 13
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.image_md5
                r3 = 14
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.image_type
                r3 = 15
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.click_type
                r3 = 16
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.has_companion_endcard
                r3 = 17
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> r1 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.ADAPTER
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r2 = r5.companion
                r3 = 18
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> r1 = com.sigmob.sdk.base.models.WebEventHandle.ADAPTER
                com.sigmob.sdk.base.models.WebEventHandle r2 = r5.web_event_handle
                r3 = 19
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.template_type
                r3 = 20
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                java.lang.Integer r2 = r5.video_reciprocal_millisecond
                r3 = 21
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.html_url
                r3 = 22
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.enable_collapse_tool_bar
                r3 = 23
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.open_market_mode
                r3 = 24
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.play_mode
                r3 = 25
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.sub_interaction_type
                r3 = 26
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.title
                r3 = 27
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.desc
                r3 = 28
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.icon_url
                r3 = 29
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Float> r1 = com.czhj.wire.ProtoAdapter.FLOAT
                java.lang.Float r2 = r5.score
                r3 = 30
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.template_id
                r3 = 31
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_auto_deeplink
                r3 = 32
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r1 = com.czhj.wire.ProtoAdapter.BYTES
                com.czhj.wire.okio.ByteString r2 = r5.closecard_html_snippet
                r3 = 33
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.app_name
                r3 = 34
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.button_text
                r3 = 35
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> r1 = com.sigmob.sdk.base.models.rtb.AdPrivacy.ADAPTER
                com.sigmob.sdk.base.models.rtb.AdPrivacy r2 = r5.ad_privacy
                r3 = 36
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.video_byte_size
                r3 = 37
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.html_src
                r3 = 38
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> r1 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r2 = r5.native_ad
                r3 = 39
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.download_dialog
                r3 = 40
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> r1 = com.sigmob.sdk.base.models.rtb.AndroidMarket.ADAPTER
                com.sigmob.sdk.base.models.rtb.AndroidMarket r2 = r5.android_market
                r3 = 41
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r1 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r2 = r5.main_template
                r3 = 42
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r1 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r2 = r5.sub_template
                r3 = 43
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r2 = r5.asset
                r3 = 44
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r2 = r5.theme_data
                r3 = 45
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.sigmob.sdk.base.models.rtb.MaterialMeta r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.sigmob.sdk.base.models.rtb.MaterialMeta redact(com.sigmob.sdk.base.models.rtb.MaterialMeta r3) {
                r2 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.Size r0 = r3.video_size
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r3.video_size
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Size r0 = (com.czhj.sdk.common.models.Size) r0
                r3.video_size = r0
            L14:
                com.czhj.sdk.common.models.Size r0 = r3.image_size
                if (r0 == 0) goto L24
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Size> r0 = com.czhj.sdk.common.models.Size.ADAPTER
                com.czhj.sdk.common.models.Size r1 = r3.image_size
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Size r0 = (com.czhj.sdk.common.models.Size) r0
                r3.image_size = r0
            L24:
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r0 = r3.companion
                if (r0 == 0) goto L34
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.CompanionEndcard> r0 = com.sigmob.sdk.base.models.rtb.CompanionEndcard.ADAPTER
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r3.companion
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.CompanionEndcard r0 = (com.sigmob.sdk.base.models.rtb.CompanionEndcard) r0
                r3.companion = r0
            L34:
                com.sigmob.sdk.base.models.WebEventHandle r0 = r3.web_event_handle
                if (r0 == 0) goto L44
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.WebEventHandle> r0 = com.sigmob.sdk.base.models.WebEventHandle.ADAPTER
                com.sigmob.sdk.base.models.WebEventHandle r1 = r3.web_event_handle
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.WebEventHandle r0 = (com.sigmob.sdk.base.models.WebEventHandle) r0
                r3.web_event_handle = r0
            L44:
                com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = r3.ad_privacy
                if (r0 == 0) goto L54
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AdPrivacy> r0 = com.sigmob.sdk.base.models.rtb.AdPrivacy.ADAPTER
                com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r3.ad_privacy
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.AdPrivacy r0 = (com.sigmob.sdk.base.models.rtb.AdPrivacy) r0
                r3.ad_privacy = r0
            L54:
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = r3.native_ad
                if (r0 == 0) goto L64
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseNativeAd> r0 = com.sigmob.sdk.base.models.rtb.ResponseNativeAd.ADAPTER
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r3.native_ad
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.ResponseNativeAd r0 = (com.sigmob.sdk.base.models.rtb.ResponseNativeAd) r0
                r3.native_ad = r0
            L64:
                com.sigmob.sdk.base.models.rtb.AndroidMarket r0 = r3.android_market
                if (r0 == 0) goto L74
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.AndroidMarket> r0 = com.sigmob.sdk.base.models.rtb.AndroidMarket.ADAPTER
                com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r3.android_market
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.AndroidMarket r0 = (com.sigmob.sdk.base.models.rtb.AndroidMarket) r0
                r3.android_market = r0
            L74:
                com.sigmob.sdk.base.models.rtb.Template r0 = r3.main_template
                if (r0 == 0) goto L84
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r0 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r1 = r3.main_template
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.Template r0 = (com.sigmob.sdk.base.models.rtb.Template) r0
                r3.main_template = r0
            L84:
                com.sigmob.sdk.base.models.rtb.Template r0 = r3.sub_template
                if (r0 == 0) goto L94
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.Template> r0 = com.sigmob.sdk.base.models.rtb.Template.ADAPTER
                com.sigmob.sdk.base.models.rtb.Template r1 = r3.sub_template
                java.lang.Object r0 = r0.redact(r1)
                com.sigmob.sdk.base.models.rtb.Template r0 = (com.sigmob.sdk.base.models.rtb.Template) r0
                r3.sub_template = r0
            L94:
                java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r0 = r3.asset
                com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = com.sigmob.sdk.base.models.rtb.ResponseAsset.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.sigmob.sdk.base.models.rtb.MaterialMeta r3 = r3.build()
                return r3
        }

        @Override
        public com.sigmob.sdk.base.models.rtb.MaterialMeta redact(com.sigmob.sdk.base.models.rtb.MaterialMeta r1) {
                r0 = this;
                com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r1
                com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.sigmob.sdk.base.models.rtb.MaterialMeta$ProtoAdapter_MaterialMeta r0 = new com.sigmob.sdk.base.models.rtb.MaterialMeta$ProtoAdapter_MaterialMeta
            r0.<init>()
            com.sigmob.sdk.base.models.rtb.MaterialMeta.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta.CREATOR = r0
            r0 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_CREATIVE_TYPE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_INTERACTION_TYPE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_VIDEO_DURATION = r0
            com.czhj.wire.okio.ByteString r2 = com.czhj.wire.okio.ByteString.EMPTY
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_HTML_SNIPPET = r2
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_IMAGE_TYPE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_CLICK_TYPE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_HAS_COMPANION_ENDCARD = r1
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_TEMPLATE_TYPE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_VIDEO_RECIPROCAL_MILLISECOND = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_ENABLE_COLLAPSE_TOOL_BAR = r1
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_OPEN_MARKET_MODE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_PLAY_MODE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_SUB_INTERACTION_TYPE = r0
            r2 = 0
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_SCORE = r2
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_TEMPLATE_ID = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_DISABLE_AUTO_DEEPLINK = r1
            com.czhj.wire.okio.ByteString r2 = com.czhj.wire.okio.ByteString.EMPTY
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_CLOSECARD_HTML_SNIPPET = r2
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_VIDEO_BYTE_SIZE = r0
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_DOWNLOAD_DIALOG = r1
            com.sigmob.sdk.base.models.rtb.MaterialMeta.DEFAULT_THEME_DATA = r0
            return
    }

    public MaterialMeta(java.lang.Integer r48, java.lang.Integer r49, java.lang.String r50, java.lang.String r51, java.lang.Integer r52, com.czhj.sdk.common.models.Size r53, com.czhj.wire.okio.ByteString r54, java.lang.String r55, java.lang.String r56, java.lang.String r57, java.lang.String r58, java.lang.String r59, com.czhj.sdk.common.models.Size r60, java.lang.String r61, java.lang.Integer r62, java.lang.Integer r63, java.lang.Boolean r64, com.sigmob.sdk.base.models.rtb.CompanionEndcard r65, com.sigmob.sdk.base.models.WebEventHandle r66, java.lang.Integer r67, java.lang.Integer r68, java.lang.String r69, java.lang.Boolean r70, java.lang.Integer r71, java.lang.Integer r72, java.lang.Integer r73, java.lang.String r74, java.lang.String r75, java.lang.String r76, java.lang.Float r77, java.lang.Integer r78, java.lang.Boolean r79, com.czhj.wire.okio.ByteString r80, java.lang.String r81, java.lang.String r82, com.sigmob.sdk.base.models.rtb.AdPrivacy r83, java.lang.Integer r84, java.lang.String r85, com.sigmob.sdk.base.models.rtb.ResponseNativeAd r86, java.lang.Boolean r87, com.sigmob.sdk.base.models.rtb.AndroidMarket r88, com.sigmob.sdk.base.models.rtb.Template r89, com.sigmob.sdk.base.models.rtb.Template r90, java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r91, java.lang.Integer r92) {
            r47 = this;
            r0 = r47
            r1 = r48
            r2 = r49
            r3 = r50
            r4 = r51
            r5 = r52
            r6 = r53
            r7 = r54
            r8 = r55
            r9 = r56
            r10 = r57
            r11 = r58
            r12 = r59
            r13 = r60
            r14 = r61
            r15 = r62
            r16 = r63
            r17 = r64
            r18 = r65
            r19 = r66
            r20 = r67
            r21 = r68
            r22 = r69
            r23 = r70
            r24 = r71
            r25 = r72
            r26 = r73
            r27 = r74
            r28 = r75
            r29 = r76
            r30 = r77
            r31 = r78
            r32 = r79
            r33 = r80
            r34 = r81
            r35 = r82
            r36 = r83
            r37 = r84
            r38 = r85
            r39 = r86
            r40 = r87
            r41 = r88
            r42 = r89
            r43 = r90
            r44 = r91
            r45 = r92
            com.czhj.wire.okio.ByteString r46 = com.czhj.wire.okio.ByteString.EMPTY
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46)
            return
    }

    public MaterialMeta(java.lang.Integer r4, java.lang.Integer r5, java.lang.String r6, java.lang.String r7, java.lang.Integer r8, com.czhj.sdk.common.models.Size r9, com.czhj.wire.okio.ByteString r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, com.czhj.sdk.common.models.Size r16, java.lang.String r17, java.lang.Integer r18, java.lang.Integer r19, java.lang.Boolean r20, com.sigmob.sdk.base.models.rtb.CompanionEndcard r21, com.sigmob.sdk.base.models.WebEventHandle r22, java.lang.Integer r23, java.lang.Integer r24, java.lang.String r25, java.lang.Boolean r26, java.lang.Integer r27, java.lang.Integer r28, java.lang.Integer r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, java.lang.Float r33, java.lang.Integer r34, java.lang.Boolean r35, com.czhj.wire.okio.ByteString r36, java.lang.String r37, java.lang.String r38, com.sigmob.sdk.base.models.rtb.AdPrivacy r39, java.lang.Integer r40, java.lang.String r41, com.sigmob.sdk.base.models.rtb.ResponseNativeAd r42, java.lang.Boolean r43, com.sigmob.sdk.base.models.rtb.AndroidMarket r44, com.sigmob.sdk.base.models.rtb.Template r45, com.sigmob.sdk.base.models.rtb.Template r46, java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r47, java.lang.Integer r48, com.czhj.wire.okio.ByteString r49) {
            r3 = this;
            r0 = r3
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.rtb.MaterialMeta> r1 = com.sigmob.sdk.base.models.rtb.MaterialMeta.ADAPTER
            r2 = r49
            r3.<init>(r1, r2)
            r1 = r4
            r0.creative_type = r1
            r1 = r5
            r0.interaction_type = r1
            r1 = r6
            r0.landing_page = r1
            r1 = r7
            r0.video_url = r1
            r1 = r8
            r0.video_duration = r1
            r1 = r9
            r0.video_size = r1
            r1 = r10
            r0.html_snippet = r1
            r1 = r11
            r0.endcard_url = r1
            r1 = r12
            r0.video_md5 = r1
            r1 = r13
            r0.endcard_md5 = r1
            r1 = r14
            r0.deeplink_url = r1
            r1 = r15
            r0.image_src = r1
            r1 = r16
            r0.image_size = r1
            r1 = r17
            r0.image_md5 = r1
            r1 = r18
            r0.image_type = r1
            r1 = r19
            r0.click_type = r1
            r1 = r20
            r0.has_companion_endcard = r1
            r1 = r21
            r0.companion = r1
            r1 = r22
            r0.web_event_handle = r1
            r1 = r23
            r0.template_type = r1
            r1 = r24
            r0.video_reciprocal_millisecond = r1
            r1 = r25
            r0.html_url = r1
            r1 = r26
            r0.enable_collapse_tool_bar = r1
            r1 = r27
            r0.open_market_mode = r1
            r1 = r28
            r0.play_mode = r1
            r1 = r29
            r0.sub_interaction_type = r1
            r1 = r30
            r0.title = r1
            r1 = r31
            r0.desc = r1
            r1 = r32
            r0.icon_url = r1
            r1 = r33
            r0.score = r1
            r1 = r34
            r0.template_id = r1
            r1 = r35
            r0.disable_auto_deeplink = r1
            r1 = r36
            r0.closecard_html_snippet = r1
            r1 = r37
            r0.app_name = r1
            r1 = r38
            r0.button_text = r1
            r1 = r39
            r0.ad_privacy = r1
            r1 = r40
            r0.video_byte_size = r1
            r1 = r41
            r0.html_src = r1
            r1 = r42
            r0.native_ad = r1
            r1 = r43
            r0.download_dialog = r1
            r1 = r44
            r0.android_market = r1
            r1 = r45
            r0.main_template = r1
            r1 = r46
            r0.sub_template = r1
            java.lang.String r1 = "asset"
            r2 = r47
            java.util.List r1 = com.czhj.wire.internal.Internal.immutableCopyOf(r1, r2)
            r0.asset = r1
            r1 = r48
            r0.theme_data = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.sigmob.sdk.base.models.rtb.MaterialMeta
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r5 = (com.sigmob.sdk.base.models.rtb.MaterialMeta) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.creative_type
            java.lang.Integer r3 = r5.creative_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.interaction_type
            java.lang.Integer r3 = r5.interaction_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.landing_page
            java.lang.String r3 = r5.landing_page
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.video_url
            java.lang.String r3 = r5.video_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.video_duration
            java.lang.Integer r3 = r5.video_duration
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.czhj.sdk.common.models.Size r1 = r4.video_size
            com.czhj.sdk.common.models.Size r3 = r5.video_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.czhj.wire.okio.ByteString r1 = r4.html_snippet
            com.czhj.wire.okio.ByteString r3 = r5.html_snippet
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.endcard_url
            java.lang.String r3 = r5.endcard_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.video_md5
            java.lang.String r3 = r5.video_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.endcard_md5
            java.lang.String r3 = r5.endcard_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.deeplink_url
            java.lang.String r3 = r5.deeplink_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.image_src
            java.lang.String r3 = r5.image_src
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.czhj.sdk.common.models.Size r1 = r4.image_size
            com.czhj.sdk.common.models.Size r3 = r5.image_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.image_md5
            java.lang.String r3 = r5.image_md5
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.image_type
            java.lang.Integer r3 = r5.image_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.click_type
            java.lang.Integer r3 = r5.click_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Boolean r1 = r4.has_companion_endcard
            java.lang.Boolean r3 = r5.has_companion_endcard
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r4.companion
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r3 = r5.companion
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.WebEventHandle r1 = r4.web_event_handle
            com.sigmob.sdk.base.models.WebEventHandle r3 = r5.web_event_handle
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.template_type
            java.lang.Integer r3 = r5.template_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.video_reciprocal_millisecond
            java.lang.Integer r3 = r5.video_reciprocal_millisecond
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.html_url
            java.lang.String r3 = r5.html_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Boolean r1 = r4.enable_collapse_tool_bar
            java.lang.Boolean r3 = r5.enable_collapse_tool_bar
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.open_market_mode
            java.lang.Integer r3 = r5.open_market_mode
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.play_mode
            java.lang.Integer r3 = r5.play_mode
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.sub_interaction_type
            java.lang.Integer r3 = r5.sub_interaction_type
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.title
            java.lang.String r3 = r5.title
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.desc
            java.lang.String r3 = r5.desc
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.icon_url
            java.lang.String r3 = r5.icon_url
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Float r1 = r4.score
            java.lang.Float r3 = r5.score
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.template_id
            java.lang.Integer r3 = r5.template_id
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Boolean r1 = r4.disable_auto_deeplink
            java.lang.Boolean r3 = r5.disable_auto_deeplink
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.czhj.wire.okio.ByteString r1 = r4.closecard_html_snippet
            com.czhj.wire.okio.ByteString r3 = r5.closecard_html_snippet
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.app_name
            java.lang.String r3 = r5.app_name
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.button_text
            java.lang.String r3 = r5.button_text
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r4.ad_privacy
            com.sigmob.sdk.base.models.rtb.AdPrivacy r3 = r5.ad_privacy
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.video_byte_size
            java.lang.Integer r3 = r5.video_byte_size
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.String r1 = r4.html_src
            java.lang.String r3 = r5.html_src
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r4.native_ad
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r3 = r5.native_ad
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.lang.Boolean r1 = r4.download_dialog
            java.lang.Boolean r3 = r5.download_dialog
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r4.android_market
            com.sigmob.sdk.base.models.rtb.AndroidMarket r3 = r5.android_market
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.main_template
            com.sigmob.sdk.base.models.rtb.Template r3 = r5.main_template
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.sub_template
            com.sigmob.sdk.base.models.rtb.Template r3 = r5.sub_template
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L1dd
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.asset
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r3 = r5.asset
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L1dd
            java.lang.Integer r1 = r4.theme_data
            java.lang.Integer r5 = r5.theme_data
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L1dd
            goto L1de
        L1dd:
            r0 = r2
        L1de:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L252
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.creative_type
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.interaction_type
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.landing_page
            if (r1 == 0) goto L32
            int r1 = r1.hashCode()
            goto L33
        L32:
            r1 = r2
        L33:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.video_url
            if (r1 == 0) goto L3f
            int r1 = r1.hashCode()
            goto L40
        L3f:
            r1 = r2
        L40:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.video_duration
            if (r1 == 0) goto L4c
            int r1 = r1.hashCode()
            goto L4d
        L4c:
            r1 = r2
        L4d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Size r1 = r3.video_size
            if (r1 == 0) goto L59
            int r1 = r1.hashCode()
            goto L5a
        L59:
            r1 = r2
        L5a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.okio.ByteString r1 = r3.html_snippet
            if (r1 == 0) goto L66
            int r1 = r1.hashCode()
            goto L67
        L66:
            r1 = r2
        L67:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.endcard_url
            if (r1 == 0) goto L73
            int r1 = r1.hashCode()
            goto L74
        L73:
            r1 = r2
        L74:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.video_md5
            if (r1 == 0) goto L80
            int r1 = r1.hashCode()
            goto L81
        L80:
            r1 = r2
        L81:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.endcard_md5
            if (r1 == 0) goto L8d
            int r1 = r1.hashCode()
            goto L8e
        L8d:
            r1 = r2
        L8e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.deeplink_url
            if (r1 == 0) goto L9a
            int r1 = r1.hashCode()
            goto L9b
        L9a:
            r1 = r2
        L9b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.image_src
            if (r1 == 0) goto La7
            int r1 = r1.hashCode()
            goto La8
        La7:
            r1 = r2
        La8:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Size r1 = r3.image_size
            if (r1 == 0) goto Lb4
            int r1 = r1.hashCode()
            goto Lb5
        Lb4:
            r1 = r2
        Lb5:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.image_md5
            if (r1 == 0) goto Lc1
            int r1 = r1.hashCode()
            goto Lc2
        Lc1:
            r1 = r2
        Lc2:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.image_type
            if (r1 == 0) goto Lce
            int r1 = r1.hashCode()
            goto Lcf
        Lce:
            r1 = r2
        Lcf:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.click_type
            if (r1 == 0) goto Ldb
            int r1 = r1.hashCode()
            goto Ldc
        Ldb:
            r1 = r2
        Ldc:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.has_companion_endcard
            if (r1 == 0) goto Le8
            int r1 = r1.hashCode()
            goto Le9
        Le8:
            r1 = r2
        Le9:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r3.companion
            if (r1 == 0) goto Lf5
            int r1 = r1.hashCode()
            goto Lf6
        Lf5:
            r1 = r2
        Lf6:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.WebEventHandle r1 = r3.web_event_handle
            if (r1 == 0) goto L102
            int r1 = r1.hashCode()
            goto L103
        L102:
            r1 = r2
        L103:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.template_type
            if (r1 == 0) goto L10f
            int r1 = r1.hashCode()
            goto L110
        L10f:
            r1 = r2
        L110:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.video_reciprocal_millisecond
            if (r1 == 0) goto L11c
            int r1 = r1.hashCode()
            goto L11d
        L11c:
            r1 = r2
        L11d:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.html_url
            if (r1 == 0) goto L129
            int r1 = r1.hashCode()
            goto L12a
        L129:
            r1 = r2
        L12a:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.enable_collapse_tool_bar
            if (r1 == 0) goto L136
            int r1 = r1.hashCode()
            goto L137
        L136:
            r1 = r2
        L137:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.open_market_mode
            if (r1 == 0) goto L143
            int r1 = r1.hashCode()
            goto L144
        L143:
            r1 = r2
        L144:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.play_mode
            if (r1 == 0) goto L150
            int r1 = r1.hashCode()
            goto L151
        L150:
            r1 = r2
        L151:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.sub_interaction_type
            if (r1 == 0) goto L15d
            int r1 = r1.hashCode()
            goto L15e
        L15d:
            r1 = r2
        L15e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.title
            if (r1 == 0) goto L16a
            int r1 = r1.hashCode()
            goto L16b
        L16a:
            r1 = r2
        L16b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.desc
            if (r1 == 0) goto L177
            int r1 = r1.hashCode()
            goto L178
        L177:
            r1 = r2
        L178:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.icon_url
            if (r1 == 0) goto L184
            int r1 = r1.hashCode()
            goto L185
        L184:
            r1 = r2
        L185:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Float r1 = r3.score
            if (r1 == 0) goto L191
            int r1 = r1.hashCode()
            goto L192
        L191:
            r1 = r2
        L192:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.template_id
            if (r1 == 0) goto L19e
            int r1 = r1.hashCode()
            goto L19f
        L19e:
            r1 = r2
        L19f:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_auto_deeplink
            if (r1 == 0) goto L1ab
            int r1 = r1.hashCode()
            goto L1ac
        L1ab:
            r1 = r2
        L1ac:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.wire.okio.ByteString r1 = r3.closecard_html_snippet
            if (r1 == 0) goto L1b8
            int r1 = r1.hashCode()
            goto L1b9
        L1b8:
            r1 = r2
        L1b9:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.app_name
            if (r1 == 0) goto L1c5
            int r1 = r1.hashCode()
            goto L1c6
        L1c5:
            r1 = r2
        L1c6:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.button_text
            if (r1 == 0) goto L1d2
            int r1 = r1.hashCode()
            goto L1d3
        L1d2:
            r1 = r2
        L1d3:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r3.ad_privacy
            if (r1 == 0) goto L1df
            int r1 = r1.hashCode()
            goto L1e0
        L1df:
            r1 = r2
        L1e0:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.video_byte_size
            if (r1 == 0) goto L1ec
            int r1 = r1.hashCode()
            goto L1ed
        L1ec:
            r1 = r2
        L1ed:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.html_src
            if (r1 == 0) goto L1f9
            int r1 = r1.hashCode()
            goto L1fa
        L1f9:
            r1 = r2
        L1fa:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r3.native_ad
            if (r1 == 0) goto L206
            int r1 = r1.hashCode()
            goto L207
        L206:
            r1 = r2
        L207:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.download_dialog
            if (r1 == 0) goto L213
            int r1 = r1.hashCode()
            goto L214
        L213:
            r1 = r2
        L214:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r3.android_market
            if (r1 == 0) goto L220
            int r1 = r1.hashCode()
            goto L221
        L220:
            r1 = r2
        L221:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.Template r1 = r3.main_template
            if (r1 == 0) goto L22d
            int r1 = r1.hashCode()
            goto L22e
        L22d:
            r1 = r2
        L22e:
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.sigmob.sdk.base.models.rtb.Template r1 = r3.sub_template
            if (r1 == 0) goto L23a
            int r1 = r1.hashCode()
            goto L23b
        L23a:
            r1 = r2
        L23b:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r3.asset
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.theme_data
            if (r1 == 0) goto L24f
            int r2 = r1.hashCode()
        L24f:
            int r0 = r0 + r2
            r3.hashCode = r0
        L252:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.sigmob.sdk.base.models.rtb.MaterialMeta.Builder newBuilder() {
            r3 = this;
            com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder r0 = new com.sigmob.sdk.base.models.rtb.MaterialMeta$Builder
            r0.<init>()
            java.lang.Integer r1 = r3.creative_type
            r0.creative_type = r1
            java.lang.Integer r1 = r3.interaction_type
            r0.interaction_type = r1
            java.lang.String r1 = r3.landing_page
            r0.landing_page = r1
            java.lang.String r1 = r3.video_url
            r0.video_url = r1
            java.lang.Integer r1 = r3.video_duration
            r0.video_duration = r1
            com.czhj.sdk.common.models.Size r1 = r3.video_size
            r0.video_size = r1
            com.czhj.wire.okio.ByteString r1 = r3.html_snippet
            r0.html_snippet = r1
            java.lang.String r1 = r3.endcard_url
            r0.endcard_url = r1
            java.lang.String r1 = r3.video_md5
            r0.video_md5 = r1
            java.lang.String r1 = r3.endcard_md5
            r0.endcard_md5 = r1
            java.lang.String r1 = r3.deeplink_url
            r0.deeplink_url = r1
            java.lang.String r1 = r3.image_src
            r0.image_src = r1
            com.czhj.sdk.common.models.Size r1 = r3.image_size
            r0.image_size = r1
            java.lang.String r1 = r3.image_md5
            r0.image_md5 = r1
            java.lang.Integer r1 = r3.image_type
            r0.image_type = r1
            java.lang.Integer r1 = r3.click_type
            r0.click_type = r1
            java.lang.Boolean r1 = r3.has_companion_endcard
            r0.has_companion_endcard = r1
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r3.companion
            r0.companion = r1
            com.sigmob.sdk.base.models.WebEventHandle r1 = r3.web_event_handle
            r0.web_event_handle = r1
            java.lang.Integer r1 = r3.template_type
            r0.template_type = r1
            java.lang.Integer r1 = r3.video_reciprocal_millisecond
            r0.video_reciprocal_millisecond = r1
            java.lang.String r1 = r3.html_url
            r0.html_url = r1
            java.lang.Boolean r1 = r3.enable_collapse_tool_bar
            r0.enable_collapse_tool_bar = r1
            java.lang.Integer r1 = r3.open_market_mode
            r0.open_market_mode = r1
            java.lang.Integer r1 = r3.play_mode
            r0.play_mode = r1
            java.lang.Integer r1 = r3.sub_interaction_type
            r0.sub_interaction_type = r1
            java.lang.String r1 = r3.title
            r0.title = r1
            java.lang.String r1 = r3.desc
            r0.desc = r1
            java.lang.String r1 = r3.icon_url
            r0.icon_url = r1
            java.lang.Float r1 = r3.score
            r0.score = r1
            java.lang.Integer r1 = r3.template_id
            r0.template_id = r1
            java.lang.Boolean r1 = r3.disable_auto_deeplink
            r0.disable_auto_deeplink = r1
            com.czhj.wire.okio.ByteString r1 = r3.closecard_html_snippet
            r0.closecard_html_snippet = r1
            java.lang.String r1 = r3.app_name
            r0.app_name = r1
            java.lang.String r1 = r3.button_text
            r0.button_text = r1
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r3.ad_privacy
            r0.ad_privacy = r1
            java.lang.Integer r1 = r3.video_byte_size
            r0.video_byte_size = r1
            java.lang.String r1 = r3.html_src
            r0.html_src = r1
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r3.native_ad
            r0.native_ad = r1
            java.lang.Boolean r1 = r3.download_dialog
            r0.download_dialog = r1
            com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r3.android_market
            r0.android_market = r1
            com.sigmob.sdk.base.models.rtb.Template r1 = r3.main_template
            r0.main_template = r1
            com.sigmob.sdk.base.models.rtb.Template r1 = r3.sub_template
            r0.sub_template = r1
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r3.asset
            java.lang.String r2 = "asset"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.asset = r1
            java.lang.Integer r1 = r3.theme_data
            r0.theme_data = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.creative_type
            if (r1 == 0) goto L13
            java.lang.String r1 = ", creative_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.creative_type
            r0.append(r1)
        L13:
            java.lang.Integer r1 = r4.interaction_type
            if (r1 == 0) goto L21
            java.lang.String r1 = ", interaction_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.interaction_type
            r0.append(r1)
        L21:
            java.lang.String r1 = r4.landing_page
            if (r1 == 0) goto L2f
            java.lang.String r1 = ", landing_page="
            r0.append(r1)
            java.lang.String r1 = r4.landing_page
            r0.append(r1)
        L2f:
            java.lang.String r1 = r4.video_url
            if (r1 == 0) goto L3d
            java.lang.String r1 = ", video_url="
            r0.append(r1)
            java.lang.String r1 = r4.video_url
            r0.append(r1)
        L3d:
            java.lang.Integer r1 = r4.video_duration
            if (r1 == 0) goto L4b
            java.lang.String r1 = ", video_duration="
            r0.append(r1)
            java.lang.Integer r1 = r4.video_duration
            r0.append(r1)
        L4b:
            com.czhj.sdk.common.models.Size r1 = r4.video_size
            if (r1 == 0) goto L59
            java.lang.String r1 = ", video_size="
            r0.append(r1)
            com.czhj.sdk.common.models.Size r1 = r4.video_size
            r0.append(r1)
        L59:
            com.czhj.wire.okio.ByteString r1 = r4.html_snippet
            if (r1 == 0) goto L67
            java.lang.String r1 = ", html_snippet="
            r0.append(r1)
            com.czhj.wire.okio.ByteString r1 = r4.html_snippet
            r0.append(r1)
        L67:
            java.lang.String r1 = r4.endcard_url
            if (r1 == 0) goto L75
            java.lang.String r1 = ", endcard_url="
            r0.append(r1)
            java.lang.String r1 = r4.endcard_url
            r0.append(r1)
        L75:
            java.lang.String r1 = r4.video_md5
            if (r1 == 0) goto L83
            java.lang.String r1 = ", video_md5="
            r0.append(r1)
            java.lang.String r1 = r4.video_md5
            r0.append(r1)
        L83:
            java.lang.String r1 = r4.endcard_md5
            if (r1 == 0) goto L91
            java.lang.String r1 = ", endcard_md5="
            r0.append(r1)
            java.lang.String r1 = r4.endcard_md5
            r0.append(r1)
        L91:
            java.lang.String r1 = r4.deeplink_url
            if (r1 == 0) goto L9f
            java.lang.String r1 = ", deeplink_url="
            r0.append(r1)
            java.lang.String r1 = r4.deeplink_url
            r0.append(r1)
        L9f:
            java.lang.String r1 = r4.image_src
            if (r1 == 0) goto Lad
            java.lang.String r1 = ", image_src="
            r0.append(r1)
            java.lang.String r1 = r4.image_src
            r0.append(r1)
        Lad:
            com.czhj.sdk.common.models.Size r1 = r4.image_size
            if (r1 == 0) goto Lbb
            java.lang.String r1 = ", image_size="
            r0.append(r1)
            com.czhj.sdk.common.models.Size r1 = r4.image_size
            r0.append(r1)
        Lbb:
            java.lang.String r1 = r4.image_md5
            if (r1 == 0) goto Lc9
            java.lang.String r1 = ", image_md5="
            r0.append(r1)
            java.lang.String r1 = r4.image_md5
            r0.append(r1)
        Lc9:
            java.lang.Integer r1 = r4.image_type
            if (r1 == 0) goto Ld7
            java.lang.String r1 = ", image_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.image_type
            r0.append(r1)
        Ld7:
            java.lang.Integer r1 = r4.click_type
            if (r1 == 0) goto Le5
            java.lang.String r1 = ", click_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.click_type
            r0.append(r1)
        Le5:
            java.lang.Boolean r1 = r4.has_companion_endcard
            if (r1 == 0) goto Lf3
            java.lang.String r1 = ", has_companion_endcard="
            r0.append(r1)
            java.lang.Boolean r1 = r4.has_companion_endcard
            r0.append(r1)
        Lf3:
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r4.companion
            if (r1 == 0) goto L101
            java.lang.String r1 = ", companion="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.CompanionEndcard r1 = r4.companion
            r0.append(r1)
        L101:
            com.sigmob.sdk.base.models.WebEventHandle r1 = r4.web_event_handle
            if (r1 == 0) goto L10f
            java.lang.String r1 = ", web_event_handle="
            r0.append(r1)
            com.sigmob.sdk.base.models.WebEventHandle r1 = r4.web_event_handle
            r0.append(r1)
        L10f:
            java.lang.Integer r1 = r4.template_type
            if (r1 == 0) goto L11d
            java.lang.String r1 = ", template_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.template_type
            r0.append(r1)
        L11d:
            java.lang.Integer r1 = r4.video_reciprocal_millisecond
            if (r1 == 0) goto L12b
            java.lang.String r1 = ", video_reciprocal_millisecond="
            r0.append(r1)
            java.lang.Integer r1 = r4.video_reciprocal_millisecond
            r0.append(r1)
        L12b:
            java.lang.String r1 = r4.html_url
            if (r1 == 0) goto L139
            java.lang.String r1 = ", html_url="
            r0.append(r1)
            java.lang.String r1 = r4.html_url
            r0.append(r1)
        L139:
            java.lang.Boolean r1 = r4.enable_collapse_tool_bar
            if (r1 == 0) goto L147
            java.lang.String r1 = ", enable_collapse_tool_bar="
            r0.append(r1)
            java.lang.Boolean r1 = r4.enable_collapse_tool_bar
            r0.append(r1)
        L147:
            java.lang.Integer r1 = r4.open_market_mode
            if (r1 == 0) goto L155
            java.lang.String r1 = ", open_market_mode="
            r0.append(r1)
            java.lang.Integer r1 = r4.open_market_mode
            r0.append(r1)
        L155:
            java.lang.Integer r1 = r4.play_mode
            if (r1 == 0) goto L163
            java.lang.String r1 = ", play_mode="
            r0.append(r1)
            java.lang.Integer r1 = r4.play_mode
            r0.append(r1)
        L163:
            java.lang.Integer r1 = r4.sub_interaction_type
            if (r1 == 0) goto L171
            java.lang.String r1 = ", sub_interaction_type="
            r0.append(r1)
            java.lang.Integer r1 = r4.sub_interaction_type
            r0.append(r1)
        L171:
            java.lang.String r1 = r4.title
            if (r1 == 0) goto L17f
            java.lang.String r1 = ", title="
            r0.append(r1)
            java.lang.String r1 = r4.title
            r0.append(r1)
        L17f:
            java.lang.String r1 = r4.desc
            if (r1 == 0) goto L18d
            java.lang.String r1 = ", desc="
            r0.append(r1)
            java.lang.String r1 = r4.desc
            r0.append(r1)
        L18d:
            java.lang.String r1 = r4.icon_url
            if (r1 == 0) goto L19b
            java.lang.String r1 = ", icon_url="
            r0.append(r1)
            java.lang.String r1 = r4.icon_url
            r0.append(r1)
        L19b:
            java.lang.Float r1 = r4.score
            if (r1 == 0) goto L1a9
            java.lang.String r1 = ", score="
            r0.append(r1)
            java.lang.Float r1 = r4.score
            r0.append(r1)
        L1a9:
            java.lang.Integer r1 = r4.template_id
            if (r1 == 0) goto L1b7
            java.lang.String r1 = ", template_id="
            r0.append(r1)
            java.lang.Integer r1 = r4.template_id
            r0.append(r1)
        L1b7:
            java.lang.Boolean r1 = r4.disable_auto_deeplink
            if (r1 == 0) goto L1c5
            java.lang.String r1 = ", disable_auto_deeplink="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_auto_deeplink
            r0.append(r1)
        L1c5:
            com.czhj.wire.okio.ByteString r1 = r4.closecard_html_snippet
            if (r1 == 0) goto L1d3
            java.lang.String r1 = ", closecard_html_snippet="
            r0.append(r1)
            com.czhj.wire.okio.ByteString r1 = r4.closecard_html_snippet
            r0.append(r1)
        L1d3:
            java.lang.String r1 = r4.app_name
            if (r1 == 0) goto L1e1
            java.lang.String r1 = ", app_name="
            r0.append(r1)
            java.lang.String r1 = r4.app_name
            r0.append(r1)
        L1e1:
            java.lang.String r1 = r4.button_text
            if (r1 == 0) goto L1ef
            java.lang.String r1 = ", button_text="
            r0.append(r1)
            java.lang.String r1 = r4.button_text
            r0.append(r1)
        L1ef:
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r4.ad_privacy
            if (r1 == 0) goto L1fd
            java.lang.String r1 = ", ad_privacy="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.AdPrivacy r1 = r4.ad_privacy
            r0.append(r1)
        L1fd:
            java.lang.Integer r1 = r4.video_byte_size
            if (r1 == 0) goto L20b
            java.lang.String r1 = ", video_byte_size="
            r0.append(r1)
            java.lang.Integer r1 = r4.video_byte_size
            r0.append(r1)
        L20b:
            java.lang.String r1 = r4.html_src
            if (r1 == 0) goto L219
            java.lang.String r1 = ", html_src="
            r0.append(r1)
            java.lang.String r1 = r4.html_src
            r0.append(r1)
        L219:
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r4.native_ad
            if (r1 == 0) goto L227
            java.lang.String r1 = ", native_ad="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.ResponseNativeAd r1 = r4.native_ad
            r0.append(r1)
        L227:
            java.lang.Boolean r1 = r4.download_dialog
            if (r1 == 0) goto L235
            java.lang.String r1 = ", download_dialog="
            r0.append(r1)
            java.lang.Boolean r1 = r4.download_dialog
            r0.append(r1)
        L235:
            com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r4.android_market
            if (r1 == 0) goto L243
            java.lang.String r1 = ", android_market="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.AndroidMarket r1 = r4.android_market
            r0.append(r1)
        L243:
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.main_template
            if (r1 == 0) goto L251
            java.lang.String r1 = ", main_template="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.main_template
            r0.append(r1)
        L251:
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.sub_template
            if (r1 == 0) goto L25f
            java.lang.String r1 = ", sub_template="
            r0.append(r1)
            com.sigmob.sdk.base.models.rtb.Template r1 = r4.sub_template
            r0.append(r1)
        L25f:
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.asset
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L271
            java.lang.String r1 = ", asset="
            r0.append(r1)
            java.util.List<com.sigmob.sdk.base.models.rtb.ResponseAsset> r1 = r4.asset
            r0.append(r1)
        L271:
            java.lang.Integer r1 = r4.theme_data
            if (r1 == 0) goto L27f
            java.lang.String r1 = ", theme_data="
            r0.append(r1)
            java.lang.Integer r1 = r4.theme_data
            r0.append(r1)
        L27f:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "MaterialMeta{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
