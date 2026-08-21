.class public final Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/WebEventHandle;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/WebEventHandle;",
        "Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public events:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/WebEvent;",
            ">;"
        }
    .end annotation
.end field

.field public handle_name:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public handle_type:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/WebEventHandle;->DEFAULT_HANDLE_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->handle_type:Ljava/lang/Integer;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->handle_name:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->events:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->build()Lcom/sigmob/sdk/base/models/WebEventHandle;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/WebEventHandle;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/WebEventHandle;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->handle_type:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->handle_name:Ljava/util/List;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->events:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/WebEventHandle;-><init>(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public events(Ljava/util/List;)Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/WebEvent;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->events:Ljava/util/List;

    return-object p0
.end method

.method public handle_name(Ljava/util/List;)Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->handle_name:Ljava/util/List;

    return-object p0
.end method

.method public handle_type(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/WebEventHandle$Builder;->handle_type:Ljava/lang/Integer;

    return-object p0
.end method
