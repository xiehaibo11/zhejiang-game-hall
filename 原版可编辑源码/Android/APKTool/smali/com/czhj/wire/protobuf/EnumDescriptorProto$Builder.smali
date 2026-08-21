.class public final Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/EnumDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
        "Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public name:Ljava/lang/String;

.field public options:Lcom/czhj/wire/protobuf/EnumOptions;

.field public value:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;",
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

    iput-object v0, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->value:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/EnumDescriptorProto;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/EnumDescriptorProto;
    .locals 5

    new-instance v0, Lcom/czhj/wire/protobuf/EnumDescriptorProto;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->value:Ljava/util/List;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/EnumOptions;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/czhj/wire/protobuf/EnumDescriptorProto;-><init>(Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/protobuf/EnumOptions;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method public options(Lcom/czhj/wire/protobuf/EnumOptions;)Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/EnumOptions;

    return-object p0
.end method

.method public value(Ljava/util/List;)Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumValueDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/EnumDescriptorProto$Builder;->value:Ljava/util/List;

    return-object p0
.end method
