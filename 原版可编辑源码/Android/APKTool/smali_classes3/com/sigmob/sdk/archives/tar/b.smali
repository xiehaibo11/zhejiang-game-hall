.class public Lcom/sigmob/sdk/archives/tar/b;
.super Lcom/sigmob/sdk/archives/c;


# static fields
.field private static final b:I = 0x100

.field private static final c:I = 0x2000


# instance fields
.field protected final a:Lcom/sigmob/sdk/archives/tar/d;

.field private d:Z

.field private e:J

.field private f:J

.field private g:[B

.field private h:Lcom/sigmob/sdk/archives/tar/a;


# direct methods
.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 2

    const/16 v0, 0x2800

    const/16 v1, 0x200

    invoke-direct {p0, p1, v0, v1}, Lcom/sigmob/sdk/archives/tar/b;-><init>(Ljava/io/InputStream;II)V

    return-void
.end method

.method public constructor <init>(Ljava/io/InputStream;I)V
    .locals 1

    const/16 v0, 0x200

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/archives/tar/b;-><init>(Ljava/io/InputStream;II)V

    return-void
.end method

.method public constructor <init>(Ljava/io/InputStream;II)V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/c;-><init>()V

    new-instance v0, Lcom/sigmob/sdk/archives/tar/d;

    invoke-direct {v0, p1, p2, p3}, Lcom/sigmob/sdk/archives/tar/d;-><init>(Ljava/io/InputStream;II)V

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->a:Lcom/sigmob/sdk/archives/tar/d;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    return-void
.end method

.method public static a([BI)Z
    .locals 7

    const/4 v0, 0x0

    const/16 v1, 0x109

    if-ge p1, v1, :cond_0

    return v0

    :cond_0
    const-string p1, "ustar\u0000"

    const/4 v1, 0x6

    const/16 v2, 0x101

    invoke-static {p1, p0, v2, v1}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result v3

    const/4 v4, 0x1

    const/4 v5, 0x2

    const/16 v6, 0x107

    if-eqz v3, :cond_1

    const-string v3, "00"

    invoke-static {v3, p0, v6, v5}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result v3

    if-eqz v3, :cond_1

    return v4

    :cond_1
    const-string v3, "ustar "

    invoke-static {v3, p0, v2, v1}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, " \u0000"

    invoke-static {v3, p0, v6, v5}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result v3

    if-nez v3, :cond_2

    const-string v3, "0\u0000"

    invoke-static {v3, p0, v6, v5}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result v3

    if-eqz v3, :cond_3

    :cond_2
    return v4

    :cond_3
    invoke-static {p1, p0, v2, v1}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "\u0000\u0000"

    invoke-static {p1, p0, v6, v5}, Lcom/sigmob/sdk/archives/utils/a;->a(Ljava/lang/String;[BII)Z

    move-result p0

    if-eqz p0, :cond_4

    move v0, v4

    :cond_4
    return v0
.end method

.method private h()[B
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->a:Lcom/sigmob/sdk/archives/tar/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/d;->d()[B

    move-result-object v0

    const/4 v2, 0x1

    if-nez v0, :cond_1

    :goto_0
    iput-boolean v2, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    goto :goto_1

    :cond_1
    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/b;->a:Lcom/sigmob/sdk/archives/tar/d;

    invoke-virtual {v3, v0}, Lcom/sigmob/sdk/archives/tar/d;->a([B)Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    :cond_2
    :goto_1
    iget-boolean v2, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    if-eqz v2, :cond_3

    goto :goto_2

    :cond_3
    move-object v1, v0

    :goto_2
    return-object v1
.end method

.method private i()V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/sigmob/sdk/archives/tar/b$1;

    const-string v1, "UTF-8"

    invoke-direct {v0, p0, p0, v1}, Lcom/sigmob/sdk/archives/tar/b$1;-><init>(Lcom/sigmob/sdk/archives/tar/b;Ljava/io/InputStream;Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    :cond_0
    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    :goto_0
    :try_start_0
    invoke-virtual {v0}, Ljava/io/Reader;->read()I

    move-result v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_5

    add-int/lit8 v3, v3, 0x1

    const/16 v7, 0x20

    if-ne v5, v7, :cond_4

    new-instance v5, Ljava/lang/StringBuffer;

    invoke-direct {v5}, Ljava/lang/StringBuffer;-><init>()V

    :goto_1
    invoke-virtual {v0}, Ljava/io/Reader;->read()I

    move-result v7

    if-eq v7, v6, :cond_3

    add-int/lit8 v3, v3, 0x1

    const/16 v8, 0x3d

    if-ne v7, v8, :cond_2

    invoke-virtual {v5}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v5

    sub-int/2addr v4, v3

    new-array v3, v4, [C

    invoke-virtual {v0, v3}, Ljava/io/Reader;->read([C)I

    move-result v8

    if-ne v8, v4, :cond_1

    new-instance v8, Ljava/lang/String;

    add-int/lit8 v4, v4, -0x1

    invoke-direct {v8, v3, v2, v4}, Ljava/lang/String;-><init>([CII)V

    invoke-interface {v1, v5, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :cond_1
    new-instance v1, Ljava/io/IOException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Failed to read Paxheader. Expected "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " chars, read "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v1

    :cond_2
    int-to-char v7, v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_3
    :goto_2
    move v5, v7

    goto :goto_3

    :cond_4
    mul-int/lit8 v4, v4, 0xa

    add-int/lit8 v5, v5, -0x30

    add-int/2addr v4, v5

    goto :goto_0

    :cond_5
    :goto_3
    if-ne v5, v6, :cond_0

    invoke-virtual {v0}, Ljava/io/Reader;->close()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/b;->a()Lcom/sigmob/sdk/archives/a;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_6
    :goto_4
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_d

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v3, "path"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/archives/tar/a;->a(Ljava/lang/String;)V

    goto :goto_4

    :cond_7
    const-string v3, "linkpath"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/archives/tar/a;->b(Ljava/lang/String;)V

    goto :goto_4

    :cond_8
    const-string v3, "gid"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_9

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/archives/tar/a;->c(I)V

    goto :goto_4

    :cond_9
    const-string v3, "gname"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/archives/tar/a;->d(Ljava/lang/String;)V

    goto :goto_4

    :cond_a
    const-string v3, "uid"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_b

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/archives/tar/a;->b(I)V

    goto :goto_4

    :cond_b
    const-string v3, "uname"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/archives/tar/a;->c(Ljava/lang/String;)V

    goto :goto_4

    :cond_c
    const-string v3, "size"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/sigmob/sdk/archives/tar/a;->b(J)V

    goto/16 :goto_4

    :cond_d
    return-void

    :catchall_0
    move-exception v1

    invoke-virtual {v0}, Ljava/io/Reader;->close()V

    throw v1
.end method

.method private j()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/a;->m()Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/b;->h()[B

    move-result-object v0

    iget-boolean v1, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    if-eqz v1, :cond_1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    goto :goto_0

    :cond_1
    new-instance v1, Lcom/sigmob/sdk/archives/tar/c;

    invoke-direct {v1, v0}, Lcom/sigmob/sdk/archives/tar/c;-><init>([B)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/archives/tar/c;->a()Z

    move-result v0

    if-nez v0, :cond_0

    :cond_2
    :goto_0
    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/archives/a;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/b;->e()Lcom/sigmob/sdk/archives/tar/a;

    move-result-object v0

    return-object v0
.end method

.method protected final a(Lcom/sigmob/sdk/archives/tar/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    return-void
.end method

.method protected final a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    return-void
.end method

.method public a(Lcom/sigmob/sdk/archives/a;)Z
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/archives/tar/a;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/archives/tar/a;->o()Z

    move-result p1

    xor-int/lit8 p1, p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public available()I
    .locals 8

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/tar/b;->e:J

    iget-wide v2, p0, Lcom/sigmob/sdk/archives/tar/b;->f:J

    sub-long v4, v0, v2

    const-wide/32 v6, 0x7fffffff

    cmp-long v4, v4, v6

    if-lez v4, :cond_0

    const v0, 0x7fffffff

    return v0

    :cond_0
    sub-long/2addr v0, v2

    long-to-int v0, v0

    return v0
.end method

.method public close()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->a:Lcom/sigmob/sdk/archives/tar/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/d;->h()V

    return-void
.end method

.method public d()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->a:Lcom/sigmob/sdk/archives/tar/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/d;->b()I

    move-result v0

    return v0
.end method

.method public e()Lcom/sigmob/sdk/archives/tar/a;
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    const-wide/16 v2, 0x0

    if-eqz v0, :cond_3

    iget-wide v4, p0, Lcom/sigmob/sdk/archives/tar/b;->e:J

    iget-wide v6, p0, Lcom/sigmob/sdk/archives/tar/b;->f:J

    :goto_0
    sub-long/2addr v4, v6

    cmp-long v0, v4, v2

    if-lez v0, :cond_2

    invoke-virtual {p0, v4, v5}, Lcom/sigmob/sdk/archives/tar/b;->skip(J)J

    move-result-wide v6

    cmp-long v0, v6, v2

    if-lez v0, :cond_1

    goto :goto_0

    :cond_1
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "failed to skip current tar entry"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_2
    iput-object v1, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    :cond_3
    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/b;->h()[B

    move-result-object v0

    iget-boolean v4, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    if-eqz v4, :cond_4

    iput-object v1, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    return-object v1

    :cond_4
    new-instance v4, Lcom/sigmob/sdk/archives/tar/a;

    invoke-direct {v4, v0}, Lcom/sigmob/sdk/archives/tar/a;-><init>([B)V

    iput-object v4, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    iput-wide v2, p0, Lcom/sigmob/sdk/archives/tar/b;->f:J

    invoke-virtual {v4}, Lcom/sigmob/sdk/archives/tar/a;->b()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/sigmob/sdk/archives/tar/b;->e:J

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/a;->p()Z

    move-result v0

    if-eqz v0, :cond_8

    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    const/16 v2, 0x100

    new-array v2, v2, [B

    :goto_1
    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/archives/tar/b;->read([B)I

    move-result v3

    if-ltz v3, :cond_5

    new-instance v4, Ljava/lang/String;

    const/4 v5, 0x0

    invoke-direct {v4, v2, v5, v3}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/b;->a()Lcom/sigmob/sdk/archives/a;

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    if-nez v2, :cond_6

    return-object v1

    :cond_6
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->length()I

    move-result v1

    if-lez v1, :cond_7

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->charAt(I)C

    move-result v1

    if-nez v1, :cond_7

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->deleteCharAt(I)Ljava/lang/StringBuffer;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/archives/tar/a;->a(Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/a;->q()Z

    move-result v0

    if-eqz v0, :cond_9

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/b;->i()V

    :cond_9
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/a;->o()Z

    move-result v0

    if-eqz v0, :cond_a

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/b;->j()V

    :cond_a
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    return-object v0
.end method

.method protected final f()Lcom/sigmob/sdk/archives/tar/a;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->h:Lcom/sigmob/sdk/archives/tar/a;

    return-object v0
.end method

.method protected final g()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/archives/tar/b;->d:Z

    return v0
.end method

.method public read([BII)I
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/tar/b;->f:J

    iget-wide v2, p0, Lcom/sigmob/sdk/archives/tar/b;->e:J

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    int-to-long v4, p3

    add-long/2addr v4, v0

    cmp-long v4, v4, v2

    if-lez v4, :cond_1

    sub-long/2addr v2, v0

    long-to-int p3, v2

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    array-length v2, v0

    if-le p3, v2, :cond_2

    array-length v0, v0

    goto :goto_0

    :cond_2
    move v0, p3

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    invoke-static {v2, v1, p1, p2, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    array-length v3, v2

    if-lt v0, v3, :cond_3

    const/4 v2, 0x0

    iput-object v2, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    goto :goto_1

    :cond_3
    array-length v3, v2

    sub-int/2addr v3, v0

    new-array v4, v3, [B

    invoke-static {v2, v0, v4, v1, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iput-object v4, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    :goto_1
    add-int/lit8 v2, v0, 0x0

    sub-int/2addr p3, v0

    add-int/2addr p2, v0

    goto :goto_2

    :cond_4
    move v2, v1

    :goto_2
    if-lez p3, :cond_7

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/b;->a:Lcom/sigmob/sdk/archives/tar/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/archives/tar/d;->d()[B

    move-result-object v0

    if-eqz v0, :cond_6

    array-length v3, v0

    invoke-virtual {p0, v3}, Lcom/sigmob/sdk/archives/tar/b;->a(I)V

    array-length v3, v0

    if-le v3, p3, :cond_5

    invoke-static {v0, v1, p1, p2, p3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    sub-int/2addr v3, p3

    new-array v4, v3, [B

    iput-object v4, p0, Lcom/sigmob/sdk/archives/tar/b;->g:[B

    invoke-static {v0, p3, v4, v1, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    move v3, p3

    goto :goto_3

    :cond_5
    invoke-static {v0, v1, p1, p2, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    :goto_3
    add-int/2addr v2, v3

    sub-int/2addr p3, v3

    add-int/2addr p2, v3

    goto :goto_2

    :cond_6
    new-instance p1, Ljava/io/IOException;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "unexpected EOF with "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, " bytes unread. Occured at byte: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/b;->c()J

    move-result-wide v0

    invoke-virtual {p2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_7
    iget-wide p1, p0, Lcom/sigmob/sdk/archives/tar/b;->f:J

    int-to-long v0, v2

    add-long/2addr p1, v0

    iput-wide p1, p0, Lcom/sigmob/sdk/archives/tar/b;->f:J

    return v2
.end method

.method public declared-synchronized reset()V
    .locals 0

    monitor-enter p0

    monitor-exit p0

    return-void
.end method

.method public skip(J)J
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/16 v0, 0x2000

    new-array v1, v0, [B

    move-wide v2, p1

    :goto_0
    const-wide/16 v4, 0x0

    cmp-long v4, v2, v4

    if-lez v4, :cond_2

    int-to-long v4, v0

    cmp-long v6, v2, v4

    if-lez v6, :cond_0

    goto :goto_1

    :cond_0
    move-wide v4, v2

    :goto_1
    long-to-int v4, v4

    const/4 v5, 0x0

    invoke-virtual {p0, v1, v5, v4}, Lcom/sigmob/sdk/archives/tar/b;->read([BII)I

    move-result v4

    const/4 v5, -0x1

    if-ne v4, v5, :cond_1

    goto :goto_2

    :cond_1
    int-to-long v4, v4

    sub-long/2addr v2, v4

    goto :goto_0

    :cond_2
    :goto_2
    sub-long/2addr p1, v2

    return-wide p1
.end method
