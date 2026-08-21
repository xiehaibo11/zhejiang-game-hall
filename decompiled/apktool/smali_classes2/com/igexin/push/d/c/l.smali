.class public Lcom/igexin/push/d/c/l;
.super Lcom/igexin/push/d/c/c;


# instance fields
.field public a:Z

.field public b:Z

.field public c:Ljava/lang/String;

.field public d:Ljava/lang/String;

.field public e:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/igexin/push/d/c/c;-><init>()V

    const/16 v0, 0x25

    iput v0, p0, Lcom/igexin/push/d/c/l;->i:I

    return-void
.end method


# virtual methods
.method public a([B)V
    .locals 5

    const/4 v0, 0x0

    aget-byte v1, p1, v0

    and-int/lit8 v2, v1, 0x40

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v0

    :goto_0
    iput-boolean v2, p0, Lcom/igexin/push/d/c/l;->a:Z

    and-int/lit16 v2, v1, 0x80

    if-eqz v2, :cond_1

    move v0, v3

    :cond_1
    iput-boolean v0, p0, Lcom/igexin/push/d/c/l;->b:Z

    if-eqz v0, :cond_2

    invoke-virtual {p0, v1}, Lcom/igexin/push/d/c/l;->a(B)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/d/c/l;->c:Ljava/lang/String;

    invoke-static {p1, v3}, Lcom/igexin/b/a/b/f;->c([BI)I

    move-result v0

    add-int/lit8 v1, v0, 0x2

    add-int/2addr v3, v1

    :try_start_0
    new-instance v1, Ljava/lang/String;

    const/4 v2, 0x3

    iget-object v4, p0, Lcom/igexin/push/d/c/l;->c:Ljava/lang/String;

    invoke-direct {v1, p1, v2, v0, v4}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V

    iput-object v1, p0, Lcom/igexin/push/d/c/l;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_2
    array-length v0, p1

    if-le v0, v3, :cond_3

    invoke-static {p1, v3}, Lcom/igexin/b/a/b/f;->e([BI)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/d/c/l;->e:J

    :cond_3
    return-void
.end method

.method public c()[B
    .locals 6

    iget-boolean v0, p0, Lcom/igexin/push/d/c/l;->a:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/16 v0, 0x40

    int-to-byte v0, v0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    iget-boolean v2, p0, Lcom/igexin/push/d/c/l;->b:Z

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    or-int/lit16 v0, v0, 0x80

    int-to-byte v0, v0

    const/4 v2, 0x3

    :try_start_0
    iget-object v4, p0, Lcom/igexin/push/d/c/l;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/igexin/push/d/c/l;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v3

    array-length v4, v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/2addr v2, v4

    goto :goto_1

    :catch_0
    move v4, v1

    :goto_1
    iget-object v5, p0, Lcom/igexin/push/d/c/l;->c:Ljava/lang/String;

    invoke-virtual {p0, v5}, Lcom/igexin/push/d/c/l;->a(Ljava/lang/String;)I

    move-result v5

    or-int/2addr v0, v5

    int-to-byte v0, v0

    goto :goto_2

    :cond_1
    const/4 v2, 0x1

    move v4, v1

    :goto_2
    add-int/lit8 v2, v2, 0x8

    new-array v2, v2, [B

    invoke-static {v0, v2, v1}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v0

    iget-boolean v5, p0, Lcom/igexin/push/d/c/l;->b:Z

    if-eqz v5, :cond_2

    invoke-static {v4, v2, v0}, Lcom/igexin/b/a/b/f;->b(I[BI)I

    move-result v0

    if-eqz v3, :cond_2

    invoke-static {v3, v1, v2, v0, v4}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    add-int/2addr v0, v1

    :cond_2
    iget-wide v3, p0, Lcom/igexin/push/d/c/l;->e:J

    invoke-static {v3, v4, v2, v0}, Lcom/igexin/b/a/b/f;->a(J[BI)I

    return-object v2
.end method
