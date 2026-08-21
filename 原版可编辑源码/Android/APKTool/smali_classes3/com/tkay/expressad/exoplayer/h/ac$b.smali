.class final Lcom/tkay/expressad/exoplayer/h/ac$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/t$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/ac;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "b"
.end annotation


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/j/k;

.field private final b:Lcom/tkay/expressad/exoplayer/j/h;

.field private c:I

.field private d:[B


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/j/h;)V
    .locals 0

    .line 342
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 343
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    .line 344
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->b:Lcom/tkay/expressad/exoplayer/j/h;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I
    .locals 0

    .line 333
    iget p0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->c:I

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/h/ac$b;)[B
    .locals 0

    .line 333
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final b()V
    .locals 5

    const/4 v0, 0x0

    .line 355
    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->c:I

    .line 358
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->b:Lcom/tkay/expressad/exoplayer/j/h;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/j/h;->a(Lcom/tkay/expressad/exoplayer/j/k;)J

    :goto_0
    const/4 v1, -0x1

    if-eq v0, v1, :cond_2

    .line 362
    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->c:I

    add-int/2addr v1, v0

    iput v1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->c:I

    .line 363
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    if-nez v0, :cond_0

    const/16 v0, 0x400

    new-array v0, v0, [B

    .line 364
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    goto :goto_1

    .line 365
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    array-length v0, v0

    if-ne v1, v0, :cond_1

    .line 366
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    array-length v1, v1

    mul-int/lit8 v1, v1, 0x2

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    .line 368
    :cond_1
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->b:Lcom/tkay/expressad/exoplayer/j/h;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->c:I

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->d:[B

    array-length v3, v3

    iget v4, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->c:I

    sub-int/2addr v3, v4

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/j/h;->a([BII)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 371
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->b:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(Lcom/tkay/expressad/exoplayer/j/h;)V

    return-void

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ac$b;->b:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Lcom/tkay/expressad/exoplayer/j/h;)V

    .line 372
    throw v0
.end method
