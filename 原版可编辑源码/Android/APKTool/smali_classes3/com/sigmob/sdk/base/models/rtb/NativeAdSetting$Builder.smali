.class public final Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public detail_page_video_mute:Ljava/lang/Integer;

.field public end_impression_time:Ljava/lang/Integer;

.field public impression_percent:Ljava/lang/Integer;

.field public impression_time:Ljava/lang/Integer;

.field public preview_page_video_mute:Ljava/lang/Integer;

.field public video_auto_play:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_VIDEO_AUTO_PLAY:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->video_auto_play:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_PREVIEW_PAGE_VIDEO_MUTE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->preview_page_video_mute:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_DETAIL_PAGE_VIDEO_MUTE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->detail_page_video_mute:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_IMPRESSION_PERCENT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_percent:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_IMPRESSION_TIME:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_time:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_END_IMPRESSION_TIME:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->end_impression_time:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;
    .locals 9

    new-instance v8, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->video_auto_play:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->preview_page_video_mute:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->detail_page_video_mute:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_percent:Ljava/lang/Integer;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_time:Ljava/lang/Integer;

    iget-object v6, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->end_impression_time:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v7

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v8
.end method

.method public detail_page_video_mute(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->detail_page_video_mute:Ljava/lang/Integer;

    return-object p0
.end method

.method public end_impression_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->end_impression_time:Ljava/lang/Integer;

    return-object p0
.end method

.method public impression_percent(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_percent:Ljava/lang/Integer;

    return-object p0
.end method

.method public impression_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_time:Ljava/lang/Integer;

    return-object p0
.end method

.method public preview_page_video_mute(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->preview_page_video_mute:Ljava/lang/Integer;

    return-object p0
.end method

.method public video_auto_play(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->video_auto_play:Ljava/lang/Integer;

    return-object p0
.end method
