.class final Lcom/tkay/expressad/exoplayer/h/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/y;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/h/y;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/d;

.field private c:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/d;Lcom/tkay/expressad/exoplayer/h/y;)V
    .locals 0

    .line 274
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 275
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->a:Lcom/tkay/expressad/exoplayer/h/y;

    return-void
.end method


# virtual methods
.method public final a(J)I
    .locals 1

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/d;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, -0x3

    return p1

    .line 330
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->a:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/y;->a(J)I

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I
    .locals 10

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/d;->f()Z

    move-result v0

    const/4 v1, -0x3

    if-eqz v0, :cond_0

    return v1

    .line 298
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->c:Z

    const/4 v2, 0x4

    const/4 v3, -0x4

    if-eqz v0, :cond_1

    .line 299
    invoke-virtual {p2, v2}, Lcom/tkay/expressad/exoplayer/c/e;->a(I)V

    return v3

    .line 302
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->a:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/y;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result p3

    const/4 v0, -0x5

    const-wide/high16 v4, -0x8000000000000000L

    if-ne p3, v0, :cond_6

    .line 304
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    .line 305
    iget p3, p2, Lcom/tkay/expressad/exoplayer/m;->x:I

    if-nez p3, :cond_2

    iget p3, p2, Lcom/tkay/expressad/exoplayer/m;->y:I

    if-eqz p3, :cond_5

    .line 307
    :cond_2
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    iget-wide v1, p3, Lcom/tkay/expressad/exoplayer/h/d;->b:J

    const-wide/16 v6, 0x0

    cmp-long p3, v1, v6

    const/4 v1, 0x0

    if-eqz p3, :cond_3

    move p3, v1

    goto :goto_0

    :cond_3
    iget p3, p2, Lcom/tkay/expressad/exoplayer/m;->x:I

    .line 308
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/h/d;->c:J

    cmp-long v2, v2, v4

    if-eqz v2, :cond_4

    goto :goto_1

    :cond_4
    iget v1, p2, Lcom/tkay/expressad/exoplayer/m;->y:I

    .line 309
    :goto_1
    invoke-virtual {p2, p3, v1}, Lcom/tkay/expressad/exoplayer/m;->a(II)Lcom/tkay/expressad/exoplayer/m;

    move-result-object p2

    iput-object p2, p1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    :cond_5
    return v0

    .line 313
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    iget-wide v6, p1, Lcom/tkay/expressad/exoplayer/h/d;->c:J

    cmp-long p1, v6, v4

    if-eqz p1, :cond_9

    if-ne p3, v3, :cond_7

    iget-wide v6, p2, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    iget-wide v8, p1, Lcom/tkay/expressad/exoplayer/h/d;->c:J

    cmp-long p1, v6, v8

    if-gez p1, :cond_8

    :cond_7
    if-ne p3, v1, :cond_9

    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    .line 316
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/d;->d()J

    move-result-wide v0

    cmp-long p1, v0, v4

    if-nez p1, :cond_9

    .line 317
    :cond_8
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 318
    invoke-virtual {p2, v2}, Lcom/tkay/expressad/exoplayer/c/e;->a(I)V

    const/4 p1, 0x1

    .line 319
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->c:Z

    return v3

    :cond_9
    return p3
.end method

.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 279
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->c:Z

    return-void
.end method

.method public final b()Z
    .locals 1

    .line 284
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->b:Lcom/tkay/expressad/exoplayer/h/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/d;->f()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->a:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/y;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final c()V
    .locals 1

    .line 289
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/d$a;->a:Lcom/tkay/expressad/exoplayer/h/y;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/y;->c()V

    return-void
.end method
