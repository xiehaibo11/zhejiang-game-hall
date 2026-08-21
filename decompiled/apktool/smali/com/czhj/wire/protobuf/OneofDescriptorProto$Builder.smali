.class public final Lcom/czhj/wire/protobuf/OneofDescriptorProto$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/OneofDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/OneofDescriptorProto;",
        "Lcom/czhj/wire/protobuf/OneofDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public name:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/OneofDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/OneofDescriptorProto;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/OneofDescriptorProto;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/OneofDescriptorProto;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/OneofDescriptorProto$Builder;->name:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/protobuf/OneofDescriptorProto;-><init>(Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/OneofDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/OneofDescriptorProto$Builder;->name:Ljava/lang/String;

    return-object p0
.end method
