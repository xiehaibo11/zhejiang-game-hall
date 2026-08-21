.class public final Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/MethodDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/MethodDescriptorProto;",
        "Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public client_streaming:Ljava/lang/Boolean;

.field public input_type:Ljava/lang/String;

.field public name:Ljava/lang/String;

.field public options:Lcom/czhj/wire/protobuf/MethodOptions;

.field public output_type:Ljava/lang/String;

.field public server_streaming:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/MethodDescriptorProto;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/MethodDescriptorProto;
    .locals 9

    new-instance v8, Lcom/czhj/wire/protobuf/MethodDescriptorProto;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->name:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->input_type:Ljava/lang/String;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->output_type:Ljava/lang/String;

    iget-object v4, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    iget-object v5, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->client_streaming:Ljava/lang/Boolean;

    iget-object v6, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->server_streaming:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v7

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Lcom/czhj/wire/protobuf/MethodDescriptorProto;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/protobuf/MethodOptions;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v8
.end method

.method public client_streaming(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->client_streaming:Ljava/lang/Boolean;

    return-object p0
.end method

.method public input_type(Ljava/lang/String;)Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->input_type:Ljava/lang/String;

    return-object p0
.end method

.method public name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->name:Ljava/lang/String;

    return-object p0
.end method

.method public options(Lcom/czhj/wire/protobuf/MethodOptions;)Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/MethodOptions;

    return-object p0
.end method

.method public output_type(Ljava/lang/String;)Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->output_type:Ljava/lang/String;

    return-object p0
.end method

.method public server_streaming(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/MethodDescriptorProto$Builder;->server_streaming:Ljava/lang/Boolean;

    return-object p0
.end method
