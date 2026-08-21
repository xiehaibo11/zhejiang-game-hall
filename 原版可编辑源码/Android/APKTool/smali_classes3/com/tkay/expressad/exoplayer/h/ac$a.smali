.class final Lcom/tkay/expressad/exoplayer/h/ac$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/y;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/ac;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# static fields
.field private static final b:I = 0x0

.field private static final c:I = 0x1

.field private static final d:I = 0x2


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/ac;

.field private e:I

.field private f:Z


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/ac;)V
    .locals 0

    .line 257
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/h/ac;B)V
    .locals 0

    .line 257
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/ac$a;-><init>(Lcom/tkay/expressad/exoplayer/h/ac;)V

    return-void
.end method

.method private d()V
    .locals 8

    .line 321
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->f:Z

    if-nez v0, :cond_0

    .line 322
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/ac;->a(Lcom/tkay/expressad/exoplayer/h/ac;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object v1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    .line 323
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/o;->d(Ljava/lang/String;)I

    move-result v2

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    const/4 v4, 0x0

    const/4 v5, 0x0

    const-wide/16 v6, 0x0

    .line 322
    invoke-virtual/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(ILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;J)V

    const/4 v0, 0x1

    .line 328
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->f:Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(J)I
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long p1, p1, v0

    if-lez p1, :cond_0

    .line 312
    iget p1, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    const/4 p2, 0x2

    if-eq p1, p2, :cond_0

    .line 313
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    .line 314
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/ac$a;->d()V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I
    .locals 7

    .line 287
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    const/4 v1, -0x4

    const/4 v2, 0x4

    const/4 v3, 0x2

    if-ne v0, v3, :cond_0

    .line 288
    invoke-virtual {p2, v2}, Lcom/tkay/expressad/exoplayer/c/e;->b(I)V

    return v1

    :cond_0
    const/4 v4, 0x1

    if-nez p3, :cond_4

    if-nez v0, :cond_1

    goto :goto_1

    .line 294
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    if-eqz p1, :cond_3

    .line 295
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/h/ac;->f:Z

    if-eqz p1, :cond_2

    const-wide/16 v5, 0x0

    .line 296
    iput-wide v5, p2, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    .line 297
    invoke-virtual {p2, v4}, Lcom/tkay/expressad/exoplayer/c/e;->b(I)V

    .line 298
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/ac;->h:I

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/exoplayer/c/e;->d(I)V

    .line 299
    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-object p2, p2, Lcom/tkay/expressad/exoplayer/h/ac;->g:[B

    const/4 p3, 0x0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/ac;->h:I

    invoke-virtual {p1, p2, p3, v0}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    .line 300
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/ac$a;->d()V

    goto :goto_0

    .line 302
    :cond_2
    invoke-virtual {p2, v2}, Lcom/tkay/expressad/exoplayer/c/e;->b(I)V

    .line 304
    :goto_0
    iput v3, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    return v1

    :cond_3
    const/4 p1, -0x3

    return p1

    .line 291
    :cond_4
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-object p2, p2, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    iput-object p2, p1, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    .line 292
    iput v4, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    const/4 p1, -0x5

    return p1
.end method

.method public final a()V
    .locals 2

    .line 267
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    .line 268
    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->e:I

    :cond_0
    return-void
.end method

.method public final b()Z
    .locals 1

    .line 274
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    return v0
.end method

.method public final c()V
    .locals 1

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/h/ac;->c:Z

    if-nez v0, :cond_0

    .line 280
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac$a;->a:Lcom/tkay/expressad/exoplayer/h/ac;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/ac;->a:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/t;->c()V

    :cond_0
    return-void
.end method
