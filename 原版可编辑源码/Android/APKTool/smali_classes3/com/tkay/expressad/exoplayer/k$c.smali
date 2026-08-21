.class final Lcom/tkay/expressad/exoplayer/k$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "c"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/exoplayer/u;

.field private b:I

.field private c:Z

.field private d:I


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 1711
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 1711
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/k$c;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/k$c;)I
    .locals 0

    .line 1711
    iget p0, p0, Lcom/tkay/expressad/exoplayer/k$c;->b:I

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/k$c;)Z
    .locals 0

    .line 1711
    iget-boolean p0, p0, Lcom/tkay/expressad/exoplayer/k$c;->c:Z

    return p0
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/k$c;)I
    .locals 0

    .line 1711
    iget p0, p0, Lcom/tkay/expressad/exoplayer/k$c;->d:I

    return p0
.end method


# virtual methods
.method public final a(I)V
    .locals 1

    .line 1729
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k$c;->b:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/k$c;->b:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/u;)Z
    .locals 1

    .line 1719
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k$c;->a:Lcom/tkay/expressad/exoplayer/u;

    if-ne p1, v0, :cond_1

    iget p1, p0, Lcom/tkay/expressad/exoplayer/k$c;->b:I

    if-gtz p1, :cond_1

    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/k$c;->c:Z

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method public final b(I)V
    .locals 3

    .line 1733
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k$c;->c:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/k$c;->d:I

    const/4 v2, 0x4

    if-eq v0, v2, :cond_1

    if-ne p1, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 1737
    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    return-void

    .line 1740
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/k$c;->c:Z

    .line 1741
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k$c;->d:I

    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/u;)V
    .locals 0

    .line 1723
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k$c;->a:Lcom/tkay/expressad/exoplayer/u;

    const/4 p1, 0x0

    .line 1724
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k$c;->b:I

    .line 1725
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/k$c;->c:Z

    return-void
.end method
