.class public final Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;",
        "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public privacy_info_url:Ljava/lang/String;

.field public privacy_template_info:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public privacy_template_url:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_info_url:Ljava/lang/String;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_url:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_info:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_info_url:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_url:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_info:Ljava/util/Map;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public privacy_info_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_info_url:Ljava/lang/String;

    return-object p0
.end method

.method public privacy_template_info(Ljava/util/Map;)Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_info:Ljava/util/Map;

    return-object p0
.end method

.method public privacy_template_url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy$Builder;->privacy_template_url:Ljava/lang/String;

    return-object p0
.end method
