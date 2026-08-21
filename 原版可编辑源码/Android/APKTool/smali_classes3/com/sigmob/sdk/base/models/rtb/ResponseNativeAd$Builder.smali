.class public final Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public assets:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;"
        }
    .end annotation
.end field

.field public type:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;->DEFAULT_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->type:Ljava/lang/Integer;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->assets:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public assets(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->assets:Ljava/util/List;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->assets:Ljava/util/List;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->type:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd;-><init>(Ljava/util/List;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseNativeAd$Builder;->type:Ljava/lang/Integer;

    return-object p0
.end method
