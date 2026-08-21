.class final Lcom/tkay/expressad/exoplayer/e/a/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field public final a:I

.field public b:I

.field public c:I

.field public d:J

.field private final e:Z

.field private final f:Lcom/tkay/expressad/exoplayer/k/s;

.field private final g:Lcom/tkay/expressad/exoplayer/k/s;

.field private h:I

.field private i:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/k/s;Lcom/tkay/expressad/exoplayer/k/s;Z)V
    .locals 0

    .line 1230
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1231
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->g:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1232
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->f:Lcom/tkay/expressad/exoplayer/k/s;

    .line 1233
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->e:Z

    const/16 p3, 0xc

    .line 1234
    invoke-virtual {p2, p3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1235
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->a:I

    .line 1236
    invoke-virtual {p1, p3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 1237
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result p2

    iput p2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->i:I

    .line 1238
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    const-string p1, "first_chunk must be 1"

    invoke-static {p2, p1}, Lcom/tkay/expressad/exoplayer/k/a;->b(ZLjava/lang/Object;)V

    const/4 p1, -0x1

    .line 1239
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->b:I

    return-void
.end method


# virtual methods
.method public final a()Z
    .locals 4

    .line 1243
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->b:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->b:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->a:I

    if-ne v0, v2, :cond_0

    const/4 v0, 0x0

    return v0

    .line 1246
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->e:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->f:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->n()J

    move-result-wide v2

    goto :goto_0

    .line 1247
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->f:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v2

    :goto_0
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->d:J

    .line 1248
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->b:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->h:I

    if-ne v0, v2, :cond_3

    .line 1249
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->c:I

    .line 1250
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->g:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v2, 0x4

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 1251
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->i:I

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->i:I

    if-lez v0, :cond_2

    .line 1252
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->g:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v0

    sub-int/2addr v0, v1

    goto :goto_1

    :cond_2
    const/4 v0, -0x1

    :goto_1
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$a;->h:I

    :cond_3
    return v1
.end method
