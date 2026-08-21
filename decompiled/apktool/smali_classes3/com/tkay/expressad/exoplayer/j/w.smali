.class public final Lcom/tkay/expressad/exoplayer/j/w;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/h;


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/j/h;

.field private final b:Lcom/tkay/expressad/exoplayer/k/v;

.field private final c:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/k/v;I)V
    .locals 0

    .line 51
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 52
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/j/h;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/w;->a:Lcom/tkay/expressad/exoplayer/j/h;

    .line 53
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/k/v;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/w;->b:Lcom/tkay/expressad/exoplayer/k/v;

    .line 54
    iput p3, p0, Lcom/tkay/expressad/exoplayer/j/w;->c:I

    return-void
.end method


# virtual methods
.method public final a([BII)I
    .locals 2

    .line 65
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/w;->b:Lcom/tkay/expressad/exoplayer/k/v;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/j/w;->c:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/v;->a(I)V

    .line 66
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/w;->a:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/j/h;->a([BII)I

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;)J
    .locals 2

    .line 59
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/w;->b:Lcom/tkay/expressad/exoplayer/k/v;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/j/w;->c:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/k/v;->a(I)V

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/w;->a:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/j/h;->a(Lcom/tkay/expressad/exoplayer/j/k;)J

    move-result-wide v0

    return-wide v0
.end method

.method public final a()Landroid/net/Uri;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/w;->a:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/h;->a()Landroid/net/Uri;

    move-result-object v0

    return-object v0
.end method

.method public final b()V
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/w;->a:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/h;->b()V

    return-void
.end method
