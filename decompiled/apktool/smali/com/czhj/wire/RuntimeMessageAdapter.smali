.class final Lcom/czhj/wire/RuntimeMessageAdapter;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<M:",
        "Lcom/czhj/wire/Message<",
        "TM;TB;>;B:",
        "Lcom/czhj/wire/Message$Builder<",
        "TM;TB;>;>",
        "Lcom/czhj/wire/ProtoAdapter<",
        "TM;>;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "\u2588\u2588"


# instance fields
.field private final b:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "TM;>;"
        }
    .end annotation
.end field

.field private final c:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "TB;>;"
        }
    .end annotation
.end field

.field private final d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/czhj/wire/FieldBinding<",
            "TM;TB;>;>;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Ljava/lang/Class;Ljava/lang/Class;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "TM;>;",
            "Ljava/lang/Class<",
            "TB;>;",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/czhj/wire/FieldBinding<",
            "TM;TB;>;>;)V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    invoke-direct {p0, v0, p1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    iput-object p1, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->b:Ljava/lang/Class;

    iput-object p2, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->c:Ljava/lang/Class;

    iput-object p3, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    return-void
.end method

.method static a(Ljava/lang/Class;)Lcom/czhj/wire/RuntimeMessageAdapter;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<M:",
            "Lcom/czhj/wire/Message<",
            "TM;TB;>;B:",
            "Lcom/czhj/wire/Message$Builder<",
            "TM;TB;>;>(",
            "Ljava/lang/Class<",
            "TM;>;)",
            "Lcom/czhj/wire/RuntimeMessageAdapter<",
            "TM;TB;>;"
        }
    .end annotation

    invoke-static {p0}, Lcom/czhj/wire/RuntimeMessageAdapter;->b(Ljava/lang/Class;)Ljava/lang/Class;

    move-result-object v0

    new-instance v1, Ljava/util/LinkedHashMap;

    invoke-direct {v1}, Ljava/util/LinkedHashMap;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v2

    array-length v3, v2

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v3, :cond_1

    aget-object v5, v2, v4

    const-class v6, Lcom/czhj/wire/WireField;

    invoke-virtual {v5, v6}, Ljava/lang/reflect/Field;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v6

    check-cast v6, Lcom/czhj/wire/WireField;

    if-eqz v6, :cond_0

    invoke-interface {v6}, Lcom/czhj/wire/WireField;->tag()I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    new-instance v8, Lcom/czhj/wire/FieldBinding;

    invoke-direct {v8, v6, v5, v0}, Lcom/czhj/wire/FieldBinding;-><init>(Lcom/czhj/wire/WireField;Ljava/lang/reflect/Field;Ljava/lang/Class;)V

    invoke-interface {v1, v7, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    new-instance v2, Lcom/czhj/wire/RuntimeMessageAdapter;

    invoke-static {v1}, Ljava/util/Collections;->unmodifiableMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    invoke-direct {v2, p0, v0, v1}, Lcom/czhj/wire/RuntimeMessageAdapter;-><init>(Ljava/lang/Class;Ljava/lang/Class;Ljava/util/Map;)V

    return-object v2
.end method

.method private static b(Ljava/lang/Class;)Ljava/lang/Class;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<M:",
            "Lcom/czhj/wire/Message<",
            "TM;TB;>;B:",
            "Lcom/czhj/wire/Message$Builder<",
            "TM;TB;>;>(",
            "Ljava/lang/Class<",
            "TM;>;)",
            "Ljava/lang/Class<",
            "TB;>;"
        }
    .end annotation

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "$Builder"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "No builder class found for message type "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/czhj/wire/FieldBinding<",
            "TM;TB;>;>;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    return-object v0
.end method

.method b()Lcom/czhj/wire/Message$Builder;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TB;"
        }
    .end annotation

    :try_start_0
    iget-object v0, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->c:Ljava/lang/Class;

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/wire/Message$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/AssertionError;

    invoke-direct {v1, v0}, Ljava/lang/AssertionError;-><init>(Ljava/lang/Object;)V

    throw v1
.end method

.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/Message;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoReader;",
            ")TM;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/czhj/wire/RuntimeMessageAdapter;->b()Lcom/czhj/wire/Message$Builder;

    move-result-object v0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_2

    iget-object v4, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/czhj/wire/FieldBinding;

    if-eqz v4, :cond_1

    :try_start_0
    invoke-virtual {v4}, Lcom/czhj/wire/FieldBinding;->a()Z

    move-result v5

    if-eqz v5, :cond_0

    invoke-virtual {v4}, Lcom/czhj/wire/FieldBinding;->d()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    goto :goto_1

    :cond_0
    invoke-virtual {v4}, Lcom/czhj/wire/FieldBinding;->b()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    :goto_1
    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v4, v0, v5}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message$Builder;Ljava/lang/Object;)V

    goto :goto_0

    :cond_1
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/wire/Message$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;
    :try_end_0
    .catch Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v4

    sget-object v5, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    iget v4, v4, Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException;->value:I

    int-to-long v6, v4

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v5, v4}, Lcom/czhj/wire/Message$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :cond_2
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/wire/Message$Builder;->build()Lcom/czhj/wire/Message;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/czhj/wire/RuntimeMessageAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/Message;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/Message;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoWriter;",
            "TM;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/wire/FieldBinding;

    invoke-virtual {v1, p2}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message;)Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Lcom/czhj/wire/FieldBinding;->d()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v3

    iget v1, v1, Lcom/czhj/wire/FieldBinding;->tag:I

    invoke-virtual {v3, p1, v1, v2}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    goto :goto_0

    :cond_1
    invoke-virtual {p2}, Lcom/czhj/wire/Message;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/czhj/wire/ProtoWriter;->writeBytes(Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public bridge synthetic encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    check-cast p2, Lcom/czhj/wire/Message;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/RuntimeMessageAdapter;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/Message;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/wire/Message;)I
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TM;)I"
        }
    .end annotation

    iget v0, p1, Lcom/czhj/wire/Message;->cachedSerializedSize:I

    if-eqz v0, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x0

    iget-object v1, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/wire/FieldBinding;

    invoke-virtual {v2, p1}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {v2}, Lcom/czhj/wire/FieldBinding;->d()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v4

    iget v2, v2, Lcom/czhj/wire/FieldBinding;->tag:I

    invoke-virtual {v4, v2, v3}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v2

    add-int/2addr v0, v2

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/czhj/wire/Message;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p1, Lcom/czhj/wire/Message;->cachedSerializedSize:I

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/Message;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/RuntimeMessageAdapter;->encodedSize(Lcom/czhj/wire/Message;)I

    move-result p1

    return p1
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 1

    instance-of v0, p1, Lcom/czhj/wire/RuntimeMessageAdapter;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/czhj/wire/RuntimeMessageAdapter;

    iget-object p1, p1, Lcom/czhj/wire/RuntimeMessageAdapter;->b:Ljava/lang/Class;

    iget-object v0, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->b:Ljava/lang/Class;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public hashCode()I
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->b:Ljava/lang/Class;

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    return v0
.end method

.method public redact(Lcom/czhj/wire/Message;)Lcom/czhj/wire/Message;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TM;)TM;"
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/Message;->newBuilder()Lcom/czhj/wire/Message$Builder;

    move-result-object p1

    iget-object v0, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/wire/FieldBinding;

    iget-boolean v2, v1, Lcom/czhj/wire/FieldBinding;->redacted:Z

    if-eqz v2, :cond_2

    iget-object v2, v1, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    sget-object v3, Lcom/czhj/wire/WireField$Label;->REQUIRED:Lcom/czhj/wire/WireField$Label;

    if-eq v2, v3, :cond_1

    goto :goto_1

    :cond_1
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget-object v1, v1, Lcom/czhj/wire/FieldBinding;->name:Ljava/lang/String;

    aput-object v1, v0, v2

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->javaType:Ljava/lang/Class;

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    aput-object v2, v0, v1

    const-string v1, "Field \'%s\' in %s is required and cannot be redacted."

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_2
    :goto_1
    const-class v2, Lcom/czhj/wire/Message;

    invoke-virtual {v1}, Lcom/czhj/wire/FieldBinding;->b()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v3

    iget-object v3, v3, Lcom/czhj/wire/ProtoAdapter;->javaType:Ljava/lang/Class;

    invoke-virtual {v2, v3}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v2

    iget-boolean v3, v1, Lcom/czhj/wire/FieldBinding;->redacted:Z

    if-nez v3, :cond_4

    if-eqz v2, :cond_3

    iget-object v3, v1, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    invoke-virtual {v3}, Lcom/czhj/wire/WireField$Label;->a()Z

    move-result v3

    if-nez v3, :cond_3

    goto :goto_2

    :cond_3
    if-eqz v2, :cond_0

    iget-object v2, v1, Lcom/czhj/wire/FieldBinding;->label:Lcom/czhj/wire/WireField$Label;

    invoke-virtual {v2}, Lcom/czhj/wire/WireField$Label;->a()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1, p1}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message$Builder;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    invoke-virtual {v1}, Lcom/czhj/wire/FieldBinding;->b()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    goto :goto_0

    :cond_4
    :goto_2
    invoke-virtual {v1, p1}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message$Builder;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/czhj/wire/FieldBinding;->d()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v1, p1, v2}, Lcom/czhj/wire/FieldBinding;->b(Lcom/czhj/wire/Message$Builder;Ljava/lang/Object;)V

    goto :goto_0

    :cond_5
    invoke-virtual {p1}, Lcom/czhj/wire/Message$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/wire/Message$Builder;->build()Lcom/czhj/wire/Message;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/wire/Message;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/RuntimeMessageAdapter;->redact(Lcom/czhj/wire/Message;)Lcom/czhj/wire/Message;

    move-result-object p1

    return-object p1
.end method

.method public toString(Lcom/czhj/wire/Message;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TM;)",
            "Ljava/lang/String;"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->d:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/wire/FieldBinding;

    invoke-virtual {v2, p1}, Lcom/czhj/wire/FieldBinding;->a(Lcom/czhj/wire/Message;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_0

    const-string v4, ", "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v2, Lcom/czhj/wire/FieldBinding;->name:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v4, 0x3d

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    iget-boolean v2, v2, Lcom/czhj/wire/FieldBinding;->redacted:Z

    if-eqz v2, :cond_1

    const-string v3, "\u2588\u2588"

    :cond_1
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    const/4 v1, 0x2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/czhj/wire/RuntimeMessageAdapter;->b:Ljava/lang/Class;

    invoke-virtual {v3}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v3, 0x7b

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, p1, v1, v2}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    const/16 p1, 0x7d

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic toString(Ljava/lang/Object;)Ljava/lang/String;
    .locals 0

    check-cast p1, Lcom/czhj/wire/Message;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/RuntimeMessageAdapter;->toString(Lcom/czhj/wire/Message;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
