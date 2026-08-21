.class public final Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;",
        "Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public name:Ljava/lang/String;

.field public number:Ljava/lang/Integer;

.field public options:Lcom/czhj/wire/protobuf/EnumValueOptions;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;
    .locals 5

    new-instance v0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->number:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/EnumValueOptions;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;-><init>(Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/EnumValueOptions;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method public number(Ljava/lang/Integer;)Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->number:Ljava/lang/Integer;

    return-object p0
.end method

.method public options(Lcom/czhj/wire/protobuf/EnumValueOptions;)Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/EnumValueDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/EnumValueOptions;

    return-object p0
.end method
