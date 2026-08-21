.class public final Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/DescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/DescriptorProto;",
        "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public enum_type:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public extension:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public extension_range:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto$ExtensionRange;",
            ">;"
        }
    .end annotation
.end field

.field public field:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public name:Ljava/lang/String;

.field public nested_type:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public oneof_decl:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/OneofDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public options:Lcom/czhj/wire/protobuf/MessageOptions;

.field public reserved_name:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public reserved_range:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;",
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

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->field:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->extension:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->nested_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->enum_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->extension_range:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->oneof_decl:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->reserved_range:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->reserved_name:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/DescriptorProto;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/DescriptorProto;
    .locals 13

    new-instance v12, Lcom/czhj/wire/protobuf/DescriptorProto;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->field:Ljava/util/List;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->extension:Ljava/util/List;

    iget-object v4, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->nested_type:Ljava/util/List;

    iget-object v5, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->enum_type:Ljava/util/List;

    iget-object v6, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->extension_range:Ljava/util/List;

    iget-object v7, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->oneof_decl:Ljava/util/List;

    iget-object v8, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/MessageOptions;

    iget-object v9, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->reserved_range:Ljava/util/List;

    iget-object v10, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->reserved_name:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v11

    move-object v0, v12

    invoke-direct/range {v0 .. v11}, Lcom/czhj/wire/protobuf/DescriptorProto;-><init>(Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/protobuf/MessageOptions;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v12
.end method

.method public enum_type(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->enum_type:Ljava/util/List;

    return-object p0
.end method

.method public extension(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->extension:Ljava/util/List;

    return-object p0
.end method

.method public extension_range(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto$ExtensionRange;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->extension_range:Ljava/util/List;

    return-object p0
.end method

.method public field(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->field:Ljava/util/List;

    return-object p0
.end method

.method public name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method public nested_type(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->nested_type:Ljava/util/List;

    return-object p0
.end method

.method public oneof_decl(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/OneofDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->oneof_decl:Ljava/util/List;

    return-object p0
.end method

.method public options(Lcom/czhj/wire/protobuf/MessageOptions;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/MessageOptions;

    return-object p0
.end method

.method public reserved_name(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->reserved_name:Ljava/util/List;

    return-object p0
.end method

.method public reserved_range(Ljava/util/List;)Lcom/czhj/wire/protobuf/DescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto$ReservedRange;",
            ">;)",
            "Lcom/czhj/wire/protobuf/DescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/DescriptorProto$Builder;->reserved_range:Ljava/util/List;

    return-object p0
.end method
