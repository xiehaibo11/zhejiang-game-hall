.class public final Lcom/tkay/expressad/exoplayer/h/t$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/t;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/t$a$a;
    }
.end annotation


# instance fields
.field public final a:I

.field public final b:Lcom/tkay/expressad/exoplayer/h/s$a;

.field private final c:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/t$a$a;",
            ">;"
        }
    .end annotation
.end field

.field private final d:J


# direct methods
.method public constructor <init>()V
    .locals 6

    .line 273
    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    const/4 v2, 0x0

    const/4 v3, 0x0

    const-wide/16 v4, 0x0

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/h/t$a;-><init>(Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/tkay/expressad/exoplayer/h/s$a;J)V

    return-void
.end method

.method private constructor <init>(Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/tkay/expressad/exoplayer/h/s$a;J)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/t$a$a;",
            ">;I",
            "Lcom/tkay/expressad/exoplayer/h/s$a;",
            "J)V"
        }
    .end annotation

    .line 284
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 285
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 286
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->a:I

    .line 287
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 288
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->d:J

    return-void
.end method

.method private a(J)J
    .locals 3

    .line 700
    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide p1

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v2, p1, v0

    if-nez v2, :cond_0

    return-wide v0

    .line 701
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->d:J

    add-long/2addr v0, p1

    return-wide v0
.end method

.method private static a(Landroid/os/Handler;Ljava/lang/Runnable;)V
    .locals 2

    .line 705
    invoke-virtual {p0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 706
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    return-void

    .line 708
    :cond_0
    invoke-virtual {p0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/j/k;IJ)V
    .locals 13

    const/4 v3, -0x1

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move-wide/from16 v11, p3

    .line 365
    invoke-virtual/range {v0 .. v12}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJ)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/j/k;IJJJ)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move/from16 v2, p2

    move-wide/from16 v11, p3

    move-wide/from16 v13, p5

    move-wide/from16 v15, p7

    const/4 v3, -0x1

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    .line 423
    invoke-virtual/range {v0 .. v16}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/j/k;IJJJ)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move/from16 v2, p2

    move-wide/from16 v11, p3

    move-wide/from16 v13, p5

    move-wide/from16 v15, p7

    const/4 v3, -0x1

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    .line 485
    invoke-virtual/range {v0 .. v16}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    return-void
.end method


# virtual methods
.method public final a(ILcom/tkay/expressad/exoplayer/h/s$a;J)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 7

    .line 303
    new-instance v6, Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v0, v6

    move v2, p1

    move-object v3, p2

    move-wide v4, p3

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/h/t$a;-><init>(Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/tkay/expressad/exoplayer/h/s$a;J)V

    return-object v6
.end method

.method public final a()V
    .locals 4

    .line 333
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 334
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 335
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 336
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$1;

    invoke-direct {v3, p0, v2}, Lcom/tkay/expressad/exoplayer/h/t$a$1;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_1
    return-void
.end method

.method public final a(IJJ)V
    .locals 12

    move-object v0, p0

    .line 640
    new-instance v11, Lcom/tkay/expressad/exoplayer/h/t$c;

    move-wide v1, p2

    .line 647
    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v7

    move-wide/from16 v1, p4

    .line 648
    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v9

    const/4 v2, 0x1

    const/4 v4, 0x0

    const/4 v5, 0x3

    const/4 v6, 0x0

    move-object v1, v11

    move v3, p1

    invoke-direct/range {v1 .. v10}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    .line 640
    invoke-virtual {p0, v11}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)V

    return-void
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;J)V
    .locals 12

    move-object v0, p0

    .line 673
    new-instance v11, Lcom/tkay/expressad/exoplayer/h/t$c;

    move-wide/from16 v1, p5

    .line 680
    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v7

    const/4 v2, 0x1

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    move-object v1, v11

    move v3, p1

    move-object v4, p2

    move v5, p3

    move-object/from16 v6, p4

    invoke-direct/range {v1 .. v10}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    .line 673
    invoke-virtual {p0, v11}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/h/t$c;)V

    return-void
.end method

.method public final a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/t;)V
    .locals 2

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 314
    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 315
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    invoke-direct {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a$a;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/t;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 4

    .line 403
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 404
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 405
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$3;

    invoke-direct {v3, p0, v2, p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a$3;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V
    .locals 10

    .line 608
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 609
    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 610
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v9, Lcom/tkay/expressad/exoplayer/h/t$a$6;

    move-object v2, v9

    move-object v3, p0

    move-object v5, p1

    move-object v6, p2

    move-object v7, p3

    move v8, p4

    invoke-direct/range {v2 .. v8}, Lcom/tkay/expressad/exoplayer/h/t$a$6;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V

    invoke-static {v1, v9}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 4

    .line 653
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 654
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 655
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$8;

    invoke-direct {v3, p0, v2, p1}, Lcom/tkay/expressad/exoplayer/h/t$a$8;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/t;)V
    .locals 3

    .line 324
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 325
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    if-ne v2, p1, :cond_0

    .line 326
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJ)V
    .locals 20

    move-object/from16 v0, p0

    .line 388
    new-instance v9, Lcom/tkay/expressad/exoplayer/h/t$b;

    const-wide/16 v5, 0x0

    const-wide/16 v7, 0x0

    move-object v1, v9

    move-object/from16 v2, p1

    move-wide/from16 v3, p11

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/exoplayer/h/t$b;-><init>(Lcom/tkay/expressad/exoplayer/j/k;JJJ)V

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/t$c;

    move-wide/from16 v2, p7

    .line 397
    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v16

    move-wide/from16 v2, p9

    .line 398
    invoke-direct {v0, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v18

    move-object v10, v1

    move/from16 v11, p2

    move/from16 v12, p3

    move-object/from16 v13, p4

    move/from16 v14, p5

    move-object/from16 v15, p6

    invoke-direct/range {v10 .. v19}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    .line 388
    invoke-virtual {v0, v9, v1}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V
    .locals 10

    move-object v0, p0

    .line 450
    new-instance v9, Lcom/tkay/expressad/exoplayer/h/t$b;

    move-object v1, v9

    move-object v2, p1

    move-wide/from16 v3, p11

    move-wide/from16 v5, p13

    move-wide/from16 v7, p15

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/exoplayer/h/t$b;-><init>(Lcom/tkay/expressad/exoplayer/j/k;JJJ)V

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/t$c;

    move-wide/from16 v2, p7

    .line 458
    invoke-direct {p0, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v2

    move-wide/from16 v4, p9

    .line 459
    invoke-direct {p0, v4, v5}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v4

    move-object/from16 p7, v1

    move/from16 p8, p2

    move/from16 p9, p3

    move-object/from16 p10, p4

    move/from16 p11, p5

    move-object/from16 p12, p6

    move-wide/from16 p13, v2

    move-wide/from16 p15, v4

    invoke-direct/range {p7 .. p16}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    .line 450
    invoke-virtual {p0, v9, v1}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJLjava/io/IOException;Z)V
    .locals 10

    move-object v0, p0

    .line 585
    new-instance v9, Lcom/tkay/expressad/exoplayer/h/t$b;

    move-object v1, v9

    move-object v2, p1

    move-wide/from16 v3, p11

    move-wide/from16 v5, p13

    move-wide/from16 v7, p15

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/exoplayer/h/t$b;-><init>(Lcom/tkay/expressad/exoplayer/j/k;JJJ)V

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/t$c;

    move-wide/from16 v2, p7

    .line 593
    invoke-direct {p0, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v2

    move-wide/from16 v4, p9

    .line 594
    invoke-direct {p0, v4, v5}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v4

    move-object/from16 p7, v1

    move/from16 p8, p2

    move/from16 p9, p3

    move-object/from16 p10, p4

    move/from16 p11, p5

    move-object/from16 p12, p6

    move-wide/from16 p13, v2

    move-wide/from16 p15, v4

    invoke-direct/range {p7 .. p16}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    move-object/from16 v2, p17

    move/from16 v3, p18

    .line 585
    invoke-virtual {p0, v9, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;Ljava/io/IOException;Z)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;Ljava/io/IOException;)V
    .locals 19

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v17, p2

    const/4 v2, 0x6

    const/4 v3, -0x1

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    const-wide v9, -0x7fffffffffffffffL    # -4.9E-324

    const-wide/16 v11, -0x1

    const-wide/16 v13, 0x0

    const-wide/16 v15, 0x0

    const/16 v18, 0x1

    .line 551
    invoke-virtual/range {v0 .. v18}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJLjava/io/IOException;Z)V

    return-void
.end method

.method public final b()V
    .locals 4

    .line 349
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 351
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 352
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$2;

    invoke-direct {v3, p0, v2}, Lcom/tkay/expressad/exoplayer/h/t$a$2;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_1
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 4

    .line 465
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 466
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 467
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$4;

    invoke-direct {v3, p0, v2, p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a$4;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 4

    .line 686
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 687
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 688
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$9;

    invoke-direct {v3, p0, v2, p1}, Lcom/tkay/expressad/exoplayer/h/t$a$9;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V
    .locals 10

    move-object v0, p0

    .line 512
    new-instance v9, Lcom/tkay/expressad/exoplayer/h/t$b;

    move-object v1, v9

    move-object v2, p1

    move-wide/from16 v3, p11

    move-wide/from16 v5, p13

    move-wide/from16 v7, p15

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/exoplayer/h/t$b;-><init>(Lcom/tkay/expressad/exoplayer/j/k;JJJ)V

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/t$c;

    move-wide/from16 v2, p7

    .line 520
    invoke-direct {p0, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v2

    move-wide/from16 v4, p9

    .line 521
    invoke-direct {p0, v4, v5}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(J)J

    move-result-wide v4

    move-object/from16 p7, v1

    move/from16 p8, p2

    move/from16 p9, p3

    move-object/from16 p10, p4

    move/from16 p11, p5

    move-object/from16 p12, p6

    move-wide/from16 p13, v2

    move-wide/from16 p15, v4

    invoke-direct/range {p7 .. p16}, Lcom/tkay/expressad/exoplayer/h/t$c;-><init>(IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V

    .line 512
    invoke-virtual {p0, v9, v1}, Lcom/tkay/expressad/exoplayer/h/t$a;->c(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    return-void
.end method

.method public final c()V
    .locals 4

    .line 624
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 625
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 626
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 627
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$7;

    invoke-direct {v3, p0, v2}, Lcom/tkay/expressad/exoplayer/h/t$a$7;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_1
    return-void
.end method

.method public final c(Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 4

    .line 526
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a;->c:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;

    .line 527
    iget-object v2, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->b:Lcom/tkay/expressad/exoplayer/h/t;

    .line 528
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a$a;->a:Landroid/os/Handler;

    new-instance v3, Lcom/tkay/expressad/exoplayer/h/t$a$5;

    invoke-direct {v3, p0, v2, p1, p2}, Lcom/tkay/expressad/exoplayer/h/t$a$5;-><init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$b;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    invoke-static {v1, v3}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Landroid/os/Handler;Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    return-void
.end method
