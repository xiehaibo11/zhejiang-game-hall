.class public Lcom/tkay/expressad/foundation/g/f/d/f;
.super Lcom/tkay/expressad/foundation/g/f/i;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/foundation/g/f/i<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field private static final c:Ljava/lang/String;


# instance fields
.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private e:[Lcom/tkay/expressad/foundation/g/f/c/b;

.field private f:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    const-class v0, Lcom/tkay/expressad/foundation/g/f/d/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/d/f;->c:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(ILjava/lang/String;Ljava/util/Map;[Lcom/tkay/expressad/foundation/g/f/c/b;Lcom/tkay/expressad/foundation/g/f/e;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;[",
            "Lcom/tkay/expressad/foundation/g/f/c/b;",
            "Lcom/tkay/expressad/foundation/g/f/e<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 29
    invoke-direct {p0, p1, p2, p5}, Lcom/tkay/expressad/foundation/g/f/i;-><init>(ILjava/lang/String;Lcom/tkay/expressad/foundation/g/f/e;)V

    const-string p1, "---------Ij5ei4KM7KM7ae0KM7cH2ae0Ij5Ef1"

    .line 25
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->f:Ljava/lang/String;

    .line 30
    iput-object p3, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->d:Ljava/util/Map;

    .line 31
    iput-object p4, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->e:[Lcom/tkay/expressad/foundation/g/f/c/b;

    return-void
.end method


# virtual methods
.method protected final a(Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/f/c;",
            ")",
            "Lcom/tkay/expressad/foundation/g/f/k<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 107
    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p1, Lcom/tkay/expressad/foundation/g/f/f/c;->b:[B

    iget-object v2, p1, Lcom/tkay/expressad/foundation/g/f/f/c;->d:Ljava/util/List;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/f/g/e;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 108
    invoke-static {v0, p1}, Lcom/tkay/expressad/foundation/g/f/k;->a(Ljava/lang/Object;Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception v0

    .line 110
    invoke-virtual {v0}, Ljava/io/UnsupportedEncodingException;->getMessage()Ljava/lang/String;

    .line 111
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/16 v1, 0x8

    invoke-direct {v0, v1, p1}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/k;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/io/OutputStream;)V
    .locals 14

    const-string v0, "\r\n"

    .line 58
    check-cast p1, Ljava/io/DataOutputStream;

    .line 60
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->e:[Lcom/tkay/expressad/foundation/g/f/c/b;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "--"

    if-eqz v1, :cond_3

    .line 61
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->e:[Lcom/tkay/expressad/foundation/g/f/c/b;

    array-length v3, v1

    const/4 v4, 0x0

    move v5, v4

    :goto_0
    if-ge v5, v3, :cond_3

    aget-object v6, v1, v5

    .line 62
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    .line 63
    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 64
    iget-object v8, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->f:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 65
    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 66
    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "Content-Disposition: form-data;name=\""

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->f()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\";filename=\""

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 67
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->e()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\"\r\n"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    .line 66
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 68
    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "Content-Type: "

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->g()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "\r\n\r\n"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 69
    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/String;->getBytes()[B

    move-result-object v7

    invoke-virtual {p1, v7}, Ljava/io/DataOutputStream;->write([B)V

    .line 71
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->c()Ljava/io/InputStream;

    move-result-object v7

    if-eqz v7, :cond_2

    const/16 v7, 0x400

    new-array v7, v7, [B

    move v8, v4

    .line 75
    :cond_0
    :goto_1
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->c()Ljava/io/InputStream;

    move-result-object v9

    invoke-virtual {v9, v7}, Ljava/io/InputStream;->read([B)I

    move-result v9

    const/4 v10, -0x1

    if-eq v9, v10, :cond_1

    .line 76
    invoke-virtual {p1, v7, v4, v9}, Ljava/io/DataOutputStream;->write([BII)V

    add-int/2addr v8, v9

    .line 78
    iget-object v9, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->b:Lcom/tkay/expressad/foundation/g/f/e;

    if-eqz v9, :cond_0

    .line 79
    iget-object v9, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->b:Lcom/tkay/expressad/foundation/g/f/e;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->a()J

    move-result-wide v10

    int-to-long v12, v8

    invoke-interface {v9, v10, v11, v12, v13}, Lcom/tkay/expressad/foundation/g/f/e;->a(JJ)V

    goto :goto_1

    .line 82
    :cond_1
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->c()Ljava/io/InputStream;

    move-result-object v6

    invoke-virtual {v6}, Ljava/io/InputStream;->close()V

    goto :goto_2

    .line 84
    :cond_2
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->d()[B

    move-result-object v7

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/g/f/c/b;->d()[B

    move-result-object v6

    array-length v6, v6

    invoke-virtual {p1, v7, v4, v6}, Ljava/io/DataOutputStream;->write([BII)V

    .line 86
    :goto_2
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v6

    invoke-virtual {p1, v6}, Ljava/io/DataOutputStream;->write([B)V

    add-int/lit8 v5, v5, 0x1

    goto/16 :goto_0

    .line 89
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "--\r\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 90
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->flush()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 96
    :try_start_2
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 98
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_3

    :catch_1
    move-exception v0

    .line 92
    :try_start_3
    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->b:Lcom/tkay/expressad/foundation/g/f/e;

    new-instance v1, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x2

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    invoke-interface {v0, v1}, Lcom/tkay/expressad/foundation/g/f/e;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 96
    :try_start_4
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    return-void

    :catch_2
    move-exception p1

    .line 98
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    return-void

    .line 96
    :goto_3
    :try_start_5
    invoke-virtual {p1}, Ljava/io/DataOutputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_4

    :catch_3
    move-exception p1

    .line 98
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    .line 100
    :goto_4
    throw v0
.end method

.method public final h()[B
    .locals 6

    .line 44
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 45
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->d:Ljava/util/Map;

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

    const-string v3, "--"

    .line 46
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 47
    iget-object v3, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->f:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\r\n"

    .line 48
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 49
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Content-Disposition: form-data; name=\""

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\"\r\n\r\n"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 50
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 51
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 53
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method public final i()V
    .locals 3

    .line 36
    invoke-super {p0}, Lcom/tkay/expressad/foundation/g/f/i;->i()V

    .line 37
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 38
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "multipart/form-data; boundary="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/foundation/g/f/d/f;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Content-Type"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 39
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/foundation/g/f/d/f;->a(Ljava/util/Map;)V

    return-void
.end method
