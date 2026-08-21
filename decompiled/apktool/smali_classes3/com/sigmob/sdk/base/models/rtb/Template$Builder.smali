.class public final Lcom/sigmob/sdk/base/models/rtb/Template$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/Template;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/Template;",
        "Lcom/sigmob/sdk/base/models/rtb/Template$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public context:Lcom/czhj/wire/okio/ByteString;

.field public type:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Template;->DEFAULT_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->type:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Template;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/Template;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->type:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/base/models/rtb/Template;-><init>(Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public context(Lcom/czhj/wire/okio/ByteString;)Lcom/sigmob/sdk/base/models/rtb/Template$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->context:Lcom/czhj/wire/okio/ByteString;

    return-object p0
.end method

.method public type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/Template$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Template$Builder;->type:Ljava/lang/Integer;

    return-object p0
.end method
