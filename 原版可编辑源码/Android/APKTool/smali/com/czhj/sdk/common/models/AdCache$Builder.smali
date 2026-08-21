.class public final Lcom/czhj/sdk/common/models/AdCache$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/AdCache;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/AdCache;",
        "Lcom/czhj/sdk/common/models/AdCache$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ad_type:Ljava/lang/Integer;

.field public crids:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdCache$Builder;->crids:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public ad_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdCache$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdCache$Builder;->ad_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/AdCache;
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/models/AdCache;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/AdCache$Builder;->ad_type:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/AdCache$Builder;->crids:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/czhj/sdk/common/models/AdCache;-><init>(Ljava/lang/Integer;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/AdCache$Builder;->build()Lcom/czhj/sdk/common/models/AdCache;

    move-result-object v0

    return-object v0
.end method

.method public crids(Ljava/util/List;)Lcom/czhj/sdk/common/models/AdCache$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdCache$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdCache$Builder;->crids:Ljava/util/List;

    return-object p0
.end method
