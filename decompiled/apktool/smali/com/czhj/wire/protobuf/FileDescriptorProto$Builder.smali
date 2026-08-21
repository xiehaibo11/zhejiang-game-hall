.class public final Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FileDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/FileDescriptorProto;",
        "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public dependency:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

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

.field public message_type:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public name:Ljava/lang/String;

.field public options:Lcom/czhj/wire/protobuf/FileOptions;

.field public package_:Ljava/lang/String;

.field public public_dependency:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public service:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/ServiceDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

.field public syntax:Ljava/lang/String;

.field public weak_dependency:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
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

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->dependency:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->public_dependency:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->weak_dependency:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->message_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->enum_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->service:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->extension:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/FileDescriptorProto;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/FileDescriptorProto;
    .locals 15

    new-instance v14, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->package_:Ljava/lang/String;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->dependency:Ljava/util/List;

    iget-object v4, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->public_dependency:Ljava/util/List;

    iget-object v5, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->weak_dependency:Ljava/util/List;

    iget-object v6, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->message_type:Ljava/util/List;

    iget-object v7, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->enum_type:Ljava/util/List;

    iget-object v8, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->service:Ljava/util/List;

    iget-object v9, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->extension:Ljava/util/List;

    iget-object v10, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FileOptions;

    iget-object v11, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    iget-object v12, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->syntax:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v13

    move-object v0, v14

    invoke-direct/range {v0 .. v13}, Lcom/czhj/wire/protobuf/FileDescriptorProto;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/protobuf/FileOptions;Lcom/czhj/wire/protobuf/SourceCodeInfo;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v14
.end method

.method public dependency(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->dependency:Ljava/util/List;

    return-object p0
.end method

.method public enum_type(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->enum_type:Ljava/util/List;

    return-object p0
.end method

.method public extension(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->extension:Ljava/util/List;

    return-object p0
.end method

.method public message_type(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->message_type:Ljava/util/List;

    return-object p0
.end method

.method public name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method public options(Lcom/czhj/wire/protobuf/FileOptions;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FileOptions;

    return-object p0
.end method

.method public package_(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->package_:Ljava/lang/String;

    return-object p0
.end method

.method public public_dependency(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->public_dependency:Ljava/util/List;

    return-object p0
.end method

.method public service(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/ServiceDescriptorProto;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->service:Ljava/util/List;

    return-object p0
.end method

.method public source_code_info(Lcom/czhj/wire/protobuf/SourceCodeInfo;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    return-object p0
.end method

.method public syntax(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->syntax:Ljava/lang/String;

    return-object p0
.end method

.method public weak_dependency(Ljava/util/List;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->weak_dependency:Ljava/util/List;

    return-object p0
.end method
