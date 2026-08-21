.class public final Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;,
        Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_DISABLE_AUTO_LOAD:Ljava/lang/Boolean;

.field public static final DEFAULT_ENABLE_EXIT_ON_VIDEO_CLOSE:Ljava/lang/Boolean;

.field public static final DEFAULT_ENDCARD_CLOSE_IMAGE:Ljava/lang/Integer;

.field public static final DEFAULT_ENDCARD_CLOSE_POSITION:Ljava/lang/Integer;

.field public static final DEFAULT_END_IMPRESSION_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_END_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_FINISHED:Ljava/lang/Float;

.field public static final DEFAULT_FULL_CLICK_ON_VIDEO:Ljava/lang/Boolean;

.field public static final DEFAULT_IF_MUTE:Ljava/lang/Integer;

.field public static final DEFAULT_INVISIBLE_AD_LABEL:Ljava/lang/Boolean;

.field public static final DEFAULT_MUTE_POSTION:Ljava/lang/Integer;

.field public static final DEFAULT_SKIP_PERCENT:Ljava/lang/Integer;

.field public static final DEFAULT_SKIP_SECONDS:Ljava/lang/Integer;

.field public static final DEFAULT_VIDEO_CLOSE_POSITION:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "ClickAreaSetting#ADAPTER"
        tag = 0xa
    .end annotation
.end field

.field public final disable_auto_load:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xf
    .end annotation
.end field

.field public final enable_exit_on_video_close:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x8
    .end annotation
.end field

.field public final end_impression_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0xe
    .end annotation
.end field

.field public final end_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0xc
    .end annotation
.end field

.field public final endcard_close_image:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0xd
    .end annotation
.end field

.field public final endcard_close_position:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x4
    .end annotation
.end field

.field public final finished:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0x2
    .end annotation
.end field

.field public final full_click_on_video:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x9
    .end annotation
.end field

.field public final if_mute:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x1
    .end annotation
.end field

.field public final invisible_ad_label:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xb
    .end annotation
.end field

.field public final mute_postion:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x5
    .end annotation
.end field

.field public final skip_percent:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x6
    .end annotation
.end field

.field public final skip_seconds:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x7
    .end annotation
.end field

.field public final video_close_position:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x3
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_IF_MUTE:Ljava/lang/Integer;

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_FINISHED:Ljava/lang/Float;

    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_VIDEO_CLOSE_POSITION:Ljava/lang/Integer;

    const/4 v2, 0x3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_ENDCARD_CLOSE_POSITION:Ljava/lang/Integer;

    const/4 v2, 0x4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_MUTE_POSTION:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_SKIP_PERCENT:Ljava/lang/Integer;

    const/4 v2, -0x1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_SKIP_SECONDS:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_ENABLE_EXIT_ON_VIDEO_CLOSE:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_FULL_CLICK_ON_VIDEO:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_INVISIBLE_AD_LABEL:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_END_TIME:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_ENDCARD_CLOSE_IMAGE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_END_IMPRESSION_TIME:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->DEFAULT_DISABLE_AUTO_LOAD:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;)V
    .locals 17

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

    sget-object v16, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v16}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;-><init>(Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3

    move-object v0, p0

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p16

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    move-object v1, p2

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    move-object v1, p3

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    move-object v1, p4

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    move-object v1, p5

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    move-object v1, p6

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    move-object v1, p7

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    move-object v1, p8

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    move-object v1, p9

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    move-object v1, p10

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-object v1, p11

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    move-object v1, p12

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    move-object/from16 v1, p15

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

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

    if-nez v0, :cond_f

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_d

    :cond_d
    move v1, v2

    :goto_d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_e
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_f
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->if_mute:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->finished:Ljava/lang/Float;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->video_close_position:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->endcard_close_position:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->mute_postion:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->skip_percent:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->skip_seconds:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->enable_exit_on_video_close:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->full_click_on_video:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->invisible_ad_label:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->end_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->endcard_close_image:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->end_impression_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->disable_auto_load:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", if_mute="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    if-eqz v1, :cond_1

    const-string v1, ", finished="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    const-string v1, ", video_close_position="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    const-string v1, ", endcard_close_position="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    const-string v1, ", mute_postion="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    const-string v1, ", skip_percent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    if-eqz v1, :cond_6

    const-string v1, ", skip_seconds="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    const-string v1, ", enable_exit_on_video_close="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    const-string v1, ", full_click_on_video="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    if-eqz v1, :cond_9

    const-string v1, ", click_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    if-eqz v1, :cond_a

    const-string v1, ", invisible_ad_label="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    if-eqz v1, :cond_b

    const-string v1, ", end_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    if-eqz v1, :cond_c

    const-string v1, ", endcard_close_image="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    if-eqz v1, :cond_d

    const-string v1, ", end_impression_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    if-eqz v1, :cond_e

    const-string v1, ", disable_auto_load="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_e
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "RvAdSetting{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
