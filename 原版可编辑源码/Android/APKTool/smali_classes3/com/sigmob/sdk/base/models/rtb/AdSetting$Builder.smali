.class public final Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/AdSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/AdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public disable_download_listener:Ljava/lang/Boolean;

.field public in_app:Ljava/lang/Boolean;

.field public retry_count:Ljava/lang/Integer;

.field public rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

.field public scheme_white_list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

.field public splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->DEFAULT_RETRY_COUNT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->retry_count:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->DEFAULT_IN_APP:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->in_app:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->DEFAULT_DISABLE_DOWNLOAD_LISTENER:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->disable_download_listener:Ljava/lang/Boolean;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->scheme_white_list:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/AdSetting;
    .locals 10

    new-instance v9, Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->retry_count:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->in_app:Ljava/lang/Boolean;

    iget-object v6, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->disable_download_listener:Ljava/lang/Boolean;

    iget-object v7, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->scheme_white_list:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v8

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;-><init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v9
.end method

.method public disable_download_listener(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->disable_download_listener:Ljava/lang/Boolean;

    return-object p0
.end method

.method public in_app(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->in_app:Ljava/lang/Boolean;

    return-object p0
.end method

.method public retry_count(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->retry_count:Ljava/lang/Integer;

    return-object p0
.end method

.method public rv_setting(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    return-object p0
.end method

.method public scheme_white_list(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->scheme_white_list:Ljava/util/List;

    return-object p0
.end method

.method public single_native_setting(Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    return-object p0
.end method

.method public splash_setting(Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;)Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    return-object p0
.end method
