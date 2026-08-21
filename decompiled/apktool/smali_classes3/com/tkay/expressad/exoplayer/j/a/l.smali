.class public final Lcom/tkay/expressad/exoplayer/j/a/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/a/i;


# static fields
.field public static final b:Lcom/tkay/expressad/exoplayer/j/a/l;

.field private static final c:I = 0xa00000


# instance fields
.field private d:I

.field private final e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "[B>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 38
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/a/l;

    .line 39
    invoke-static {}, Ljava/util/Collections;->emptyMap()Ljava/util/Map;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/j/a/l;-><init>(Ljava/util/Map;)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/j/a/l;->b:Lcom/tkay/expressad/exoplayer/j/a/l;

    return-void
.end method

.method private constructor <init>(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "[B>;)V"
        }
    .end annotation

    .line 69
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 70
    invoke-static {p1}, Ljava/util/Collections;->unmodifiableMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    return-void
.end method

.method public static a(Ljava/io/DataInputStream;)Lcom/tkay/expressad/exoplayer/j/a/l;
    .locals 6

    .line 52
    invoke-virtual {p0}, Ljava/io/DataInputStream;->readInt()I

    move-result v0

    .line 53
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    .line 55
    invoke-virtual {p0}, Ljava/io/DataInputStream;->readUTF()Ljava/lang/String;

    move-result-object v3

    .line 56
    invoke-virtual {p0}, Ljava/io/DataInputStream;->readInt()I

    move-result v4

    if-ltz v4, :cond_0

    const/high16 v5, 0xa00000

    if-gt v4, v5, :cond_0

    .line 60
    new-array v4, v4, [B

    .line 61
    invoke-virtual {p0, v4}, Ljava/io/DataInputStream;->readFully([B)V

    .line 62
    invoke-virtual {v1, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 58
    :cond_0
    new-instance p0, Ljava/io/IOException;

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Invalid value size: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 64
    :cond_1
    new-instance p0, Lcom/tkay/expressad/exoplayer/j/a/l;

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/j/a/l;-><init>(Ljava/util/Map;)V

    return-object p0
.end method

.method private static a(Ljava/util/Map;Lcom/tkay/expressad/exoplayer/j/a/k;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "[B>;",
            "Lcom/tkay/expressad/exoplayer/j/a/k;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "[B>;"
        }
    .end annotation

    .line 175
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0, p0}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    .line 176
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/a/k;->a()Ljava/util/List;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/util/HashMap;Ljava/util/List;)V

    .line 177
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/a/k;->b()Ljava/util/Map;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/util/HashMap;Ljava/util/Map;)V

    return-object v0
.end method

.method private static a(Ljava/util/HashMap;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "[B>;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 182
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 183
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static a(Ljava/util/HashMap;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "[B>;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 188
    invoke-interface {p1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 189
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    .line 1202
    instance-of v3, v2, Ljava/lang/Long;

    if-eqz v3, :cond_0

    const/16 v3, 0x8

    .line 1203
    invoke-static {v3}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    invoke-virtual {v3, v4, v5}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v2

    goto :goto_1

    .line 1204
    :cond_0
    instance-of v3, v2, Ljava/lang/String;

    if-eqz v3, :cond_1

    .line 1205
    check-cast v2, Ljava/lang/String;

    const-string v3, "UTF-8"

    invoke-static {v3}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->getBytes(Ljava/nio/charset/Charset;)[B

    move-result-object v2

    goto :goto_1

    .line 1206
    :cond_1
    instance-of v3, v2, [B

    if-eqz v3, :cond_3

    .line 1207
    check-cast v2, [B

    .line 191
    :goto_1
    array-length v3, v2

    const/high16 v4, 0xa00000

    if-gt v3, v4, :cond_2

    .line 197
    invoke-virtual {p0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 192
    :cond_2
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const/4 p1, 0x3

    new-array p1, p1, [Ljava/lang/Object;

    const/4 v0, 0x0

    aput-object v1, p1, v0

    const/4 v0, 0x1

    array-length v1, v2

    .line 195
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, p1, v0

    const/4 v0, 0x2

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, p1, v0

    const-string v0, "The size of %s (%d) is greater than maximum allowed: %d"

    .line 193
    invoke-static {v0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 1209
    :cond_3
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0

    :cond_4
    return-void
.end method

.method private a(Ljava/util/Map;)Z
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "[B>;)Z"
        }
    .end annotation

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v1

    const/4 v2, 0x0

    if-eq v0, v1, :cond_0

    return v2

    .line 151
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 152
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [B

    .line 153
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [B

    .line 154
    invoke-static {v3, v1}, Ljava/util/Arrays;->equals([B[B)Z

    move-result v1

    if-nez v1, :cond_1

    return v2

    :cond_2
    const/4 p1, 0x1

    return p1
.end method

.method private static a(Ljava/lang/Object;)[B
    .locals 3

    .line 202
    instance-of v0, p0, Ljava/lang/Long;

    if-eqz v0, :cond_0

    const/16 v0, 0x8

    .line 203
    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    check-cast p0, Ljava/lang/Long;

    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object p0

    return-object p0

    .line 204
    :cond_0
    instance-of v0, p0, Ljava/lang/String;

    if-eqz v0, :cond_1

    .line 205
    check-cast p0, Ljava/lang/String;

    const-string v0, "UTF-8"

    invoke-static {v0}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/nio/charset/Charset;)[B

    move-result-object p0

    return-object p0

    .line 206
    :cond_1
    instance-of v0, p0, [B

    if-eqz v0, :cond_2

    .line 207
    check-cast p0, [B

    return-object p0

    .line 209
    :cond_2
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)J
    .locals 2

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 124
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    .line 125
    invoke-static {p1}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->getLong()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/a/k;)Lcom/tkay/expressad/exoplayer/j/a/l;
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    .line 1175
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1, v0}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    .line 1176
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/a/k;->a()Ljava/util/List;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/util/HashMap;Ljava/util/List;)V

    .line 1177
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/a/k;->b()Ljava/util/Map;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/util/HashMap;Ljava/util/Map;)V

    .line 79
    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/util/Map;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-object p0

    .line 82
    :cond_0
    new-instance p1, Lcom/tkay/expressad/exoplayer/j/a/l;

    invoke-direct {p1, v1}, Lcom/tkay/expressad/exoplayer/j/a/l;-><init>(Ljava/util/Map;)V

    return-object p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 114
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    .line 115
    new-instance p2, Ljava/lang/String;

    const-string v0, "UTF-8"

    invoke-static {v0}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v0

    invoke-direct {p2, p1, v0}, Ljava/lang/String;-><init>([BLjava/nio/charset/Charset;)V

    :cond_0
    return-object p2
.end method

.method public final a(Ljava/io/DataOutputStream;)V
    .locals 3

    .line 92
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 94
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/io/DataOutputStream;->writeUTF(Ljava/lang/String;)V

    .line 95
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [B

    .line 96
    array-length v2, v1

    invoke-virtual {p1, v2}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 97
    invoke-virtual {p1, v1}, Ljava/io/DataOutputStream;->write([B)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;[B)[B
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 104
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    .line 105
    array-length p2, p1

    invoke-static {p1, p2}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object p1

    return-object p1

    :cond_0
    return-object p2
.end method

.method public final b(Ljava/lang/String;)Z
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 2

    if-ne p0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    if-eqz p1, :cond_2

    .line 141
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    if-eq v0, v1, :cond_1

    goto :goto_0

    .line 144
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/j/a/l;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/util/Map;)Z

    move-result p1

    return p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public final hashCode()I
    .locals 4

    .line 163
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->d:I

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 165
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->e:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 166
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [B

    invoke-static {v2}, Ljava/util/Arrays;->hashCode([B)I

    move-result v2

    xor-int/2addr v2, v3

    add-int/2addr v0, v2

    goto :goto_0

    .line 168
    :cond_0
    iput v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->d:I

    .line 170
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j/a/l;->d:I

    return v0
.end method
