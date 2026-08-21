.class public final Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;",
        "Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public app_package_name:Ljava/lang/String;

.field public appstore_package_name:Ljava/lang/String;

.field public marketUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public app_package_name(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->app_package_name:Ljava/lang/String;

    return-object p0
.end method

.method public appstore_package_name(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->appstore_package_name:Ljava/lang/String;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->marketUrl:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->app_package_name:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->appstore_package_name:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public marketUrl(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AndroidMarket$Builder;->marketUrl:Ljava/lang/String;

    return-object p0
.end method
