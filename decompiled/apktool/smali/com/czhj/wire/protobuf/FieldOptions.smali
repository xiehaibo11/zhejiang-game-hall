.class public final Lcom/czhj/wire/protobuf/FieldOptions;
.super Lcom/czhj/wire/Message;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;,
        Lcom/czhj/wire/protobuf/FieldOptions$JSType;,
        Lcom/czhj/wire/protobuf/FieldOptions$CType;,
        Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message<",
        "Lcom/czhj/wire/protobuf/FieldOptions;",
        "Lcom/czhj/wire/protobuf/FieldOptions$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/protobuf/FieldOptions;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_CTYPE:Lcom/czhj/wire/protobuf/FieldOptions$CType;

.field public static final DEFAULT_DEPRECATED:Ljava/lang/Boolean;

.field public static final DEFAULT_JSTYPE:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

.field public static final DEFAULT_LAZY:Ljava/lang/Boolean;

.field public static final DEFAULT_PACKED:Ljava/lang/Boolean;

.field public static final DEFAULT_WEAK:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FieldOptions$CType#ADAPTER"
        tag = 0x1
    .end annotation
.end field

.field public final deprecated:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x3
    .end annotation
.end field

.field public final jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.google.protobuf.FieldOptions$JSType#ADAPTER"
        tag = 0x6
    .end annotation
.end field

.field public final lazy:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x5
    .end annotation
.end field

.field public final packed:Ljava/lang/Boolean;
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

.field public final weak:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xa
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;-><init>()V

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->STRING:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->DEFAULT_CTYPE:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->DEFAULT_PACKED:Ljava/lang/Boolean;

    sget-object v1, Lcom/czhj/wire/protobuf/FieldOptions$JSType;->JS_NORMAL:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    sput-object v1, Lcom/czhj/wire/protobuf/FieldOptions;->DEFAULT_JSTYPE:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->DEFAULT_LAZY:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->DEFAULT_DEPRECATED:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->DEFAULT_WEAK:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Lcom/czhj/wire/protobuf/FieldOptions$CType;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FieldOptions$JSType;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/protobuf/FieldOptions$CType;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/protobuf/FieldOptions$JSType;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/util/List<",
            "Lcom/czhj/wire/protobuf/UninterpretedOption;",
            ">;)V"
        }
    .end annotation

    sget-object v8, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    move-object/from16 v7, p7

    invoke-direct/range {v0 .. v8}, Lcom/czhj/wire/protobuf/FieldOptions;-><init>(Lcom/czhj/wire/protobuf/FieldOptions$CType;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FieldOptions$JSType;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/wire/protobuf/FieldOptions$CType;Ljava/lang/Boolean;Lcom/czhj/wire/protobuf/FieldOptions$JSType;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/protobuf/FieldOptions$CType;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/protobuf/FieldOptions$JSType;",
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

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p8}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    iput-object p2, p0, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    iput-object p3, p0, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    iput-object p4, p0, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    iput-object p5, p0, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    iput-object p6, p0, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    const-string p1, "uninterpreted_option"

    invoke-static {p1, p7}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/wire/protobuf/FieldOptions;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    iget-object p1, p1, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

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

    if-nez v0, :cond_6

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FieldOptions$CType;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/wire/protobuf/FieldOptions$JSType;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_5
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/Message;->hashCode:I

    :cond_6
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldOptions;->newBuilder()Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->packed:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->lazy:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->deprecated:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->weak:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    const-string v2, "uninterpreted_option"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->uninterpreted_option:Ljava/util/List;

    invoke-virtual {p0}, Lcom/czhj/wire/protobuf/FieldOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    if-eqz v1, :cond_0

    const-string v1, ", ctype="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    const-string v1, ", packed="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    if-eqz v1, :cond_2

    const-string v1, ", jstype="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    if-eqz v1, :cond_3

    const-string v1, ", lazy="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", deprecated="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    const-string v1, ", weak="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, ", uninterpreted_option="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "FieldOptions{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
