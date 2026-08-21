.class public final Lcom/czhj/wire/protobuf/MethodDescriptorProto;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/MethodDescriptorProto$ProtoAdapter_MethodDescriptorProto;,
        Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/MethodDescriptorProto;",
        "Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/MethodDescriptorProto;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_CLIENT_STREAMING:Ljava/lang/Boolean;

.field public static final DEFAULT_INPUT_TYPE:Ljava/lang/String; = ""

.field public static final DEFAULT_NAME:Ljava/lang/String; = ""

.field public static final DEFAULT_OUTPUT_TYPE:Ljava/lang/String; = ""

.field public static final DEFAULT_SERVER_STREAMING:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final client_streaming:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x5
    .end annotation
.end field

.field public final input_type:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final options:Lcom/czhj/wire/protobuf/MethodOptions;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.MethodOptions#ADAPTER"
        tag = 0x4
    .end annotation
.end field

.field public final output_type:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final server_streaming:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x6
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$ProtoAdapter_MethodDescriptorProto;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto$ProtoAdapter_MethodDescriptorProto;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->DEFAULT_CLIENT_STREAMING:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->DEFAULT_SERVER_STREAMING:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/protobuf/MethodOptions;Ljava/lang/Boolean;Ljava/lang/Boolean;)V
    .locals 8

    sget-object v7, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    invoke-direct/range {v0 .. v7}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/protobuf/MethodOptions;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/protobuf/MethodOptions;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p7}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    iput-object p3, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    iput-object p4, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    iput-object p5, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    iput-object p6, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

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

    if-nez v0, :cond_6

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/MethodOptions;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_5
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_6
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->newBuilder()Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->input_type:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->output_type:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->client_streaming:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->server_streaming:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", input_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->input_type:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", output_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->output_type:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    if-eqz v1, :cond_3

    const-string v1, ", options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", client_streaming="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->client_streaming:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    const-string v1, ", server_streaming="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto;->server_streaming:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "MethodDescriptorProto{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
