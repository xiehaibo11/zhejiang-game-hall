.class public final Lcom/czhj/wire/protobuf/FileDescriptorProto;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;,
        Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/FileDescriptorProto;",
        "Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FileDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_NAME:Ljava/lang/String; = ""

.field public static final DEFAULT_PACKAGE_:Ljava/lang/String; = ""

.field public static final DEFAULT_SYNTAX:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final dependency:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x3
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final enum_type:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.EnumDescriptorProto#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x5
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public final extension:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FieldDescriptorProto#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x7
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public final message_type:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.DescriptorProto#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x4
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public final name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final options:Lcom/czhj/wire/protobuf/FileOptions;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FileOptions#ADAPTER"
        tag = 0x8
    .end annotation
.end field

.field public final package_:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final public_dependency:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0xa
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public final service:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.ServiceDescriptorProto#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x6
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/ServiceDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public final source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.SourceCodeInfo#ADAPTER"
        tag = 0x9
    .end annotation
.end field

.field public final syntax:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xc
    .end annotation
.end field

.field public final weak_dependency:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0xb
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/protobuf/FileOptions;Lcom/czhj/wire/protobuf/SourceCodeInfo;Ljava/lang/String;)V
    .locals 14
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/ServiceDescriptorProto;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;",
            "Lcom/czhj/wire/protobuf/FileOptions;",
            "Lcom/czhj/wire/protobuf/SourceCodeInfo;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    sget-object v13, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    move-object/from16 v10, p10

    move-object/from16 v11, p11

    move-object/from16 v12, p12

    invoke-direct/range {v0 .. v13}, Lcom/czhj/wire/protobuf/FileDescriptorProto;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/protobuf/FileOptions;Lcom/czhj/wire/protobuf/SourceCodeInfo;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/czhj/wire/protobuf/FileOptions;Lcom/czhj/wire/protobuf/SourceCodeInfo;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/DescriptorProto;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/EnumDescriptorProto;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/ServiceDescriptorProto;",
            ">;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;",
            "Lcom/czhj/wire/protobuf/FileOptions;",
            "Lcom/czhj/wire/protobuf/SourceCodeInfo;",
            "Ljava/lang/String;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p13}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    const-string p1, "dependency"

    invoke-static {p1, p3}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    const-string p1, "public_dependency"

    invoke-static {p1, p4}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    const-string p1, "weak_dependency"

    invoke-static {p1, p5}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    const-string p1, "message_type"

    invoke-static {p1, p6}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    const-string p1, "enum_type"

    invoke-static {p1, p7}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    const-string p1, "service"

    invoke-static {p1, p8}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    const-string p1, "extension"

    invoke-static {p1, p9}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    iput-object p10, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    iput-object p11, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    iput-object p12, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    invoke-static {v1, p1}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 3

    iget v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    if-nez v0, :cond_5

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FileOptions;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/SourceCodeInfo;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_4
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_5
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->newBuilder()Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->package_:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    const-string v2, "dependency"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->dependency:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    const-string v2, "public_dependency"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->public_dependency:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    const-string v2, "weak_dependency"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->weak_dependency:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    const-string v2, "message_type"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->message_type:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    const-string v2, "enum_type"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->enum_type:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    const-string v2, "service"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->service:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    const-string v2, "extension"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->extension:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FileOptions;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->syntax:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", package="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, ", dependency="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, ", public_dependency="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, ", weak_dependency="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, ", message_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, ", enum_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_7

    const-string v1, ", service="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_8

    const-string v1, ", extension="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    if-eqz v1, :cond_9

    const-string v1, ", options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    if-eqz v1, :cond_a

    const-string v1, ", source_code_info="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    if-eqz v1, :cond_b

    const-string v1, ", syntax="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_b
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "FileDescriptorProto{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
