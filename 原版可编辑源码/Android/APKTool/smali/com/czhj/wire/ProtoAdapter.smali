.class public abstract Lcom/czhj/wire/ProtoAdapter;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/ProtoAdapter$MapEntryProtoAdapter;,
        Lcom/czhj/wire/ProtoAdapter$MapProtoAdapter;,
        Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<E:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# static fields
.field public static final BOOL:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field public static final BYTES:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/wire/okio/ByteString;",
            ">;"
        }
    .end annotation
.end field

.field public static final DOUBLE:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Double;",
            ">;"
        }
    .end annotation
.end field

.field public static final FIXED32:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static final FIXED64:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private static final FIXED_32_SIZE:I = 0x4

.field private static final FIXED_64_SIZE:I = 0x8

.field private static final FIXED_BOOL_SIZE:I = 0x1

.field public static final FLOAT:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Float;",
            ">;"
        }
    .end annotation
.end field

.field public static final INT32:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static final INT64:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static final SFIXED32:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static final SFIXED64:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static final SINT32:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static final SINT64:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static final STRING:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static final UINT32:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static final UINT64:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final fieldEncoding:Lcom/czhj/wire/FieldEncoding;

.field final javaType:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field packedAdapter:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/List<",
            "TE;>;>;"
        }
    .end annotation
.end field

.field repeatedAdapter:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/List<",
            "TE;>;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$1;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Boolean;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$1;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$2;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Integer;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$2;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$3;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Integer;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$3;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$4;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Integer;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$4;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->SINT32:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$5;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->FIXED32:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Integer;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$5;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->FIXED32:Lcom/czhj/wire/ProtoAdapter;

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->SFIXED32:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$6;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Long;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$6;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->INT64:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$7;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Long;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$7;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$8;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Long;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$8;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->SINT64:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$9;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->FIXED64:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Long;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$9;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->FIXED64:Lcom/czhj/wire/ProtoAdapter;

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->SFIXED64:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$10;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->FIXED32:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Float;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$10;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$11;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->FIXED64:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/Double;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$11;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->DOUBLE:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$12;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$12;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$13;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Lcom/czhj/wire/okio/ByteString;

    invoke-direct {v0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$13;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sput-object v0, Lcom/czhj/wire/ProtoAdapter;->BYTES:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method

.method public constructor <init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/FieldEncoding;",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/wire/ProtoAdapter;->fieldEncoding:Lcom/czhj/wire/FieldEncoding;

    iput-object p2, p0, Lcom/czhj/wire/ProtoAdapter;->javaType:Ljava/lang/Class;

    return-void
.end method

.method private createPacked()Lcom/czhj/wire/ProtoAdapter;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/List<",
            "TE;>;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->fieldEncoding:Lcom/czhj/wire/FieldEncoding;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    if-eq v0, v1, :cond_0

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$14;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/util/List;

    invoke-direct {v0, p0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$14;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Unable to pack a length-delimited type."

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private createRepeated()Lcom/czhj/wire/ProtoAdapter;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/List<",
            "TE;>;>;"
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$15;

    iget-object v1, p0, Lcom/czhj/wire/ProtoAdapter;->fieldEncoding:Lcom/czhj/wire/FieldEncoding;

    const-class v2, Ljava/util/List;

    invoke-direct {v0, p0, v1, v2}, Lcom/czhj/wire/ProtoAdapter$15;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-object v0
.end method

.method public static get(Lcom/czhj/wire/Message;)Lcom/czhj/wire/ProtoAdapter;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<M:",
            "Lcom/czhj/wire/Message;",
            ">(TM;)",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TM;>;"
        }
    .end annotation

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/wire/ProtoAdapter;->get(Ljava/lang/Class;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object p0

    return-object p0
.end method

.method public static get(Ljava/lang/Class;)Lcom/czhj/wire/ProtoAdapter;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<M:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TM;>;)",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TM;>;"
        }
    .end annotation

    :try_start_0
    const-string v0, "ADAPTER"

    invoke-virtual {p0, v0}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/wire/ProtoAdapter;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/IllegalArgumentException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "failed to access "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "#ADAPTER"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static get(Ljava/lang/String;)Lcom/czhj/wire/ProtoAdapter;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Lcom/czhj/wire/ProtoAdapter<",
            "*>;"
        }
    .end annotation

    const/16 v0, 0x23

    :try_start_0
    invoke-virtual {p0, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/wire/ProtoAdapter;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/IllegalArgumentException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "failed to access "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static newEnumAdapter(Ljava/lang/Class;)Lcom/czhj/wire/RuntimeEnumAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<E::",
            "Lcom/czhj/wire/WireEnum;",
            ">(",
            "Ljava/lang/Class<",
            "TE;>;)",
            "Lcom/czhj/wire/RuntimeEnumAdapter<",
            "TE;>;"
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/RuntimeEnumAdapter;

    invoke-direct {v0, p0}, Lcom/czhj/wire/RuntimeEnumAdapter;-><init>(Ljava/lang/Class;)V

    return-object v0
.end method

.method public static newMapAdapter(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/ProtoAdapter;)Lcom/czhj/wire/ProtoAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<K:",
            "Ljava/lang/Object;",
            "V:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TK;>;",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TV;>;)",
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/Map<",
            "TK;TV;>;>;"
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/ProtoAdapter$MapProtoAdapter;

    invoke-direct {v0, p0, p1}, Lcom/czhj/wire/ProtoAdapter$MapProtoAdapter;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/ProtoAdapter;)V

    return-object v0
.end method

.method public static newMessageAdapter(Ljava/lang/Class;)Lcom/czhj/wire/ProtoAdapter;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<M:",
            "Lcom/czhj/wire/Message<",
            "TM;TB;>;B:",
            "Lcom/czhj/wire/Message$Builder<",
            "TM;TB;>;>(",
            "Ljava/lang/Class<",
            "TM;>;)",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TM;>;"
        }
    .end annotation

    invoke-static {p0}, Lcom/czhj/wire/RuntimeMessageAdapter;->a(Ljava/lang/Class;)Lcom/czhj/wire/RuntimeMessageAdapter;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final asPacked()Lcom/czhj/wire/ProtoAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/List<",
            "TE;>;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->packedAdapter:Lcom/czhj/wire/ProtoAdapter;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/czhj/wire/ProtoAdapter;->createPacked()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->packedAdapter:Lcom/czhj/wire/ProtoAdapter;

    :goto_0
    return-object v0
.end method

.method public final asRepeated()Lcom/czhj/wire/ProtoAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/List<",
            "TE;>;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->repeatedAdapter:Lcom/czhj/wire/ProtoAdapter;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/czhj/wire/ProtoAdapter;->createRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->repeatedAdapter:Lcom/czhj/wire/ProtoAdapter;

    :goto_0
    return-object v0
.end method

.method public abstract decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoReader;",
            ")TE;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public final decode(Lcom/czhj/wire/okio/BufferedSource;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/okio/BufferedSource;",
            ")TE;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "source == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/wire/ProtoReader;

    invoke-direct {v0, p1}, Lcom/czhj/wire/ProtoReader;-><init>(Lcom/czhj/wire/okio/BufferedSource;)V

    invoke-virtual {p0, v0}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final decode(Lcom/czhj/wire/okio/ByteString;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/okio/ByteString;",
            ")TE;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "bytes == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/wire/okio/Buffer;

    invoke-direct {v0}, Lcom/czhj/wire/okio/Buffer;-><init>()V

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->write(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/okio/Buffer;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/okio/BufferedSource;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final decode(Ljava/io/InputStream;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/InputStream;",
            ")TE;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "stream == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/wire/okio/Okio;->source(Ljava/io/InputStream;)Lcom/czhj/wire/okio/Source;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/wire/okio/Okio;->buffer(Lcom/czhj/wire/okio/Source;)Lcom/czhj/wire/okio/BufferedSource;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/okio/BufferedSource;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final decode([B)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([B)TE;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "bytes == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/wire/okio/Buffer;

    invoke-direct {v0}, Lcom/czhj/wire/okio/Buffer;-><init>()V

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->write([B)Lcom/czhj/wire/okio/Buffer;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/okio/BufferedSource;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public abstract encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoWriter;",
            "TE;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public final encode(Lcom/czhj/wire/okio/BufferedSink;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/okio/BufferedSink;",
            "TE;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "value == null"

    invoke-static {p2, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "sink == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/wire/ProtoWriter;

    invoke-direct {v0, p1}, Lcom/czhj/wire/ProtoWriter;-><init>(Lcom/czhj/wire/okio/BufferedSink;)V

    invoke-virtual {p0, v0, p2}, Lcom/czhj/wire/ProtoAdapter;->encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V

    return-void
.end method

.method public final encode(Ljava/io/OutputStream;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/OutputStream;",
            "TE;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "value == null"

    invoke-static {p2, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "stream == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/wire/okio/Okio;->sink(Ljava/io/OutputStream;)Lcom/czhj/wire/okio/Sink;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/wire/okio/Okio;->buffer(Lcom/czhj/wire/okio/Sink;)Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/ProtoAdapter;->encode(Lcom/czhj/wire/okio/BufferedSink;Ljava/lang/Object;)V

    invoke-interface {p1}, Lcom/czhj/wire/okio/BufferedSink;->emit()Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method public final encode(Ljava/lang/Object;)[B
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;)[B"
        }
    .end annotation

    const-string v0, "value == null"

    invoke-static {p1, v0}, Lcom/czhj/wire/Preconditions;->a(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/wire/okio/Buffer;

    invoke-direct {v0}, Lcom/czhj/wire/okio/Buffer;-><init>()V

    :try_start_0
    invoke-virtual {p0, v0, p1}, Lcom/czhj/wire/ProtoAdapter;->encode(Lcom/czhj/wire/okio/BufferedSink;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Buffer;->readByteArray()[B

    move-result-object p1

    return-object p1

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0, p1}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw v0
.end method

.method public encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoWriter;",
            "ITE;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    if-nez p3, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->fieldEncoding:Lcom/czhj/wire/FieldEncoding;

    invoke-virtual {p1, p2, v0}, Lcom/czhj/wire/ProtoWriter;->writeTag(ILcom/czhj/wire/FieldEncoding;)V

    iget-object p2, p0, Lcom/czhj/wire/ProtoAdapter;->fieldEncoding:Lcom/czhj/wire/FieldEncoding;

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    if-ne p2, v0, :cond_1

    invoke-virtual {p0, p3}, Lcom/czhj/wire/ProtoAdapter;->encodedSize(Ljava/lang/Object;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/czhj/wire/ProtoWriter;->writeVarint32(I)V

    :cond_1
    invoke-virtual {p0, p1, p3}, Lcom/czhj/wire/ProtoAdapter;->encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V

    return-void
.end method

.method public abstract encodedSize(Ljava/lang/Object;)I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;)I"
        }
    .end annotation
.end method

.method public encodedSizeWithTag(ILjava/lang/Object;)I
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ITE;)I"
        }
    .end annotation

    if-nez p2, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    invoke-virtual {p0, p2}, Lcom/czhj/wire/ProtoAdapter;->encodedSize(Ljava/lang/Object;)I

    move-result p2

    iget-object v0, p0, Lcom/czhj/wire/ProtoAdapter;->fieldEncoding:Lcom/czhj/wire/FieldEncoding;

    sget-object v1, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    if-ne v0, v1, :cond_1

    invoke-static {p2}, Lcom/czhj/wire/ProtoWriter;->c(I)I

    move-result v0

    add-int/2addr p2, v0

    :cond_1
    invoke-static {p1}, Lcom/czhj/wire/ProtoWriter;->a(I)I

    move-result p1

    add-int/2addr p2, p1

    return p2
.end method

.method public redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;)TE;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public toString(Ljava/lang/Object;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;)",
            "Ljava/lang/String;"
        }
    .end annotation

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method withLabel(Lcom/czhj/wire/WireField$Label;)Lcom/czhj/wire/ProtoAdapter;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/WireField$Label;",
            ")",
            "Lcom/czhj/wire/ProtoAdapter<",
            "*>;"
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/WireField$Label;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/czhj/wire/WireField$Label;->b()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/czhj/wire/ProtoAdapter;->asPacked()Lcom/czhj/wire/ProtoAdapter;

    move-result-object p1

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object p1

    :goto_0
    return-object p1

    :cond_1
    return-object p0
.end method
