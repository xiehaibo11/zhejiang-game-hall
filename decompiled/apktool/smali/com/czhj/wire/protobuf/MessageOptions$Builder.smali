.class public final Lcom/czhj/wire/protobuf/MessageOptions$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/MessageOptions;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/MessageOptions;",
        "Lcom/czhj/wire/protobuf/MessageOptions$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public deprecated:Ljava/lang/Boolean;

.field public map_entry:Ljava/lang/Boolean;

.field public message_set_wire_format:Ljava/lang/Boolean;

.field public no_standard_descriptor_accessor:Ljava/lang/Boolean;

.field public uninterpreted_option:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
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

    iput-object v0, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->uninterpreted_option:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->build()Lcom/czhj/wire/protobuf/MessageOptions;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/MessageOptions;
    .locals 8

    new-instance v7, Lcom/czhj/wire/protobuf/MessageOptions;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->message_set_wire_format:Ljava/lang/Boolean;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->deprecated:Ljava/lang/Boolean;

    iget-object v4, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->map_entry:Ljava/lang/Boolean;

    iget-object v5, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->uninterpreted_option:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v6

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/czhj/wire/protobuf/MessageOptions;-><init>(Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v7
.end method

.method public deprecated(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->deprecated:Ljava/lang/Boolean;

    return-object p0
.end method

.method public map_entry(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->map_entry:Ljava/lang/Boolean;

    return-object p0
.end method

.method public message_set_wire_format(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->message_set_wire_format:Ljava/lang/Boolean;

    return-object p0
.end method

.method public no_standard_descriptor_accessor(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    return-object p0
.end method

.method public uninterpreted_option(Ljava/util/List;)Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;)",
            "Lcom/czhj/wire/protobuf/MessageOptions$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->uninterpreted_option:Ljava/util/List;

    return-object p0
.end method
