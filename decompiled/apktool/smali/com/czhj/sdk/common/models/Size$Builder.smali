.class public final Lcom/czhj/sdk/common/models/Size$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/Size;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/Size;",
        "Lcom/czhj/sdk/common/models/Size$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public height:Ljava/lang/Integer;

.field public width:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/Size;->DEFAULT_WIDTH:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Size$Builder;->width:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/Size;->DEFAULT_HEIGHT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Size$Builder;->height:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/models/Size;
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/models/Size;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Size$Builder;->width:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/Size$Builder;->height:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/czhj/sdk/common/models/Size;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Size$Builder;->build()Lcom/czhj/sdk/common/models/Size;

    move-result-object v0

    return-object v0
.end method

.method public height(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Size$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Size$Builder;->height:Ljava/lang/Integer;

    return-object p0
.end method

.method public width(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Size$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Size$Builder;->width:Ljava/lang/Integer;

    return-object p0
.end method
