.class final Lcom/tkay/expressad/exoplayer/h/f$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/t;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/f;

.field private final b:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field private c:Lcom/tkay/expressad/exoplayer/h/t$a;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/h/f;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    .line 185
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->a:Lcom/tkay/expressad/exoplayer/h/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 186
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/h/f;->a(Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    .line 187
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->b:Ljava/lang/Object;

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;
    .locals 13

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->a:Lcom/tkay/expressad/exoplayer/h/f;

    iget-wide v1, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->f:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/f;->a(J)J

    move-result-wide v9

    .line 296
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->a:Lcom/tkay/expressad/exoplayer/h/f;

    iget-wide v1, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->g:J

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/f;->a(J)J

    move-result-wide v11

    .line 297
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->f:J

    cmp-long v0, v9, v0

    if-nez v0, :cond_0

    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->g:J

    cmp-long v0, v11, v0

    if-nez v0, :cond_0

    return-object p1

    .line 301
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/t$c;

    iget v4, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->a:I

    iget v5, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->b:I

    iget-object v6, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->c:Lcom/tkay/expressad/exoplayer/m;

    iget v7, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->d:I

    iget-object v8, p1, Lcom/tkay/expressad/exoplayer/h/t$c;->e:Ljava/lang/Object;

    move-object v3, v0

    invoke-direct/range {v3 .. v12}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    return-object v0
.end method

.method private d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z
    .locals 2

    if-eqz p2, :cond_0

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->a:Lcom/tkay/expressad/exoplayer/h/f;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->b:Ljava/lang/Object;

    invoke-virtual {v0, v1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p2

    if-nez p2, :cond_1

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 p2, 0x0

    .line 285
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->a:Lcom/tkay/expressad/exoplayer/h/f;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->b:Ljava/lang/Object;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/exoplayer/h/f;->a(Ljava/lang/Object;I)I

    move-result p1

    .line 286
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/t$a;->a:I

    if-ne v0, p1, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 287
    invoke-static {v0, p2}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 288
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->a:Lcom/tkay/expressad/exoplayer/h/f;

    .line 289
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    :cond_3
    const/4 p1, 0x1

    return p1
.end method


# virtual methods
.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 0

    .line 192
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 193
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/t$a;->a()V

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 210
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 211
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-direct {p0, p4}, Lcom/tkay/expressad/exoplayer/h/f$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;

    move-result-object p2

    invoke-virtual {p1, p3, p2}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V
    .locals 0

    .line 245
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 246
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    .line 247
    invoke-direct {p0, p4}, Lcom/tkay/expressad/exoplayer/h/f$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;

    move-result-object p2

    .line 246
    invoke-virtual {p1, p3, p2, p5, p6}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 261
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 262
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-direct {p0, p3}, Lcom/tkay/expressad/exoplayer/h/f$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)V

    :cond_0
    return-void
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 0

    .line 199
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 200
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/t$a;->b()V

    :cond_0
    return-void
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 221
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 222
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-direct {p0, p4}, Lcom/tkay/expressad/exoplayer/h/f$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;

    move-result-object p2

    invoke-virtual {p1, p3, p2}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    :cond_0
    return-void
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 269
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 270
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-direct {p0, p3}, Lcom/tkay/expressad/exoplayer/h/f$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/h/t$c;)V

    :cond_0
    return-void
.end method

.method public final c(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 0

    .line 253
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 254
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/t$a;->c()V

    :cond_0
    return-void
.end method

.method public final c(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 232
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f$a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 233
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/f$a;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-direct {p0, p4}, Lcom/tkay/expressad/exoplayer/h/f$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)Lcom/tkay/expressad/exoplayer/h/t$c;

    move-result-object p2

    invoke-virtual {p1, p3, p2}, Lcom/tkay/expressad/exoplayer/h/t$a;->c(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    :cond_0
    return-void
.end method
