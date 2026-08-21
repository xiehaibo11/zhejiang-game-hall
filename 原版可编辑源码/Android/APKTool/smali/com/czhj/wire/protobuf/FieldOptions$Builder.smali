.class public final Lcom/czhj/wire/protobuf/FieldOptions$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldOptions;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/wire/protobuf/FieldOptions;",
        "Lcom/czhj/wire/protobuf/FieldOptions$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

.field public deprecated:Ljava/lang/Boolean;

.field public jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

.field public lazy:Ljava/lang/Boolean;

.field public packed:Ljava/lang/Boolean;

.field public uninterpreted_option:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;"
        }
    .end annotation
.end field

.field public weak:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->uninterpreted_option:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->build()Lcom/czhj/wire/protobuf/FieldOptions;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/czhj/wire/protobuf/FieldOptions;
    .locals 10

    new-instance v9, Lcom/czhj/wire/protobuf/FieldOptions;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    iget-object v2, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->packed:Ljava/lang/Boolean;

    iget-object v3, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    iget-object v4, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->lazy:Ljava/lang/Boolean;

    iget-object v5, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->deprecated:Ljava/lang/Boolean;

    iget-object v6, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->weak:Ljava/lang/Boolean;

    iget-object v7, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->uninterpreted_option:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v8

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Lcom/czhj/wire/protobuf/FieldOptions;-><init>(Lcom/czhj/wire/protobuf/FieldOptions$CType;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FieldOptions$JSType;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v9
.end method

.method public ctype(Lcom/czhj/wire/protobuf/FieldOptions$CType;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    return-object p0
.end method

.method public deprecated(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->deprecated:Ljava/lang/Boolean;

    return-object p0
.end method

.method public jstype(Lcom/czhj/wire/protobuf/FieldOptions$JSType;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    return-object p0
.end method

.method public lazy(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->lazy:Ljava/lang/Boolean;

    return-object p0
.end method

.method public packed(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->packed:Ljava/lang/Boolean;

    return-object p0
.end method

.method public uninterpreted_option(Ljava/util/List;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;)",
            "Lcom/czhj/wire/protobuf/FieldOptions$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->uninterpreted_option:Ljava/util/List;

    return-object p0
.end method

.method public weak(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->weak:Ljava/lang/Boolean;

    return-object p0
.end method
