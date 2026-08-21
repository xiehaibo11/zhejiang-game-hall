.class public final Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
        "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

.field public android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

.field public app_name:Ljava/lang/String;

.field public asset:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;"
        }
    .end annotation
.end field

.field public button_text:Ljava/lang/String;

.field public click_type:Ljava/lang/Integer;

.field public closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

.field public companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

.field public creative_type:Ljava/lang/Integer;

.field public deeplink_url:Ljava/lang/String;

.field public desc:Ljava/lang/String;

.field public disable_auto_deeplink:Ljava/lang/Boolean;

.field public download_dialog:Ljava/lang/Boolean;

.field public enable_collapse_tool_bar:Ljava/lang/Boolean;

.field public endcard_md5:Ljava/lang/String;

.field public endcard_url:Ljava/lang/String;

.field public has_companion_endcard:Ljava/lang/Boolean;

.field public html_snippet:Lcom/czhj/wire/okio/ByteString;

.field public html_src:Ljava/lang/String;

.field public html_url:Ljava/lang/String;

.field public icon_url:Ljava/lang/String;

.field public image_md5:Ljava/lang/String;

.field public image_size:Lcom/czhj/sdk/common/models/Size;

.field public image_src:Ljava/lang/String;

.field public image_type:Ljava/lang/Integer;

.field public interaction_type:Ljava/lang/Integer;

.field public landing_page:Ljava/lang/String;

.field public main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

.field public native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

.field public open_market_mode:Ljava/lang/Integer;

.field public play_mode:Ljava/lang/Integer;

.field public score:Ljava/lang/Float;

.field public sub_interaction_type:Ljava/lang/Integer;

.field public sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

.field public template_id:Ljava/lang/Integer;

.field public template_type:Ljava/lang/Integer;

.field public theme_data:Ljava/lang/Integer;

.field public title:Ljava/lang/String;

.field public video_byte_size:Ljava/lang/Integer;

.field public video_duration:Ljava/lang/Integer;

.field public video_md5:Ljava/lang/String;

.field public video_reciprocal_millisecond:Ljava/lang/Integer;

.field public video_size:Lcom/czhj/sdk/common/models/Size;

.field public video_url:Ljava/lang/String;

.field public web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_CREATIVE_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->creative_type:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_INTERACTION_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->interaction_type:Ljava/lang/Integer;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->landing_page:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_url:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_VIDEO_DURATION:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_duration:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_HTML_SNIPPET:Lcom/czhj/wire/okio/ByteString;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_url:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->deeplink_url:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_src:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_md5:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_IMAGE_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_type:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_CLICK_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->click_type:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_HAS_COMPANION_ENDCARD:Ljava/lang/Boolean;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->has_companion_endcard:Ljava/lang/Boolean;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_TEMPLATE_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_type:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_VIDEO_RECIPROCAL_MILLISECOND:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_reciprocal_millisecond:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_url:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_ENABLE_COLLAPSE_TOOL_BAR:Ljava/lang/Boolean;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_OPEN_MARKET_MODE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->open_market_mode:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_PLAY_MODE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->play_mode:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_SUB_INTERACTION_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_interaction_type:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->title:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->desc:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->icon_url:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_SCORE:Ljava/lang/Float;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->score:Ljava/lang/Float;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_TEMPLATE_ID:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_id:Ljava/lang/Integer;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_DISABLE_AUTO_DEEPLINK:Ljava/lang/Boolean;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->disable_auto_deeplink:Ljava/lang/Boolean;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_CLOSECARD_HTML_SNIPPET:Lcom/czhj/wire/okio/ByteString;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->app_name:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->button_text:Ljava/lang/String;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_VIDEO_BYTE_SIZE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_byte_size:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_src:Ljava/lang/String;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_DOWNLOAD_DIALOG:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->download_dialog:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_THEME_DATA:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->theme_data:Ljava/lang/Integer;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->asset:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public ad_privacy(Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    return-object p0
.end method

.method public android_market(Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    return-object p0
.end method

.method public app_name(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->app_name:Ljava/lang/String;

    return-object p0
.end method

.method public asset(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->asset:Ljava/util/List;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;
    .locals 50

    move-object/from16 v0, p0

    new-instance v48, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-object/from16 v1, v48

    iget-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->creative_type:Ljava/lang/Integer;

    iget-object v3, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->interaction_type:Ljava/lang/Integer;

    iget-object v4, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->landing_page:Ljava/lang/String;

    iget-object v5, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_url:Ljava/lang/String;

    iget-object v6, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_duration:Ljava/lang/Integer;

    iget-object v7, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v8, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    iget-object v9, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_url:Ljava/lang/String;

    iget-object v10, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_md5:Ljava/lang/String;

    iget-object v11, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_md5:Ljava/lang/String;

    iget-object v12, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->deeplink_url:Ljava/lang/String;

    iget-object v13, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_src:Ljava/lang/String;

    iget-object v14, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v15, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_md5:Ljava/lang/String;

    move-object/from16 v49, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_type:Ljava/lang/Integer;

    move-object/from16 v16, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->click_type:Ljava/lang/Integer;

    move-object/from16 v17, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->has_companion_endcard:Ljava/lang/Boolean;

    move-object/from16 v18, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    move-object/from16 v19, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    move-object/from16 v20, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_type:Ljava/lang/Integer;

    move-object/from16 v21, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_reciprocal_millisecond:Ljava/lang/Integer;

    move-object/from16 v22, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_url:Ljava/lang/String;

    move-object/from16 v23, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    move-object/from16 v24, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->open_market_mode:Ljava/lang/Integer;

    move-object/from16 v25, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->play_mode:Ljava/lang/Integer;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_interaction_type:Ljava/lang/Integer;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->title:Ljava/lang/String;

    move-object/from16 v28, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->desc:Ljava/lang/String;

    move-object/from16 v29, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->icon_url:Ljava/lang/String;

    move-object/from16 v30, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->score:Ljava/lang/Float;

    move-object/from16 v31, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_id:Ljava/lang/Integer;

    move-object/from16 v32, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->disable_auto_deeplink:Ljava/lang/Boolean;

    move-object/from16 v33, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    move-object/from16 v34, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->app_name:Ljava/lang/String;

    move-object/from16 v35, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->button_text:Ljava/lang/String;

    move-object/from16 v36, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-object/from16 v37, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_byte_size:Ljava/lang/Integer;

    move-object/from16 v38, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_src:Ljava/lang/String;

    move-object/from16 v39, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-object/from16 v40, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->download_dialog:Ljava/lang/Boolean;

    move-object/from16 v41, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-object/from16 v42, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    move-object/from16 v43, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    move-object/from16 v44, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->asset:Ljava/util/List;

    move-object/from16 v45, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->theme_data:Ljava/lang/Integer;

    move-object/from16 v46, v1

    invoke-super/range {p0 .. p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v47

    move-object/from16 v1, v49

    invoke-direct/range {v1 .. v47}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;Lcom/sigmob/sdk/base/models/WebEventHandle;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/Template;Ljava/util/List;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v48
.end method

.method public button_text(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->button_text:Ljava/lang/String;

    return-object p0
.end method

.method public click_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->click_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public closecard_html_snippet(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    return-object p0
.end method

.method public companion(Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    return-object p0
.end method

.method public creative_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->creative_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public deeplink_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->deeplink_url:Ljava/lang/String;

    return-object p0
.end method

.method public desc(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->desc:Ljava/lang/String;

    return-object p0
.end method

.method public disable_auto_deeplink(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->disable_auto_deeplink:Ljava/lang/Boolean;

    return-object p0
.end method

.method public download_dialog(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->download_dialog:Ljava/lang/Boolean;

    return-object p0
.end method

.method public enable_collapse_tool_bar(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    return-object p0
.end method

.method public endcard_md5(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_md5:Ljava/lang/String;

    return-object p0
.end method

.method public endcard_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_url:Ljava/lang/String;

    return-object p0
.end method

.method public has_companion_endcard(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->has_companion_endcard:Ljava/lang/Boolean;

    return-object p0
.end method

.method public html_snippet(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    return-object p0
.end method

.method public html_src(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_src:Ljava/lang/String;

    return-object p0
.end method

.method public html_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_url:Ljava/lang/String;

    return-object p0
.end method

.method public icon_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->icon_url:Ljava/lang/String;

    return-object p0
.end method

.method public image_md5(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_md5:Ljava/lang/String;

    return-object p0
.end method

.method public image_size(Lcom/czhj/sdk/common/models/Size;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_size:Lcom/czhj/sdk/common/models/Size;

    return-object p0
.end method

.method public image_src(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_src:Ljava/lang/String;

    return-object p0
.end method

.method public image_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public interaction_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->interaction_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public landing_page(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->landing_page:Ljava/lang/String;

    return-object p0
.end method

.method public main_template(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    return-object p0
.end method

.method public native_ad(Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    return-object p0
.end method

.method public open_market_mode(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->open_market_mode:Ljava/lang/Integer;

    return-object p0
.end method

.method public play_mode(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->play_mode:Ljava/lang/Integer;

    return-object p0
.end method

.method public score(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->score:Ljava/lang/Float;

    return-object p0
.end method

.method public sub_interaction_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_interaction_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public sub_template(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    return-object p0
.end method

.method public template_id(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_id:Ljava/lang/Integer;

    return-object p0
.end method

.method public template_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public theme_data(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->theme_data:Ljava/lang/Integer;

    return-object p0
.end method

.method public title(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->title:Ljava/lang/String;

    return-object p0
.end method

.method public video_byte_size(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_byte_size:Ljava/lang/Integer;

    return-object p0
.end method

.method public video_duration(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_duration:Ljava/lang/Integer;

    return-object p0
.end method

.method public video_md5(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_md5:Ljava/lang/String;

    return-object p0
.end method

.method public video_reciprocal_millisecond(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_reciprocal_millisecond:Ljava/lang/Integer;

    return-object p0
.end method

.method public video_size(Lcom/czhj/sdk/common/models/Size;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_size:Lcom/czhj/sdk/common/models/Size;

    return-object p0
.end method

.method public video_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_url:Ljava/lang/String;

    return-object p0
.end method

.method public web_event_handle(Lcom/sigmob/sdk/base/models/WebEventHandle;)Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    return-object p0
.end method
