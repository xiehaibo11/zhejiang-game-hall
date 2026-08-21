.class public final Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;",
        "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ads:Ljava/lang/String;

.field public hb_ads:Ljava/lang/String;

.field public log:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->log:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->ads:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->hb_ads:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public ads(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->ads:Ljava/lang/String;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->log:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->ads:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->hb_ads:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public hb_ads(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->hb_ads:Ljava/lang/String;

    return-object p0
.end method

.method public log(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig$Builder;->log:Ljava/lang/String;

    return-object p0
.end method
