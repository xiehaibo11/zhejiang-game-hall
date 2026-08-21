.class public final Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public disable_x_requested_with:Ljava/lang/Boolean;

.field public native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

.field public retry_count:Ljava/lang/Integer;

.field public rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

.field public splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->DEFAULT_RETRY_COUNT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->retry_count:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->DEFAULT_DISABLE_X_REQUESTED_WITH:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->disable_x_requested_with:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;
    .locals 8

    new-instance v7, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->retry_count:Ljava/lang/Integer;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->disable_x_requested_with:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v6

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;-><init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v7
.end method

.method public disable_x_requested_with(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->disable_x_requested_with:Ljava/lang/Boolean;

    return-object p0
.end method

.method public native_setting(Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;)Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    return-object p0
.end method

.method public retry_count(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->retry_count:Ljava/lang/Integer;

    return-object p0
.end method

.method public rv_setting(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    return-object p0
.end method

.method public splash_setting(Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;)Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    return-object p0
.end method
