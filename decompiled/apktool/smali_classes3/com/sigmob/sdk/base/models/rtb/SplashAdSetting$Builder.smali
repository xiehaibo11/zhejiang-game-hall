.class public final Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public auto_click_mode:Ljava/lang/Integer;

.field public auto_click_time_ratio:Ljava/lang/Integer;

.field public enable_close_on_click:Ljava/lang/Boolean;

.field public enable_full_click:Ljava/lang/Boolean;

.field public invisible_ad_label:Ljava/lang/Boolean;

.field public show_duration:Ljava/lang/Integer;

.field public use_floating_btn:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_SHOW_DURATION:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->show_duration:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_ENABLE_CLOSE_ON_CLICK:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_close_on_click:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_AUTO_CLICK_MODE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_mode:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_AUTO_CLICK_TIME_RATIO:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_time_ratio:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_ENABLE_FULL_CLICK:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_full_click:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_INVISIBLE_AD_LABEL:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->invisible_ad_label:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->DEFAULT_USE_FLOATING_BTN:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->use_floating_btn:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public auto_click_mode(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_mode:Ljava/lang/Integer;

    return-object p0
.end method

.method public auto_click_time_ratio(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_time_ratio:Ljava/lang/Integer;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;
    .locals 10

    new-instance v9, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->show_duration:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_close_on_click:Ljava/lang/Boolean;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_mode:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->auto_click_time_ratio:Ljava/lang/Integer;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_full_click:Ljava/lang/Boolean;

    iget-object v6, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->invisible_ad_label:Ljava/lang/Boolean;

    iget-object v7, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->use_floating_btn:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v8

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;-><init>(Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v9
.end method

.method public enable_close_on_click(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_close_on_click:Ljava/lang/Boolean;

    return-object p0
.end method

.method public enable_full_click(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->enable_full_click:Ljava/lang/Boolean;

    return-object p0
.end method

.method public invisible_ad_label(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->invisible_ad_label:Ljava/lang/Boolean;

    return-object p0
.end method

.method public show_duration(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->show_duration:Ljava/lang/Integer;

    return-object p0
.end method

.method public use_floating_btn(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting$Builder;->use_floating_btn:Ljava/lang/Boolean;

    return-object p0
.end method
