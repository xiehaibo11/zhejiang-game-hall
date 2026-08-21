.class public Lcom/igexin/push/core/h;
.super Ljava/lang/Object;


# static fields
.field private static d:Lcom/igexin/push/core/h;


# instance fields
.field public a:J

.field private b:Lcom/igexin/push/core/k;

.field private c:J


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0x3a980

    iput-wide v0, p0, Lcom/igexin/push/core/h;->a:J

    sget-object v0, Lcom/igexin/push/core/k;->a:Lcom/igexin/push/core/k;

    iput-object v0, p0, Lcom/igexin/push/core/h;->b:Lcom/igexin/push/core/k;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/igexin/push/core/h;->c:J

    return-void
.end method

.method public static a()Lcom/igexin/push/core/h;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/h;->d:Lcom/igexin/push/core/h;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/h;

    invoke-direct {v0}, Lcom/igexin/push/core/h;-><init>()V

    sput-object v0, Lcom/igexin/push/core/h;->d:Lcom/igexin/push/core/h;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/h;->d:Lcom/igexin/push/core/h;

    return-object v0
.end method

.method private b(Lcom/igexin/push/core/j;)V
    .locals 9

    sget-object v0, Lcom/igexin/push/core/i;->b:[I

    invoke-virtual {p1}, Lcom/igexin/push/core/j;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    const-wide/32 v1, 0xea60

    if-eq p1, v0, :cond_2

    const/4 v0, 0x2

    const-wide/32 v3, 0x3a980

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    goto :goto_2

    :cond_0
    invoke-virtual {p0, v3, v4}, Lcom/igexin/push/core/h;->a(J)V

    goto :goto_0

    :cond_1
    iget-wide v5, p0, Lcom/igexin/push/core/h;->c:J

    const-wide/16 v7, 0x1

    add-long/2addr v5, v7

    iput-wide v5, p0, Lcom/igexin/push/core/h;->c:J

    const-wide/16 v7, 0x2

    cmp-long p1, v5, v7

    if-ltz p1, :cond_3

    iget-wide v5, p0, Lcom/igexin/push/core/h;->a:J

    sub-long/2addr v5, v1

    invoke-static {v5, v6, v3, v4}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/igexin/push/core/h;->a(J)V

    sget-object p1, Lcom/igexin/push/core/k;->b:Lcom/igexin/push/core/k;

    goto :goto_1

    :cond_2
    iget-wide v3, p0, Lcom/igexin/push/core/h;->a:J

    add-long/2addr v3, v1

    const-wide/32 v0, 0x668a0

    invoke-static {v3, v4, v0, v1}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/igexin/push/core/h;->a(J)V

    :goto_0
    sget-object p1, Lcom/igexin/push/core/k;->a:Lcom/igexin/push/core/k;

    :goto_1
    invoke-virtual {p0, p1}, Lcom/igexin/push/core/h;->a(Lcom/igexin/push/core/k;)V

    :cond_3
    :goto_2
    return-void
.end method

.method private c(Lcom/igexin/push/core/j;)V
    .locals 7

    sget-object v0, Lcom/igexin/push/core/i;->b:[I

    invoke-virtual {p1}, Lcom/igexin/push/core/j;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v0, 0x2

    const-wide/32 v1, 0x3a980

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p0, v1, v2}, Lcom/igexin/push/core/h;->a(J)V

    sget-object p1, Lcom/igexin/push/core/k;->a:Lcom/igexin/push/core/k;

    goto :goto_0

    :cond_1
    iget-wide v3, p0, Lcom/igexin/push/core/h;->a:J

    const-wide/32 v5, 0xea60

    sub-long/2addr v3, v5

    invoke-static {v3, v4, v1, v2}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v3

    invoke-virtual {p0, v3, v4}, Lcom/igexin/push/core/h;->a(J)V

    iget-wide v3, p0, Lcom/igexin/push/core/h;->c:J

    const-wide/16 v5, 0x1

    add-long/2addr v3, v5

    iput-wide v3, p0, Lcom/igexin/push/core/h;->c:J

    const-wide/16 v5, 0x2

    cmp-long p1, v3, v5

    if-ltz p1, :cond_3

    invoke-virtual {p0, v1, v2}, Lcom/igexin/push/core/h;->a(J)V

    sget-object p1, Lcom/igexin/push/core/k;->c:Lcom/igexin/push/core/k;

    goto :goto_0

    :cond_2
    sget-object p1, Lcom/igexin/push/core/k;->b:Lcom/igexin/push/core/k;

    :goto_0
    invoke-virtual {p0, p1}, Lcom/igexin/push/core/h;->a(Lcom/igexin/push/core/k;)V

    :cond_3
    :goto_1
    return-void
.end method

.method private d(Lcom/igexin/push/core/j;)V
    .locals 3

    sget-object v0, Lcom/igexin/push/core/i;->b:[I

    invoke-virtual {p1}, Lcom/igexin/push/core/j;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    const-wide/32 v1, 0x3a980

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    const/4 v0, 0x4

    if-eq p1, v0, :cond_1

    goto :goto_1

    :cond_0
    sget-object p1, Lcom/igexin/push/core/k;->c:Lcom/igexin/push/core/k;

    goto :goto_0

    :cond_1
    invoke-virtual {p0, v1, v2}, Lcom/igexin/push/core/h;->a(J)V

    sget-object p1, Lcom/igexin/push/core/k;->a:Lcom/igexin/push/core/k;

    :goto_0
    invoke-virtual {p0, p1}, Lcom/igexin/push/core/h;->a(Lcom/igexin/push/core/k;)V

    :goto_1
    return-void
.end method


# virtual methods
.method public a(J)V
    .locals 0

    iput-wide p1, p0, Lcom/igexin/push/core/h;->a:J

    return-void
.end method

.method public a(Lcom/igexin/push/core/j;)V
    .locals 2

    sget-object v0, Lcom/igexin/push/core/i;->a:[I

    iget-object v1, p0, Lcom/igexin/push/core/h;->b:Lcom/igexin/push/core/k;

    invoke-virtual {v1}, Lcom/igexin/push/core/k;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-direct {p0, p1}, Lcom/igexin/push/core/h;->d(Lcom/igexin/push/core/j;)V

    goto :goto_0

    :cond_1
    invoke-direct {p0, p1}, Lcom/igexin/push/core/h;->c(Lcom/igexin/push/core/j;)V

    goto :goto_0

    :cond_2
    invoke-direct {p0, p1}, Lcom/igexin/push/core/h;->b(Lcom/igexin/push/core/j;)V

    :goto_0
    return-void
.end method

.method public a(Lcom/igexin/push/core/k;)V
    .locals 2

    iput-object p1, p0, Lcom/igexin/push/core/h;->b:Lcom/igexin/push/core/k;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/igexin/push/core/h;->c:J

    return-void
.end method

.method public b()J
    .locals 5

    iget-wide v0, p0, Lcom/igexin/push/core/h;->a:J

    sget v2, Lcom/igexin/push/config/j;->d:I

    if-lez v2, :cond_0

    sget v0, Lcom/igexin/push/config/j;->d:I

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    :cond_0
    sget-boolean v2, Lcom/igexin/push/core/d;->i:Z

    const-wide/32 v3, 0x36ee80

    if-nez v2, :cond_1

    :goto_0
    move-wide v0, v3

    goto :goto_1

    :cond_1
    sget-boolean v2, Lcom/igexin/push/core/d;->n:Z

    if-nez v2, :cond_2

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/e/a;->a()Z

    move-result v2

    if-nez v2, :cond_3

    goto :goto_0

    :cond_3
    :goto_1
    return-wide v0
.end method
