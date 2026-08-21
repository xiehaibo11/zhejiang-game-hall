.class public final Lcom/tkay/expressad/exoplayer/e/a/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/e;
.implements Lcom/tkay/expressad/exoplayer/e/k;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/e/a/g$b;,
        Lcom/tkay/expressad/exoplayer/e/a/g$c;,
        Lcom/tkay/expressad/exoplayer/e/a/g$a;
    }
.end annotation


# static fields
.field public static final d:Lcom/tkay/expressad/exoplayer/e/h;

.field public static final e:I = 0x1

.field private static final f:I = 0x0

.field private static final g:I = 0x1

.field private static final h:I = 0x2

.field private static final i:I

.field private static final j:J = 0x40000L

.field private static final k:J = 0xa00000L


# instance fields
.field private A:[[J

.field private B:I

.field private C:J

.field private D:Z

.field private final l:I

.field private final m:Lcom/tkay/expressad/exoplayer/k/s;

.field private final n:Lcom/tkay/expressad/exoplayer/k/s;

.field private final o:Lcom/tkay/expressad/exoplayer/k/s;

.field private final p:Ljava/util/ArrayDeque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayDeque<",
            "Lcom/tkay/expressad/exoplayer/e/a/a$a;",
            ">;"
        }
    .end annotation
.end field

.field private q:I

.field private r:I

.field private s:J

.field private t:I

.field private u:Lcom/tkay/expressad/exoplayer/k/s;

.field private v:I

.field private w:I

.field private x:I

.field private y:Lcom/tkay/expressad/exoplayer/e/g;

.field private z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 54
    new-instance v0, Lcom/tkay/expressad/exoplayer/e/a/g$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/e/a/g$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/e/a/g;->d:Lcom/tkay/expressad/exoplayer/e/h;

    const-string v0, "qt  "

    .line 85
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->f(Ljava/lang/String;)I

    move-result v0

    sput v0, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 130
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/e/a/g;-><init>(I)V

    return-void
.end method

.method public constructor <init>(I)V
    .locals 1

    .line 139
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 140
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->l:I

    .line 141
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    const/16 v0, 0x10

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    .line 142
    new-instance p1, Ljava/util/ArrayDeque;

    invoke-direct {p1}, Ljava/util/ArrayDeque;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    .line 143
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/p;->a:[B

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>([B)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->m:Lcom/tkay/expressad/exoplayer/k/s;

    .line 144
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v0, 0x4

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 p1, -0x1

    .line 145
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/e/a/m;J)I
    .locals 2

    .line 703
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/m;->a(J)I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 706
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/m;->b(J)I

    move-result v0

    :cond_0
    return v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/e/a/m;JJ)J
    .locals 0

    .line 683
    invoke-static {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/m;J)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_0

    return-wide p3

    .line 687
    :cond_0
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide p1, p0, p1

    .line 688
    invoke-static {p1, p2, p3, p4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p0

    return-wide p0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/i;Z)Ljava/util/ArrayList;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/e/a/a$a;",
            "Lcom/tkay/expressad/exoplayer/e/i;",
            "Z)",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/e/a/m;",
            ">;"
        }
    .end annotation

    .line 449
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 450
    :goto_0
    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 451
    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    .line 452
    iget v3, v2, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aU:I

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->I:I

    if-ne v3, v4, :cond_0

    .line 455
    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->H:I

    .line 458
    invoke-virtual {p1, v3}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v4

    const-wide v5, -0x7fffffffffffffffL    # -4.9E-324

    const/4 v7, 0x0

    iget-boolean v9, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->D:Z

    move-object v3, v2

    move v8, p3

    .line 456
    invoke-static/range {v3 .. v9}, Lcom/tkay/expressad/exoplayer/e/a/b;->a(Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/a/a$b;JLcom/tkay/expressad/exoplayer/d/e;ZZ)Lcom/tkay/expressad/exoplayer/e/a/j;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 466
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->J:I

    .line 467
    invoke-virtual {v2, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v2

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->K:I

    .line 468
    invoke-virtual {v2, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v2

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->L:I

    .line 469
    invoke-virtual {v2, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;

    move-result-object v2

    .line 470
    invoke-static {v3, v2, p2}, Lcom/tkay/expressad/exoplayer/e/a/b;->a(Lcom/tkay/expressad/exoplayer/e/a/j;Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/i;)Lcom/tkay/expressad/exoplayer/e/a/m;

    move-result-object v2

    .line 471
    iget v3, v2, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    if-eqz v3, :cond_0

    .line 474
    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/e/a/a$a;)V
    .locals 18

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 384
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 387
    new-instance v3, Lcom/tkay/expressad/exoplayer/e/i;

    invoke-direct {v3}, Lcom/tkay/expressad/exoplayer/e/i;-><init>()V

    .line 388
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aF:I

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 390
    iget-boolean v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->D:Z

    invoke-static {v4, v5}, Lcom/tkay/expressad/exoplayer/e/a/b;->a(Lcom/tkay/expressad/exoplayer/e/a/a$b;Z)Lcom/tkay/expressad/exoplayer/g/a;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 392
    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/e/i;->a(Lcom/tkay/expressad/exoplayer/g/a;)Z

    goto :goto_0

    :cond_0
    const/4 v4, 0x0

    .line 396
    :cond_1
    :goto_0
    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->l:I

    const/4 v6, 0x1

    and-int/2addr v5, v6

    const/4 v7, 0x0

    if-eqz v5, :cond_2

    move v5, v6

    goto :goto_1

    :cond_2
    move v5, v7

    .line 399
    :goto_1
    :try_start_0
    invoke-direct {v0, v1, v3, v5}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/i;Z)Ljava/util/ArrayList;

    move-result-object v1
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/e/a/b$g; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    .line 402
    :catch_0
    new-instance v3, Lcom/tkay/expressad/exoplayer/e/i;

    invoke-direct {v3}, Lcom/tkay/expressad/exoplayer/e/i;-><init>()V

    .line 404
    invoke-direct {v0, v1, v3, v6}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/a$a;Lcom/tkay/expressad/exoplayer/e/i;Z)Ljava/util/ArrayList;

    move-result-object v1

    .line 407
    :goto_2
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v5

    const/4 v11, -0x1

    const-wide v12, -0x7fffffffffffffffL    # -4.9E-324

    :goto_3
    if-ge v7, v5, :cond_8

    .line 409
    invoke-virtual {v1, v7}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/tkay/expressad/exoplayer/e/a/m;

    .line 410
    iget-object v15, v14, Lcom/tkay/expressad/exoplayer/e/a/m;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    .line 411
    new-instance v10, Lcom/tkay/expressad/exoplayer/e/a/g$b;

    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->y:Lcom/tkay/expressad/exoplayer/e/g;

    iget v9, v15, Lcom/tkay/expressad/exoplayer/e/a/j;->d:I

    .line 412
    invoke-interface {v8, v7, v9}, Lcom/tkay/expressad/exoplayer/e/g;->a(II)Lcom/tkay/expressad/exoplayer/e/m;

    move-result-object v8

    invoke-direct {v10, v15, v14, v8}, Lcom/tkay/expressad/exoplayer/e/a/g$b;-><init>(Lcom/tkay/expressad/exoplayer/e/a/j;Lcom/tkay/expressad/exoplayer/e/a/m;Lcom/tkay/expressad/exoplayer/e/m;)V

    .line 415
    iget v8, v14, Lcom/tkay/expressad/exoplayer/e/a/m;->e:I

    add-int/lit8 v8, v8, 0x1e

    .line 416
    iget-object v9, v15, Lcom/tkay/expressad/exoplayer/e/a/j;->h:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {v9, v8}, Lcom/tkay/expressad/exoplayer/m;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v8

    .line 417
    iget v9, v15, Lcom/tkay/expressad/exoplayer/e/a/j;->d:I

    if-ne v9, v6, :cond_4

    .line 418
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/e/i;->a()Z

    move-result v9

    if-eqz v9, :cond_3

    .line 419
    iget v9, v3, Lcom/tkay/expressad/exoplayer/e/i;->b:I

    iget v6, v3, Lcom/tkay/expressad/exoplayer/e/i;->c:I

    invoke-virtual {v8, v9, v6}, Lcom/tkay/expressad/exoplayer/m;->a(II)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v8

    :cond_3
    if-eqz v4, :cond_4

    .line 423
    invoke-virtual {v8, v4}, Lcom/tkay/expressad/exoplayer/m;->a(Lcom/tkay/expressad/exoplayer/g/a;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v8

    .line 426
    :cond_4
    iget-object v6, v10, Lcom/tkay/expressad/exoplayer/e/a/g$b;->c:Lcom/tkay/expressad/exoplayer/e/m;

    invoke-interface {v6, v8}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/m;)V

    .line 431
    iget-wide v8, v15, Lcom/tkay/expressad/exoplayer/e/a/j;->g:J

    const-wide v16, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v6, v8, v16

    if-eqz v6, :cond_5

    iget-wide v8, v15, Lcom/tkay/expressad/exoplayer/e/a/j;->g:J

    goto :goto_4

    :cond_5
    iget-wide v8, v14, Lcom/tkay/expressad/exoplayer/e/a/m;->h:J

    .line 429
    :goto_4
    invoke-static {v12, v13, v8, v9}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v12

    .line 432
    iget v6, v15, Lcom/tkay/expressad/exoplayer/e/a/j;->d:I

    const/4 v8, 0x2

    if-ne v6, v8, :cond_6

    const/4 v6, -0x1

    if-ne v11, v6, :cond_7

    .line 433
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v11

    goto :goto_5

    :cond_6
    const/4 v6, -0x1

    .line 435
    :cond_7
    :goto_5
    invoke-interface {v2, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v7, v7, 0x1

    const/4 v6, 0x1

    goto :goto_3

    .line 437
    :cond_8
    iput v11, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->B:I

    .line 438
    iput-wide v12, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->C:J

    .line 439
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Lcom/tkay/expressad/exoplayer/e/a/g$b;

    invoke-interface {v2, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Lcom/tkay/expressad/exoplayer/e/a/g$b;

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    .line 440
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/e/a/g;->a([Lcom/tkay/expressad/exoplayer/e/a/g$b;)[[J

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->A:[[J

    .line 442
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->y:Lcom/tkay/expressad/exoplayer/e/g;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/e/g;->c_()V

    .line 443
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->y:Lcom/tkay/expressad/exoplayer/e/g;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/e/g;->a(Lcom/tkay/expressad/exoplayer/e/k;)V

    return-void
.end method

.method private static a(I)Z
    .locals 1

    .line 736
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->W:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->H:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->X:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->Y:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->ar:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->as:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->at:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->V:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->au:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->av:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aw:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->ax:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->ay:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->T:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->f:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aF:I

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/k/s;)Z
    .locals 3

    const/16 v0, 0x8

    .line 718
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 719
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v0

    .line 720
    sget v1, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    const/4 v2, 0x1

    if-ne v0, v1, :cond_0

    return v2

    :cond_0
    const/4 v0, 0x4

    .line 723
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 724
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v0

    if-lez v0, :cond_2

    .line 725
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v0

    sget v1, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    if-ne v0, v1, :cond_1

    return v2

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method private static a([Lcom/tkay/expressad/exoplayer/e/a/g$b;)[[J
    .locals 14

    .line 638
    array-length v0, p0

    new-array v0, v0, [[J

    .line 639
    array-length v1, p0

    new-array v1, v1, [I

    .line 640
    array-length v2, p0

    new-array v2, v2, [J

    .line 641
    array-length v3, p0

    new-array v3, v3, [Z

    const/4 v4, 0x0

    move v5, v4

    .line 642
    :goto_0
    array-length v6, p0

    if-ge v5, v6, :cond_0

    .line 643
    aget-object v6, p0, v5

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget v6, v6, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    new-array v6, v6, [J

    aput-object v6, v0, v5

    .line 644
    aget-object v6, p0, v5

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    aget-wide v7, v6, v4

    aput-wide v7, v2, v5

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    const-wide/16 v5, 0x0

    move v7, v4

    .line 648
    :goto_1
    array-length v8, p0

    if-ge v7, v8, :cond_4

    const-wide v8, 0x7fffffffffffffffL

    const/4 v10, -0x1

    move v11, v4

    .line 651
    :goto_2
    array-length v12, p0

    if-ge v11, v12, :cond_2

    .line 652
    aget-boolean v12, v3, v11

    if-nez v12, :cond_1

    aget-wide v12, v2, v11

    cmp-long v12, v12, v8

    if-gtz v12, :cond_1

    .line 654
    aget-wide v8, v2, v11

    move v10, v11

    :cond_1
    add-int/lit8 v11, v11, 0x1

    goto :goto_2

    .line 657
    :cond_2
    aget v8, v1, v10

    .line 658
    aget-object v9, v0, v10

    aput-wide v5, v9, v8

    .line 659
    aget-object v9, p0, v10

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/m;->d:[I

    aget v9, v9, v8

    int-to-long v11, v9

    add-long/2addr v5, v11

    const/4 v9, 0x1

    add-int/2addr v8, v9

    .line 660
    aput v8, v1, v10

    .line 661
    aget-object v11, v0, v10

    array-length v11, v11

    if-ge v8, v11, :cond_3

    .line 662
    aget-object v9, p0, v10

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    aget-wide v8, v9, v8

    aput-wide v8, v2, v10

    goto :goto_1

    .line 665
    :cond_3
    aput-boolean v9, v3, v10

    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    :cond_4
    return-object v0
.end method

.method private b(J)V
    .locals 4

    .line 362
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v0

    const/4 v1, 0x2

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->peek()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aV:J

    cmp-long v0, v2, p1

    if-nez v0, :cond_2

    .line 363
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->pop()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    .line 364
    iget v2, v0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aU:I

    sget v3, Lcom/tkay/expressad/exoplayer/e/a/a;->G:I

    if-ne v2, v3, :cond_1

    .line 366
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/a$a;)V

    .line 367
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->clear()V

    .line 368
    iput v1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    goto :goto_0

    .line 369
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 370
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->peek()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->a(Lcom/tkay/expressad/exoplayer/e/a/a$a;)V

    goto :goto_0

    .line 373
    :cond_2
    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    if-eq p1, v1, :cond_3

    .line 374
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e/a/g;->d()V

    :cond_3
    return-void
.end method

.method private static b(I)Z
    .locals 1

    .line 748
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->G:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->I:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->J:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->K:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->L:I

    if-eq p0, v0, :cond_1

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->U:I

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private b(Lcom/tkay/expressad/exoplayer/e/f;)Z
    .locals 8

    .line 273
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    const/16 v1, 0x8

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v0, :cond_1

    .line 275
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-interface {p1, v0, v3, v1, v2}, Lcom/tkay/expressad/exoplayer/e/f;->a([BIIZ)Z

    move-result v0

    if-nez v0, :cond_0

    return v3

    .line 278
    :cond_0
    iput v1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 280
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    .line 281
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    .line 284
    :cond_1
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    const-wide/16 v6, 0x1

    cmp-long v0, v4, v6

    if-nez v0, :cond_2

    .line 287
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-interface {p1, v0, v1, v1}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 288
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    .line 289
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/k/s;->n()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    goto :goto_0

    :cond_2
    const-wide/16 v6, 0x0

    cmp-long v0, v4, v6

    if-nez v0, :cond_4

    .line 293
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/e/f;->d()J

    move-result-wide v4

    const-wide/16 v6, -0x1

    cmp-long v0, v4, v6

    if-nez v0, :cond_3

    .line 294
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_3

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->peek()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aV:J

    :cond_3
    cmp-long v0, v4, v6

    if-eqz v0, :cond_4

    .line 298
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v6

    sub-long/2addr v4, v6

    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v6, v0

    add-long/2addr v4, v6

    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    .line 302
    :cond_4
    :goto_0
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v6, v0

    cmp-long v0, v4, v6

    if-ltz v0, :cond_e

    .line 306
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    .line 5748
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->G:I

    if-eq v0, v4, :cond_6

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->I:I

    if-eq v0, v4, :cond_6

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->J:I

    if-eq v0, v4, :cond_6

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->K:I

    if-eq v0, v4, :cond_6

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->L:I

    if-eq v0, v4, :cond_6

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->U:I

    if-ne v0, v4, :cond_5

    goto :goto_1

    :cond_5
    move v0, v3

    goto :goto_2

    :cond_6
    :goto_1
    move v0, v2

    :goto_2
    if-eqz v0, :cond_8

    .line 307
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v0

    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    add-long/2addr v0, v3

    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v3, p1

    sub-long/2addr v0, v3

    .line 308
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    new-instance v3, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    invoke-direct {v3, v4, v0, v1}, Lcom/tkay/expressad/exoplayer/e/a/a$a;-><init>(IJ)V

    invoke-virtual {p1, v3}, Ljava/util/ArrayDeque;->push(Ljava/lang/Object;)V

    .line 309
    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v5, p1

    cmp-long p1, v3, v5

    if-nez p1, :cond_7

    .line 310
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/e/a/g;->b(J)V

    goto/16 :goto_7

    .line 313
    :cond_7
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e/a/g;->d()V

    goto/16 :goto_7

    .line 315
    :cond_8
    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    .line 6736
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->W:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->H:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->X:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->Y:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->ar:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->as:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->at:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->V:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->au:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->av:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aw:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->ax:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->ay:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->T:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->f:I

    if-eq p1, v0, :cond_a

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/a;->aF:I

    if-ne p1, v0, :cond_9

    goto :goto_3

    :cond_9
    move p1, v3

    goto :goto_4

    :cond_a
    :goto_3
    move p1, v2

    :goto_4
    if-eqz p1, :cond_d

    .line 318
    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    if-ne p1, v1, :cond_b

    move p1, v2

    goto :goto_5

    :cond_b
    move p1, v3

    :goto_5
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 319
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    const-wide/32 v6, 0x7fffffff

    cmp-long p1, v4, v6

    if-gtz p1, :cond_c

    move p1, v2

    goto :goto_6

    :cond_c
    move p1, v3

    :goto_6
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 320
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/s;

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    long-to-int v0, v4

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    .line 321
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-static {p1, v3, v0, v3, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 322
    iput v2, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    goto :goto_7

    :cond_d
    const/4 p1, 0x0

    .line 324
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    .line 325
    iput v2, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    :goto_7
    return v2

    .line 303
    :cond_e
    new-instance p1, Lcom/tkay/expressad/exoplayer/t;

    const-string v0, "Atom size less than header length (unsupported)."

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private b(Lcom/tkay/expressad/exoplayer/e/f;Lcom/tkay/expressad/exoplayer/e/j;)Z
    .locals 9

    .line 338
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    iget v2, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v2, v2

    sub-long/2addr v0, v2

    .line 339
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v2

    add-long/2addr v2, v0

    .line 341
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-eqz v4, :cond_4

    .line 342
    iget-object p2, v4, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    iget v4, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    long-to-int v0, v0

    invoke-interface {p1, p2, v4, v0}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 343
    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    sget p2, Lcom/tkay/expressad/exoplayer/e/a/a;->f:I

    if-ne p1, p2, :cond_3

    .line 344
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    const/16 p2, 0x8

    .line 7718
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 7719
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result p2

    .line 7720
    sget v0, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    if-ne p2, v0, :cond_0

    :goto_0
    move p1, v6

    goto :goto_1

    :cond_0
    const/4 p2, 0x4

    .line 7723
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 7724
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result p2

    if-lez p2, :cond_2

    .line 7725
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result p2

    sget v0, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    if-ne p2, v0, :cond_1

    goto :goto_0

    :cond_2
    move p1, v5

    .line 344
    :goto_1
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->D:Z

    goto :goto_2

    .line 345
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {p1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_5

    .line 346
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {p1}, Ljava/util/ArrayDeque;->peek()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    new-instance p2, Lcom/tkay/expressad/exoplayer/e/a/a$b;

    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {p2, v0, v1}, Lcom/tkay/expressad/exoplayer/e/a/a$b;-><init>(ILcom/tkay/expressad/exoplayer/k/s;)V

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->a(Lcom/tkay/expressad/exoplayer/e/a/a$b;)V

    goto :goto_2

    :cond_4
    const-wide/32 v7, 0x40000

    cmp-long v4, v0, v7

    if-gez v4, :cond_6

    long-to-int p2, v0

    .line 351
    invoke-interface {p1, p2}, Lcom/tkay/expressad/exoplayer/e/f;->c(I)V

    :cond_5
    :goto_2
    move p1, v5

    goto :goto_3

    .line 353
    :cond_6
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v7

    add-long/2addr v7, v0

    iput-wide v7, p2, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    move p1, v6

    .line 357
    :goto_3
    invoke-direct {p0, v2, v3}, Lcom/tkay/expressad/exoplayer/e/a/g;->b(J)V

    if-eqz p1, :cond_7

    .line 358
    iget p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    const/4 p2, 0x2

    if-eq p1, p2, :cond_7

    return v6

    :cond_7
    return v5
.end method

.method private c(J)I
    .locals 20

    move-object/from16 v0, p0

    const/4 v2, -0x1

    move v6, v2

    const/4 v7, 0x0

    const-wide v8, 0x7fffffffffffffffL

    const/4 v10, 0x1

    const-wide v11, 0x7fffffffffffffffL

    const/4 v13, 0x1

    const-wide v14, 0x7fffffffffffffffL

    .line 588
    :goto_0
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    array-length v3, v1

    if-ge v7, v3, :cond_6

    .line 589
    aget-object v1, v1, v7

    .line 590
    iget v3, v1, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    .line 591
    iget-object v4, v1, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget v4, v4, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    if-eq v3, v4, :cond_5

    .line 594
    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide v4, v1, v3

    .line 595
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->A:[[J

    aget-object v1, v1, v7

    aget-wide v16, v1, v3

    sub-long v4, v4, p1

    const-wide/16 v18, 0x0

    cmp-long v1, v4, v18

    if-ltz v1, :cond_1

    const-wide/32 v18, 0x40000

    cmp-long v1, v4, v18

    if-ltz v1, :cond_0

    goto :goto_1

    :cond_0
    const/4 v1, 0x0

    goto :goto_2

    :cond_1
    :goto_1
    const/4 v1, 0x1

    :goto_2
    if-nez v1, :cond_2

    if-nez v13, :cond_3

    :cond_2
    if-ne v1, v13, :cond_4

    cmp-long v3, v4, v14

    if-gez v3, :cond_4

    :cond_3
    move v13, v1

    move-wide v14, v4

    move v6, v7

    move-wide/from16 v11, v16

    :cond_4
    cmp-long v3, v16, v8

    if-gez v3, :cond_5

    move v10, v1

    move v2, v7

    move-wide/from16 v8, v16

    :cond_5
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    :cond_6
    const-wide v3, 0x7fffffffffffffffL

    cmp-long v1, v8, v3

    if-eqz v1, :cond_8

    if-eqz v10, :cond_8

    const-wide/32 v3, 0xa00000

    add-long/2addr v8, v3

    cmp-long v1, v11, v8

    if-gez v1, :cond_7

    goto :goto_3

    :cond_7
    return v2

    :cond_8
    :goto_3
    return v6
.end method

.method private c(Lcom/tkay/expressad/exoplayer/e/f;Lcom/tkay/expressad/exoplayer/e/j;)I
    .locals 25

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 497
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v2

    .line 498
    iget v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    const-wide/32 v5, 0x40000

    const-wide/16 v7, 0x0

    const/4 v9, -0x1

    if-ne v4, v9, :cond_9

    move/from16 v19, v9

    move/from16 v20, v19

    const/4 v4, 0x0

    const/4 v11, 0x1

    const-wide v14, 0x7fffffffffffffffL

    const/16 v16, 0x1

    const-wide v17, 0x7fffffffffffffffL

    const-wide v21, 0x7fffffffffffffffL

    .line 8588
    :goto_0
    iget-object v10, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    array-length v9, v10

    if-ge v4, v9, :cond_6

    .line 8589
    aget-object v9, v10, v4

    .line 8590
    iget v10, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    .line 8591
    iget-object v12, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget v12, v12, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    if-eq v10, v12, :cond_5

    .line 8594
    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide v12, v9, v10

    .line 8595
    iget-object v9, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->A:[[J

    aget-object v9, v9, v4

    aget-wide v23, v9, v10

    sub-long/2addr v12, v2

    cmp-long v9, v12, v7

    if-ltz v9, :cond_1

    cmp-long v9, v12, v5

    if-ltz v9, :cond_0

    goto :goto_1

    :cond_0
    const/4 v9, 0x0

    goto :goto_2

    :cond_1
    :goto_1
    const/4 v9, 0x1

    :goto_2
    if-nez v9, :cond_2

    if-nez v11, :cond_3

    :cond_2
    if-ne v9, v11, :cond_4

    cmp-long v10, v12, v21

    if-gez v10, :cond_4

    :cond_3
    move/from16 v20, v4

    move v11, v9

    move-wide/from16 v21, v12

    move-wide/from16 v17, v23

    :cond_4
    cmp-long v10, v23, v14

    if-gez v10, :cond_5

    move/from16 v19, v4

    move/from16 v16, v9

    move-wide/from16 v14, v23

    :cond_5
    add-int/lit8 v4, v4, 0x1

    const/4 v9, -0x1

    goto :goto_0

    :cond_6
    const-wide v9, 0x7fffffffffffffffL

    cmp-long v4, v14, v9

    if-eqz v4, :cond_8

    if-eqz v16, :cond_8

    const-wide/32 v9, 0xa00000

    add-long/2addr v14, v9

    cmp-long v4, v17, v14

    if-gez v4, :cond_7

    goto :goto_3

    :cond_7
    move/from16 v4, v19

    goto :goto_4

    :cond_8
    :goto_3
    move/from16 v4, v20

    .line 499
    :goto_4
    iput v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    const/4 v9, -0x1

    if-ne v4, v9, :cond_9

    return v9

    .line 504
    :cond_9
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    iget v9, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    aget-object v4, v4, v9

    .line 505
    iget-object v9, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->c:Lcom/tkay/expressad/exoplayer/e/m;

    .line 506
    iget v10, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    .line 507
    iget-object v11, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v11, v11, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide v12, v11, v10

    .line 508
    iget-object v11, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v11, v11, Lcom/tkay/expressad/exoplayer/e/a/m;->d:[I

    aget v11, v11, v10

    sub-long v2, v12, v2

    .line 509
    iget v14, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    int-to-long v14, v14

    add-long/2addr v2, v14

    cmp-long v7, v2, v7

    if-ltz v7, :cond_f

    cmp-long v5, v2, v5

    if-ltz v5, :cond_a

    move-object/from16 v1, p2

    const/4 v2, 0x1

    goto/16 :goto_7

    .line 514
    :cond_a
    iget-object v5, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v5, v5, Lcom/tkay/expressad/exoplayer/e/a/j;->i:I

    const/4 v6, 0x1

    if-ne v5, v6, :cond_b

    const-wide/16 v5, 0x8

    add-long/2addr v2, v5

    add-int/lit8 v11, v11, -0x8

    :cond_b
    long-to-int v2, v2

    .line 520
    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/e/f;->c(I)V

    .line 521
    iget-object v2, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    if-eqz v2, :cond_d

    .line 524
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    const/4 v3, 0x0

    .line 525
    aput-byte v3, v2, v3

    const/4 v5, 0x1

    .line 526
    aput-byte v3, v2, v5

    const/4 v5, 0x2

    .line 527
    aput-byte v3, v2, v5

    .line 528
    iget-object v2, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    .line 529
    iget-object v3, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    const/4 v5, 0x4

    rsub-int/lit8 v3, v3, 0x4

    .line 533
    :goto_5
    iget v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    if-ge v6, v11, :cond_e

    .line 534
    iget v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    if-nez v6, :cond_c

    .line 536
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-interface {v1, v6, v3, v2}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 537
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v7, 0x0

    invoke-virtual {v6, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 538
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v6}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v6

    iput v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    .line 540
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->m:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v6, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 541
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->m:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-interface {v9, v6, v5}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/k/s;I)V

    .line 542
    iget v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v6, v5

    iput v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v11, v3

    goto :goto_5

    :cond_c
    const/4 v7, 0x0

    .line 546
    invoke-interface {v9, v1, v6, v7}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I

    move-result v6

    .line 547
    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v7, v6

    iput v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 548
    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    sub-int/2addr v7, v6

    iput v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    goto :goto_5

    .line 552
    :cond_d
    :goto_6
    iget v2, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    if-ge v2, v11, :cond_e

    sub-int v2, v11, v2

    const/4 v3, 0x0

    .line 553
    invoke-interface {v9, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I

    move-result v2

    .line 554
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v3, v2

    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 555
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    sub-int/2addr v3, v2

    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    goto :goto_6

    :cond_e
    move v13, v11

    .line 558
    iget-object v1, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    aget-wide v2, v1, v10

    iget-object v1, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/m;->g:[I

    aget v12, v1, v10

    const/4 v14, 0x0

    const/4 v15, 0x0

    move-wide v10, v2

    invoke-interface/range {v9 .. v15}, Lcom/tkay/expressad/exoplayer/e/m;->a(JIIILcom/tkay/expressad/exoplayer/e/m$a;)V

    .line 560
    iget v1, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    const/4 v2, 0x1

    add-int/2addr v1, v2

    iput v1, v4, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    const/4 v1, -0x1

    .line 561
    iput v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    const/4 v1, 0x0

    .line 562
    iput v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 563
    iput v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    return v1

    :cond_f
    const/4 v2, 0x1

    move-object/from16 v1, p2

    .line 511
    :goto_7
    iput-wide v12, v1, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    return v2
.end method

.method private d()V
    .locals 1

    const/4 v0, 0x0

    .line 268
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    .line 269
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    return-void
.end method

.method private d(J)V
    .locals 7

    .line 622
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 623
    iget-object v4, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    .line 624
    invoke-virtual {v4, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/m;->a(J)I

    move-result v5

    const/4 v6, -0x1

    if-ne v5, v6, :cond_0

    .line 627
    invoke-virtual {v4, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/m;->b(J)I

    move-result v5

    .line 629
    :cond_0
    iput v5, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/e/f;Lcom/tkay/expressad/exoplayer/e/j;)I
    .locals 30

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    .line 181
    :cond_0
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    const-wide/16 v4, 0x0

    const/4 v6, -0x1

    const/16 v7, 0x8

    const/4 v8, 0x1

    if-eqz v3, :cond_1b

    const-wide/32 v10, 0x40000

    const/4 v12, 0x2

    if-eq v3, v8, :cond_12

    if-ne v3, v12, :cond_11

    .line 5497
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v14

    .line 5498
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    if-ne v3, v6, :cond_a

    const-wide v16, 0x7fffffffffffffffL

    move/from16 v22, v6

    move/from16 v23, v22

    move v7, v8

    move v13, v7

    move-wide/from16 v18, v16

    move-wide/from16 v20, v18

    move-wide/from16 v24, v20

    const/4 v3, 0x0

    .line 5588
    :goto_0
    iget-object v12, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    array-length v9, v12

    if-ge v3, v9, :cond_7

    .line 5589
    aget-object v9, v12, v3

    .line 5590
    iget v12, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    .line 5591
    iget-object v8, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget v8, v8, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    if-eq v12, v8, :cond_6

    .line 5594
    iget-object v8, v9, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v8, v8, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide v26, v8, v12

    .line 5595
    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->A:[[J

    aget-object v8, v8, v3

    aget-wide v28, v8, v12

    sub-long v26, v26, v14

    cmp-long v8, v26, v4

    if-ltz v8, :cond_2

    cmp-long v8, v26, v10

    if-ltz v8, :cond_1

    goto :goto_1

    :cond_1
    const/4 v8, 0x0

    goto :goto_2

    :cond_2
    :goto_1
    const/4 v8, 0x1

    :goto_2
    if-nez v8, :cond_3

    if-nez v13, :cond_4

    :cond_3
    if-ne v8, v13, :cond_5

    cmp-long v9, v26, v24

    if-gez v9, :cond_5

    :cond_4
    move/from16 v23, v3

    move v13, v8

    move-wide/from16 v24, v26

    move-wide/from16 v20, v28

    :cond_5
    cmp-long v9, v28, v18

    if-gez v9, :cond_6

    move/from16 v22, v3

    move v7, v8

    move-wide/from16 v18, v28

    :cond_6
    add-int/lit8 v3, v3, 0x1

    const/4 v8, 0x1

    goto :goto_0

    :cond_7
    cmp-long v3, v18, v16

    if-eqz v3, :cond_9

    if-eqz v7, :cond_9

    const-wide/32 v7, 0xa00000

    add-long v18, v18, v7

    cmp-long v3, v20, v18

    if-gez v3, :cond_8

    goto :goto_3

    :cond_8
    move/from16 v3, v22

    goto :goto_4

    :cond_9
    :goto_3
    move/from16 v3, v23

    .line 5499
    :goto_4
    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    if-ne v3, v6, :cond_a

    return v6

    .line 5504
    :cond_a
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    aget-object v3, v3, v7

    .line 5505
    iget-object v7, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->c:Lcom/tkay/expressad/exoplayer/e/m;

    .line 5506
    iget v8, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    .line 5507
    iget-object v9, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide v12, v9, v8

    .line 5508
    iget-object v9, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v9, v9, Lcom/tkay/expressad/exoplayer/e/a/m;->d:[I

    aget v9, v9, v8

    sub-long v14, v12, v14

    .line 5509
    iget v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    int-to-long v10, v6

    add-long/2addr v14, v10

    cmp-long v4, v14, v4

    if-ltz v4, :cond_10

    const-wide/32 v4, 0x40000

    cmp-long v4, v14, v4

    if-ltz v4, :cond_b

    goto/16 :goto_7

    .line 5514
    :cond_b
    iget-object v2, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->i:I

    const/4 v4, 0x1

    if-ne v2, v4, :cond_c

    const-wide/16 v4, 0x8

    add-long/2addr v14, v4

    add-int/lit8 v9, v9, -0x8

    :cond_c
    long-to-int v2, v14

    .line 5520
    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/e/f;->c(I)V

    .line 5521
    iget-object v2, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    if-eqz v2, :cond_e

    .line 5524
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    const/4 v4, 0x0

    .line 5525
    aput-byte v4, v2, v4

    const/4 v5, 0x1

    .line 5526
    aput-byte v4, v2, v5

    const/4 v5, 0x2

    .line 5527
    aput-byte v4, v2, v5

    .line 5528
    iget-object v2, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    .line 5529
    iget-object v4, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->a:Lcom/tkay/expressad/exoplayer/e/a/j;

    iget v4, v4, Lcom/tkay/expressad/exoplayer/e/a/j;->l:I

    const/4 v5, 0x4

    rsub-int/lit8 v13, v4, 0x4

    .line 5533
    :goto_5
    iget v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    if-ge v4, v9, :cond_f

    .line 5534
    iget v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    if-nez v4, :cond_d

    .line 5536
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-interface {v1, v4, v13, v2}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 5537
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 5538
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->n:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/k/s;->m()I

    move-result v4

    iput v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    .line 5540
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->m:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 5541
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->m:Lcom/tkay/expressad/exoplayer/k/s;

    const/4 v6, 0x4

    invoke-interface {v7, v4, v6}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/k/s;I)V

    .line 5542
    iget v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v4, v6

    iput v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v9, v13

    goto :goto_5

    :cond_d
    const/4 v5, 0x0

    .line 5546
    invoke-interface {v7, v1, v4, v5}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I

    move-result v4

    .line 5547
    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v5, v4

    iput v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 5548
    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    sub-int/2addr v5, v4

    iput v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    goto :goto_5

    .line 5552
    :cond_e
    :goto_6
    iget v2, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    if-ge v2, v9, :cond_f

    sub-int v2, v9, v2

    const/4 v4, 0x0

    .line 5553
    invoke-interface {v7, v1, v2, v4}, Lcom/tkay/expressad/exoplayer/e/m;->a(Lcom/tkay/expressad/exoplayer/e/f;IZ)I

    move-result v2

    .line 5554
    iget v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    add-int/2addr v4, v2

    iput v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 5555
    iget v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    sub-int/2addr v4, v2

    iput v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    goto :goto_6

    :cond_f
    move/from16 v20, v9

    .line 5558
    iget-object v1, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    aget-wide v17, v1, v8

    iget-object v1, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/e/a/m;->g:[I

    aget v19, v1, v8

    const/16 v21, 0x0

    const/16 v22, 0x0

    move-object/from16 v16, v7

    invoke-interface/range {v16 .. v22}, Lcom/tkay/expressad/exoplayer/e/m;->a(JIIILcom/tkay/expressad/exoplayer/e/m$a;)V

    .line 5560
    iget v1, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    const/4 v4, 0x1

    add-int/2addr v1, v4

    iput v1, v3, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    const/4 v1, -0x1

    .line 5561
    iput v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    const/4 v1, 0x0

    .line 5562
    iput v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 5563
    iput v1, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    return v1

    :cond_10
    :goto_7
    const/4 v4, 0x1

    .line 5511
    iput-wide v12, v2, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    return v4

    .line 195
    :cond_11
    new-instance v1, Ljava/lang/IllegalStateException;

    invoke-direct {v1}, Ljava/lang/IllegalStateException;-><init>()V

    throw v1

    .line 4338
    :cond_12
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v5, v5

    sub-long/2addr v3, v5

    .line 4339
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v5

    add-long/2addr v5, v3

    .line 4341
    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    if-eqz v8, :cond_17

    .line 4342
    iget-object v8, v8, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    iget v9, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    long-to-int v3, v3

    invoke-interface {v1, v8, v9, v3}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 4343
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->f:I

    if-ne v3, v4, :cond_16

    .line 4344
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    .line 4718
    invoke-virtual {v3, v7}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 4719
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v4

    .line 4720
    sget v7, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    if-ne v4, v7, :cond_13

    :goto_8
    const/4 v3, 0x1

    goto :goto_9

    :cond_13
    const/4 v4, 0x4

    .line 4723
    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/k/s;->d(I)V

    .line 4724
    :cond_14
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/k/s;->a()I

    move-result v4

    if-lez v4, :cond_15

    .line 4725
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v4

    sget v7, Lcom/tkay/expressad/exoplayer/e/a/g;->i:I

    if-ne v4, v7, :cond_14

    goto :goto_8

    :cond_15
    const/4 v3, 0x0

    .line 4344
    :goto_9
    iput-boolean v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->D:Z

    goto :goto_a

    .line 4345
    :cond_16
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v3}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_18

    .line 4346
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v3}, Ljava/util/ArrayDeque;->peek()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    new-instance v4, Lcom/tkay/expressad/exoplayer/e/a/a$b;

    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-direct {v4, v7, v8}, Lcom/tkay/expressad/exoplayer/e/a/a$b;-><init>(ILcom/tkay/expressad/exoplayer/k/s;)V

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->a(Lcom/tkay/expressad/exoplayer/e/a/a$b;)V

    goto :goto_a

    :cond_17
    const-wide/32 v7, 0x40000

    cmp-long v7, v3, v7

    if-gez v7, :cond_19

    long-to-int v3, v3

    .line 4351
    invoke-interface {v1, v3}, Lcom/tkay/expressad/exoplayer/e/f;->c(I)V

    :cond_18
    :goto_a
    const/4 v3, 0x0

    goto :goto_b

    .line 4353
    :cond_19
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v7

    add-long/2addr v7, v3

    iput-wide v7, v2, Lcom/tkay/expressad/exoplayer/e/j;->a:J

    const/4 v3, 0x1

    .line 4357
    :goto_b
    invoke-direct {v0, v5, v6}, Lcom/tkay/expressad/exoplayer/e/a/g;->b(J)V

    if-eqz v3, :cond_1a

    .line 4358
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    const/4 v4, 0x2

    if-eq v3, v4, :cond_1a

    const/4 v9, 0x1

    goto :goto_c

    :cond_1a
    const/4 v9, 0x0

    :goto_c
    if-eqz v9, :cond_0

    const/4 v3, 0x1

    return v3

    :cond_1b
    move v3, v8

    .line 2273
    iget v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    if-nez v6, :cond_1d

    .line 2275
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    const/4 v8, 0x0

    invoke-interface {v1, v6, v8, v7, v3}, Lcom/tkay/expressad/exoplayer/e/f;->a([BIIZ)Z

    move-result v6

    if-nez v6, :cond_1c

    goto/16 :goto_16

    .line 2278
    :cond_1c
    iput v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    .line 2279
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v3, v8}, Lcom/tkay/expressad/exoplayer/k/s;->c(I)V

    .line 2280
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v8

    iput-wide v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    .line 2281
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/k/s;->i()I

    move-result v3

    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    .line 2284
    :cond_1d
    iget-wide v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    const-wide/16 v10, 0x1

    cmp-long v3, v8, v10

    if-nez v3, :cond_1e

    .line 2287
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    invoke-interface {v1, v3, v7, v7}, Lcom/tkay/expressad/exoplayer/e/f;->b([BII)V

    .line 2288
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    add-int/2addr v3, v7

    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    .line 2289
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/k/s;->n()J

    move-result-wide v3

    iput-wide v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    goto :goto_d

    :cond_1e
    cmp-long v3, v8, v4

    if-nez v3, :cond_20

    .line 2293
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->d()J

    move-result-wide v3

    const-wide/16 v5, -0x1

    cmp-long v8, v3, v5

    if-nez v8, :cond_1f

    .line 2294
    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v8}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v8

    if-nez v8, :cond_1f

    .line 2295
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v3}, Ljava/util/ArrayDeque;->peek()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    iget-wide v3, v3, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aV:J

    :cond_1f
    cmp-long v5, v3, v5

    if-eqz v5, :cond_20

    .line 2298
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v5

    sub-long/2addr v3, v5

    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v5, v5

    add-long/2addr v3, v5

    iput-wide v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    .line 2302
    :cond_20
    :goto_d
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v5, v5

    cmp-long v3, v3, v5

    if-ltz v3, :cond_2a

    .line 2306
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    .line 2748
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->G:I

    if-eq v3, v4, :cond_22

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->I:I

    if-eq v3, v4, :cond_22

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->J:I

    if-eq v3, v4, :cond_22

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->K:I

    if-eq v3, v4, :cond_22

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->L:I

    if-eq v3, v4, :cond_22

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->U:I

    if-ne v3, v4, :cond_21

    goto :goto_e

    :cond_21
    const/4 v4, 0x0

    goto :goto_f

    :cond_22
    :goto_e
    const/4 v4, 0x1

    :goto_f
    if-eqz v4, :cond_24

    .line 2307
    invoke-interface/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/e/f;->c()J

    move-result-wide v3

    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    add-long/2addr v3, v5

    iget v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v5, v5

    sub-long/2addr v3, v5

    .line 2308
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    new-instance v6, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    invoke-direct {v6, v7, v3, v4}, Lcom/tkay/expressad/exoplayer/e/a/a$a;-><init>(IJ)V

    invoke-virtual {v5, v6}, Ljava/util/ArrayDeque;->push(Ljava/lang/Object;)V

    .line 2309
    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    int-to-long v7, v7

    cmp-long v5, v5, v7

    if-nez v5, :cond_23

    .line 2310
    invoke-direct {v0, v3, v4}, Lcom/tkay/expressad/exoplayer/e/a/g;->b(J)V

    goto :goto_10

    .line 2313
    :cond_23
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/e/a/g;->d()V

    :goto_10
    const/4 v3, 0x1

    goto/16 :goto_15

    .line 2315
    :cond_24
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->r:I

    .line 3736
    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->W:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->H:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->X:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->Y:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->ar:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->as:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->at:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->V:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->au:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->av:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aw:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->ax:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->ay:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->T:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->f:I

    if-eq v3, v4, :cond_26

    sget v4, Lcom/tkay/expressad/exoplayer/e/a/a;->aF:I

    if-ne v3, v4, :cond_25

    goto :goto_11

    :cond_25
    const/4 v4, 0x0

    goto :goto_12

    :cond_26
    :goto_11
    const/4 v4, 0x1

    :goto_12
    if-eqz v4, :cond_29

    .line 2318
    iget v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    if-ne v3, v7, :cond_27

    const/4 v4, 0x1

    goto :goto_13

    :cond_27
    const/4 v4, 0x0

    :goto_13
    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 2319
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    const-wide/32 v5, 0x7fffffff

    cmp-long v3, v3, v5

    if-gtz v3, :cond_28

    const/4 v4, 0x1

    goto :goto_14

    :cond_28
    const/4 v4, 0x0

    :goto_14
    invoke-static {v4}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 2320
    new-instance v3, Lcom/tkay/expressad/exoplayer/k/s;

    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->s:J

    long-to-int v4, v4

    invoke-direct {v3, v4}, Lcom/tkay/expressad/exoplayer/k/s;-><init>(I)V

    iput-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    .line 2321
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->o:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/k/s;->a:[B

    const/4 v5, 0x0

    invoke-static {v3, v5, v4, v5, v7}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/4 v3, 0x1

    .line 2322
    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    goto :goto_15

    :cond_29
    const/4 v3, 0x1

    const/4 v4, 0x0

    .line 2324
    iput-object v4, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->u:Lcom/tkay/expressad/exoplayer/k/s;

    .line 2325
    iput v3, v0, Lcom/tkay/expressad/exoplayer/e/a/g;->q:I

    :goto_15
    move v8, v3

    :goto_16
    if-nez v8, :cond_0

    const/4 v3, -0x1

    return v3

    .line 2303
    :cond_2a
    new-instance v1, Lcom/tkay/expressad/exoplayer/t;

    const-string v2, "Atom size less than header length (unsupported)."

    invoke-direct {v1, v2}, Lcom/tkay/expressad/exoplayer/t;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public final a(J)Lcom/tkay/expressad/exoplayer/e/k$a;
    .locals 12

    .line 214
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    array-length v1, v0

    if-nez v1, :cond_0

    .line 215
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/k$a;

    sget-object p2, Lcom/tkay/expressad/exoplayer/e/l;->a:Lcom/tkay/expressad/exoplayer/e/l;

    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/e/k$a;-><init>(Lcom/tkay/expressad/exoplayer/e/l;)V

    return-object p1

    :cond_0
    const-wide/16 v1, -0x1

    .line 224
    iget v3, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->B:I

    const/4 v4, -0x1

    const-wide v5, -0x7fffffffffffffffL    # -4.9E-324

    if-eq v3, v4, :cond_3

    .line 225
    aget-object v0, v0, v3

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    .line 226
    invoke-static {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/m;J)I

    move-result v3

    if-ne v3, v4, :cond_1

    .line 228
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/k$a;

    sget-object p2, Lcom/tkay/expressad/exoplayer/e/l;->a:Lcom/tkay/expressad/exoplayer/e/l;

    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/e/k$a;-><init>(Lcom/tkay/expressad/exoplayer/e/l;)V

    return-object p1

    .line 230
    :cond_1
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    aget-wide v8, v7, v3

    .line 232
    iget-object v7, v0, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide v10, v7, v3

    cmp-long v7, v8, p1

    if-gez v7, :cond_2

    .line 233
    iget v7, v0, Lcom/tkay/expressad/exoplayer/e/a/m;->b:I

    add-int/lit8 v7, v7, -0x1

    if-ge v3, v7, :cond_2

    .line 234
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/e/a/m;->b(J)I

    move-result p1

    if-eq p1, v4, :cond_2

    if-eq p1, v3, :cond_2

    .line 236
    iget-object p2, v0, Lcom/tkay/expressad/exoplayer/e/a/m;->f:[J

    aget-wide v1, p2, p1

    .line 237
    iget-object p2, v0, Lcom/tkay/expressad/exoplayer/e/a/m;->c:[J

    aget-wide p1, p2, p1

    goto :goto_0

    :cond_2
    move-wide p1, v1

    move-wide v1, v5

    :goto_0
    move-wide v3, p1

    move-wide p1, v8

    goto :goto_1

    :cond_3
    const-wide v10, 0x7fffffffffffffffL

    move-wide v3, v1

    move-wide v1, v5

    :goto_1
    const/4 v0, 0x0

    .line 246
    :goto_2
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    array-length v8, v7

    if-ge v0, v8, :cond_6

    .line 247
    iget v8, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->B:I

    if-eq v0, v8, :cond_5

    .line 248
    aget-object v7, v7, v0

    iget-object v7, v7, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    .line 249
    invoke-static {v7, p1, p2, v10, v11}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/m;JJ)J

    move-result-wide v8

    cmp-long v10, v1, v5

    if-eqz v10, :cond_4

    .line 251
    invoke-static {v7, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/e/a/g;->a(Lcom/tkay/expressad/exoplayer/e/a/m;JJ)J

    move-result-wide v3

    :cond_4
    move-wide v10, v8

    :cond_5
    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .line 256
    :cond_6
    new-instance v0, Lcom/tkay/expressad/exoplayer/e/l;

    invoke-direct {v0, p1, p2, v10, v11}, Lcom/tkay/expressad/exoplayer/e/l;-><init>(JJ)V

    cmp-long p1, v1, v5

    if-nez p1, :cond_7

    .line 258
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/k$a;

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/e/k$a;-><init>(Lcom/tkay/expressad/exoplayer/e/l;)V

    return-object p1

    .line 260
    :cond_7
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/l;

    invoke-direct {p1, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/e/l;-><init>(JJ)V

    .line 261
    new-instance p2, Lcom/tkay/expressad/exoplayer/e/k$a;

    invoke-direct {p2, v0, p1}, Lcom/tkay/expressad/exoplayer/e/k$a;-><init>(Lcom/tkay/expressad/exoplayer/e/l;Lcom/tkay/expressad/exoplayer/e/l;)V

    return-object p2
.end method

.method public final a(JJ)V
    .locals 5

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->p:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->clear()V

    const/4 v0, 0x0

    .line 161
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->t:I

    const/4 v1, -0x1

    .line 162
    iput v1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->v:I

    .line 163
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->w:I

    .line 164
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->x:I

    const-wide/16 v2, 0x0

    cmp-long p1, p1, v2

    if-nez p1, :cond_0

    .line 166
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/e/a/g;->d()V

    return-void

    .line 167
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->z:[Lcom/tkay/expressad/exoplayer/e/a/g$b;

    if-eqz p1, :cond_2

    .line 1622
    array-length p2, p1

    :goto_0
    if-ge v0, p2, :cond_2

    aget-object v2, p1, v0

    .line 1623
    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/e/a/g$b;->b:Lcom/tkay/expressad/exoplayer/e/a/m;

    .line 1624
    invoke-virtual {v3, p3, p4}, Lcom/tkay/expressad/exoplayer/e/a/m;->a(J)I

    move-result v4

    if-ne v4, v1, :cond_1

    .line 1627
    invoke-virtual {v3, p3, p4}, Lcom/tkay/expressad/exoplayer/e/a/m;->b(J)I

    move-result v4

    .line 1629
    :cond_1
    iput v4, v2, Lcom/tkay/expressad/exoplayer/e/a/g$b;->d:I

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/e/g;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->y:Lcom/tkay/expressad/exoplayer/e/g;

    return-void
.end method

.method public final a()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/e/f;)Z
    .locals 0

    .line 150
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/e/a/i;->b(Lcom/tkay/expressad/exoplayer/e/f;)Z

    move-result p1

    return p1
.end method

.method public final b()J
    .locals 2

    .line 209
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/a/g;->C:J

    return-wide v0
.end method

.method public final c()V
    .locals 0

    return-void
.end method
