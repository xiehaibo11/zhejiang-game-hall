.class final Lcom/tkay/expressad/exoplayer/h/b/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/b/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field public a:Lcom/tkay/expressad/exoplayer/m;

.field private final b:I

.field private final c:I

.field private final d:Lcom/tkay/expressad/exoplayer/m;

.field private e:Lcom/tkay/expressad/exoplayer/e/m;


# direct methods
.method public constructor <init>(IILcom/tkay/expressad/exoplayer/m;)V
    .locals 0

    .line 166
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 167
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->b:I

    .line 168
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->c:I

    .line 169
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->d:Lcom/tkay/expressad/exoplayer/m;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->e:Lcom/tkay/expressad/exoplayer/e/m;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I

    move-result p1

    return p1
.end method

.method public final a(JIIILcom/tkay/expressad/exoplayer/e/m$a;)V
    .locals 7

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->e:Lcom/tkay/expressad/exoplayer/e/m;

    move-wide v1, p1

    move v3, p3

    move v4, p4

    move v5, p5

    move-object v6, p6

    invoke-interface/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/e/m;->a(JIIILcom/tkay/expressad/exoplayer/e/m$a;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/b/d$b;)V
    .locals 1

    if-nez p1, :cond_0

    .line 174
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/d;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/e/d;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->e:Lcom/tkay/expressad/exoplayer/e/m;

    return-void

    .line 177
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->c:I

    invoke-interface {p1, v0}, Lcom/tkay/expressad/exoplayer/h/b/d$b;->a(I)Lcom/tkay/expressad/exoplayer/e/m;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->e:Lcom/tkay/expressad/exoplayer/e/m;

    .line 178
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->a:Lcom/tkay/expressad/exoplayer/m;

    if-eqz v0, :cond_1

    .line 179
    invoke-interface {p1, v0}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/m;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/k/s;I)V
    .locals 1

    .line 198
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->e:Lcom/tkay/expressad/exoplayer/e/m;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/k/s;I)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->d:Lcom/tkay/expressad/exoplayer/m;

    if-eqz v0, :cond_0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/m;->a(Lcom/tkay/expressad/exoplayer/m;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p1

    .line 186
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->a:Lcom/tkay/expressad/exoplayer/m;

    .line 187
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d$a;->e:Lcom/tkay/expressad/exoplayer/e/m;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/m;)V

    return-void
.end method
