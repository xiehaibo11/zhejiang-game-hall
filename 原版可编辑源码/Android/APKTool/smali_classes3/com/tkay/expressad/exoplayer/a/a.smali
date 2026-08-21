.class public final Lcom/tkay/expressad/exoplayer/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/b/g;
.implements Lcom/tkay/expressad/exoplayer/d/c;
.implements Lcom/tkay/expressad/exoplayer/g/f;
.implements Lcom/tkay/expressad/exoplayer/h/t;
.implements Lcom/tkay/expressad/exoplayer/j/d$a;
.implements Lcom/tkay/expressad/exoplayer/l/h;
.implements Lcom/tkay/expressad/exoplayer/w$c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/a/a$c;,
        Lcom/tkay/expressad/exoplayer/a/a$b;,
        Lcom/tkay/expressad/exoplayer/a/a$a;
    }
.end annotation


# instance fields
.field private final a:Ljava/util/concurrent/CopyOnWriteArraySet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArraySet<",
            "Lcom/tkay/expressad/exoplayer/a/b;",
            ">;"
        }
    .end annotation
.end field

.field private final b:Lcom/tkay/expressad/exoplayer/k/c;

.field private final c:Lcom/tkay/expressad/exoplayer/ae$b;

.field private final d:Lcom/tkay/expressad/exoplayer/a/a$b;

.field private e:Lcom/tkay/expressad/exoplayer/w;


# direct methods
.method protected constructor <init>(Lcom/tkay/expressad/exoplayer/w;Lcom/tkay/expressad/exoplayer/k/c;)V
    .locals 0

    .line 98
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 99
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    .line 100
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/k/c;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->b:Lcom/tkay/expressad/exoplayer/k/c;

    .line 101
    new-instance p1, Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-direct {p1}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    .line 102
    new-instance p1, Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/a/a$b;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    .line 103
    new-instance p1, Lcom/tkay/expressad/exoplayer/ae$b;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/ae$b;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/a/a$c;)Lcom/tkay/expressad/exoplayer/a/b$a;
    .locals 1

    if-nez p1, :cond_0

    .line 602
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/w;->p()I

    move-result p1

    .line 603
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/a/a$b;->a(I)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object v0

    .line 604
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    return-object p1

    .line 606
    :cond_0
    iget v0, p1, Lcom/tkay/expressad/exoplayer/a/a$c;->a:I

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/a/a$c;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-direct {p0, v0, p1}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    return-object p1
.end method

.method private a(II)V
    .locals 3

    .line 158
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 159
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 160
    invoke-interface {v2, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;II)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private a(Landroid/net/NetworkInfo;)V
    .locals 3

    .line 170
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 171
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 172
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Landroid/net/NetworkInfo;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/w;)V
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 132
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/w;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    return-void
.end method

.method private d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;
    .locals 13

    .line 563
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    .line 564
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->b:Lcom/tkay/expressad/exoplayer/k/c;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/k/c;->a()J

    move-result-wide v2

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->F()Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v4

    .line 567
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->p()I

    move-result v0

    const-wide/16 v5, 0x0

    if-ne p1, v0, :cond_1

    if-eqz p2, :cond_0

    .line 568
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 572
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    .line 571
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->z()I

    move-result v0

    iget v1, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    if-ne v0, v1, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    .line 572
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->A()I

    move-result v0

    iget v1, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    if-ne v0, v1, :cond_3

    .line 573
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->t()J

    move-result-wide v5

    goto :goto_1

    .line 577
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->B()J

    move-result-wide v0

    :goto_0
    move-wide v7, v0

    goto :goto_2

    .line 579
    :cond_1
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v0

    if-ge p1, v0, :cond_3

    if-eqz p2, :cond_2

    .line 580
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    .line 586
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->c:Lcom/tkay/expressad/exoplayer/ae$b;

    const/4 v1, 0x0

    .line 2621
    invoke-virtual {v4, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    .line 3209
    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    goto :goto_0

    :cond_3
    :goto_1
    move-wide v7, v5

    .line 589
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/w;->u()J

    move-result-wide v0

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    invoke-interface {v5}, Lcom/tkay/expressad/exoplayer/w;->B()J

    move-result-wide v5

    sub-long v11, v0, v5

    .line 590
    new-instance v0, Lcom/tkay/expressad/exoplayer/a/b$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->e:Lcom/tkay/expressad/exoplayer/w;

    .line 596
    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/w;->t()J

    move-result-wide v9

    move-object v1, v0

    move v5, p1

    move-object v6, p2

    invoke-direct/range {v1 .. v12}, Lcom/tkay/expressad/exoplayer/a/b$a;-><init>(JLcom/tkay/expressad/exoplayer/ae;ILcom/tkay/expressad/exoplayer/h/s$a;JJJ)V

    return-object v0
.end method

.method private g()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Lcom/tkay/expressad/exoplayer/a/b;",
            ">;"
        }
    .end annotation

    .line 558
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-static {v0}, Ljava/util/Collections;->unmodifiableSet(Ljava/util/Set;)Ljava/util/Set;

    move-result-object v0

    return-object v0
.end method

.method private h()Lcom/tkay/expressad/exoplayer/a/b$a;
    .locals 1

    .line 610
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->b()Lcom/tkay/expressad/exoplayer/a/a$c;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/a/a;->a(Lcom/tkay/expressad/exoplayer/a/a$c;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    return-object v0
.end method

.method private i()Lcom/tkay/expressad/exoplayer/a/b$a;
    .locals 1

    .line 614
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->a()Lcom/tkay/expressad/exoplayer/a/a$c;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/a/a;->a(Lcom/tkay/expressad/exoplayer/a/a$c;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    return-object v0
.end method

.method private j()Lcom/tkay/expressad/exoplayer/a/b$a;
    .locals 1

    .line 618
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->c()Lcom/tkay/expressad/exoplayer/a/a$c;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/a/a;->a(Lcom/tkay/expressad/exoplayer/a/a$c;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    return-object v0
.end method

.method private k()Lcom/tkay/expressad/exoplayer/a/b$a;
    .locals 1

    .line 622
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->d()Lcom/tkay/expressad/exoplayer/a/a$c;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/a/a;->a(Lcom/tkay/expressad/exoplayer/a/a$c;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 142
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->e()Z

    move-result v0

    if-nez v0, :cond_0

    .line 143
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 144
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/a/a$b;->g()V

    .line 145
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 146
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 3

    .line 212
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 213
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 214
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->f(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(IIIF)V
    .locals 1

    .line 295
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p3

    .line 296
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p4}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p4

    :goto_0
    invoke-interface {p4}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 297
    invoke-interface {v0, p3, p1, p2}, Lcom/tkay/expressad/exoplayer/a/b;->b(Lcom/tkay/expressad/exoplayer/a/b$a;II)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(IJ)V
    .locals 1

    .line 286
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->h()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p2

    .line 287
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p3}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 288
    invoke-interface {v0, p2, p1}, Lcom/tkay/expressad/exoplayer/a/b;->g(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(IJJ)V
    .locals 9

    .line 239
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v7

    .line 240
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v8

    :goto_0
    invoke-interface {v8}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {v8}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    move-object v1, v7

    move v2, p1

    move-wide v3, p2

    move-wide v5, p4

    .line 241
    invoke-interface/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;IJJ)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 1

    .line 324
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a$b;->a(ILcom/tkay/expressad/exoplayer/h/s$a;)V

    .line 325
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 326
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 327
    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->c(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 346
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    .line 347
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V
    .locals 0

    .line 384
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 385
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/exoplayer/a/b;

    .line 386
    invoke-interface {p3, p1, p5}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Ljava/io/IOException;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 1

    .line 402
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 403
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 404
    invoke-interface {v0, p1, p3}, Lcom/tkay/expressad/exoplayer/a/b;->b(Lcom/tkay/expressad/exoplayer/a/b$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Landroid/view/Surface;)V
    .locals 3

    .line 304
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 305
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 306
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Landroid/view/Surface;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/a/b;)V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 3

    .line 260
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 261
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 v2, 0x2

    .line 262
    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/exoplayer/a/b;->d(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/g/a;)V
    .locals 3

    .line 193
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 194
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 195
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Lcom/tkay/expressad/exoplayer/g/a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 4

    .line 278
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 279
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 v3, 0x2

    .line 280
    invoke-interface {v2, v0, v3, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;ILcom/tkay/expressad/exoplayer/m;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/Exception;)V
    .locals 3

    .line 532
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 533
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 534
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Ljava/lang/Exception;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;JJ)V
    .locals 0

    .line 269
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p2

    .line 270
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p3}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result p4

    if-eqz p4, :cond_0

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 p5, 0x2

    .line 271
    invoke-interface {p4, p2, p5, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 3

    .line 182
    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    .line 183
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/a/a$b;->a(Lcom/tkay/expressad/exoplayer/a/a$b;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 184
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/a/a$c;

    .line 185
    iget v2, v1, Lcom/tkay/expressad/exoplayer/a/a$c;->a:I

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/a/a$c;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {p0, v2, v1}, Lcom/tkay/expressad/exoplayer/a/a;->b(ILcom/tkay/expressad/exoplayer/h/s$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 1

    .line 333
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a$b;->b(ILcom/tkay/expressad/exoplayer/h/s$a;)V

    .line 334
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 335
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 336
    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->d(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 358
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    .line 359
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 1

    .line 411
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 412
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 413
    invoke-interface {v0, p1, p3}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/a/b;)V
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 3

    .line 314
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->h()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 v2, 0x2

    .line 316
    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/exoplayer/a/b;->e(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 4

    .line 230
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 231
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 v3, 0x1

    .line 232
    invoke-interface {v2, v0, v3, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;ILcom/tkay/expressad/exoplayer/m;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;JJ)V
    .locals 0

    .line 221
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p2

    .line 222
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p3}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result p4

    if-eqz p4, :cond_0

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 p5, 0x1

    .line 223
    invoke-interface {p4, p2, p5, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;ILjava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 2

    .line 1622
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->d()Lcom/tkay/expressad/exoplayer/a/a$c;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/a/a;->a(Lcom/tkay/expressad/exoplayer/a/a$c;)Lcom/tkay/expressad/exoplayer/a/b$a;

    .line 515
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final c(ILcom/tkay/expressad/exoplayer/h/s$a;)V
    .locals 1

    .line 392
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a$b;->c(ILcom/tkay/expressad/exoplayer/h/s$a;)V

    .line 393
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 394
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 395
    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->e(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final c(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 370
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/a;->d(ILcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/a/b$a;

    .line 371
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final c(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 3

    .line 204
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 205
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 v2, 0x1

    .line 206
    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/exoplayer/a/b;->d(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 3

    .line 524
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 525
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 526
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/a/b;->f(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final d(Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 3

    .line 249
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->h()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 250
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/a/b;

    const/4 v2, 0x1

    .line 251
    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/exoplayer/a/b;->e(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 3

    .line 540
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 541
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 542
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/a/b;->g(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final f()V
    .locals 3

    .line 548
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->j()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 549
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 550
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/a/b;->h(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onLoadingChanged(Z)V
    .locals 3

    .line 444
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 445
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 446
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->b(Lcom/tkay/expressad/exoplayer/a/b$a;Z)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onPlaybackParametersChanged(Lcom/tkay/expressad/exoplayer/v;)V
    .locals 3

    .line 493
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 494
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 495
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Lcom/tkay/expressad/exoplayer/v;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onPlayerError(Lcom/tkay/expressad/exoplayer/g;)V
    .locals 3

    .line 476
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 477
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 478
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Lcom/tkay/expressad/exoplayer/g;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onPlayerStateChanged(ZI)V
    .locals 3

    .line 452
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 453
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 454
    invoke-interface {v2, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;ZI)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onPositionDiscontinuity(I)V
    .locals 3

    .line 484
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->f()V

    .line 485
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 486
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 487
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->b(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onRepeatModeChanged(I)V
    .locals 3

    .line 460
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 461
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 462
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->c(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onSeekProcessed()V
    .locals 3

    .line 501
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->e()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 502
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/a/a$b;->h()V

    .line 503
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 504
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 505
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/a/b;->b(Lcom/tkay/expressad/exoplayer/a/b$a;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onShuffleModeEnabledChanged(Z)V
    .locals 3

    .line 468
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object v0

    .line 469
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/a/b;

    .line 470
    invoke-interface {v2, v0, p1}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Z)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onTimelineChanged(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;I)V
    .locals 1

    .line 426
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->d:Lcom/tkay/expressad/exoplayer/a/a$b;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/exoplayer/a/a$b;->a(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 427
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 428
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/a/b;

    .line 429
    invoke-interface {v0, p1, p3}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final onTracksChanged(Lcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/g;)V
    .locals 2

    .line 436
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/a/a;->i()Lcom/tkay/expressad/exoplayer/a/b$a;

    move-result-object p1

    .line 437
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/a/a;->a:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/a/b;

    .line 438
    invoke-interface {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/a/b;->a(Lcom/tkay/expressad/exoplayer/a/b$a;Lcom/tkay/expressad/exoplayer/i/g;)V

    goto :goto_0

    :cond_0
    return-void
.end method
