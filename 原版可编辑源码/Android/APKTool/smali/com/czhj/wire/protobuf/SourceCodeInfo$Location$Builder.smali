.class public final Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;",
        "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public leading_comments:Ljava/lang/String;

.field public leading_detached_comments:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public path:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public span:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public trailing_comments:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->path:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->span:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_detached_comments:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->build()Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;
    .locals 8

    new-instance v7, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->path:Ljava/util/List;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->span:Ljava/util/List;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_comments:Ljava/lang/String;

    iget-object v4, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->trailing_comments:Ljava/lang/String;

    iget-object v5, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_detached_comments:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v6

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;-><init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v7
.end method

.method public leading_comments(Ljava/lang/String;)Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_comments:Ljava/lang/String;

    return-object p0
.end method

.method public leading_detached_comments(Ljava/util/List;)Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->leading_detached_comments:Ljava/util/List;

    return-object p0
.end method

.method public path(Ljava/util/List;)Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->path:Ljava/util/List;

    return-object p0
.end method

.method public span(Ljava/util/List;)Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->span:Ljava/util/List;

    return-object p0
.end method

.method public trailing_comments(Ljava/lang/String;)Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location$Builder;->trailing_comments:Ljava/lang/String;

    return-object p0
.end method
