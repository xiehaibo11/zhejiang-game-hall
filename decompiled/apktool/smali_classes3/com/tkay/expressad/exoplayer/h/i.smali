.class public final Lcom/tkay/expressad/exoplayer/h/i;
.super Lcom/tkay/expressad/exoplayer/h/f;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/x$b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/i$c;,
        Lcom/tkay/expressad/exoplayer/h/i$b;,
        Lcom/tkay/expressad/exoplayer/h/i$a;,
        Lcom/tkay/expressad/exoplayer/h/i$f;,
        Lcom/tkay/expressad/exoplayer/h/i$d;,
        Lcom/tkay/expressad/exoplayer/h/i$e;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/exoplayer/h/f<",
        "Lcom/tkay/expressad/exoplayer/h/i$e;",
        ">;",
        "Lcom/tkay/expressad/exoplayer/x$b;"
    }
.end annotation


# static fields
.field private static final a:I = 0x0

.field private static final b:I = 0x1

.field private static final c:I = 0x2

.field private static final d:I = 0x3

.field private static final e:I = 0x4

.field private static final f:I = 0x5

.field private static final g:I = 0x6


# instance fields
.field private final h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/h/i$e;",
            ">;"
        }
    .end annotation
.end field

.field private final i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/h/i$e;",
            ">;"
        }
    .end annotation
.end field

.field private final j:Lcom/tkay/expressad/exoplayer/h/i$e;

.field private final k:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/tkay/expressad/exoplayer/h/r;",
            "Lcom/tkay/expressad/exoplayer/h/i$e;",
            ">;"
        }
    .end annotation
.end field

.field private final l:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/h/i$d;",
            ">;"
        }
    .end annotation
.end field

.field private final m:Z

.field private final n:Lcom/tkay/expressad/exoplayer/ae$b;

.field private o:Lcom/tkay/expressad/exoplayer/h;

.field private p:Z

.field private q:Lcom/tkay/expressad/exoplayer/h/aa;

.field private r:I

.field private s:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 79
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/aa$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/h/aa$a;-><init>()V

    const/4 v1, 0x0

    invoke-direct {p0, v1, v0}, Lcom/tkay/expressad/exoplayer/h/i;-><init>(ZLcom/tkay/expressad/exoplayer/h/aa;)V

    return-void
.end method

.method private constructor <init>(Z)V
    .locals 1

    .line 89
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/aa$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/h/aa$a;-><init>()V

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/i;-><init>(ZLcom/tkay/expressad/exoplayer/h/aa;)V

    return-void
.end method

.method private constructor <init>(ZLcom/tkay/expressad/exoplayer/h/aa;)V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/h/s;

    .line 100
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/h/i;-><init>(ZLcom/tkay/expressad/exoplayer/h/aa;[Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method private varargs constructor <init>(ZLcom/tkay/expressad/exoplayer/h/aa;[Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 3

    .line 129
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/f;-><init>()V

    .line 130
    array-length v0, p3

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p3, v1

    .line 131
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 133
    :cond_0
    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/h/aa;->a()I

    move-result v0

    if-lez v0, :cond_1

    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/h/aa;->d()Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p2

    :cond_1
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 134
    new-instance p2, Ljava/util/IdentityHashMap;

    invoke-direct {p2}, Ljava/util/IdentityHashMap;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->k:Ljava/util/Map;

    .line 135
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    .line 136
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    .line 137
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->l:Ljava/util/List;

    .line 138
    new-instance p2, Lcom/tkay/expressad/exoplayer/h/i$e;

    const/4 v0, 0x0

    invoke-direct {p2, v0}, Lcom/tkay/expressad/exoplayer/h/i$e;-><init>(Lcom/tkay/expressad/exoplayer/h/s;)V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->j:Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 139
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->m:Z

    .line 140
    new-instance p1, Lcom/tkay/expressad/exoplayer/ae$b;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/ae$b;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 141
    invoke-static {p3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    .line 1208
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    invoke-direct {p0, p2, p1, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILjava/util/Collection;Ljava/lang/Runnable;)V

    return-void
.end method

.method private varargs constructor <init>([Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 1

    const/4 v0, 0x0

    .line 108
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/i;-><init>([Lcom/tkay/expressad/exoplayer/h/s;B)V

    return-void
.end method

.method private varargs constructor <init>([Lcom/tkay/expressad/exoplayer/h/s;B)V
    .locals 1

    .line 118
    new-instance p2, Lcom/tkay/expressad/exoplayer/h/aa$a;

    invoke-direct {p2}, Lcom/tkay/expressad/exoplayer/h/aa$a;-><init>()V

    const/4 v0, 0x0

    invoke-direct {p0, v0, p2, p1}, Lcom/tkay/expressad/exoplayer/h/i;-><init>(ZLcom/tkay/expressad/exoplayer/h/aa;[Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/h/i$e;I)I
    .locals 0

    .line 461
    iget p0, p0, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    add-int/2addr p1, p0

    return p1
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/h/i$e;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/s$a;
    .locals 5

    const/4 v0, 0x0

    .line 446
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 449
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/l;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    iget-wide v3, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    cmp-long v1, v1, v3

    if-nez v1, :cond_0

    .line 451
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget p0, p0, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    add-int/2addr v0, p0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a(I)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p0

    return-object p0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private a(I)V
    .locals 3

    .line 1294
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 1295
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_0

    .line 1297
    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x2

    .line 1298
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$f;

    const/4 v2, 0x0

    invoke-direct {v1, p1, v2, v2}, Lcom/tkay/expressad/exoplayer/h/i$f;-><init>(ILjava/lang/Object;Ljava/lang/Runnable;)V

    .line 1299
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 1300
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    :cond_0
    return-void
.end method

.method private a(II)V
    .locals 3

    if-eq p1, p2, :cond_0

    .line 1334
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-interface {v0, p2, v1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1335
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_0

    .line 1337
    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x3

    .line 1338
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$f;

    .line 1339
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 v2, 0x0

    invoke-direct {v1, p1, p2, v2}, Lcom/tkay/expressad/exoplayer/h/i$f;-><init>(ILjava/lang/Object;Ljava/lang/Runnable;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 1340
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    :cond_0
    return-void
.end method

.method private a(IIII)V
    .locals 2

    .line 636
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->r:I

    add-int/2addr v0, p3

    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->r:I

    .line 637
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->s:I

    add-int/2addr v0, p4

    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->s:I

    .line 638
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p1, v0, :cond_0

    .line 639
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->d:I

    add-int/2addr v1, p2

    iput v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->d:I

    .line 640
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    add-int/2addr v1, p3

    iput v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    .line 641
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    add-int/2addr v1, p4

    iput v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private a(IILjava/lang/Runnable;)V
    .locals 2

    if-ne p1, p2, :cond_0

    return-void

    .line 334
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-interface {v0, p2, v1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_1

    .line 337
    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x3

    .line 338
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$f;

    .line 339
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-direct {v1, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/h/i$f;-><init>(ILjava/lang/Object;Ljava/lang/Runnable;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 340
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    return-void

    :cond_1
    if-eqz p3, :cond_2

    .line 342
    invoke-interface {p3}, Ljava/lang/Runnable;->run()V

    :cond_2
    return-void
.end method

.method private a(ILcom/tkay/expressad/exoplayer/h/i$e;)V
    .locals 3

    if-lez p1, :cond_0

    .line 542
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    add-int/lit8 v1, p1, -0x1

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 543
    iget v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 545
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result v2

    add-int/2addr v1, v2

    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 546
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result v0

    add-int/2addr v2, v0

    .line 543
    invoke-virtual {p2, p1, v1, v2}, Lcom/tkay/expressad/exoplayer/h/i$e;->a(III)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 548
    invoke-virtual {p2, p1, v0, v0}, Lcom/tkay/expressad/exoplayer/h/i$e;->a(III)V

    .line 551
    :goto_0
    iget-object v0, p2, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 554
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result v0

    iget-object v1, p2, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 555
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result v1

    const/4 v2, 0x1

    .line 551
    invoke-direct {p0, p1, v2, v0, v1}, Lcom/tkay/expressad/exoplayer/h/i;->a(IIII)V

    .line 556
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0, p1, p2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 557
    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/h/i$e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {p0, p2, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method private a(ILcom/tkay/expressad/exoplayer/h/s;)V
    .locals 1

    const/4 v0, 0x0

    .line 173
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(ILcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Runnable;)V
    .locals 2

    .line 187
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-direct {v0, p2}, Lcom/tkay/expressad/exoplayer/h/i$e;-><init>(Lcom/tkay/expressad/exoplayer/h/s;)V

    .line 189
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {p2, p1, v0}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 190
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz p2, :cond_0

    .line 192
    invoke-interface {p2, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p2

    const/4 v1, 0x0

    .line 193
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p2

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$f;

    invoke-direct {v1, p1, v0, p3}, Lcom/tkay/expressad/exoplayer/h/i$f;-><init>(ILjava/lang/Object;Ljava/lang/Runnable;)V

    .line 194
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 195
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    return-void

    :cond_0
    if-eqz p3, :cond_1

    .line 197
    invoke-interface {p3}, Ljava/lang/Runnable;->run()V

    :cond_1
    return-void
.end method

.method private a(ILjava/lang/Runnable;)V
    .locals 3

    .line 294
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_0

    .line 297
    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x2

    .line 298
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$f;

    const/4 v2, 0x0

    invoke-direct {v1, p1, v2, p2}, Lcom/tkay/expressad/exoplayer/h/i$f;-><init>(ILjava/lang/Object;Ljava/lang/Runnable;)V

    .line 299
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 300
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    return-void

    :cond_0
    if-eqz p2, :cond_1

    .line 302
    invoke-interface {p2}, Ljava/lang/Runnable;->run()V

    :cond_1
    return-void
.end method

.method private a(ILjava/util/Collection;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Collection<",
            "Lcom/tkay/expressad/exoplayer/h/s;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 234
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILjava/util/Collection;Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(ILjava/util/Collection;Ljava/lang/Runnable;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Collection<",
            "Lcom/tkay/expressad/exoplayer/h/s;",
            ">;",
            "Ljava/lang/Runnable;",
            ")V"
        }
    .end annotation

    .line 249
    invoke-interface {p2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/s;

    .line 250
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 252
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {p2}, Ljava/util/Collection;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 253
    invoke-interface {p2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/s;

    .line 254
    new-instance v3, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-direct {v3, v2}, Lcom/tkay/expressad/exoplayer/h/i$e;-><init>(Lcom/tkay/expressad/exoplayer/h/s;)V

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 256
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v1, p1, v0}, Ljava/util/List;->addAll(ILjava/util/Collection;)Z

    .line 257
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v1, :cond_2

    invoke-interface {p2}, Ljava/util/Collection;->isEmpty()Z

    move-result p2

    if-nez p2, :cond_2

    .line 258
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    .line 259
    invoke-interface {p2, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p2

    const/4 v1, 0x1

    .line 260
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p2

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$f;

    invoke-direct {v1, p1, v0, p3}, Lcom/tkay/expressad/exoplayer/h/i$f;-><init>(ILjava/lang/Object;Ljava/lang/Runnable;)V

    .line 261
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 262
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    return-void

    :cond_2
    if-eqz p3, :cond_3

    .line 264
    invoke-interface {p3}, Ljava/lang/Runnable;->run()V

    :cond_3
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/i$d;)V
    .locals 2

    .line 515
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->p:Z

    if-nez v0, :cond_0

    .line 516
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    const/4 v0, 0x1

    .line 517
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->p:Z

    :cond_0
    if-eqz p1, :cond_1

    .line 520
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->l:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/i$e;Lcom/tkay/expressad/exoplayer/ae;)V
    .locals 7

    if-eqz p1, :cond_5

    .line 2571
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 2572
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->d()Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v1

    if-eq v1, p2, :cond_4

    .line 2575
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v1

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result v2

    sub-int/2addr v1, v2

    .line 2576
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v2

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result v3

    sub-int/2addr v2, v3

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-nez v1, :cond_0

    if-eqz v2, :cond_1

    .line 2578
    :cond_0
    iget v5, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->d:I

    add-int/2addr v5, v3

    invoke-direct {p0, v5, v4, v1, v2}, Lcom/tkay/expressad/exoplayer/h/i;->a(IIII)V

    .line 2584
    :cond_1
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/h/i$b;->a(Lcom/tkay/expressad/exoplayer/ae;)Lcom/tkay/expressad/exoplayer/h/i$b;

    move-result-object v0

    iput-object v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 2585
    iget-boolean v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    if-nez v0, :cond_3

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-nez v0, :cond_3

    .line 2586
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 2621
    invoke-virtual {p2, v4, v0, v4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    .line 2587
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 3249
    iget-wide v0, p2, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    .line 2588
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 4219
    iget-wide v5, p2, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    add-long/2addr v0, v5

    .line 2589
    :goto_0
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-ge v4, p2, :cond_2

    .line 2590
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/exoplayer/h/l;

    .line 2591
    invoke-virtual {p2, v0, v1}, Lcom/tkay/expressad/exoplayer/h/l;->d(J)V

    .line 2592
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 2594
    :cond_2
    iput-boolean v3, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    :cond_3
    const/4 p1, 0x0

    .line 2596
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    :cond_4
    return-void

    .line 2569
    :cond_5
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 2

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, p1, v1}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Runnable;)V
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    invoke-direct {p0, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILcom/tkay/expressad/exoplayer/h/s;Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/lang/Runnable;)V
    .locals 2

    .line 358
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 359
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_1

    .line 361
    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x4

    .line 362
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    if-eqz p1, :cond_0

    .line 363
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {v1, p1}, Lcom/tkay/expressad/exoplayer/h/i$d;-><init>(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object p1

    .line 364
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    return-void

    :cond_1
    if-eqz p1, :cond_2

    .line 366
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    :cond_2
    return-void
.end method

.method private a(Ljava/util/Collection;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Collection<",
            "Lcom/tkay/expressad/exoplayer/h/s;",
            ">;)V"
        }
    .end annotation

    .line 208
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, p1, v1}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILjava/util/Collection;Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/util/Collection;Ljava/lang/Runnable;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Collection<",
            "Lcom/tkay/expressad/exoplayer/h/s;",
            ">;",
            "Ljava/lang/Runnable;",
            ")V"
        }
    .end annotation

    .line 222
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    invoke-direct {p0, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILjava/util/Collection;Ljava/lang/Runnable;)V

    return-void
.end method

.method private b(I)Lcom/tkay/expressad/exoplayer/h/s;
    .locals 1

    .line 382
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    return-object p1
.end method

.method private b(II)V
    .locals 5

    .line 620
    invoke-static {p1, p2}, Ljava/lang/Math;->min(II)I

    move-result v0

    .line 621
    invoke-static {p1, p2}, Ljava/lang/Math;->max(II)I

    move-result v1

    .line 622
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    .line 623
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    .line 624
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v4, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-interface {v4, p2, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    :goto_0
    if-gt v0, v1, :cond_0

    .line 626
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 627
    iput v2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    .line 628
    iput v3, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    .line 629
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result p2

    add-int/2addr v2, p2

    .line 630
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result p1

    add-int/2addr v3, p1

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private b(ILjava/util/Collection;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Collection<",
            "Lcom/tkay/expressad/exoplayer/h/i$e;",
            ">;)V"
        }
    .end annotation

    .line 562
    invoke-interface {p2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    add-int/lit8 v1, p1, 0x1

    .line 563
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILcom/tkay/expressad/exoplayer/h/i$e;)V

    move p1, v1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/h/i$e;Lcom/tkay/expressad/exoplayer/ae;)V
    .locals 7

    if-eqz p1, :cond_5

    .line 571
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 572
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->d()Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v1

    if-ne v1, p2, :cond_0

    return-void

    .line 575
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v1

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result v2

    sub-int/2addr v1, v2

    .line 576
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v2

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result v3

    sub-int/2addr v2, v3

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-nez v1, :cond_1

    if-eqz v2, :cond_2

    .line 578
    :cond_1
    iget v5, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->d:I

    add-int/2addr v5, v3

    invoke-direct {p0, v5, v4, v1, v2}, Lcom/tkay/expressad/exoplayer/h/i;->a(IIII)V

    .line 584
    :cond_2
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/h/i$b;->a(Lcom/tkay/expressad/exoplayer/ae;)Lcom/tkay/expressad/exoplayer/h/i$b;

    move-result-object v0

    iput-object v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 585
    iget-boolean v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    if-nez v0, :cond_4

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-nez v0, :cond_4

    .line 586
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 6621
    invoke-virtual {p2, v4, v0, v4}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    .line 587
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 7249
    iget-wide v0, p2, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    .line 588
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 8219
    iget-wide v5, p2, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    add-long/2addr v0, v5

    .line 589
    :goto_0
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-ge v4, p2, :cond_3

    .line 590
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/exoplayer/h/l;

    .line 591
    invoke-virtual {p2, v0, v1}, Lcom/tkay/expressad/exoplayer/h/l;->d(J)V

    .line 592
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 594
    :cond_3
    iput-boolean v3, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    :cond_4
    const/4 p1, 0x0

    .line 596
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void

    .line 569
    :cond_5
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method private c()V
    .locals 2

    .line 1358
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 1359
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    if-eqz v0, :cond_0

    .line 1361
    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x4

    .line 1362
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    const/4 v1, 0x0

    .line 1363
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    .line 1364
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    :cond_0
    return-void
.end method

.method private c(I)V
    .locals 4

    .line 606
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 607
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 611
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v2

    neg-int v2, v2

    .line 612
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v1

    neg-int v1, v1

    const/4 v3, -0x1

    .line 608
    invoke-direct {p0, p1, v3, v2, v1}, Lcom/tkay/expressad/exoplayer/h/i;->a(IIII)V

    const/4 p1, 0x1

    .line 613
    iput-boolean p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->h:Z

    .line 614
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 615
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private d()I
    .locals 1

    .line 372
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0
.end method

.method private d(I)I
    .locals 3

    .line 646
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->j:Lcom/tkay/expressad/exoplayer/h/i$e;

    iput p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    .line 647
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->j:Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-static {v0, v1}, Ljava/util/Collections;->binarySearch(Ljava/util/List;Ljava/lang/Object;)I

    move-result v0

    if-gez v0, :cond_0

    neg-int p1, v0

    add-int/lit8 p1, p1, -0x2

    return p1

    .line 651
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    if-ge v0, v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    add-int/lit8 v2, v0, 0x1

    .line 652
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    if-ne v1, p1, :cond_1

    move v0, v2

    goto :goto_0

    :cond_1
    return v0
.end method

.method private e()V
    .locals 8

    const/4 v0, 0x0

    .line 525
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->p:Z

    .line 527
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->l:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 528
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object v0

    goto :goto_0

    .line 529
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->l:Ljava/util/List;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 530
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->l:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 531
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/i$a;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/h/i;->r:I

    iget v5, p0, Lcom/tkay/expressad/exoplayer/h/i;->s:I

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    iget-boolean v7, p0, Lcom/tkay/expressad/exoplayer/h/i;->m:Z

    move-object v2, v1

    invoke-direct/range {v2 .. v7}, Lcom/tkay/expressad/exoplayer/h/i$a;-><init>(Ljava/util/Collection;IILcom/tkay/expressad/exoplayer/h/aa;Z)V

    const/4 v2, 0x0

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    .line 535
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 536
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    invoke-interface {v1, p0}, Lcom/tkay/expressad/exoplayer/h;->a(Lcom/tkay/expressad/exoplayer/x$b;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v1

    const/4 v2, 0x6

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/x;->a(I)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/x;->a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/x;->i()Lcom/tkay/expressad/exoplayer/x;

    :cond_1
    return-void
.end method

.method private f()V
    .locals 1

    .line 600
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    if-ltz v0, :cond_0

    .line 601
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/h/i;->c(I)V

    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method protected final bridge synthetic a(Ljava/lang/Object;I)I
    .locals 0

    .line 49
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 8461
    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    add-int/2addr p2, p1

    return p2
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 4

    .line 400
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    .line 1646
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->j:Lcom/tkay/expressad/exoplayer/h/i$e;

    iput v0, v1, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    .line 1647
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/i;->j:Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-static {v1, v2}, Ljava/util/Collections;->binarySearch(Ljava/util/List;Ljava/lang/Object;)I

    move-result v1

    if-gez v1, :cond_0

    neg-int v0, v1

    add-int/lit8 v0, v0, -0x2

    goto :goto_1

    .line 1651
    :cond_0
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    if-ge v1, v2, :cond_1

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    add-int/lit8 v3, v1, 0x1

    .line 1652
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v2, v2, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    if-ne v2, v0, :cond_1

    move v1, v3

    goto :goto_0

    :cond_1
    move v0, v1

    .line 401
    :goto_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 402
    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    sub-int/2addr v1, v2

    .line 403
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a(I)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p1

    .line 404
    new-instance v1, Lcom/tkay/expressad/exoplayer/h/l;

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->a:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-direct {v1, v2, p1, p2}, Lcom/tkay/expressad/exoplayer/h/l;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)V

    .line 406
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->k:Ljava/util/Map;

    invoke-interface {p1, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 407
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 408
    iget-boolean p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    if-eqz p1, :cond_2

    .line 409
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    :cond_2
    return-object v1
.end method

.method protected final synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/s$a;
    .locals 5

    .line 49
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    const/4 v0, 0x0

    .line 8446
    :goto_0
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 8449
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/l;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/h/l;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-wide v1, v1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    iget-wide v3, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    cmp-long v1, v1, v3

    if-nez v1, :cond_0

    .line 8451
    iget v0, p2, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    add-int/2addr v0, p1

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a(I)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p1

    return-object p1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a()V
    .locals 1

    .line 426
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->a()V

    .line 427
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    const/4 v0, 0x0

    .line 428
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    .line 429
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/aa;->d()Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    const/4 v0, 0x0

    .line 430
    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->r:I

    .line 431
    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->s:I

    return-void
.end method

.method public final a(ILjava/lang/Object;)V
    .locals 6

    const/4 v0, 0x1

    packed-switch p1, :pswitch_data_0

    .line 510
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1

    .line 504
    :pswitch_0
    check-cast p2, Ljava/util/List;

    const/4 p1, 0x0

    .line 505
    :goto_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-ge p1, v0, :cond_0

    .line 506
    invoke-interface {p2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$d;

    .line 5707
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/i$d;->a:Landroid/os/Handler;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/i$d;->b:Ljava/lang/Runnable;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 501
    :pswitch_1
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/i;->e()V

    return-void

    .line 5600
    :pswitch_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    sub-int/2addr p1, v0

    :goto_1
    if-ltz p1, :cond_1

    .line 5601
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->c(I)V

    add-int/lit8 p1, p1, -0x1

    goto :goto_1

    .line 498
    :cond_1
    check-cast p2, Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void

    .line 490
    :pswitch_3
    check-cast p2, Lcom/tkay/expressad/exoplayer/h/i$f;

    .line 491
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    iget v1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    invoke-interface {p1, v1}, Lcom/tkay/expressad/exoplayer/h/aa;->c(I)Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 492
    iget-object v1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->b:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/h/aa;->a(II)Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 493
    iget p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    iget-object v0, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->b:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 4620
    invoke-static {p1, v0}, Ljava/lang/Math;->min(II)I

    move-result v1

    .line 4621
    invoke-static {p1, v0}, Ljava/lang/Math;->max(II)I

    move-result v2

    .line 4622
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    .line 4623
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/h/i$e;

    iget v4, v4, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    .line 4624
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {v5, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-interface {v5, v0, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    :goto_2
    if-gt v1, v2, :cond_2

    .line 4626
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->i:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 4627
    iput v3, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    .line 4628
    iput v4, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    .line 4629
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result v0

    add-int/2addr v3, v0

    .line 4630
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result p1

    add-int/2addr v4, p1

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 494
    :cond_2
    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->c:Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void

    .line 484
    :pswitch_4
    check-cast p2, Lcom/tkay/expressad/exoplayer/h/i$f;

    .line 485
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    iget v0, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    invoke-interface {p1, v0}, Lcom/tkay/expressad/exoplayer/h/aa;->c(I)Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 486
    iget p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->c(I)V

    .line 487
    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->c:Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void

    .line 475
    :pswitch_5
    check-cast p2, Lcom/tkay/expressad/exoplayer/h/i$f;

    .line 477
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    iget v0, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    iget-object v1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->b:Ljava/lang/Object;

    check-cast v1, Ljava/util/Collection;

    .line 479
    invoke-interface {v1}, Ljava/util/Collection;->size()I

    move-result v1

    .line 478
    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/exoplayer/h/aa;->a(II)Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 480
    iget p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    iget-object v0, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->b:Ljava/lang/Object;

    check-cast v0, Ljava/util/Collection;

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/i;->b(ILjava/util/Collection;)V

    .line 481
    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->c:Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void

    .line 469
    :pswitch_6
    check-cast p2, Lcom/tkay/expressad/exoplayer/h/i$f;

    .line 470
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    iget v1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/h/aa;->a(II)Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 471
    iget p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->a:I

    iget-object v0, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->b:Ljava/lang/Object;

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(ILcom/tkay/expressad/exoplayer/h/i$e;)V

    .line 472
    iget-object p1, p2, Lcom/tkay/expressad/exoplayer/h/i$f;->c:Lcom/tkay/expressad/exoplayer/h/i$d;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 2

    .line 416
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i;->k:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 417
    move-object v1, p1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/l;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/l;->g()V

    .line 418
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 419
    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-boolean p1, v0, Lcom/tkay/expressad/exoplayer/h/i$e;->h:Z

    if-eqz p1, :cond_0

    .line 420
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 1

    .line 387
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(Lcom/tkay/expressad/exoplayer/h;Z)V

    .line 388
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->o:Lcom/tkay/expressad/exoplayer/h;

    .line 389
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 390
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/i;->e()V

    return-void

    .line 392
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    const/4 v0, 0x0

    invoke-interface {p1, v0, p2}, Lcom/tkay/expressad/exoplayer/h/aa;->a(II)Lcom/tkay/expressad/exoplayer/h/aa;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->q:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 393
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i;->h:Ljava/util/List;

    invoke-direct {p0, v0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->b(ILjava/util/Collection;)V

    const/4 p1, 0x0

    .line 394
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    return-void
.end method

.method protected final synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 5

    .line 49
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/i$e;

    if-eqz p1, :cond_5

    .line 9571
    iget-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 9572
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/i$b;->d()Lcom/tkay/expressad/exoplayer/ae;

    move-result-object p4

    if-eq p4, p3, :cond_4

    .line 9575
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result p4

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/i$b;->b()I

    move-result v0

    sub-int/2addr p4, v0

    .line 9576
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/i$b;->c()I

    move-result v1

    sub-int/2addr v0, v1

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p4, :cond_0

    if-eqz v0, :cond_1

    .line 9578
    :cond_0
    iget v3, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->d:I

    add-int/2addr v3, v1

    invoke-direct {p0, v3, v2, p4, v0}, Lcom/tkay/expressad/exoplayer/h/i;->a(IIII)V

    .line 9584
    :cond_1
    invoke-virtual {p2, p3}, Lcom/tkay/expressad/exoplayer/h/i$b;->a(Lcom/tkay/expressad/exoplayer/ae;)Lcom/tkay/expressad/exoplayer/h/i$b;

    move-result-object p2

    iput-object p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    .line 9585
    iget-boolean p2, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    if-nez p2, :cond_3

    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result p2

    if-nez p2, :cond_3

    .line 9586
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 9621
    invoke-virtual {p3, v2, p2, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;Z)Lcom/tkay/expressad/exoplayer/ae$b;

    .line 9587
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 10249
    iget-wide p2, p2, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    .line 9588
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/h/i;->n:Lcom/tkay/expressad/exoplayer/ae$b;

    .line 11219
    iget-wide v3, p4, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    add-long/2addr p2, v3

    .line 9589
    :goto_0
    iget-object p4, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p4}, Ljava/util/List;->size()I

    move-result p4

    if-ge v2, p4, :cond_2

    .line 9590
    iget-object p4, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->i:Ljava/util/List;

    invoke-interface {p4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lcom/tkay/expressad/exoplayer/h/l;

    .line 9591
    invoke-virtual {p4, p2, p3}, Lcom/tkay/expressad/exoplayer/h/l;->d(J)V

    .line 9592
    invoke-virtual {p4}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 9594
    :cond_2
    iput-boolean v1, p1, Lcom/tkay/expressad/exoplayer/h/i$e;->g:Z

    :cond_3
    const/4 p1, 0x0

    .line 9596
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/h/i;->a(Lcom/tkay/expressad/exoplayer/h/i$d;)V

    :cond_4
    return-void

    .line 9569
    :cond_5
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method
