package com.sigmob.sdk.base.models.rtb;

import android.os.Parcelable;
import com.czhj.sdk.common.models.Size;
import com.czhj.wire.AndroidMessage;
import com.czhj.wire.FieldEncoding;
import com.czhj.wire.Message;
import com.czhj.wire.ProtoAdapter;
import com.czhj.wire.ProtoReader;
import com.czhj.wire.ProtoWriter;
import com.czhj.wire.WireField;
import com.czhj.wire.internal.Internal;
import com.czhj.wire.okio.ByteString;
import com.sigmob.sdk.base.models.WebEventHandle;
import java.io.IOException;
import java.util.List;

public final class MaterialMeta extends AndroidMessage<MaterialMeta, Builder> {
    public static final ProtoAdapter<MaterialMeta> ADAPTER;
    public static final Parcelable.Creator<MaterialMeta> CREATOR;
    public static final String DEFAULT_APP_NAME = "";
    public static final String DEFAULT_BUTTON_TEXT = "";
    public static final Integer DEFAULT_CLICK_TYPE;
    public static final ByteString DEFAULT_CLOSECARD_HTML_SNIPPET;
    public static final Integer DEFAULT_CREATIVE_TYPE;
    public static final String DEFAULT_DEEPLINK_URL = "";
    public static final String DEFAULT_DESC = "";
    public static final Boolean DEFAULT_DISABLE_AUTO_DEEPLINK;
    public static final Boolean DEFAULT_DOWNLOAD_DIALOG;
    public static final Boolean DEFAULT_ENABLE_COLLAPSE_TOOL_BAR;
    public static final String DEFAULT_ENDCARD_MD5 = "";
    public static final String DEFAULT_ENDCARD_URL = "";
    public static final Boolean DEFAULT_HAS_COMPANION_ENDCARD;
    public static final ByteString DEFAULT_HTML_SNIPPET;
    public static final String DEFAULT_HTML_SRC = "";
    public static final String DEFAULT_HTML_URL = "";
    public static final String DEFAULT_ICON_URL = "";
    public static final String DEFAULT_IMAGE_MD5 = "";
    public static final String DEFAULT_IMAGE_SRC = "";
    public static final Integer DEFAULT_IMAGE_TYPE;
    public static final Integer DEFAULT_INTERACTION_TYPE;
    public static final String DEFAULT_LANDING_PAGE = "";
    public static final Integer DEFAULT_OPEN_MARKET_MODE;
    public static final Integer DEFAULT_PLAY_MODE;
    public static final Float DEFAULT_SCORE;
    public static final Integer DEFAULT_SUB_INTERACTION_TYPE;
    public static final Integer DEFAULT_TEMPLATE_ID;
    public static final Integer DEFAULT_TEMPLATE_TYPE;
    public static final Integer DEFAULT_THEME_DATA;
    public static final String DEFAULT_TITLE = "";
    public static final Integer DEFAULT_VIDEO_BYTE_SIZE;
    public static final Integer DEFAULT_VIDEO_DURATION;
    public static final String DEFAULT_VIDEO_MD5 = "";
    public static final Integer DEFAULT_VIDEO_RECIPROCAL_MILLISECOND;
    public static final String DEFAULT_VIDEO_URL = "";
    private static final long serialVersionUID = 0;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.AdPrivacy#ADAPTER", tag = 36)
    public final AdPrivacy ad_privacy;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.AndroidMarket#ADAPTER", tag = 41)
    public final AndroidMarket android_market;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 34)
    public final String app_name;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.ResponseAsset#ADAPTER", label = WireField.Label.REPEATED, tag = 44)
    public final List<ResponseAsset> asset;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 35)
    public final String button_text;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 16)
    public final Integer click_type;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BYTES", tag = 33)
    public final ByteString closecard_html_snippet;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.CompanionEndcard#ADAPTER", tag = 18)
    public final CompanionEndcard companion;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final Integer creative_type;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 11)
    public final String deeplink_url;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 28)
    public final String desc;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 32)
    public final Boolean disable_auto_deeplink;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 40)
    public final Boolean download_dialog;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 23)
    public final Boolean enable_collapse_tool_bar;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 10)
    public final String endcard_md5;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 8)
    public final String endcard_url;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 17)
    public final Boolean has_companion_endcard;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#BYTES", tag = 7)
    public final ByteString html_snippet;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 38)
    public final String html_src;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 22)
    public final String html_url;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 29)
    public final String icon_url;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 14)
    public final String image_md5;

    @WireField(adapter = "com.sigmob.sdk.common.models.Size#ADAPTER", tag = 13)
    public final Size image_size;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 12)
    public final String image_src;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 15)
    public final Integer image_type;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 2)
    public final Integer interaction_type;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
    public final String landing_page;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER", tag = 42)
    public final Template main_template;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.ResponseNativeAd#ADAPTER", tag = 39)
    public final ResponseNativeAd native_ad;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 24)
    public final Integer open_market_mode;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 25)
    public final Integer play_mode;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#FLOAT", tag = 30)
    public final Float score;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 26)
    public final Integer sub_interaction_type;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER", tag = 43)
    public final Template sub_template;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 31)
    public final Integer template_id;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 20)
    public final Integer template_type;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 45)
    public final Integer theme_data;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 27)
    public final String title;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 37)
    public final Integer video_byte_size;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 5)
    public final Integer video_duration;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 9)
    public final String video_md5;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", tag = 21)
    public final Integer video_reciprocal_millisecond;

    @WireField(adapter = "com.sigmob.sdk.common.models.Size#ADAPTER", tag = 6)
    public final Size video_size;

    @WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
    public final String video_url;

    @WireField(adapter = "com.sigmob.sdk.base.models.rtb.WebEventHandle#ADAPTER", tag = 19)
    public final WebEventHandle web_event_handle;

    public static final class Builder extends Message.Builder<MaterialMeta, Builder> {
        public AdPrivacy ad_privacy;
        public AndroidMarket android_market;
        public CompanionEndcard companion;
        public Size image_size;
        public Template main_template;
        public ResponseNativeAd native_ad;
        public Template sub_template;
        public Size video_size;
        public WebEventHandle web_event_handle;
        public Integer creative_type = MaterialMeta.DEFAULT_CREATIVE_TYPE;
        public Integer interaction_type = MaterialMeta.DEFAULT_INTERACTION_TYPE;
        public String landing_page = "";
        public String video_url = "";
        public Integer video_duration = MaterialMeta.DEFAULT_VIDEO_DURATION;
        public ByteString html_snippet = MaterialMeta.DEFAULT_HTML_SNIPPET;
        public String endcard_url = "";
        public String video_md5 = "";
        public String endcard_md5 = "";
        public String deeplink_url = "";
        public String image_src = "";
        public String image_md5 = "";
        public Integer image_type = MaterialMeta.DEFAULT_IMAGE_TYPE;
        public Integer click_type = MaterialMeta.DEFAULT_CLICK_TYPE;
        public Boolean has_companion_endcard = MaterialMeta.DEFAULT_HAS_COMPANION_ENDCARD;
        public Integer template_type = MaterialMeta.DEFAULT_TEMPLATE_TYPE;
        public Integer video_reciprocal_millisecond = MaterialMeta.DEFAULT_VIDEO_RECIPROCAL_MILLISECOND;
        public String html_url = "";
        public Boolean enable_collapse_tool_bar = MaterialMeta.DEFAULT_ENABLE_COLLAPSE_TOOL_BAR;
        public Integer open_market_mode = MaterialMeta.DEFAULT_OPEN_MARKET_MODE;
        public Integer play_mode = MaterialMeta.DEFAULT_PLAY_MODE;
        public Integer sub_interaction_type = MaterialMeta.DEFAULT_SUB_INTERACTION_TYPE;
        public String title = "";
        public String desc = "";
        public String icon_url = "";
        public Float score = MaterialMeta.DEFAULT_SCORE;
        public Integer template_id = MaterialMeta.DEFAULT_TEMPLATE_ID;
        public Boolean disable_auto_deeplink = MaterialMeta.DEFAULT_DISABLE_AUTO_DEEPLINK;
        public ByteString closecard_html_snippet = MaterialMeta.DEFAULT_CLOSECARD_HTML_SNIPPET;
        public String app_name = "";
        public String button_text = "";
        public Integer video_byte_size = MaterialMeta.DEFAULT_VIDEO_BYTE_SIZE;
        public String html_src = "";
        public Boolean download_dialog = MaterialMeta.DEFAULT_DOWNLOAD_DIALOG;
        public Integer theme_data = MaterialMeta.DEFAULT_THEME_DATA;
        public List<ResponseAsset> asset = Internal.newMutableList();

        public Builder ad_privacy(AdPrivacy adPrivacy) {
            this.ad_privacy = adPrivacy;
            return this;
        }

        public Builder android_market(AndroidMarket androidMarket) {
            this.android_market = androidMarket;
            return this;
        }

        public Builder app_name(String str) {
            this.app_name = str;
            return this;
        }

        public Builder asset(List<ResponseAsset> list) {
            Internal.checkElementsNotNull(list);
            this.asset = list;
            return this;
        }

        @Override
        public MaterialMeta build() {
            return new MaterialMeta(this.creative_type, this.interaction_type, this.landing_page, this.video_url, this.video_duration, this.video_size, this.html_snippet, this.endcard_url, this.video_md5, this.endcard_md5, this.deeplink_url, this.image_src, this.image_size, this.image_md5, this.image_type, this.click_type, this.has_companion_endcard, this.companion, this.web_event_handle, this.template_type, this.video_reciprocal_millisecond, this.html_url, this.enable_collapse_tool_bar, this.open_market_mode, this.play_mode, this.sub_interaction_type, this.title, this.desc, this.icon_url, this.score, this.template_id, this.disable_auto_deeplink, this.closecard_html_snippet, this.app_name, this.button_text, this.ad_privacy, this.video_byte_size, this.html_src, this.native_ad, this.download_dialog, this.android_market, this.main_template, this.sub_template, this.asset, this.theme_data, super.buildUnknownFields());
        }

        public Builder button_text(String str) {
            this.button_text = str;
            return this;
        }

        public Builder click_type(Integer num) {
            this.click_type = num;
            return this;
        }

        public Builder closecard_html_snippet(ByteString byteString) {
            this.closecard_html_snippet = byteString;
            return this;
        }

        public Builder companion(CompanionEndcard companionEndcard) {
            this.companion = companionEndcard;
            return this;
        }

        public Builder creative_type(Integer num) {
            this.creative_type = num;
            return this;
        }

        public Builder deeplink_url(String str) {
            this.deeplink_url = str;
            return this;
        }

        public Builder desc(String str) {
            this.desc = str;
            return this;
        }

        public Builder disable_auto_deeplink(Boolean bool) {
            this.disable_auto_deeplink = bool;
            return this;
        }

        public Builder download_dialog(Boolean bool) {
            this.download_dialog = bool;
            return this;
        }

        public Builder enable_collapse_tool_bar(Boolean bool) {
            this.enable_collapse_tool_bar = bool;
            return this;
        }

        public Builder endcard_md5(String str) {
            this.endcard_md5 = str;
            return this;
        }

        public Builder endcard_url(String str) {
            this.endcard_url = str;
            return this;
        }

        public Builder has_companion_endcard(Boolean bool) {
            this.has_companion_endcard = bool;
            return this;
        }

        public Builder html_snippet(ByteString byteString) {
            this.html_snippet = byteString;
            return this;
        }

        public Builder html_src(String str) {
            this.html_src = str;
            return this;
        }

        public Builder html_url(String str) {
            this.html_url = str;
            return this;
        }

        public Builder icon_url(String str) {
            this.icon_url = str;
            return this;
        }

        public Builder image_md5(String str) {
            this.image_md5 = str;
            return this;
        }

        public Builder image_size(Size size) {
            this.image_size = size;
            return this;
        }

        public Builder image_src(String str) {
            this.image_src = str;
            return this;
        }

        public Builder image_type(Integer num) {
            this.image_type = num;
            return this;
        }

        public Builder interaction_type(Integer num) {
            this.interaction_type = num;
            return this;
        }

        public Builder landing_page(String str) {
            this.landing_page = str;
            return this;
        }

        public Builder main_template(Template template) {
            this.main_template = template;
            return this;
        }

        public Builder native_ad(ResponseNativeAd responseNativeAd) {
            this.native_ad = responseNativeAd;
            return this;
        }

        public Builder open_market_mode(Integer num) {
            this.open_market_mode = num;
            return this;
        }

        public Builder play_mode(Integer num) {
            this.play_mode = num;
            return this;
        }

        public Builder score(Float f) {
            this.score = f;
            return this;
        }

        public Builder sub_interaction_type(Integer num) {
            this.sub_interaction_type = num;
            return this;
        }

        public Builder sub_template(Template template) {
            this.sub_template = template;
            return this;
        }

        public Builder template_id(Integer num) {
            this.template_id = num;
            return this;
        }

        public Builder template_type(Integer num) {
            this.template_type = num;
            return this;
        }

        public Builder theme_data(Integer num) {
            this.theme_data = num;
            return this;
        }

        public Builder title(String str) {
            this.title = str;
            return this;
        }

        public Builder video_byte_size(Integer num) {
            this.video_byte_size = num;
            return this;
        }

        public Builder video_duration(Integer num) {
            this.video_duration = num;
            return this;
        }

        public Builder video_md5(String str) {
            this.video_md5 = str;
            return this;
        }

        public Builder video_reciprocal_millisecond(Integer num) {
            this.video_reciprocal_millisecond = num;
            return this;
        }

        public Builder video_size(Size size) {
            this.video_size = size;
            return this;
        }

        public Builder video_url(String str) {
            this.video_url = str;
            return this;
        }

        public Builder web_event_handle(WebEventHandle webEventHandle) {
            this.web_event_handle = webEventHandle;
            return this;
        }
    }

    private static final class ProtoAdapter_MaterialMeta extends ProtoAdapter<MaterialMeta> {
        public ProtoAdapter_MaterialMeta() {
            super(FieldEncoding.LENGTH_DELIMITED, MaterialMeta.class);
        }

        @Override
        public MaterialMeta decode(ProtoReader protoReader) throws IOException {
            Builder builder = new Builder();
            long jBeginMessage = protoReader.beginMessage();
            while (true) {
                int iNextTag = protoReader.nextTag();
                if (iNextTag == -1) {
                    protoReader.endMessage(jBeginMessage);
                    return builder.build();
                }
                switch (iNextTag) {
                    case 1:
                        builder.creative_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 2:
                        builder.interaction_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 3:
                        builder.landing_page(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 4:
                        builder.video_url(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 5:
                        builder.video_duration(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 6:
                        builder.video_size(Size.ADAPTER.decode(protoReader));
                        break;
                    case 7:
                        builder.html_snippet(ProtoAdapter.BYTES.decode(protoReader));
                        break;
                    case 8:
                        builder.endcard_url(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 9:
                        builder.video_md5(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 10:
                        builder.endcard_md5(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 11:
                        builder.deeplink_url(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 12:
                        builder.image_src(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 13:
                        builder.image_size(Size.ADAPTER.decode(protoReader));
                        break;
                    case 14:
                        builder.image_md5(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 15:
                        builder.image_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 16:
                        builder.click_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 17:
                        builder.has_companion_endcard(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 18:
                        builder.companion(CompanionEndcard.ADAPTER.decode(protoReader));
                        break;
                    case 19:
                        builder.web_event_handle(WebEventHandle.ADAPTER.decode(protoReader));
                        break;
                    case 20:
                        builder.template_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 21:
                        builder.video_reciprocal_millisecond(ProtoAdapter.INT32.decode(protoReader));
                        break;
                    case 22:
                        builder.html_url(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 23:
                        builder.enable_collapse_tool_bar(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 24:
                        builder.open_market_mode(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 25:
                        builder.play_mode(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 26:
                        builder.sub_interaction_type(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 27:
                        builder.title(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 28:
                        builder.desc(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 29:
                        builder.icon_url(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 30:
                        builder.score(ProtoAdapter.FLOAT.decode(protoReader));
                        break;
                    case 31:
                        builder.template_id(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 32:
                        builder.disable_auto_deeplink(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 33:
                        builder.closecard_html_snippet(ProtoAdapter.BYTES.decode(protoReader));
                        break;
                    case 34:
                        builder.app_name(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 35:
                        builder.button_text(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 36:
                        builder.ad_privacy(AdPrivacy.ADAPTER.decode(protoReader));
                        break;
                    case 37:
                        builder.video_byte_size(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    case 38:
                        builder.html_src(ProtoAdapter.STRING.decode(protoReader));
                        break;
                    case 39:
                        builder.native_ad(ResponseNativeAd.ADAPTER.decode(protoReader));
                        break;
                    case 40:
                        builder.download_dialog(ProtoAdapter.BOOL.decode(protoReader));
                        break;
                    case 41:
                        builder.android_market(AndroidMarket.ADAPTER.decode(protoReader));
                        break;
                    case 42:
                        builder.main_template(Template.ADAPTER.decode(protoReader));
                        break;
                    case 43:
                        builder.sub_template(Template.ADAPTER.decode(protoReader));
                        break;
                    case 44:
                        builder.asset.add(ResponseAsset.ADAPTER.decode(protoReader));
                        break;
                    case 45:
                        builder.theme_data(ProtoAdapter.UINT32.decode(protoReader));
                        break;
                    default:
                        FieldEncoding fieldEncodingPeekFieldEncoding = protoReader.peekFieldEncoding();
                        builder.addUnknownField(iNextTag, fieldEncodingPeekFieldEncoding, fieldEncodingPeekFieldEncoding.rawProtoAdapter().decode(protoReader));
                        break;
                }
            }
        }

        @Override
        public void encode(ProtoWriter protoWriter, MaterialMeta materialMeta) throws IOException {
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 1, materialMeta.creative_type);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 2, materialMeta.interaction_type);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 3, materialMeta.landing_page);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 4, materialMeta.video_url);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 5, materialMeta.video_duration);
            Size.ADAPTER.encodeWithTag(protoWriter, 6, materialMeta.video_size);
            ProtoAdapter.BYTES.encodeWithTag(protoWriter, 7, materialMeta.html_snippet);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 8, materialMeta.endcard_url);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 9, materialMeta.video_md5);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 10, materialMeta.endcard_md5);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 11, materialMeta.deeplink_url);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 12, materialMeta.image_src);
            Size.ADAPTER.encodeWithTag(protoWriter, 13, materialMeta.image_size);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 14, materialMeta.image_md5);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 15, materialMeta.image_type);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 16, materialMeta.click_type);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 17, materialMeta.has_companion_endcard);
            CompanionEndcard.ADAPTER.encodeWithTag(protoWriter, 18, materialMeta.companion);
            WebEventHandle.ADAPTER.encodeWithTag(protoWriter, 19, materialMeta.web_event_handle);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 20, materialMeta.template_type);
            ProtoAdapter.INT32.encodeWithTag(protoWriter, 21, materialMeta.video_reciprocal_millisecond);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 22, materialMeta.html_url);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 23, materialMeta.enable_collapse_tool_bar);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 24, materialMeta.open_market_mode);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 25, materialMeta.play_mode);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 26, materialMeta.sub_interaction_type);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 27, materialMeta.title);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 28, materialMeta.desc);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 29, materialMeta.icon_url);
            ProtoAdapter.FLOAT.encodeWithTag(protoWriter, 30, materialMeta.score);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 31, materialMeta.template_id);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 32, materialMeta.disable_auto_deeplink);
            ProtoAdapter.BYTES.encodeWithTag(protoWriter, 33, materialMeta.closecard_html_snippet);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 34, materialMeta.app_name);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 35, materialMeta.button_text);
            AdPrivacy.ADAPTER.encodeWithTag(protoWriter, 36, materialMeta.ad_privacy);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 37, materialMeta.video_byte_size);
            ProtoAdapter.STRING.encodeWithTag(protoWriter, 38, materialMeta.html_src);
            ResponseNativeAd.ADAPTER.encodeWithTag(protoWriter, 39, materialMeta.native_ad);
            ProtoAdapter.BOOL.encodeWithTag(protoWriter, 40, materialMeta.download_dialog);
            AndroidMarket.ADAPTER.encodeWithTag(protoWriter, 41, materialMeta.android_market);
            Template.ADAPTER.encodeWithTag(protoWriter, 42, materialMeta.main_template);
            Template.ADAPTER.encodeWithTag(protoWriter, 43, materialMeta.sub_template);
            ResponseAsset.ADAPTER.asRepeated().encodeWithTag(protoWriter, 44, materialMeta.asset);
            ProtoAdapter.UINT32.encodeWithTag(protoWriter, 45, materialMeta.theme_data);
            protoWriter.writeBytes(materialMeta.unknownFields());
        }

        @Override
        public int encodedSize(MaterialMeta materialMeta) {
            return ProtoAdapter.UINT32.encodedSizeWithTag(1, materialMeta.creative_type) + ProtoAdapter.UINT32.encodedSizeWithTag(2, materialMeta.interaction_type) + ProtoAdapter.STRING.encodedSizeWithTag(3, materialMeta.landing_page) + ProtoAdapter.STRING.encodedSizeWithTag(4, materialMeta.video_url) + ProtoAdapter.UINT32.encodedSizeWithTag(5, materialMeta.video_duration) + Size.ADAPTER.encodedSizeWithTag(6, materialMeta.video_size) + ProtoAdapter.BYTES.encodedSizeWithTag(7, materialMeta.html_snippet) + ProtoAdapter.STRING.encodedSizeWithTag(8, materialMeta.endcard_url) + ProtoAdapter.STRING.encodedSizeWithTag(9, materialMeta.video_md5) + ProtoAdapter.STRING.encodedSizeWithTag(10, materialMeta.endcard_md5) + ProtoAdapter.STRING.encodedSizeWithTag(11, materialMeta.deeplink_url) + ProtoAdapter.STRING.encodedSizeWithTag(12, materialMeta.image_src) + Size.ADAPTER.encodedSizeWithTag(13, materialMeta.image_size) + ProtoAdapter.STRING.encodedSizeWithTag(14, materialMeta.image_md5) + ProtoAdapter.UINT32.encodedSizeWithTag(15, materialMeta.image_type) + ProtoAdapter.UINT32.encodedSizeWithTag(16, materialMeta.click_type) + ProtoAdapter.BOOL.encodedSizeWithTag(17, materialMeta.has_companion_endcard) + CompanionEndcard.ADAPTER.encodedSizeWithTag(18, materialMeta.companion) + WebEventHandle.ADAPTER.encodedSizeWithTag(19, materialMeta.web_event_handle) + ProtoAdapter.UINT32.encodedSizeWithTag(20, materialMeta.template_type) + ProtoAdapter.INT32.encodedSizeWithTag(21, materialMeta.video_reciprocal_millisecond) + ProtoAdapter.STRING.encodedSizeWithTag(22, materialMeta.html_url) + ProtoAdapter.BOOL.encodedSizeWithTag(23, materialMeta.enable_collapse_tool_bar) + ProtoAdapter.UINT32.encodedSizeWithTag(24, materialMeta.open_market_mode) + ProtoAdapter.UINT32.encodedSizeWithTag(25, materialMeta.play_mode) + ProtoAdapter.UINT32.encodedSizeWithTag(26, materialMeta.sub_interaction_type) + ProtoAdapter.STRING.encodedSizeWithTag(27, materialMeta.title) + ProtoAdapter.STRING.encodedSizeWithTag(28, materialMeta.desc) + ProtoAdapter.STRING.encodedSizeWithTag(29, materialMeta.icon_url) + ProtoAdapter.FLOAT.encodedSizeWithTag(30, materialMeta.score) + ProtoAdapter.UINT32.encodedSizeWithTag(31, materialMeta.template_id) + ProtoAdapter.BOOL.encodedSizeWithTag(32, materialMeta.disable_auto_deeplink) + ProtoAdapter.BYTES.encodedSizeWithTag(33, materialMeta.closecard_html_snippet) + ProtoAdapter.STRING.encodedSizeWithTag(34, materialMeta.app_name) + ProtoAdapter.STRING.encodedSizeWithTag(35, materialMeta.button_text) + AdPrivacy.ADAPTER.encodedSizeWithTag(36, materialMeta.ad_privacy) + ProtoAdapter.UINT32.encodedSizeWithTag(37, materialMeta.video_byte_size) + ProtoAdapter.STRING.encodedSizeWithTag(38, materialMeta.html_src) + ResponseNativeAd.ADAPTER.encodedSizeWithTag(39, materialMeta.native_ad) + ProtoAdapter.BOOL.encodedSizeWithTag(40, materialMeta.download_dialog) + AndroidMarket.ADAPTER.encodedSizeWithTag(41, materialMeta.android_market) + Template.ADAPTER.encodedSizeWithTag(42, materialMeta.main_template) + Template.ADAPTER.encodedSizeWithTag(43, materialMeta.sub_template) + ResponseAsset.ADAPTER.asRepeated().encodedSizeWithTag(44, materialMeta.asset) + ProtoAdapter.UINT32.encodedSizeWithTag(45, materialMeta.theme_data) + materialMeta.unknownFields().size();
        }

        @Override
        public MaterialMeta redact(MaterialMeta materialMeta) {
            Builder builderNewBuilder = materialMeta.newBuilder();
            if (builderNewBuilder.video_size != null) {
                builderNewBuilder.video_size = Size.ADAPTER.redact(builderNewBuilder.video_size);
            }
            if (builderNewBuilder.image_size != null) {
                builderNewBuilder.image_size = Size.ADAPTER.redact(builderNewBuilder.image_size);
            }
            if (builderNewBuilder.companion != null) {
                builderNewBuilder.companion = CompanionEndcard.ADAPTER.redact(builderNewBuilder.companion);
            }
            if (builderNewBuilder.web_event_handle != null) {
                builderNewBuilder.web_event_handle = WebEventHandle.ADAPTER.redact(builderNewBuilder.web_event_handle);
            }
            if (builderNewBuilder.ad_privacy != null) {
                builderNewBuilder.ad_privacy = AdPrivacy.ADAPTER.redact(builderNewBuilder.ad_privacy);
            }
            if (builderNewBuilder.native_ad != null) {
                builderNewBuilder.native_ad = ResponseNativeAd.ADAPTER.redact(builderNewBuilder.native_ad);
            }
            if (builderNewBuilder.android_market != null) {
                builderNewBuilder.android_market = AndroidMarket.ADAPTER.redact(builderNewBuilder.android_market);
            }
            if (builderNewBuilder.main_template != null) {
                builderNewBuilder.main_template = Template.ADAPTER.redact(builderNewBuilder.main_template);
            }
            if (builderNewBuilder.sub_template != null) {
                builderNewBuilder.sub_template = Template.ADAPTER.redact(builderNewBuilder.sub_template);
            }
            Internal.redactElements(builderNewBuilder.asset, ResponseAsset.ADAPTER);
            builderNewBuilder.clearUnknownFields();
            return builderNewBuilder.build();
        }
    }

    static {
        ProtoAdapter_MaterialMeta protoAdapter_MaterialMeta = new ProtoAdapter_MaterialMeta();
        ADAPTER = protoAdapter_MaterialMeta;
        CREATOR = AndroidMessage.newCreator(protoAdapter_MaterialMeta);
        DEFAULT_CREATIVE_TYPE = 0;
        DEFAULT_INTERACTION_TYPE = 0;
        DEFAULT_VIDEO_DURATION = 0;
        DEFAULT_HTML_SNIPPET = ByteString.EMPTY;
        DEFAULT_IMAGE_TYPE = 0;
        DEFAULT_CLICK_TYPE = 0;
        DEFAULT_HAS_COMPANION_ENDCARD = false;
        DEFAULT_TEMPLATE_TYPE = 0;
        DEFAULT_VIDEO_RECIPROCAL_MILLISECOND = 0;
        DEFAULT_ENABLE_COLLAPSE_TOOL_BAR = false;
        DEFAULT_OPEN_MARKET_MODE = 0;
        DEFAULT_PLAY_MODE = 0;
        DEFAULT_SUB_INTERACTION_TYPE = 0;
        DEFAULT_SCORE = Float.valueOf(0.0f);
        DEFAULT_TEMPLATE_ID = 0;
        DEFAULT_DISABLE_AUTO_DEEPLINK = false;
        DEFAULT_CLOSECARD_HTML_SNIPPET = ByteString.EMPTY;
        DEFAULT_VIDEO_BYTE_SIZE = 0;
        DEFAULT_DOWNLOAD_DIALOG = false;
        DEFAULT_THEME_DATA = 0;
    }

    public MaterialMeta(Integer num, Integer num2, String str, String str2, Integer num3, Size size, ByteString byteString, String str3, String str4, String str5, String str6, String str7, Size size2, String str8, Integer num4, Integer num5, Boolean bool, CompanionEndcard companionEndcard, WebEventHandle webEventHandle, Integer num6, Integer num7, String str9, Boolean bool2, Integer num8, Integer num9, Integer num10, String str10, String str11, String str12, Float f, Integer num11, Boolean bool3, ByteString byteString2, String str13, String str14, AdPrivacy adPrivacy, Integer num12, String str15, ResponseNativeAd responseNativeAd, Boolean bool4, AndroidMarket androidMarket, Template template, Template template2, List<ResponseAsset> list, Integer num13) {
        this(num, num2, str, str2, num3, size, byteString, str3, str4, str5, str6, str7, size2, str8, num4, num5, bool, companionEndcard, webEventHandle, num6, num7, str9, bool2, num8, num9, num10, str10, str11, str12, f, num11, bool3, byteString2, str13, str14, adPrivacy, num12, str15, responseNativeAd, bool4, androidMarket, template, template2, list, num13, ByteString.EMPTY);
    }

    public MaterialMeta(Integer num, Integer num2, String str, String str2, Integer num3, Size size, ByteString byteString, String str3, String str4, String str5, String str6, String str7, Size size2, String str8, Integer num4, Integer num5, Boolean bool, CompanionEndcard companionEndcard, WebEventHandle webEventHandle, Integer num6, Integer num7, String str9, Boolean bool2, Integer num8, Integer num9, Integer num10, String str10, String str11, String str12, Float f, Integer num11, Boolean bool3, ByteString byteString2, String str13, String str14, AdPrivacy adPrivacy, Integer num12, String str15, ResponseNativeAd responseNativeAd, Boolean bool4, AndroidMarket androidMarket, Template template, Template template2, List<ResponseAsset> list, Integer num13, ByteString byteString3) {
        super(ADAPTER, byteString3);
        this.creative_type = num;
        this.interaction_type = num2;
        this.landing_page = str;
        this.video_url = str2;
        this.video_duration = num3;
        this.video_size = size;
        this.html_snippet = byteString;
        this.endcard_url = str3;
        this.video_md5 = str4;
        this.endcard_md5 = str5;
        this.deeplink_url = str6;
        this.image_src = str7;
        this.image_size = size2;
        this.image_md5 = str8;
        this.image_type = num4;
        this.click_type = num5;
        this.has_companion_endcard = bool;
        this.companion = companionEndcard;
        this.web_event_handle = webEventHandle;
        this.template_type = num6;
        this.video_reciprocal_millisecond = num7;
        this.html_url = str9;
        this.enable_collapse_tool_bar = bool2;
        this.open_market_mode = num8;
        this.play_mode = num9;
        this.sub_interaction_type = num10;
        this.title = str10;
        this.desc = str11;
        this.icon_url = str12;
        this.score = f;
        this.template_id = num11;
        this.disable_auto_deeplink = bool3;
        this.closecard_html_snippet = byteString2;
        this.app_name = str13;
        this.button_text = str14;
        this.ad_privacy = adPrivacy;
        this.video_byte_size = num12;
        this.html_src = str15;
        this.native_ad = responseNativeAd;
        this.download_dialog = bool4;
        this.android_market = androidMarket;
        this.main_template = template;
        this.sub_template = template2;
        this.asset = Internal.immutableCopyOf("asset", list);
        this.theme_data = num13;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof MaterialMeta)) {
            return false;
        }
        MaterialMeta materialMeta = (MaterialMeta) obj;
        return unknownFields().equals(materialMeta.unknownFields()) && Internal.equals(this.creative_type, materialMeta.creative_type) && Internal.equals(this.interaction_type, materialMeta.interaction_type) && Internal.equals(this.landing_page, materialMeta.landing_page) && Internal.equals(this.video_url, materialMeta.video_url) && Internal.equals(this.video_duration, materialMeta.video_duration) && Internal.equals(this.video_size, materialMeta.video_size) && Internal.equals(this.html_snippet, materialMeta.html_snippet) && Internal.equals(this.endcard_url, materialMeta.endcard_url) && Internal.equals(this.video_md5, materialMeta.video_md5) && Internal.equals(this.endcard_md5, materialMeta.endcard_md5) && Internal.equals(this.deeplink_url, materialMeta.deeplink_url) && Internal.equals(this.image_src, materialMeta.image_src) && Internal.equals(this.image_size, materialMeta.image_size) && Internal.equals(this.image_md5, materialMeta.image_md5) && Internal.equals(this.image_type, materialMeta.image_type) && Internal.equals(this.click_type, materialMeta.click_type) && Internal.equals(this.has_companion_endcard, materialMeta.has_companion_endcard) && Internal.equals(this.companion, materialMeta.companion) && Internal.equals(this.web_event_handle, materialMeta.web_event_handle) && Internal.equals(this.template_type, materialMeta.template_type) && Internal.equals(this.video_reciprocal_millisecond, materialMeta.video_reciprocal_millisecond) && Internal.equals(this.html_url, materialMeta.html_url) && Internal.equals(this.enable_collapse_tool_bar, materialMeta.enable_collapse_tool_bar) && Internal.equals(this.open_market_mode, materialMeta.open_market_mode) && Internal.equals(this.play_mode, materialMeta.play_mode) && Internal.equals(this.sub_interaction_type, materialMeta.sub_interaction_type) && Internal.equals(this.title, materialMeta.title) && Internal.equals(this.desc, materialMeta.desc) && Internal.equals(this.icon_url, materialMeta.icon_url) && Internal.equals(this.score, materialMeta.score) && Internal.equals(this.template_id, materialMeta.template_id) && Internal.equals(this.disable_auto_deeplink, materialMeta.disable_auto_deeplink) && Internal.equals(this.closecard_html_snippet, materialMeta.closecard_html_snippet) && Internal.equals(this.app_name, materialMeta.app_name) && Internal.equals(this.button_text, materialMeta.button_text) && Internal.equals(this.ad_privacy, materialMeta.ad_privacy) && Internal.equals(this.video_byte_size, materialMeta.video_byte_size) && Internal.equals(this.html_src, materialMeta.html_src) && Internal.equals(this.native_ad, materialMeta.native_ad) && Internal.equals(this.download_dialog, materialMeta.download_dialog) && Internal.equals(this.android_market, materialMeta.android_market) && Internal.equals(this.main_template, materialMeta.main_template) && Internal.equals(this.sub_template, materialMeta.sub_template) && this.asset.equals(materialMeta.asset) && Internal.equals(this.theme_data, materialMeta.theme_data);
    }

    public int hashCode() {
        int i = this.hashCode;
        if (i != 0) {
            return i;
        }
        int iHashCode = unknownFields().hashCode() * 37;
        Integer num = this.creative_type;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 37;
        Integer num2 = this.interaction_type;
        int iHashCode3 = (iHashCode2 + (num2 != null ? num2.hashCode() : 0)) * 37;
        String str = this.landing_page;
        int iHashCode4 = (iHashCode3 + (str != null ? str.hashCode() : 0)) * 37;
        String str2 = this.video_url;
        int iHashCode5 = (iHashCode4 + (str2 != null ? str2.hashCode() : 0)) * 37;
        Integer num3 = this.video_duration;
        int iHashCode6 = (iHashCode5 + (num3 != null ? num3.hashCode() : 0)) * 37;
        Size size = this.video_size;
        int iHashCode7 = (iHashCode6 + (size != null ? size.hashCode() : 0)) * 37;
        ByteString byteString = this.html_snippet;
        int iHashCode8 = (iHashCode7 + (byteString != null ? byteString.hashCode() : 0)) * 37;
        String str3 = this.endcard_url;
        int iHashCode9 = (iHashCode8 + (str3 != null ? str3.hashCode() : 0)) * 37;
        String str4 = this.video_md5;
        int iHashCode10 = (iHashCode9 + (str4 != null ? str4.hashCode() : 0)) * 37;
        String str5 = this.endcard_md5;
        int iHashCode11 = (iHashCode10 + (str5 != null ? str5.hashCode() : 0)) * 37;
        String str6 = this.deeplink_url;
        int iHashCode12 = (iHashCode11 + (str6 != null ? str6.hashCode() : 0)) * 37;
        String str7 = this.image_src;
        int iHashCode13 = (iHashCode12 + (str7 != null ? str7.hashCode() : 0)) * 37;
        Size size2 = this.image_size;
        int iHashCode14 = (iHashCode13 + (size2 != null ? size2.hashCode() : 0)) * 37;
        String str8 = this.image_md5;
        int iHashCode15 = (iHashCode14 + (str8 != null ? str8.hashCode() : 0)) * 37;
        Integer num4 = this.image_type;
        int iHashCode16 = (iHashCode15 + (num4 != null ? num4.hashCode() : 0)) * 37;
        Integer num5 = this.click_type;
        int iHashCode17 = (iHashCode16 + (num5 != null ? num5.hashCode() : 0)) * 37;
        Boolean bool = this.has_companion_endcard;
        int iHashCode18 = (iHashCode17 + (bool != null ? bool.hashCode() : 0)) * 37;
        CompanionEndcard companionEndcard = this.companion;
        int iHashCode19 = (iHashCode18 + (companionEndcard != null ? companionEndcard.hashCode() : 0)) * 37;
        WebEventHandle webEventHandle = this.web_event_handle;
        int iHashCode20 = (iHashCode19 + (webEventHandle != null ? webEventHandle.hashCode() : 0)) * 37;
        Integer num6 = this.template_type;
        int iHashCode21 = (iHashCode20 + (num6 != null ? num6.hashCode() : 0)) * 37;
        Integer num7 = this.video_reciprocal_millisecond;
        int iHashCode22 = (iHashCode21 + (num7 != null ? num7.hashCode() : 0)) * 37;
        String str9 = this.html_url;
        int iHashCode23 = (iHashCode22 + (str9 != null ? str9.hashCode() : 0)) * 37;
        Boolean bool2 = this.enable_collapse_tool_bar;
        int iHashCode24 = (iHashCode23 + (bool2 != null ? bool2.hashCode() : 0)) * 37;
        Integer num8 = this.open_market_mode;
        int iHashCode25 = (iHashCode24 + (num8 != null ? num8.hashCode() : 0)) * 37;
        Integer num9 = this.play_mode;
        int iHashCode26 = (iHashCode25 + (num9 != null ? num9.hashCode() : 0)) * 37;
        Integer num10 = this.sub_interaction_type;
        int iHashCode27 = (iHashCode26 + (num10 != null ? num10.hashCode() : 0)) * 37;
        String str10 = this.title;
        int iHashCode28 = (iHashCode27 + (str10 != null ? str10.hashCode() : 0)) * 37;
        String str11 = this.desc;
        int iHashCode29 = (iHashCode28 + (str11 != null ? str11.hashCode() : 0)) * 37;
        String str12 = this.icon_url;
        int iHashCode30 = (iHashCode29 + (str12 != null ? str12.hashCode() : 0)) * 37;
        Float f = this.score;
        int iHashCode31 = (iHashCode30 + (f != null ? f.hashCode() : 0)) * 37;
        Integer num11 = this.template_id;
        int iHashCode32 = (iHashCode31 + (num11 != null ? num11.hashCode() : 0)) * 37;
        Boolean bool3 = this.disable_auto_deeplink;
        int iHashCode33 = (iHashCode32 + (bool3 != null ? bool3.hashCode() : 0)) * 37;
        ByteString byteString2 = this.closecard_html_snippet;
        int iHashCode34 = (iHashCode33 + (byteString2 != null ? byteString2.hashCode() : 0)) * 37;
        String str13 = this.app_name;
        int iHashCode35 = (iHashCode34 + (str13 != null ? str13.hashCode() : 0)) * 37;
        String str14 = this.button_text;
        int iHashCode36 = (iHashCode35 + (str14 != null ? str14.hashCode() : 0)) * 37;
        AdPrivacy adPrivacy = this.ad_privacy;
        int iHashCode37 = (iHashCode36 + (adPrivacy != null ? adPrivacy.hashCode() : 0)) * 37;
        Integer num12 = this.video_byte_size;
        int iHashCode38 = (iHashCode37 + (num12 != null ? num12.hashCode() : 0)) * 37;
        String str15 = this.html_src;
        int iHashCode39 = (iHashCode38 + (str15 != null ? str15.hashCode() : 0)) * 37;
        ResponseNativeAd responseNativeAd = this.native_ad;
        int iHashCode40 = (iHashCode39 + (responseNativeAd != null ? responseNativeAd.hashCode() : 0)) * 37;
        Boolean bool4 = this.download_dialog;
        int iHashCode41 = (iHashCode40 + (bool4 != null ? bool4.hashCode() : 0)) * 37;
        AndroidMarket androidMarket = this.android_market;
        int iHashCode42 = (iHashCode41 + (androidMarket != null ? androidMarket.hashCode() : 0)) * 37;
        Template template = this.main_template;
        int iHashCode43 = (iHashCode42 + (template != null ? template.hashCode() : 0)) * 37;
        Template template2 = this.sub_template;
        int iHashCode44 = (((iHashCode43 + (template2 != null ? template2.hashCode() : 0)) * 37) + this.asset.hashCode()) * 37;
        Integer num13 = this.theme_data;
        int iHashCode45 = iHashCode44 + (num13 != null ? num13.hashCode() : 0);
        this.hashCode = iHashCode45;
        return iHashCode45;
    }

    @Override
    public Builder newBuilder() {
        Builder builder = new Builder();
        builder.creative_type = this.creative_type;
        builder.interaction_type = this.interaction_type;
        builder.landing_page = this.landing_page;
        builder.video_url = this.video_url;
        builder.video_duration = this.video_duration;
        builder.video_size = this.video_size;
        builder.html_snippet = this.html_snippet;
        builder.endcard_url = this.endcard_url;
        builder.video_md5 = this.video_md5;
        builder.endcard_md5 = this.endcard_md5;
        builder.deeplink_url = this.deeplink_url;
        builder.image_src = this.image_src;
        builder.image_size = this.image_size;
        builder.image_md5 = this.image_md5;
        builder.image_type = this.image_type;
        builder.click_type = this.click_type;
        builder.has_companion_endcard = this.has_companion_endcard;
        builder.companion = this.companion;
        builder.web_event_handle = this.web_event_handle;
        builder.template_type = this.template_type;
        builder.video_reciprocal_millisecond = this.video_reciprocal_millisecond;
        builder.html_url = this.html_url;
        builder.enable_collapse_tool_bar = this.enable_collapse_tool_bar;
        builder.open_market_mode = this.open_market_mode;
        builder.play_mode = this.play_mode;
        builder.sub_interaction_type = this.sub_interaction_type;
        builder.title = this.title;
        builder.desc = this.desc;
        builder.icon_url = this.icon_url;
        builder.score = this.score;
        builder.template_id = this.template_id;
        builder.disable_auto_deeplink = this.disable_auto_deeplink;
        builder.closecard_html_snippet = this.closecard_html_snippet;
        builder.app_name = this.app_name;
        builder.button_text = this.button_text;
        builder.ad_privacy = this.ad_privacy;
        builder.video_byte_size = this.video_byte_size;
        builder.html_src = this.html_src;
        builder.native_ad = this.native_ad;
        builder.download_dialog = this.download_dialog;
        builder.android_market = this.android_market;
        builder.main_template = this.main_template;
        builder.sub_template = this.sub_template;
        builder.asset = Internal.copyOf("asset", this.asset);
        builder.theme_data = this.theme_data;
        builder.addUnknownFields(unknownFields());
        return builder;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        if (this.creative_type != null) {
            sb.append(", creative_type=");
            sb.append(this.creative_type);
        }
        if (this.interaction_type != null) {
            sb.append(", interaction_type=");
            sb.append(this.interaction_type);
        }
        if (this.landing_page != null) {
            sb.append(", landing_page=");
            sb.append(this.landing_page);
        }
        if (this.video_url != null) {
            sb.append(", video_url=");
            sb.append(this.video_url);
        }
        if (this.video_duration != null) {
            sb.append(", video_duration=");
            sb.append(this.video_duration);
        }
        if (this.video_size != null) {
            sb.append(", video_size=");
            sb.append(this.video_size);
        }
        if (this.html_snippet != null) {
            sb.append(", html_snippet=");
            sb.append(this.html_snippet);
        }
        if (this.endcard_url != null) {
            sb.append(", endcard_url=");
            sb.append(this.endcard_url);
        }
        if (this.video_md5 != null) {
            sb.append(", video_md5=");
            sb.append(this.video_md5);
        }
        if (this.endcard_md5 != null) {
            sb.append(", endcard_md5=");
            sb.append(this.endcard_md5);
        }
        if (this.deeplink_url != null) {
            sb.append(", deeplink_url=");
            sb.append(this.deeplink_url);
        }
        if (this.image_src != null) {
            sb.append(", image_src=");
            sb.append(this.image_src);
        }
        if (this.image_size != null) {
            sb.append(", image_size=");
            sb.append(this.image_size);
        }
        if (this.image_md5 != null) {
            sb.append(", image_md5=");
            sb.append(this.image_md5);
        }
        if (this.image_type != null) {
            sb.append(", image_type=");
            sb.append(this.image_type);
        }
        if (this.click_type != null) {
            sb.append(", click_type=");
            sb.append(this.click_type);
        }
        if (this.has_companion_endcard != null) {
            sb.append(", has_companion_endcard=");
            sb.append(this.has_companion_endcard);
        }
        if (this.companion != null) {
            sb.append(", companion=");
            sb.append(this.companion);
        }
        if (this.web_event_handle != null) {
            sb.append(", web_event_handle=");
            sb.append(this.web_event_handle);
        }
        if (this.template_type != null) {
            sb.append(", template_type=");
            sb.append(this.template_type);
        }
        if (this.video_reciprocal_millisecond != null) {
            sb.append(", video_reciprocal_millisecond=");
            sb.append(this.video_reciprocal_millisecond);
        }
        if (this.html_url != null) {
            sb.append(", html_url=");
            sb.append(this.html_url);
        }
        if (this.enable_collapse_tool_bar != null) {
            sb.append(", enable_collapse_tool_bar=");
            sb.append(this.enable_collapse_tool_bar);
        }
        if (this.open_market_mode != null) {
            sb.append(", open_market_mode=");
            sb.append(this.open_market_mode);
        }
        if (this.play_mode != null) {
            sb.append(", play_mode=");
            sb.append(this.play_mode);
        }
        if (this.sub_interaction_type != null) {
            sb.append(", sub_interaction_type=");
            sb.append(this.sub_interaction_type);
        }
        if (this.title != null) {
            sb.append(", title=");
            sb.append(this.title);
        }
        if (this.desc != null) {
            sb.append(", desc=");
            sb.append(this.desc);
        }
        if (this.icon_url != null) {
            sb.append(", icon_url=");
            sb.append(this.icon_url);
        }
        if (this.score != null) {
            sb.append(", score=");
            sb.append(this.score);
        }
        if (this.template_id != null) {
            sb.append(", template_id=");
            sb.append(this.template_id);
        }
        if (this.disable_auto_deeplink != null) {
            sb.append(", disable_auto_deeplink=");
            sb.append(this.disable_auto_deeplink);
        }
        if (this.closecard_html_snippet != null) {
            sb.append(", closecard_html_snippet=");
            sb.append(this.closecard_html_snippet);
        }
        if (this.app_name != null) {
            sb.append(", app_name=");
            sb.append(this.app_name);
        }
        if (this.button_text != null) {
            sb.append(", button_text=");
            sb.append(this.button_text);
        }
        if (this.ad_privacy != null) {
            sb.append(", ad_privacy=");
            sb.append(this.ad_privacy);
        }
        if (this.video_byte_size != null) {
            sb.append(", video_byte_size=");
            sb.append(this.video_byte_size);
        }
        if (this.html_src != null) {
            sb.append(", html_src=");
            sb.append(this.html_src);
        }
        if (this.native_ad != null) {
            sb.append(", native_ad=");
            sb.append(this.native_ad);
        }
        if (this.download_dialog != null) {
            sb.append(", download_dialog=");
            sb.append(this.download_dialog);
        }
        if (this.android_market != null) {
            sb.append(", android_market=");
            sb.append(this.android_market);
        }
        if (this.main_template != null) {
            sb.append(", main_template=");
            sb.append(this.main_template);
        }
        if (this.sub_template != null) {
            sb.append(", sub_template=");
            sb.append(this.sub_template);
        }
        if (!this.asset.isEmpty()) {
            sb.append(", asset=");
            sb.append(this.asset);
        }
        if (this.theme_data != null) {
            sb.append(", theme_data=");
            sb.append(this.theme_data);
        }
        StringBuilder sbReplace = sb.replace(0, 2, "MaterialMeta{");
        sbReplace.append('}');
        return sbReplace.toString();
    }
}
