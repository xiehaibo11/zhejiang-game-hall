.class public final Lcom/tkay/expressad/exoplayer/h/o;
.super Lcom/tkay/expressad/exoplayer/h/c;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/n$c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/o$b;,
        Lcom/tkay/expressad/exoplayer/h/o$c;,
        Lcom/tkay/expressad/exoplayer/h/o$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x3

.field public static final b:I = 0x6

.field public static final c:I = -0x1

.field public static final d:I = 0x100000


# instance fields
.field private final e:Landroid/net/Uri;

.field private final f:Lcom/tkay/expressad/exoplayer/j/h$a;

.field private final g:Lcom/tkay/expressad/exoplayer/e/h;

.field private final h:I

.field private final i:Ljava/lang/String;

.field private final j:I

.field private final k:Ljava/lang/Object;

.field private l:J

.field private m:Z


# direct methods
.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;ILjava/lang/String;ILjava/lang/Object;)V
    .locals 0

    .line 338
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/c;-><init>()V

    .line 339
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/o;->e:Landroid/net/Uri;

    .line 340
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/o;->f:Lcom/tkay/expressad/exoplayer/j/h$a;

    .line 341
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/o;->g:Lcom/tkay/expressad/exoplayer/e/h;

    .line 342
    iput p4, p0, Lcom/tkay/expressad/exoplayer/h/o;->h:I

    .line 343
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/o;->i:Ljava/lang/String;

    .line 344
    iput p6, p0, Lcom/tkay/expressad/exoplayer/h/o;->j:I

    const-wide p1, -0x7fffffffffffffffL    # -4.9E-324

    .line 345
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/o;->l:J

    .line 346
    iput-object p7, p0, Lcom/tkay/expressad/exoplayer/h/o;->k:Ljava/lang/Object;

    return-void
.end method

.method synthetic constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;ILjava/lang/String;ILjava/lang/Object;B)V
    .locals 0

    .line 47
    invoke-direct/range {p0 .. p7}, Lcom/tkay/expressad/exoplayer/h/o;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;ILjava/lang/String;ILjava/lang/Object;)V

    return-void
.end method

.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/o$a;)V
    .locals 7
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    .line 266
    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/o;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/o$a;Ljava/lang/String;)V

    return-void
.end method

.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/o$a;Ljava/lang/String;)V
    .locals 8
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v7, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    .line 289
    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/h/o;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/o$a;Ljava/lang/String;B)V

    return-void
.end method

.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/o$a;Ljava/lang/String;B)V
    .locals 8
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v4, -0x1

    const/high16 v6, 0x100000

    const/4 v7, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v5, p6

    .line 318
    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/h/o;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/e/h;ILjava/lang/String;ILjava/lang/Object;)V

    if-eqz p5, :cond_0

    if-eqz p4, :cond_0

    .line 327
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/o$b;

    invoke-direct {p1, p5}, Lcom/tkay/expressad/exoplayer/h/o$b;-><init>(Lcom/tkay/expressad/exoplayer/h/o$a;)V

    invoke-virtual {p0, p4, p1}, Lcom/tkay/expressad/exoplayer/h/o;->a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/t;)V

    :cond_0
    return-void
.end method

.method private b(JZ)V
    .locals 6

    .line 400
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/o;->l:J

    .line 401
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/h/o;->m:Z

    .line 403
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/ab;

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/h/o;->l:J

    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/h/o;->m:Z

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/o;->k:Ljava/lang/Object;

    const/4 v4, 0x0

    move-object v0, p1

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/h/ab;-><init>(JZZLjava/lang/Object;)V

    const/4 p2, 0x0

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/o;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 11

    .line 361
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 362
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/n;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/o;->e:Landroid/net/Uri;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/o;->f:Lcom/tkay/expressad/exoplayer/j/h$a;

    .line 364
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/j/h$a;->a()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v3

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/o;->g:Lcom/tkay/expressad/exoplayer/e/h;

    .line 365
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/e/h;->a()[Lcom/tkay/expressad/exoplayer/e/e;

    move-result-object v4

    iget v5, p0, Lcom/tkay/expressad/exoplayer/h/o;->h:I

    .line 367
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/o;->a(Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object v6

    iget-object v9, p0, Lcom/tkay/expressad/exoplayer/h/o;->i:Ljava/lang/String;

    iget v10, p0, Lcom/tkay/expressad/exoplayer/h/o;->j:I

    move-object v1, v0

    move-object v7, p0

    move-object v8, p2

    invoke-direct/range {v1 .. v10}, Lcom/tkay/expressad/exoplayer/h/n;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h;[Lcom/tkay/expressad/exoplayer/e/e;ILcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/n$c;Lcom/tkay/expressad/exoplayer/j/b;Ljava/lang/String;I)V

    return-object v0
.end method

.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(JZ)V
    .locals 2

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 389
    iget-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/o;->l:J

    .line 390
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/o;->l:J

    cmp-long v0, v0, p1

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/o;->m:Z

    if-ne v0, p3, :cond_1

    return-void

    .line 394
    :cond_1
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/o;->b(JZ)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 0

    .line 376
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/n;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/n;->f()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 1

    .line 351
    iget-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/o;->l:J

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/h/o;->b(JZ)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method
