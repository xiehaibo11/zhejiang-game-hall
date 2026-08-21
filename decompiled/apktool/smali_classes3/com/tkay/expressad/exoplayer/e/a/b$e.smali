.class final Lcom/tkay/expressad/exoplayer/e/a/b$e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/a/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "e"
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/k/s;

.field private final b:I

.field private final c:I

.field private d:I

.field private e:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/e/a/a$b;)V
    .locals 1

    .line 1365
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1366
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aV:Lcom/tkay/expressad/exoplayer/k/s;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->a:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v0, 0xc

    .line 1367
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1368
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->a:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result p1

    and-int/lit16 p1, p1, 0xff

    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->c:I

    .line 1369
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->a:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->b:I

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 1374
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->b:I

    return v0
.end method

.method public final b()I
    .locals 2

    .line 1379
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->c:I

    const/16 v1, 0x8

    if-ne v0, v1, :cond_0

    .line 1380
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->a:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    return v0

    :cond_0
    const/16 v1, 0x10

    if-ne v0, v1, :cond_1

    .line 1382
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->a:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v0

    return v0

    .line 1385
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->d:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->d:I

    rem-int/lit8 v0, v0, 0x2

    if-nez v0, :cond_2

    .line 1387
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->a:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->e:I

    and-int/lit16 v0, v0, 0xf0

    shr-int/lit8 v0, v0, 0x4

    return v0

    .line 1392
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$e;->e:I

    and-int/lit8 v0, v0, 0xf

    return v0
.end method

.method public final c()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
