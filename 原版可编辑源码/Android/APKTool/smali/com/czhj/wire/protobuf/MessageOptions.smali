.class public final Lcom/czhj/wire/protobuf/MessageOptions;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/MessageOptions$ProtoAdapter_MessageOptions;,
        Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/MessageOptions;",
        "Lcom/czhj/wire/protobuf/MessageOptions$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/MessageOptions;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_DEPRECATED:Ljava/lang/Boolean;

.field public static final DEFAULT_MAP_ENTRY:Ljava/lang/Boolean;

.field public static final DEFAULT_MESSAGE_SET_WIRE_FORMAT:Ljava/lang/Boolean;

.field public static final DEFAULT_NO_STANDARD_DESCRIPTOR_ACCESSOR:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final deprecated:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x3
    .end annotation
.end field

.field public final map_entry:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x7
    .end annotation
.end field

.field public final message_set_wire_format:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1
    .end annotation
.end field

.field public final no_standard_descriptor_accessor:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x2
    .end annotation
.end field

.field public final uninterpreted_option:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.UninterpretedOption#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x3e7
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/wire/protobuf/MessageOptions$ProtoAdapter_MessageOptions;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/MessageOptions$ProtoAdapter_MessageOptions;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/MessageOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/wire/protobuf/MessageOptions;->DEFAULT_MESSAGE_SET_WIRE_FORMAT:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/MessageOptions;->DEFAULT_NO_STANDARD_DESCRIPTOR_ACCESSOR:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/MessageOptions;->DEFAULT_DEPRECATED:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/MessageOptions;->DEFAULT_MAP_ENTRY:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;)V"
        }
    .end annotation

    sget-object v6, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/czhj/wire/protobuf/MessageOptions;-><init>(Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/protobuf/MessageOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p6}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    iput-object p2, p0, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    iput-object p3, p0, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    iput-object p4, p0, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    const-string p1, "uninterpreted_option"

    invoke-static {p1, p5}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/MessageOptions;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/MessageOptions;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MessageOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/MessageOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

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

    if-nez v0, :cond_4

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MessageOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_3
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_4
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MessageOptions;->newBuilder()Lcom/czhj/wire/protobuf/MessageOptions$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/MessageOptions$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/MessageOptions$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->message_set_wire_format:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->deprecated:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->map_entry:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    const-string v2, "uninterpreted_option"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->uninterpreted_option:Ljava/util/List;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MessageOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/MessageOptions$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    if-eqz v1, :cond_0

    const-string v1, ", message_set_wire_format="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->message_set_wire_format:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    const-string v1, ", no_standard_descriptor_accessor="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->no_standard_descriptor_accessor:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    if-eqz v1, :cond_2

    const-string v1, ", deprecated="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->deprecated:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    const-string v1, ", map_entry="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->map_entry:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, ", uninterpreted_option="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MessageOptions;->uninterpreted_option:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "MessageOptions{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
