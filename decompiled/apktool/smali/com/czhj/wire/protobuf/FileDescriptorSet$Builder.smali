.class public final Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FileDescriptorSet;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/FileDescriptorSet;",
        "Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public file:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto;",
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

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;->file:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;->build()Lcom/czhj/wire/protobuf/FileDescriptorSet;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/FileDescriptorSet;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/FileDescriptorSet;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;->file:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/protobuf/FileDescriptorSet;-><init>(Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public file(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorSet$Builder;->file:Ljava/util/List;

    return-object p0
.end method
