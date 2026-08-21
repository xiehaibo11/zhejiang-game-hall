.class public final Lcom/tkay/expressad/exoplayer/j/t;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/u;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/j/t$e;,
        Lcom/tkay/expressad/exoplayer/j/t$b;,
        Lcom/tkay/expressad/exoplayer/j/t$f;,
        Lcom/tkay/expressad/exoplayer/j/t$d;,
        Lcom/tkay/expressad/exoplayer/j/t$a;,
        Lcom/tkay/expressad/exoplayer/j/t$c;,
        Lcom/tkay/expressad/exoplayer/j/t$g;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2

.field public static final d:I = 0x3


# instance fields
.field private final e:Ljava/util/concurrent/ExecutorService;

.field private f:Lcom/tkay/expressad/exoplayer/j/t$b;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/j/t$b<",
            "+",
            "Lcom/tkay/expressad/exoplayer/j/t$c;",
            ">;"
        }
    .end annotation
.end field

.field private g:Ljava/io/IOException;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 154
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 155
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/String;)Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/t;->e:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/j/t;)Lcom/tkay/expressad/exoplayer/j/t$b;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/j/t;->f:Lcom/tkay/expressad/exoplayer/j/t$b;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/j/t;Lcom/tkay/expressad/exoplayer/j/t$b;)Lcom/tkay/expressad/exoplayer/j/t$b;
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/t;->f:Lcom/tkay/expressad/exoplayer/j/t$b;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/j/t;Ljava/io/IOException;)Ljava/io/IOException;
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/t;->g:Ljava/io/IOException;

    return-object p1
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/j/t;)Ljava/util/concurrent/ExecutorService;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/j/t;->e:Ljava/util/concurrent/ExecutorService;

    return-object p0
.end method

.method private d()V
    .locals 1

    const/4 v0, 0x0

    .line 201
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/t;->a(Lcom/tkay/expressad/exoplayer/j/t$d;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/j/t$c;Lcom/tkay/expressad/exoplayer/j/t$a;I)J
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/tkay/expressad/exoplayer/j/t$c;",
            ">(TT;",
            "Lcom/tkay/expressad/exoplayer/j/t$a<",
            "TT;>;I)J"
        }
    .end annotation

    .line 174
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v2

    if-eqz v2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 175
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    const/4 v0, 0x0

    .line 176
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->g:Ljava/io/IOException;

    .line 177
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v8

    .line 178
    new-instance v10, Lcom/tkay/expressad/exoplayer/j/t$b;

    move-object v0, v10

    move-object v1, p0

    move-object v3, p1

    move-object v4, p2

    move v5, p3

    move-wide v6, v8

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/j/t$b;-><init>(Lcom/tkay/expressad/exoplayer/j/t;Landroid/os/Looper;Lcom/tkay/expressad/exoplayer/j/t$c;Lcom/tkay/expressad/exoplayer/j/t$a;IJ)V

    const-wide/16 p1, 0x0

    invoke-virtual {v10, p1, p2}, Lcom/tkay/expressad/exoplayer/j/t$b;->a(J)V

    return-wide v8
.end method

.method public final a(I)V
    .locals 2

    .line 230
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->g:Ljava/io/IOException;

    if-nez v0, :cond_2

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->f:Lcom/tkay/expressad/exoplayer/j/t$b;

    if-eqz v0, :cond_1

    const/high16 v1, -0x80000000

    if-ne p1, v1, :cond_0

    .line 234
    iget p1, v0, Lcom/tkay/expressad/exoplayer/j/t$b;->a:I

    .line 233
    :cond_0
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/j/t$b;->a(I)V

    :cond_1
    return-void

    .line 231
    :cond_2
    throw v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/t$d;)V
    .locals 2

    .line 212
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->f:Lcom/tkay/expressad/exoplayer/j/t$b;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 213
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/j/t$b;->a(Z)V

    :cond_0
    if-eqz p1, :cond_1

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->e:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/tkay/expressad/exoplayer/j/t$e;

    invoke-direct {v1, p1}, Lcom/tkay/expressad/exoplayer/j/t$e;-><init>(Lcom/tkay/expressad/exoplayer/j/t$d;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    .line 218
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/t;->e:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p1}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 186
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->f:Lcom/tkay/expressad/exoplayer/j/t$b;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final b()V
    .locals 2

    .line 193
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/t;->f:Lcom/tkay/expressad/exoplayer/j/t$b;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/j/t$b;->a(Z)V

    return-void
.end method

.method public final c()V
    .locals 1

    const/high16 v0, -0x80000000

    .line 225
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/t;->a(I)V

    return-void
.end method
