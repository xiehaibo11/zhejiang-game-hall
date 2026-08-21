.class public final Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public use_na_video_component:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;->DEFAULT_USE_NA_VIDEO_COMPONENT:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;->use_na_video_component:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;->use_na_video_component:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;-><init>(Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public use_na_video_component(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting$Builder;->use_na_video_component:Ljava/lang/Boolean;

    return-object p0
.end method
