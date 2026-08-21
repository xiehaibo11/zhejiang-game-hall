.class final Lcom/tkay/expressad/exoplayer/j;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/j$a;
    }
.end annotation


# static fields
.field private static final w:Ljava/lang/String; = "ExoPlayerImpl"


# instance fields
.field private final A:Landroid/os/Handler;

.field private final B:Lcom/tkay/expressad/exoplayer/k;

.field private final C:Landroid/os/Handler;

.field private final D:Ljava/util/concurrent/CopyOnWriteArraySet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArraySet<",
            "Lcom/tkay/expressad/exoplayer/w$c;",
            ">;"
        }
    .end annotation
.end field

.field private final E:Lcom/tkay/expressad/exoplayer/ae$b;

.field private final F:Lcom/tkay/expressad/exoplayer/ae$a;

.field private final G:Ljava/util/ArrayDeque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayDeque<",
            "Lcom/tkay/expressad/exoplayer/j$a;",
            ">;"
        }
    .end annotation
.end field

.field private H:Z

.field private I:I

.field private J:Z

.field private K:I

.field private L:Z

.field private M:Z

.field private N:Lcom/tkay/expressad/exoplayer/v;

.field private O:Lcom/tkay/expressad/exoplayer/g;

.field private P:Lcom/tkay/expressad/exoplayer/u;

.field private Q:I

.field private R:I

.field private S:J

.field private final x:[Lcom/tkay/expressad/exoplayer/y;

.field private final y:Lcom/tkay/expressad/exoplayer/i/h;

.field private final z:Lcom/tkay/expressad/exoplayer/i/i;


# direct methods
.method public constructor <init>([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/p;Lcom/tkay/expressad/exoplayer/k/c;)V
    .locals 13

    move-object v11, p0

    move-object v1, p1

    .line 92
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 93
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Init "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " [ExoPlayerLib/2.8.4] ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/tkay/expressad/exoplayer/k/af;->e:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ExoPlayerImpl"

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    array-length v0, v1

    const/4 v2, 0x0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 96
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/expressad/exoplayer/y;

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->x:[Lcom/tkay/expressad/exoplayer/y;

    .line 97
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/i/h;

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->y:Lcom/tkay/expressad/exoplayer/i/h;

    .line 98
    iput-boolean v2, v11, Lcom/tkay/expressad/exoplayer/j;->H:Z

    .line 99
    iput v2, v11, Lcom/tkay/expressad/exoplayer/j;->I:I

    .line 100
    iput-boolean v2, v11, Lcom/tkay/expressad/exoplayer/j;->J:Z

    .line 101
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>()V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    .line 102
    new-instance v0, Lcom/tkay/expressad/exoplayer/i/i;

    array-length v2, v1

    new-array v2, v2, [Lcom/tkay/expressad/exoplayer/aa;

    array-length v3, v1

    new-array v3, v3, [Lcom/tkay/expressad/exoplayer/i/f;

    const/4 v4, 0x0

    invoke-direct {v0, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/i/i;-><init>([Lcom/tkay/expressad/exoplayer/aa;[Lcom/tkay/expressad/exoplayer/i/f;Ljava/lang/Object;)V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->z:Lcom/tkay/expressad/exoplayer/i/i;

    .line 107
    new-instance v0, Lcom/tkay/expressad/exoplayer/ae$b;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/ae$b;-><init>()V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 108
    new-instance v0, Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/ae$a;-><init>()V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 109
    sget-object v0, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->N:Lcom/tkay/expressad/exoplayer/v;

    .line 110
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    goto :goto_1

    :cond_1
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    .line 111
    :goto_1
    new-instance v2, Lcom/tkay/expressad/exoplayer/j$1;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/exoplayer/j$1;-><init>(Lcom/tkay/expressad/exoplayer/j;Landroid/os/Looper;)V

    iput-object v2, v11, Lcom/tkay/expressad/exoplayer/j;->A:Landroid/os/Handler;

    .line 117
    new-instance v0, Lcom/tkay/expressad/exoplayer/u;

    sget-object v4, Lcom/tkay/expressad/exoplayer/ae;->a:Lcom/tkay/expressad/exoplayer/ae;

    const-wide/16 v5, 0x0

    sget-object v7, Lcom/tkay/expressad/exoplayer/h/af;->a:Lcom/tkay/expressad/exoplayer/h/af;

    iget-object v8, v11, Lcom/tkay/expressad/exoplayer/j;->z:Lcom/tkay/expressad/exoplayer/i/i;

    move-object v3, v0

    invoke-direct/range {v3 .. v8}, Lcom/tkay/expressad/exoplayer/u;-><init>(Lcom/tkay/expressad/exoplayer/ae;JLcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    .line 123
    new-instance v0, Ljava/util/ArrayDeque;

    invoke-direct {v0}, Ljava/util/ArrayDeque;-><init>()V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->G:Ljava/util/ArrayDeque;

    .line 124
    new-instance v12, Lcom/tkay/expressad/exoplayer/k;

    iget-object v3, v11, Lcom/tkay/expressad/exoplayer/j;->z:Lcom/tkay/expressad/exoplayer/i/i;

    iget-boolean v5, v11, Lcom/tkay/expressad/exoplayer/j;->H:Z

    iget v6, v11, Lcom/tkay/expressad/exoplayer/j;->I:I

    iget-boolean v7, v11, Lcom/tkay/expressad/exoplayer/j;->J:Z

    iget-object v8, v11, Lcom/tkay/expressad/exoplayer/j;->A:Landroid/os/Handler;

    move-object v0, v12

    move-object v1, p1

    move-object v2, p2

    move-object/from16 v4, p3

    move-object v9, p0

    move-object/from16 v10, p4

    invoke-direct/range {v0 .. v10}, Lcom/tkay/expressad/exoplayer/k;-><init>([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/i/i;Lcom/tkay/expressad/exoplayer/p;ZIZLandroid/os/Handler;Lcom/tkay/expressad/exoplayer/h;Lcom/tkay/expressad/exoplayer/k/c;)V

    iput-object v12, v11, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    .line 136
    new-instance v0, Landroid/os/Handler;

    iget-object v1, v11, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/k;->b()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, v11, Lcom/tkay/expressad/exoplayer/j;->C:Landroid/os/Handler;

    return-void
.end method

.method private H()Z
    .locals 1

    .line 703
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-nez v0, :cond_1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    if-lez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private a(ZZI)Lcom/tkay/expressad/exoplayer/u;
    .locals 15

    move-object v0, p0

    if-eqz p1, :cond_0

    const/4 v1, 0x0

    .line 642
    iput v1, v0, Lcom/tkay/expressad/exoplayer/j;->Q:I

    .line 643
    iput v1, v0, Lcom/tkay/expressad/exoplayer/j;->R:I

    const-wide/16 v1, 0x0

    .line 644
    iput-wide v1, v0, Lcom/tkay/expressad/exoplayer/j;->S:J

    goto :goto_0

    .line 646
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/j;->Q:I

    .line 647
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->o()I

    move-result v1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/j;->R:I

    .line 648
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->t()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/expressad/exoplayer/j;->S:J

    .line 650
    :goto_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/u;

    if-eqz p2, :cond_1

    .line 651
    sget-object v2, Lcom/tkay/expressad/exoplayer/ae;->a:Lcom/tkay/expressad/exoplayer/ae;

    goto :goto_1

    :cond_1
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    :goto_1
    move-object v4, v2

    if-eqz p2, :cond_2

    const/4 v2, 0x0

    goto :goto_2

    .line 652
    :cond_2
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->b:Ljava/lang/Object;

    :goto_2
    move-object v5, v2

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v6, v2, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v7, v2, Lcom/tkay/expressad/exoplayer/u;->d:J

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v9, v2, Lcom/tkay/expressad/exoplayer/u;->e:J

    const/4 v12, 0x0

    if-eqz p2, :cond_3

    .line 658
    sget-object v2, Lcom/tkay/expressad/exoplayer/h/af;->a:Lcom/tkay/expressad/exoplayer/h/af;

    goto :goto_3

    :cond_3
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->h:Lcom/tkay/expressad/exoplayer/h/af;

    :goto_3
    move-object v13, v2

    if-eqz p2, :cond_4

    .line 659
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->z:Lcom/tkay/expressad/exoplayer/i/i;

    goto :goto_4

    :cond_4
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    :goto_4
    move-object v14, v2

    move-object v3, v1

    move/from16 v11, p3

    invoke-direct/range {v3 .. v14}, Lcom/tkay/expressad/exoplayer/u;-><init>(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s$a;JJIZLcom/tkay/expressad/exoplayer/h/af;Lcom/tkay/expressad/exoplayer/i/i;)V

    return-object v1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/u;IZI)V
    .locals 7

    .line 606
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    sub-int/2addr v0, p2

    iput v0, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    if-nez v0, :cond_4

    .line 608
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/u;->d:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long p2, v0, v2

    if-nez p2, :cond_0

    .line 610
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    const-wide/16 v2, 0x0

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/u;->e:J

    move-object v0, p1

    .line 611
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object p1

    :cond_0
    move-object v1, p1

    .line 614
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    if-eqz p1, :cond_2

    :cond_1
    iget-object p1, v1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 615
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 617
    iput p2, p0, Lcom/tkay/expressad/exoplayer/j;->R:I

    .line 618
    iput p2, p0, Lcom/tkay/expressad/exoplayer/j;->Q:I

    const-wide/16 v2, 0x0

    .line 619
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/j;->S:J

    .line 623
    :cond_2
    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    if-eqz p1, :cond_3

    move v4, p2

    goto :goto_0

    :cond_3
    const/4 p1, 0x2

    move v4, p1

    .line 626
    :goto_0
    iget-boolean v5, p0, Lcom/tkay/expressad/exoplayer/j;->M:Z

    .line 627
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    .line 628
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/j;->M:Z

    const/4 v6, 0x0

    move-object v0, p0

    move v2, p3

    move v3, p4

    .line 629
    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/u;ZIIZZ)V

    :cond_4
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/u;ZIIZZ)V
    .locals 15

    move-object v0, p0

    .line 669
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/j;->G:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    .line 670
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->G:Ljava/util/ArrayDeque;

    new-instance v14, Lcom/tkay/expressad/exoplayer/j$a;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/j;->y:Lcom/tkay/expressad/exoplayer/i/h;

    iget-boolean v12, v0, Lcom/tkay/expressad/exoplayer/j;->H:Z

    move-object v3, v14

    move-object/from16 v4, p1

    move/from16 v8, p2

    move/from16 v9, p3

    move/from16 v10, p4

    move/from16 v11, p5

    move/from16 v13, p6

    invoke-direct/range {v3 .. v13}, Lcom/tkay/expressad/exoplayer/j$a;-><init>(Lcom/tkay/expressad/exoplayer/u;Lcom/tkay/expressad/exoplayer/u;Ljava/util/Set;Lcom/tkay/expressad/exoplayer/i/h;ZIIZZZ)V

    invoke-virtual {v2, v14}, Ljava/util/ArrayDeque;->addLast(Ljava/lang/Object;)V

    move-object/from16 v2, p1

    .line 683
    iput-object v2, v0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    if-eqz v1, :cond_0

    return-void

    .line 687
    :cond_0
    :goto_0
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/j;->G:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 688
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/j;->G:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->peekFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/j$a;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/j$a;->a()V

    .line 689
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/j;->G:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b(J)J
    .locals 4

    .line 694
    invoke-static {p1, p2}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide p1

    .line 695
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-nez v0, :cond_0

    .line 696
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x0

    .line 7750
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 697
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae$a;->a()J

    move-result-wide v0

    add-long/2addr p1, v0

    :cond_0
    return-wide p1
.end method


# virtual methods
.method public final A()I
    .locals 1

    .line 527
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->y()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method

.method public final B()J
    .locals 4

    .line 532
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->y()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 533
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x0

    .line 6750
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 534
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae$a;->a()J

    move-result-wide v0

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/u;->e:J

    invoke-static {v2, v3}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v2

    add-long/2addr v0, v2

    return-wide v0

    .line 536
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->t()J

    move-result-wide v0

    return-wide v0
.end method

.method public final C()I
    .locals 1

    .line 542
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->x:[Lcom/tkay/expressad/exoplayer/y;

    array-length v0, v0

    return v0
.end method

.method public final D()Lcom/tkay/expressad/exoplayer/h/af;
    .locals 1

    .line 552
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->h:Lcom/tkay/expressad/exoplayer/h/af;

    return-object v0
.end method

.method public final E()Lcom/tkay/expressad/exoplayer/i/g;
    .locals 1

    .line 557
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->i:Lcom/tkay/expressad/exoplayer/i/i;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/i/i;->c:Lcom/tkay/expressad/exoplayer/i/g;

    return-object v0
.end method

.method public final F()Lcom/tkay/expressad/exoplayer/ae;
    .locals 1

    .line 562
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    return-object v0
.end method

.method public final G()Ljava/lang/Object;
    .locals 1

    .line 567
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->b:Ljava/lang/Object;

    return-object v0
.end method

.method public final a()Landroid/os/Looper;
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k;->b()Landroid/os/Looper;

    move-result-object v0

    return-object v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;
    .locals 7

    .line 390
    new-instance v6, Lcom/tkay/expressad/exoplayer/x;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 394
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v4

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/j;->C:Landroid/os/Handler;

    move-object v0, v6

    move-object v2, p1

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/x;-><init>(Lcom/tkay/expressad/exoplayer/x$a;Lcom/tkay/expressad/exoplayer/x$b;Lcom/tkay/expressad/exoplayer/ae;ILandroid/os/Handler;)V

    return-object v6
.end method

.method public final a(I)V
    .locals 2

    .line 223
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->I:I

    if-eq v0, p1, :cond_0

    .line 224
    iput p1, p0, Lcom/tkay/expressad/exoplayer/j;->I:I

    .line 225
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k;->a(I)V

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 227
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/w$c;->onRepeatModeChanged(I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(IJ)V
    .locals 10

    .line 275
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    if-ltz p1, :cond_6

    .line 276
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v1

    if-ge p1, v1, :cond_6

    :cond_0
    const/4 v7, 0x1

    .line 279
    iput-boolean v7, p0, Lcom/tkay/expressad/exoplayer/j;->M:Z

    .line 280
    iget v1, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    add-int/2addr v1, v7

    iput v1, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    .line 281
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->y()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    const-string p1, "ExoPlayerImpl"

    const-string p2, "seekTo ignored because an ad is playing"

    .line 285
    invoke-static {p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 286
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j;->A:Landroid/os/Handler;

    const/4 p2, -0x1

    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    .line 287
    invoke-virtual {p1, v2, v7, p2, p3}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 292
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void

    .line 295
    :cond_1
    iput p1, p0, Lcom/tkay/expressad/exoplayer/j;->Q:I

    .line 296
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    const-wide v3, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz v1, :cond_3

    cmp-long v1, p2, v3

    if-nez v1, :cond_2

    const-wide/16 v3, 0x0

    goto :goto_0

    :cond_2
    move-wide v3, p2

    .line 297
    :goto_0
    iput-wide v3, p0, Lcom/tkay/expressad/exoplayer/j;->S:J

    .line 298
    iput v2, p0, Lcom/tkay/expressad/exoplayer/j;->R:I

    goto :goto_2

    :cond_3
    cmp-long v1, p2, v3

    if-nez v1, :cond_4

    .line 301
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 1621
    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v1

    .line 2219
    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    goto :goto_1

    .line 301
    :cond_4
    invoke-static {p2, p3}, Lcom/tkay/expressad/exoplayer/b;->b(J)J

    move-result-wide v1

    :goto_1
    move-wide v8, v1

    .line 302
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    move-object v1, v0

    move v4, p1

    move-wide v5, v8

    .line 303
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/ae;->a(Lcom/tkay/expressad/exoplayer/ae$b;Lcom/tkay/expressad/exoplayer/ae$a;IJ)Landroid/util/Pair;

    move-result-object v1

    .line 304
    invoke-static {v8, v9}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/j;->S:J

    .line 305
    iget-object v1, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/j;->R:I

    .line 307
    :goto_2
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-static {p2, p3}, Lcom/tkay/expressad/exoplayer/b;->b(J)J

    move-result-wide p2

    invoke-virtual {v1, v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ae;IJ)V

    .line 308
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/exoplayer/w$c;

    .line 309
    invoke-interface {p2, v7}, Lcom/tkay/expressad/exoplayer/w$c;->onPositionDiscontinuity(I)V

    goto :goto_3

    :cond_5
    return-void

    .line 277
    :cond_6
    new-instance v1, Lcom/tkay/expressad/exoplayer/o;

    invoke-direct {v1, v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/o;-><init>(Lcom/tkay/expressad/exoplayer/ae;IJ)V

    throw v1
.end method

.method public final a(J)V
    .locals 1

    .line 270
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v0

    invoke-virtual {p0, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/j;->a(IJ)V

    return-void
.end method

.method final a(Landroid/os/Message;)V
    .locals 13

    .line 572
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-eqz v1, :cond_4

    if-eq v1, v3, :cond_2

    if-ne v1, v2, :cond_1

    .line 590
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lcom/tkay/expressad/exoplayer/g;

    .line 591
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->O:Lcom/tkay/expressad/exoplayer/g;

    .line 592
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/w$c;

    .line 593
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/w$c;->onPlayerError(Lcom/tkay/expressad/exoplayer/g;)V

    goto :goto_0

    :cond_0
    return-void

    .line 597
    :cond_1
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0

    .line 581
    :cond_2
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Lcom/tkay/expressad/exoplayer/v;

    .line 582
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->N:Lcom/tkay/expressad/exoplayer/v;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/v;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 583
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->N:Lcom/tkay/expressad/exoplayer/v;

    .line 584
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/w$c;

    .line 585
    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/w$c;->onPlaybackParametersChanged(Lcom/tkay/expressad/exoplayer/v;)V

    goto :goto_1

    :cond_3
    return-void

    .line 574
    :cond_4
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    move-object v7, v1

    check-cast v7, Lcom/tkay/expressad/exoplayer/u;

    iget v1, p1, Landroid/os/Message;->arg1:I

    iget v4, p1, Landroid/os/Message;->arg2:I

    const/4 v5, -0x1

    const/4 v6, 0x0

    if-eq v4, v5, :cond_5

    goto :goto_2

    :cond_5
    move v3, v6

    :goto_2
    iget v4, p1, Landroid/os/Message;->arg2:I

    .line 7606
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    if-nez v0, :cond_a

    .line 7608
    iget-wide v0, v7, Lcom/tkay/expressad/exoplayer/u;->d:J

    const-wide v8, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v8

    if-nez v0, :cond_6

    .line 7610
    iget-object v8, v7, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    const-wide/16 v9, 0x0

    iget-wide v11, v7, Lcom/tkay/expressad/exoplayer/u;->e:J

    .line 7611
    invoke-virtual/range {v7 .. v12}, Lcom/tkay/expressad/exoplayer/u;->a(Lcom/tkay/expressad/exoplayer/h/s$a;JJ)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v0

    move-object v1, v0

    goto :goto_3

    :cond_6
    move-object v1, v7

    .line 7614
    :goto_3
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-eqz v0, :cond_7

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    if-eqz v0, :cond_8

    :cond_7
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 7615
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 7617
    iput v6, p0, Lcom/tkay/expressad/exoplayer/j;->R:I

    .line 7618
    iput v6, p0, Lcom/tkay/expressad/exoplayer/j;->Q:I

    const-wide/16 v7, 0x0

    .line 7619
    iput-wide v7, p0, Lcom/tkay/expressad/exoplayer/j;->S:J

    .line 7623
    :cond_8
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    if-eqz v0, :cond_9

    move v5, v6

    goto :goto_4

    :cond_9
    move v5, v2

    .line 7626
    :goto_4
    iget-boolean v7, p0, Lcom/tkay/expressad/exoplayer/j;->M:Z

    .line 7627
    iput-boolean v6, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    .line 7628
    iput-boolean v6, p0, Lcom/tkay/expressad/exoplayer/j;->M:Z

    const/4 v6, 0x0

    move-object v0, p0

    move v2, v3

    move v3, v4

    move v4, v5

    move v5, v7

    .line 7629
    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/u;ZIIZZ)V

    :cond_a
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/ac;)V
    .locals 1

    if-nez p1, :cond_0

    .line 329
    sget-object p1, Lcom/tkay/expressad/exoplayer/ac;->e:Lcom/tkay/expressad/exoplayer/ac;

    .line 331
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/ac;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 1

    const/4 v0, 0x1

    .line 176
    invoke-virtual {p0, p1, v0, v0}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/h/s;ZZ)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s;ZZ)V
    .locals 8

    const/4 v0, 0x0

    .line 181
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->O:Lcom/tkay/expressad/exoplayer/g;

    const/4 v0, 0x2

    .line 183
    invoke-direct {p0, p2, p3, v0}, Lcom/tkay/expressad/exoplayer/j;->a(ZZI)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    const/4 v0, 0x1

    .line 189
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->L:Z

    .line 190
    iget v1, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    add-int/2addr v1, v0

    iput v1, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/k;->a(Lcom/tkay/expressad/exoplayer/h/s;ZZ)V

    const/4 v3, 0x0

    const/4 v4, 0x4

    const/4 v5, 0x1

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v1, p0

    .line 192
    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/u;ZIIZZ)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/v;)V
    .locals 1

    if-nez p1, :cond_0

    .line 316
    sget-object p1, Lcom/tkay/expressad/exoplayer/v;->a:Lcom/tkay/expressad/exoplayer/v;

    .line 318
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k;->b(Lcom/tkay/expressad/exoplayer/v;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/w$c;)V
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Z)V
    .locals 8

    .line 203
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->H:Z

    if-eq v0, p1, :cond_0

    .line 204
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/j;->H:Z

    .line 205
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k;->a(Z)V

    .line 206
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    const/4 v3, 0x0

    const/4 v4, 0x4

    const/4 v5, 0x1

    const/4 v6, 0x0

    const/4 v7, 0x1

    move-object v1, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/u;ZIIZZ)V

    :cond_0
    return-void
.end method

.method public final varargs a([Lcom/tkay/expressad/exoplayer/h$c;)V
    .locals 5

    .line 383
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p1, v1

    .line 384
    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/h$c;->a:Lcom/tkay/expressad/exoplayer/x$b;

    invoke-virtual {p0, v3}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v3

    iget v4, v2, Lcom/tkay/expressad/exoplayer/h$c;->b:I

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v3

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h$c;->c:Ljava/lang/Object;

    invoke-virtual {v3, v2}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/w$g;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final b(I)V
    .locals 2

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 265
    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/j;->a(IJ)V

    return-void
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/w$c;)V
    .locals 1

    .line 161
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Z)V
    .locals 2

    .line 239
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->J:Z

    if-eq v0, p1, :cond_0

    .line 240
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/j;->J:Z

    .line 241
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k;->b(Z)V

    .line 242
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->D:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/w$c;

    .line 243
    invoke-interface {v1, p1}, Lcom/tkay/expressad/exoplayer/w$c;->onShuffleModeEnabledChanged(Z)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final varargs b([Lcom/tkay/expressad/exoplayer/h$c;)V
    .locals 7

    .line 400
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 401
    array-length v1, p1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_0

    aget-object v4, p1, v3

    .line 402
    iget-object v5, v4, Lcom/tkay/expressad/exoplayer/h$c;->a:Lcom/tkay/expressad/exoplayer/x$b;

    .line 403
    invoke-virtual {p0, v5}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v5

    iget v6, v4, Lcom/tkay/expressad/exoplayer/h$c;->b:I

    .line 404
    invoke-virtual {v5, v6}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v5

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/h$c;->c:Ljava/lang/Object;

    .line 405
    invoke-virtual {v5, v4}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v4

    .line 406
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    move-result-object v4

    .line 402
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 409
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    move v0, v2

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/x;

    const/4 v3, 0x1

    move v4, v3

    :goto_1
    if-eqz v4, :cond_1

    .line 413
    :try_start_0
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/x;->k()Z
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/util/concurrent/TimeoutException; {:try_start_0 .. :try_end_0} :catch_0

    move v4, v2

    goto :goto_1

    :catch_0
    move-exception v5

    .line 418
    invoke-virtual {v5}, Ljava/util/concurrent/TimeoutException;->getMessage()Ljava/lang/String;

    goto :goto_1

    :catch_1
    move v0, v3

    goto :goto_1

    :cond_2
    if-eqz v0, :cond_3

    .line 424
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Thread;->interrupt()V

    :cond_3
    return-void
.end method

.method public final c(I)I
    .locals 1

    .line 547
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->x:[Lcom/tkay/expressad/exoplayer/y;

    aget-object p1, v0, p1

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/y;->a()I

    move-result p1

    return p1
.end method

.method public final c()Lcom/tkay/expressad/exoplayer/w$e;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final c(Z)V
    .locals 8

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    .line 350
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->O:Lcom/tkay/expressad/exoplayer/g;

    :cond_0
    const/4 v0, 0x1

    .line 353
    invoke-direct {p0, p1, p1, v0}, Lcom/tkay/expressad/exoplayer/j;->a(ZZI)Lcom/tkay/expressad/exoplayer/u;

    move-result-object v2

    .line 361
    iget v1, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    add-int/2addr v1, v0

    iput v1, p0, Lcom/tkay/expressad/exoplayer/j;->K:I

    .line 362
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/k;->c(Z)V

    const/4 v3, 0x0

    const/4 v4, 0x4

    const/4 v5, 0x1

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v1, p0

    .line 363
    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/exoplayer/j;->a(Lcom/tkay/expressad/exoplayer/u;ZIIZZ)V

    return-void
.end method

.method public final d()I
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/u;->f:I

    return v0
.end method

.method public final e()Lcom/tkay/expressad/exoplayer/g;
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->O:Lcom/tkay/expressad/exoplayer/g;

    return-object v0
.end method

.method public final f()Z
    .locals 1

    .line 218
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->H:Z

    return v0
.end method

.method public final g()I
    .locals 1

    .line 234
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->I:I

    return v0
.end method

.method public final h()Z
    .locals 1

    .line 250
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j;->J:Z

    return v0
.end method

.method public final i()Z
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/u;->g:Z

    return v0
.end method

.method public final j()V
    .locals 1

    .line 260
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j;->b(I)V

    return-void
.end method

.method public final k()Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 323
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->N:Lcom/tkay/expressad/exoplayer/v;

    return-object v0
.end method

.method public final l()Ljava/lang/Object;
    .locals 4

    .line 336
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v0

    .line 337
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v1

    if-le v0, v1, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 339
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->a:Ljava/lang/Object;

    return-object v0
.end method

.method public final m()V
    .locals 1

    const/4 v0, 0x0

    .line 344
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j;->c(Z)V

    return-void
.end method

.method public final n()V
    .locals 2

    .line 374
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Release "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " [ExoPlayerLib/2.8.4] ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/tkay/expressad/exoplayer/k/af;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 376
    invoke-static {}, Lcom/tkay/expressad/exoplayer/l;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ExoPlayerImpl"

    .line 374
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 377
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->B:Lcom/tkay/expressad/exoplayer/k;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k;->a()V

    .line 378
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->A:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method

.method public final o()I
    .locals 1

    .line 430
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j;->H()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 431
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->R:I

    return v0

    .line 433
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    return v0
.end method

.method public final p()I
    .locals 4

    .line 439
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j;->H()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 440
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j;->Q:I

    return v0

    .line 442
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 v3, 0x0

    .line 2750
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object v0

    .line 442
    iget v0, v0, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    return v0
.end method

.method public final q()I
    .locals 4

    .line 448
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 449
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, -0x1

    return v0

    .line 450
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v1

    iget v2, p0, Lcom/tkay/expressad/exoplayer/j;->I:I

    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/j;->J:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->a(IIZ)I

    move-result v0

    return v0
.end method

.method public final r()I
    .locals 4

    .line 455
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 456
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, -0x1

    return v0

    .line 457
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v1

    iget v2, p0, Lcom/tkay/expressad/exoplayer/j;->I:I

    iget-boolean v3, p0, Lcom/tkay/expressad/exoplayer/j;->J:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/ae;->b(IIZ)I

    move-result v0

    return v0
.end method

.method public final s()J
    .locals 5

    .line 462
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 463
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    if-eqz v1, :cond_0

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    return-wide v0

    .line 466
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->y()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 467
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 468
    iget v3, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 3750
    invoke-virtual {v0, v3, v4, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 469
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->F:Lcom/tkay/expressad/exoplayer/ae$a;

    iget v2, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/exoplayer/ae$a;->c(II)J

    move-result-wide v0

    .line 470
    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0

    .line 472
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 4621
    invoke-virtual {v0, v1, v3, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    .line 5226
    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->i:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0
.end method

.method public final t()J
    .locals 2

    .line 478
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j;->H()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 479
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/j;->S:J

    return-wide v0

    .line 481
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/u;->j:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/j;->b(J)J

    move-result-wide v0

    return-wide v0
.end method

.method public final u()J
    .locals 2

    .line 488
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j;->H()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 489
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/j;->S:J

    return-wide v0

    .line 491
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/u;->k:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/j;->b(J)J

    move-result-wide v0

    return-wide v0
.end method

.method public final v()I
    .locals 10

    .line 497
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->u()J

    move-result-wide v0

    .line 498
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->s()J

    move-result-wide v2

    const-wide v4, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v6, v0, v4

    const/4 v7, 0x0

    if-eqz v6, :cond_2

    cmp-long v4, v2, v4

    if-nez v4, :cond_0

    goto :goto_0

    :cond_0
    const-wide/16 v4, 0x0

    cmp-long v4, v2, v4

    const/16 v5, 0x64

    if-nez v4, :cond_1

    return v5

    :cond_1
    const-wide/16 v8, 0x64

    mul-long/2addr v0, v8

    .line 500
    div-long/2addr v0, v2

    long-to-int v0, v0

    invoke-static {v0, v7, v5}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v0

    return v0

    :cond_2
    :goto_0
    return v7
.end method

.method public final w()Z
    .locals 4

    .line 505
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 506
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 5621
    invoke-virtual {v0, v1, v3, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    .line 506
    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->e:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    return v2
.end method

.method public final x()Z
    .locals 4

    .line 511
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->a:Lcom/tkay/expressad/exoplayer/ae;

    .line 512
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->p()I

    move-result v1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j;->E:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 6621
    invoke-virtual {v0, v1, v3, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v0

    .line 512
    iget-boolean v0, v0, Lcom/tkay/expressad/exoplayer/ae$b;->d:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    return v2
.end method

.method public final y()Z
    .locals 1

    .line 517
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j;->H()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final z()I
    .locals 1

    .line 522
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j;->y()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j;->P:Lcom/tkay/expressad/exoplayer/u;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/u;->c:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method
