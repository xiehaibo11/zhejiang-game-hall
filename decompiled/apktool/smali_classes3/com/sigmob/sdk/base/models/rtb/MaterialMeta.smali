.class public final Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$ProtoAdapter_MaterialMeta;,
        Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
        "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_APP_NAME:Ljava/lang/String; = ""

.field public static final DEFAULT_BUTTON_TEXT:Ljava/lang/String; = ""

.field public static final DEFAULT_CLICK_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_CLOSECARD_HTML_SNIPPET:Lcom/czhj/wire/okio/ByteString;

.field public static final DEFAULT_CREATIVE_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_DEEPLINK_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_DESC:Ljava/lang/String; = ""

.field public static final DEFAULT_DISABLE_AUTO_DEEPLINK:Ljava/lang/Boolean;

.field public static final DEFAULT_DOWNLOAD_DIALOG:Ljava/lang/Boolean;

.field public static final DEFAULT_ENABLE_COLLAPSE_TOOL_BAR:Ljava/lang/Boolean;

.field public static final DEFAULT_ENDCARD_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_ENDCARD_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_HAS_COMPANION_ENDCARD:Ljava/lang/Boolean;

.field public static final DEFAULT_HTML_SNIPPET:Lcom/czhj/wire/okio/ByteString;

.field public static final DEFAULT_HTML_SRC:Ljava/lang/String; = ""

.field public static final DEFAULT_HTML_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_ICON_URL:Ljava/lang/String; = ""

.field public static final DEFAULT_IMAGE_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_IMAGE_SRC:Ljava/lang/String; = ""

.field public static final DEFAULT_IMAGE_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_INTERACTION_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_LANDING_PAGE:Ljava/lang/String; = ""

.field public static final DEFAULT_OPEN_MARKET_MODE:Ljava/lang/Integer;

.field public static final DEFAULT_PLAY_MODE:Ljava/lang/Integer;

.field public static final DEFAULT_SCORE:Ljava/lang/Float;

.field public static final DEFAULT_SUB_INTERACTION_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_TEMPLATE_ID:Ljava/lang/Integer;

.field public static final DEFAULT_TEMPLATE_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_THEME_DATA:Ljava/lang/Integer;

.field public static final DEFAULT_TITLE:Ljava/lang/String; = ""

.field public static final DEFAULT_VIDEO_BYTE_SIZE:Ljava/lang/Integer;

.field public static final DEFAULT_VIDEO_DURATION:Ljava/lang/Integer;

.field public static final DEFAULT_VIDEO_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_VIDEO_RECIPROCAL_MILLISECOND:Ljava/lang/Integer;

.field public static final DEFAULT_VIDEO_URL:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.AdPrivacy#ADAPTER"
        tag = 0x24
    .end annotation
.end field

.field public final android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.AndroidMarket#ADAPTER"
        tag = 0x29
    .end annotation
.end field

.field public final app_name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x22
    .end annotation
.end field

.field public final asset:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.ResponseAsset#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x2c
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;"
        }
    .end annotation
.end field

.field public final button_text:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x23
    .end annotation
.end field

.field public final click_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x10
    .end annotation
.end field

.field public final closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BYTES"
        tag = 0x21
    .end annotation
.end field

.field public final companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.CompanionEndcard#ADAPTER"
        tag = 0x12
    .end annotation
.end field

.field public final creative_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1
    .end annotation
.end field

.field public final deeplink_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xb
    .end annotation
.end field

.field public final desc:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1c
    .end annotation
.end field

.field public final disable_auto_deeplink:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x20
    .end annotation
.end field

.field public final download_dialog:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x28
    .end annotation
.end field

.field public final enable_collapse_tool_bar:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x17
    .end annotation
.end field

.field public final endcard_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xa
    .end annotation
.end field

.field public final endcard_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x8
    .end annotation
.end field

.field public final has_companion_endcard:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x11
    .end annotation
.end field

.field public final html_snippet:Lcom/czhj/wire/okio/ByteString;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BYTES"
        tag = 0x7
    .end annotation
.end field

.field public final html_src:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x26
    .end annotation
.end field

.field public final html_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x16
    .end annotation
.end field

.field public final icon_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1d
    .end annotation
.end field

.field public final image_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xe
    .end annotation
.end field

.field public final image_size:Lcom/czhj/sdk/common/models/Size;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.Size#ADAPTER"
        tag = 0xd
    .end annotation
.end field

.field public final image_src:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xc
    .end annotation
.end field

.field public final image_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xf
    .end annotation
.end field

.field public final interaction_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x2
    .end annotation
.end field

.field public final landing_page:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final main_template:Lcom/sigmob/sdk/base/models/rtb/Template;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER"
        tag = 0x2a
    .end annotation
.end field

.field public final native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.ResponseNativeAd#ADAPTER"
        tag = 0x27
    .end annotation
.end field

.field public final open_market_mode:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x18
    .end annotation
.end field

.field public final play_mode:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x19
    .end annotation
.end field

.field public final score:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x1e
    .end annotation
.end field

.field public final sub_interaction_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1a
    .end annotation
.end field

.field public final sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER"
        tag = 0x2b
    .end annotation
.end field

.field public final template_id:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1f
    .end annotation
.end field

.field public final template_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x14
    .end annotation
.end field

.field public final theme_data:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x2d
    .end annotation
.end field

.field public final title:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1b
    .end annotation
.end field

.field public final video_byte_size:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x25
    .end annotation
.end field

.field public final video_duration:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x5
    .end annotation
.end field

.field public final video_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x9
    .end annotation
.end field

.field public final video_reciprocal_millisecond:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x15
    .end annotation
.end field

.field public final video_size:Lcom/czhj/sdk/common/models/Size;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.Size#ADAPTER"
        tag = 0x6
    .end annotation
.end field

.field public final video_url:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field

.field public final web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.WebEventHandle#ADAPTER"
        tag = 0x13
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$ProtoAdapter_MaterialMeta;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$ProtoAdapter_MaterialMeta;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_CREATIVE_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_INTERACTION_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_VIDEO_DURATION:Ljava/lang/Integer;

    sget-object v2, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_HTML_SNIPPET:Lcom/czhj/wire/okio/ByteString;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_IMAGE_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_CLICK_TYPE:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_HAS_COMPANION_ENDCARD:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_TEMPLATE_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_VIDEO_RECIPROCAL_MILLISECOND:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_ENABLE_COLLAPSE_TOOL_BAR:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_OPEN_MARKET_MODE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_PLAY_MODE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_SUB_INTERACTION_TYPE:Ljava/lang/Integer;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_SCORE:Ljava/lang/Float;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_TEMPLATE_ID:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_DISABLE_AUTO_DEEPLINK:Ljava/lang/Boolean;

    sget-object v2, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_CLOSECARD_HTML_SNIPPET:Lcom/czhj/wire/okio/ByteString;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_VIDEO_BYTE_SIZE:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_DOWNLOAD_DIALOG:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->DEFAULT_THEME_DATA:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;Lcom/sigmob/sdk/base/models/WebEventHandle;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/Template;Ljava/util/List;Ljava/lang/Integer;)V
    .locals 47
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Lcom/czhj/sdk/common/models/Size;",
            "Lcom/czhj/wire/okio/ByteString;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/Size;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;",
            "Lcom/sigmob/sdk/base/models/WebEventHandle;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Float;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/okio/ByteString;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;",
            "Ljava/lang/Boolean;",
            "Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;",
            "Lcom/sigmob/sdk/base/models/rtb/Template;",
            "Lcom/sigmob/sdk/base/models/rtb/Template;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;",
            "Ljava/lang/Integer;",
            ")V"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    move-object/from16 v10, p10

    move-object/from16 v11, p11

    move-object/from16 v12, p12

    move-object/from16 v13, p13

    move-object/from16 v14, p14

    move-object/from16 v15, p15

    move-object/from16 v16, p16

    move-object/from16 v17, p17

    move-object/from16 v18, p18

    move-object/from16 v19, p19

    move-object/from16 v20, p20

    move-object/from16 v21, p21

    move-object/from16 v22, p22

    move-object/from16 v23, p23

    move-object/from16 v24, p24

    move-object/from16 v25, p25

    move-object/from16 v26, p26

    move-object/from16 v27, p27

    move-object/from16 v28, p28

    move-object/from16 v29, p29

    move-object/from16 v30, p30

    move-object/from16 v31, p31

    move-object/from16 v32, p32

    move-object/from16 v33, p33

    move-object/from16 v34, p34

    move-object/from16 v35, p35

    move-object/from16 v36, p36

    move-object/from16 v37, p37

    move-object/from16 v38, p38

    move-object/from16 v39, p39

    move-object/from16 v40, p40

    move-object/from16 v41, p41

    move-object/from16 v42, p42

    move-object/from16 v43, p43

    move-object/from16 v44, p44

    move-object/from16 v45, p45

    sget-object v46, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v46}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;Lcom/sigmob/sdk/base/models/WebEventHandle;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/Template;Ljava/util/List;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;Lcom/sigmob/sdk/base/models/WebEventHandle;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/Template;Ljava/util/List;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Lcom/czhj/sdk/common/models/Size;",
            "Lcom/czhj/wire/okio/ByteString;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/Size;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;",
            "Lcom/sigmob/sdk/base/models/WebEventHandle;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Float;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/okio/ByteString;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;",
            "Ljava/lang/Boolean;",
            "Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;",
            "Lcom/sigmob/sdk/base/models/rtb/Template;",
            "Lcom/sigmob/sdk/base/models/rtb/Template;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;",
            "Ljava/lang/Integer;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p46

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    move-object v1, p2

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    move-object v1, p3

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    move-object v1, p4

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    move-object v1, p5

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    move-object v1, p6

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    move-object v1, p7

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    move-object v1, p8

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    move-object v1, p9

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    move-object v1, p10

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    move-object v1, p11

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    move-object v1, p12

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    move-object/from16 v1, p15

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    move-object/from16 v1, p16

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    move-object/from16 v1, p17

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    move-object/from16 v1, p18

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    move-object/from16 v1, p19

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    move-object/from16 v1, p20

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    move-object/from16 v1, p21

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    move-object/from16 v1, p22

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    move-object/from16 v1, p23

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    move-object/from16 v1, p24

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    move-object/from16 v1, p25

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    move-object/from16 v1, p26

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    move-object/from16 v1, p27

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    move-object/from16 v1, p28

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    move-object/from16 v1, p29

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    move-object/from16 v1, p30

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    move-object/from16 v1, p31

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    move-object/from16 v1, p32

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    move-object/from16 v1, p33

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    move-object/from16 v1, p34

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    move-object/from16 v1, p35

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    move-object/from16 v1, p36

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-object/from16 v1, p37

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    move-object/from16 v1, p38

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    move-object/from16 v1, p39

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-object/from16 v1, p40

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    move-object/from16 v1, p41

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-object/from16 v1, p42

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    move-object/from16 v1, p43

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    const-string v1, "asset"

    move-object/from16 v2, p44

    invoke-static {v1, v2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    move-object/from16 v1, p45

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    invoke-static {v1, p1}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 3

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_2c

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Size;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Size;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_d

    :cond_d
    move v1, v2

    :goto_d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_e

    :cond_e
    move v1, v2

    :goto_e
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    if-eqz v1, :cond_f

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_f

    :cond_f
    move v1, v2

    :goto_f
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    if-eqz v1, :cond_10

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_10

    :cond_10
    move v1, v2

    :goto_10
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    if-eqz v1, :cond_11

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->hashCode()I

    move-result v1

    goto :goto_11

    :cond_11
    move v1, v2

    :goto_11
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    if-eqz v1, :cond_12

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/WebEventHandle;->hashCode()I

    move-result v1

    goto :goto_12

    :cond_12
    move v1, v2

    :goto_12
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    if-eqz v1, :cond_13

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_13

    :cond_13
    move v1, v2

    :goto_13
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    if-eqz v1, :cond_14

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_14

    :cond_14
    move v1, v2

    :goto_14
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    if-eqz v1, :cond_15

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_15

    :cond_15
    move v1, v2

    :goto_15
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    if-eqz v1, :cond_16

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_16

    :cond_16
    move v1, v2

    :goto_16
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    if-eqz v1, :cond_17

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_17

    :cond_17
    move v1, v2

    :goto_17
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    if-eqz v1, :cond_18

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_18

    :cond_18
    move v1, v2

    :goto_18
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    if-eqz v1, :cond_19

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_19

    :cond_19
    move v1, v2

    :goto_19
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    if-eqz v1, :cond_1a

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1a

    :cond_1a
    move v1, v2

    :goto_1a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    if-eqz v1, :cond_1b

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1b

    :cond_1b
    move v1, v2

    :goto_1b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    if-eqz v1, :cond_1c

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1c

    :cond_1c
    move v1, v2

    :goto_1c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    if-eqz v1, :cond_1d

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_1d

    :cond_1d
    move v1, v2

    :goto_1d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    if-eqz v1, :cond_1e

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1e

    :cond_1e
    move v1, v2

    :goto_1e
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    if-eqz v1, :cond_1f

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_1f

    :cond_1f
    move v1, v2

    :goto_1f
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz v1, :cond_20

    invoke-virtual {v1}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v1

    goto :goto_20

    :cond_20
    move v1, v2

    :goto_20
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    if-eqz v1, :cond_21

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_21

    :cond_21
    move v1, v2

    :goto_21
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    if-eqz v1, :cond_22

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_22

    :cond_22
    move v1, v2

    :goto_22
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    if-eqz v1, :cond_23

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->hashCode()I

    move-result v1

    goto :goto_23

    :cond_23
    move v1, v2

    :goto_23
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    if-eqz v1, :cond_24

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_24

    :cond_24
    move v1, v2

    :goto_24
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    if-eqz v1, :cond_25

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_25

    :cond_25
    move v1, v2

    :goto_25
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    if-eqz v1, :cond_26

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->hashCode()I

    move-result v1

    goto :goto_26

    :cond_26
    move v1, v2

    :goto_26
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    if-eqz v1, :cond_27

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_27

    :cond_27
    move v1, v2

    :goto_27
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    if-eqz v1, :cond_28

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;->hashCode()I

    move-result v1

    goto :goto_28

    :cond_28
    move v1, v2

    :goto_28
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_29

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/Template;->hashCode()I

    move-result v1

    goto :goto_29

    :cond_29
    move v1, v2

    :goto_29
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_2a

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/Template;->hashCode()I

    move-result v1

    goto :goto_2a

    :cond_2a
    move v1, v2

    :goto_2a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    if-eqz v1, :cond_2b

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v2

    :cond_2b
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_2c
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->creative_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->interaction_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->landing_page:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_duration:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->endcard_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->deeplink_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_src:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->image_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->click_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->has_companion_endcard:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_reciprocal_millisecond:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->open_market_mode:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->play_mode:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_interaction_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->title:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->desc:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->icon_url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->score:Ljava/lang/Float;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->template_id:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->disable_auto_deeplink:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->app_name:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->button_text:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->video_byte_size:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->html_src:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->download_dialog:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    const-string v2, "asset"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->asset:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->theme_data:Ljava/lang/Integer;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", creative_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    const-string v1, ", interaction_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->interaction_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", landing_page="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", video_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    const-string v1, ", video_duration="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_duration:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_5

    const-string v1, ", video_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_size:Lcom/czhj/sdk/common/models/Size;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz v1, :cond_6

    const-string v1, ", html_snippet="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    if-eqz v1, :cond_7

    const-string v1, ", endcard_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    if-eqz v1, :cond_8

    const-string v1, ", video_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    if-eqz v1, :cond_9

    const-string v1, ", endcard_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->endcard_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    if-eqz v1, :cond_a

    const-string v1, ", deeplink_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    if-eqz v1, :cond_b

    const-string v1, ", image_src="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_src:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_c

    const-string v1, ", image_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_size:Lcom/czhj/sdk/common/models/Size;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    if-eqz v1, :cond_d

    const-string v1, ", image_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    if-eqz v1, :cond_e

    const-string v1, ", image_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->image_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_e
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    if-eqz v1, :cond_f

    const-string v1, ", click_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_f
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    if-eqz v1, :cond_10

    const-string v1, ", has_companion_endcard="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_10
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    if-eqz v1, :cond_11

    const-string v1, ", companion="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_11
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    if-eqz v1, :cond_12

    const-string v1, ", web_event_handle="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->web_event_handle:Lcom/sigmob/sdk/base/models/WebEventHandle;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_12
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    if-eqz v1, :cond_13

    const-string v1, ", template_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_13
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    if-eqz v1, :cond_14

    const-string v1, ", video_reciprocal_millisecond="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_14
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    if-eqz v1, :cond_15

    const-string v1, ", html_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_15
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    if-eqz v1, :cond_16

    const-string v1, ", enable_collapse_tool_bar="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_16
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    if-eqz v1, :cond_17

    const-string v1, ", open_market_mode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->open_market_mode:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_17
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    if-eqz v1, :cond_18

    const-string v1, ", play_mode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->play_mode:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_18
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    if-eqz v1, :cond_19

    const-string v1, ", sub_interaction_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_interaction_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_19
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    if-eqz v1, :cond_1a

    const-string v1, ", title="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    if-eqz v1, :cond_1b

    const-string v1, ", desc="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->desc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    if-eqz v1, :cond_1c

    const-string v1, ", icon_url="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->icon_url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1c
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    if-eqz v1, :cond_1d

    const-string v1, ", score="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->score:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1d
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    if-eqz v1, :cond_1e

    const-string v1, ", template_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_id:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1e
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    if-eqz v1, :cond_1f

    const-string v1, ", disable_auto_deeplink="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1f
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    if-eqz v1, :cond_20

    const-string v1, ", closecard_html_snippet="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->closecard_html_snippet:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_20
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    if-eqz v1, :cond_21

    const-string v1, ", app_name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->app_name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_21
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    if-eqz v1, :cond_22

    const-string v1, ", button_text="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->button_text:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_22
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    if-eqz v1, :cond_23

    const-string v1, ", ad_privacy="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_23
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    if-eqz v1, :cond_24

    const-string v1, ", video_byte_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_byte_size:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_24
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    if-eqz v1, :cond_25

    const-string v1, ", html_src="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->html_src:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_25
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    if-eqz v1, :cond_26

    const-string v1, ", native_ad="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->native_ad:Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_26
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    if-eqz v1, :cond_27

    const-string v1, ", download_dialog="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->download_dialog:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_27
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    if-eqz v1, :cond_28

    const-string v1, ", android_market="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->android_market:Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_28
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_29

    const-string v1, ", main_template="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_29
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_2a

    const-string v1, ", sub_template="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2b

    const-string v1, ", asset="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    if-eqz v1, :cond_2c

    const-string v1, ", theme_data="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->theme_data:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2c
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "MaterialMeta{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
