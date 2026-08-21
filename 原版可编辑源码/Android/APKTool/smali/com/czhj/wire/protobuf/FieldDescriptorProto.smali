.class public final Lcom/czhj/wire/protobuf/FieldDescriptorProto;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;,
        Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;,
        Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;,
        Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
        "Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_DEFAULT_VALUE:Ljava/lang/String; = ""

.field public static final DEFAULT_EXTENDEE:Ljava/lang/String; = ""

.field public static final DEFAULT_LABEL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

.field public static final DEFAULT_NAME:Ljava/lang/String; = ""

.field public static final DEFAULT_NUMBER:Ljava/lang/Integer;

.field public static final DEFAULT_ONEOF_INDEX:Ljava/lang/Integer;

.field public static final DEFAULT_TYPE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

.field public static final DEFAULT_TYPE_NAME:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final default_value:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x7
    .end annotation
.end field

.field public final extendee:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FieldDescriptorProto$Label#ADAPTER"
        tag = 0x4
    .end annotation
.end field

.field public final name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final number:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x3
    .end annotation
.end field

.field public final oneof_index:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x9
    .end annotation
.end field

.field public final options:Lcom/czhj/wire/protobuf/FieldOptions;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FieldOptions#ADAPTER"
        tag = 0x8
    .end annotation
.end field

.field public final type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FieldDescriptorProto$Type#ADAPTER"
        tag = 0x5
    .end annotation
.end field

.field public final type_name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x6
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->DEFAULT_NUMBER:Ljava/lang/Integer;

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;->LABEL_OPTIONAL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    sput-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->DEFAULT_LABEL:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->TYPE_DOUBLE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    sput-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->DEFAULT_TYPE:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    sput-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->DEFAULT_ONEOF_INDEX:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/FieldOptions;)V
    .locals 11

    sget-object v10, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    invoke-direct/range {v0 .. v10}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;-><init>(Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/FieldOptions;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Lcom/czhj/wire/protobuf/FieldOptions;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p10}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    iput-object p3, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    iput-object p4, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    iput-object p5, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    iput-object p6, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    iput-object p7, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    iput-object p8, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    iput-object p9, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

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

    if-nez v0, :cond_9

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FieldOptions;->hashCode()I

    move-result v2

    :cond_8
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_9
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->newBuilder()Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->number:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->type_name:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->extendee:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->default_value:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->oneof_index:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    const-string v1, ", number="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    if-eqz v1, :cond_2

    const-string v1, ", label="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    if-eqz v1, :cond_3

    const-string v1, ", type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    if-eqz v1, :cond_4

    const-string v1, ", type_name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    if-eqz v1, :cond_5

    const-string v1, ", extendee="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    if-eqz v1, :cond_6

    const-string v1, ", default_value="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    const-string v1, ", oneof_index="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    if-eqz v1, :cond_8

    const-string v1, ", options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "FieldDescriptorProto{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
