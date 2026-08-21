.class public Lcom/igexin/push/d/c/b;
.super Lcom/igexin/push/d/c/c;


# instance fields
.field public a:I

.field public b:I

.field public c:J

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/Object;

.field public f:Ljava/lang/Object;

.field public g:Ljava/lang/String;

.field public h:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/igexin/push/d/c/c;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    const-string v0, "UTF-8"

    iput-object v0, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    const/16 v0, 0x19

    iput v0, p0, Lcom/igexin/push/d/c/b;->i:I

    const/16 v0, 0x14

    iput-byte v0, p0, Lcom/igexin/push/d/c/b;->j:B

    return-void
.end method


# virtual methods
.method public a([B)V
    .locals 6

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/igexin/b/a/b/f;->c([BI)I

    move-result v1

    iput v1, p0, Lcom/igexin/push/d/c/b;->a:I

    const/4 v1, 0x2

    aget-byte v2, p1, v1

    const/16 v3, 0xc0

    and-int/2addr v2, v3

    iput v2, p0, Lcom/igexin/push/d/c/b;->b:I

    aget-byte v1, p1, v1

    invoke-virtual {p0, v1}, Lcom/igexin/push/d/c/b;->a(B)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    const/4 v1, 0x3

    invoke-static {p1, v1}, Lcom/igexin/b/a/b/f;->e([BI)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/igexin/push/d/c/b;->c:J

    const/16 v1, 0xb

    aget-byte v1, p1, v1

    and-int/lit16 v1, v1, 0xff

    const/16 v2, 0xc

    :try_start_0
    new-instance v4, Ljava/lang/String;

    iget-object v5, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-direct {v4, p1, v2, v1, v5}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    iput-object v4, p0, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    add-int/2addr v2, v1

    move v1, v0

    :goto_0
    aget-byte v4, p1, v2

    and-int/lit8 v4, v4, 0x7f

    or-int/2addr v1, v4

    aget-byte v4, p1, v2

    and-int/lit16 v4, v4, 0x80

    if-eqz v4, :cond_0

    shl-int/lit8 v1, v1, 0x7

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    if-lez v1, :cond_2

    iget v4, p0, Lcom/igexin/push/d/c/b;->b:I

    if-ne v4, v3, :cond_1

    new-array v3, v1, [B

    iput-object v3, p0, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    invoke-static {p1, v2, v3, v0, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_1

    :cond_1
    :try_start_1
    new-instance v3, Ljava/lang/String;

    iget-object v4, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-direct {v3, p1, v2, v1, v4}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    iput-object v3, p0, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_2
    :goto_1
    add-int/2addr v2, v1

    move v1, v0

    :goto_2
    aget-byte v3, p1, v2

    and-int/lit8 v3, v3, 0x7f

    or-int/2addr v1, v3

    aget-byte v3, p1, v2

    and-int/lit16 v3, v3, 0x80

    if-eqz v3, :cond_3

    shl-int/lit8 v1, v1, 0x7

    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    :cond_3
    add-int/lit8 v2, v2, 0x1

    if-lez v1, :cond_4

    new-array v3, v1, [B

    iput-object v3, p0, Lcom/igexin/push/d/c/b;->f:Ljava/lang/Object;

    invoke-static {p1, v2, v3, v0, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    :cond_4
    add-int/2addr v2, v1

    array-length v0, p1

    if-le v0, v2, :cond_5

    add-int/lit8 v0, v2, 0x1

    aget-byte v1, p1, v2

    and-int/lit16 v1, v1, 0xff

    :try_start_2
    new-instance v2, Ljava/lang/String;

    iget-object v3, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-direct {v2, p1, v0, v1, v3}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    iput-object v2, p0, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :cond_5
    return-void
.end method

.method public final b()V
    .locals 1

    const/16 v0, 0x80

    iput v0, p0, Lcom/igexin/push/d/c/b;->b:I

    return-void
.end method

.method public c()[B
    .locals 13

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/d/c/b;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1

    const-string v2, ""

    iget-object v3, p0, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    iget v2, p0, Lcom/igexin/push/d/c/b;->b:I

    const/16 v3, 0xc0

    if-ne v2, v3, :cond_0

    iget-object v2, p0, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    check-cast v2, [B

    check-cast v2, [B

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/igexin/push/d/c/b;->e:Ljava/lang/Object;

    check-cast v2, Ljava/lang/String;

    iget-object v3, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    goto :goto_0

    :cond_1
    move-object v2, v0

    :goto_0
    iget-object v3, p0, Lcom/igexin/push/d/c/b;->f:Ljava/lang/Object;

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/igexin/push/d/c/b;->f:Ljava/lang/Object;

    check-cast v3, [B

    check-cast v3, [B

    goto :goto_1

    :cond_2
    move-object v3, v0

    :goto_1
    iget-object v4, p0, Lcom/igexin/push/d/c/b;->g:Ljava/lang/String;

    iget-object v5, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v4

    const/4 v5, 0x0

    if-nez v2, :cond_3

    move v6, v5

    goto :goto_2

    :cond_3
    array-length v6, v2

    :goto_2
    if-nez v3, :cond_4

    move v7, v5

    goto :goto_3

    :cond_4
    array-length v7, v3

    :goto_3
    invoke-static {v6}, Lcom/igexin/b/a/b/f;->a(I)[B

    move-result-object v8

    invoke-static {v7}, Lcom/igexin/b/a/b/f;->a(I)[B

    move-result-object v9

    array-length v10, v1

    add-int/lit8 v10, v10, 0xd

    array-length v11, v8

    add-int/2addr v10, v11

    add-int/2addr v10, v6

    array-length v11, v9

    add-int/2addr v10, v11

    add-int/2addr v10, v7

    array-length v11, v4

    add-int/2addr v10, v11

    new-array v0, v10, [B

    iget v10, p0, Lcom/igexin/push/d/c/b;->a:I

    invoke-static {v10, v0, v5}, Lcom/igexin/b/a/b/f;->b(I[BI)I

    move-result v10

    iget v11, p0, Lcom/igexin/push/d/c/b;->b:I

    iget-object v12, p0, Lcom/igexin/push/d/c/b;->h:Ljava/lang/String;

    invoke-virtual {p0, v12}, Lcom/igexin/push/d/c/b;->a(Ljava/lang/String;)I

    move-result v12

    or-int/2addr v11, v12

    invoke-static {v11, v0, v10}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v11

    add-int/2addr v10, v11

    iget-wide v11, p0, Lcom/igexin/push/d/c/b;->c:J

    invoke-static {v11, v12, v0, v10}, Lcom/igexin/b/a/b/f;->a(J[BI)I

    move-result v11

    add-int/2addr v10, v11

    array-length v11, v1

    invoke-static {v11, v0, v10}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v11

    add-int/2addr v10, v11

    array-length v11, v1

    invoke-static {v1, v5, v0, v10, v11}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    add-int/2addr v10, v1

    array-length v1, v8

    invoke-static {v8, v5, v0, v10, v1}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    add-int/2addr v10, v1

    if-lez v6, :cond_5

    invoke-static {v2, v5, v0, v10, v6}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    add-int/2addr v10, v1

    :cond_5
    array-length v1, v9

    invoke-static {v9, v5, v0, v10, v1}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    add-int/2addr v10, v1

    if-lez v7, :cond_6

    invoke-static {v3, v5, v0, v10, v7}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    add-int/2addr v10, v1

    :cond_6
    array-length v1, v4

    invoke-static {v1, v0, v10}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v1

    add-int/2addr v10, v1

    array-length v1, v4

    invoke-static {v4, v5, v0, v10, v1}, Lcom/igexin/b/a/b/f;->a([BI[BII)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    if-eqz v0, :cond_7

    array-length v1, v0

    int-to-long v1, v1

    sget-wide v3, Lcom/igexin/push/config/j;->t:J

    cmp-long v1, v1, v3

    if-ltz v1, :cond_7

    iget-byte v1, p0, Lcom/igexin/push/d/c/b;->j:B

    or-int/lit16 v1, v1, 0x80

    int-to-byte v1, v1

    iput-byte v1, p0, Lcom/igexin/push/d/c/b;->j:B

    :cond_7
    return-object v0
.end method
