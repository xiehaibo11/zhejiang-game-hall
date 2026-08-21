.class public final Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;",
        "Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public end:Ljava/lang/Integer;

.field public start:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;->build()Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;
    .locals 4

    new-instance v0, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;->start:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;->end:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public end(Ljava/lang/Integer;)Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;->end:Ljava/lang/Integer;

    return-object p0
.end method

.method public start(Ljava/lang/Integer;)Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange$Builder;->start:Ljava/lang/Integer;

    return-object p0
.end method
