.class public abstract Lcom/tkay/expressad/exoplayer/c/a;
.super Ljava/lang/Object;


# instance fields
.field private a:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private d(I)V
    .locals 1

    .line 82
    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    not-int p1, p1

    and-int/2addr p1, v0

    iput p1, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    const/4 v0, 0x0

    .line 32
    iput v0, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 63
    iput p1, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    return-void
.end method

.method public final b(I)V
    .locals 1

    .line 73
    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    or-int/2addr p1, v0

    iput p1, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    return-void
.end method

.method public final b()Z
    .locals 1

    const/high16 v0, -0x80000000

    .line 39
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/c/a;->c(I)Z

    move-result v0

    return v0
.end method

.method public final c()Z
    .locals 1

    const/4 v0, 0x4

    .line 46
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/c/a;->c(I)Z

    move-result v0

    return v0
.end method

.method protected final c(I)Z
    .locals 1

    .line 92
    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/a;->a:I

    and-int/2addr v0, p1

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final d()Z
    .locals 1

    const/4 v0, 0x1

    .line 53
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/c/a;->c(I)Z

    move-result v0

    return v0
.end method
