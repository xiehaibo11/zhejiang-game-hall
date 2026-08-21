.class final Lcom/tkay/expressad/exoplayer/h/q$a;
.super Lcom/tkay/expressad/exoplayer/h/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/q;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/ae;)V
    .locals 0

    .line 171
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/p;-><init>(Lcom/tkay/expressad/exoplayer/ae;)V

    return-void
.end method


# virtual methods
.method public final a(IIZ)I
    .locals 1

    .line 177
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/q$a;->b:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(IIZ)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_0

    .line 179
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/h/q$a;->b(Z)I

    move-result p1

    :cond_0
    return p1
.end method

.method public final b(IIZ)I
    .locals 1

    .line 186
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/q$a;->b:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/ae;->b(IIZ)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_0

    .line 188
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/h/q$a;->a(Z)I

    move-result p1

    :cond_0
    return p1
.end method
