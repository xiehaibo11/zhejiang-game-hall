.class public final Lcom/tkay/core/common/m/f;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field final b:I

.field c:I

.field d:I

.field e:J

.field f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field g:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field volatile i:I

.field volatile j:I

.field volatile k:I

.field volatile l:I

.field m:Lcom/tkay/core/common/f/am;

.field n:Lcom/tkay/core/common/f/ae;

.field o:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field private p:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 32
    const-class v0, Lcom/tkay/core/common/h;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/m/f;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/core/common/m/g;)V
    .locals 2

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 34
    iput v0, p0, Lcom/tkay/core/common/m/f;->c:I

    const/4 v0, 0x0

    .line 44
    iput v0, p0, Lcom/tkay/core/common/m/f;->i:I

    .line 45
    iput v0, p0, Lcom/tkay/core/common/m/f;->j:I

    .line 46
    iput v0, p0, Lcom/tkay/core/common/m/f;->k:I

    .line 47
    iput v0, p0, Lcom/tkay/core/common/m/f;->l:I

    .line 55
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x5

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    .line 56
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/f;->g:Ljava/util/List;

    .line 57
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/f;->h:Ljava/util/List;

    .line 59
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    iget-object v1, p1, Lcom/tkay/core/common/m/g;->d:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 63
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    if-nez v0, :cond_0

    .line 64
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    .line 66
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 67
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    iget-object v1, p1, Lcom/tkay/core/common/m/g;->d:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 69
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->an()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/m/f;->b:I

    .line 70
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->l()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/m/f;->c:I

    .line 71
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->ab()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/m/f;->d:I

    .line 72
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->n()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/m/f;->e:J

    .line 74
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->d:Ljava/util/List;

    invoke-static {v0}, Lcom/tkay/core/common/m/f;->b(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 76
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    .line 77
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->h:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 80
    :cond_1
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    .line 81
    iget-object v0, p1, Lcom/tkay/core/common/m/g;->g:Lcom/tkay/core/common/f/am;

    iput-object v0, p0, Lcom/tkay/core/common/m/f;->m:Lcom/tkay/core/common/f/am;

    .line 82
    iget-object p1, p1, Lcom/tkay/core/common/m/g;->h:Lcom/tkay/core/common/f/ae;

    iput-object p1, p0, Lcom/tkay/core/common/m/f;->n:Lcom/tkay/core/common/f/ae;

    return-void
.end method

.method public static a(Ljava/util/List;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    const-string v0, ""

    const/4 v1, 0x0

    .line 142
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    if-lez v1, :cond_0

    .line 144
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 146
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 147
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 571
    invoke-static {p0}, Lcom/tkay/core/common/y;->a(Landroid/content/Context;)Lcom/tkay/core/common/y;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/y;->a(Ljava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)V
    .locals 1

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    .line 562
    new-instance p4, Lcom/tkay/core/common/f/am$a;

    invoke-direct {p4, p3}, Lcom/tkay/core/common/f/am$a;-><init>(Lcom/tkay/core/common/f/aj;)V

    move-object p3, v0

    move-object v0, p4

    goto :goto_0

    :cond_0
    if-eqz p4, :cond_1

    .line 564
    new-instance p3, Lcom/tkay/core/common/f/am$a;

    invoke-direct {p3, p4}, Lcom/tkay/core/common/f/am$a;-><init>(Lcom/tkay/core/common/f/aj;)V

    goto :goto_0

    :cond_1
    move-object p3, v0

    .line 567
    :goto_0
    invoke-static {p0}, Lcom/tkay/core/common/y;->a(Landroid/content/Context;)Lcom/tkay/core/common/y;

    move-result-object p0

    invoke-virtual {p0, p1, p2, v0, p3}, Lcom/tkay/core/common/y;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/am$a;Lcom/tkay/core/common/f/am$a;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;ILcom/tkay/core/common/f/aj;)V
    .locals 3

    .line 301
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 302
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_1

    if-eqz p3, :cond_0

    .line 305
    invoke-static {p3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v1

    .line 1481
    iput-wide v1, v0, Lcom/tkay/core/common/f/l;->q:D

    goto :goto_0

    .line 307
    :cond_0
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v1

    .line 2481
    iput-wide v1, v0, Lcom/tkay/core/common/f/l;->q:D

    :cond_1
    :goto_0
    if-lez p2, :cond_2

    .line 313
    iget-object p3, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    add-int/lit8 p2, p2, -0x1

    invoke-interface {p3, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 314
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result p3

    if-eqz p3, :cond_2

    .line 315
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 317
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    .line 3481
    iput-wide v0, p2, Lcom/tkay/core/common/f/l;->q:D

    :cond_2
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;Z)V
    .locals 5

    if-nez p2, :cond_0

    return-void

    .line 438
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 441
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v1

    .line 443
    new-instance v3, Lcom/tkay/core/common/f/q;

    invoke-direct {v3}, Lcom/tkay/core/common/f/q;-><init>()V

    const/4 v4, 0x2

    .line 444
    iput v4, v3, Lcom/tkay/core/common/f/q;->a:I

    .line 445
    iput-wide v1, v3, Lcom/tkay/core/common/f/q;->b:D

    .line 446
    iput-object p1, v3, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 447
    iput-object p2, v3, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 448
    iput-object p0, v3, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 450
    invoke-virtual {v0, v3, p3}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V

    :cond_1
    return-void
.end method

.method private a(Ljava/util/List;Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 457
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    .line 459
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    .line 462
    invoke-interface {p2, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    .line 463
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 467
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->ae()I

    move-result v4

    if-lez v4, :cond_0

    if-gt v4, v1, :cond_0

    .line 478
    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v5

    .line 479
    iget-object v7, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    add-int/lit8 v4, v4, -0x1

    invoke-interface {v7, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v7

    cmpg-double v4, v5, v7

    if-gez v4, :cond_0

    .line 482
    invoke-interface {p1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/m/h;)Z
    .locals 4

    .line 523
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->Y()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-eqz v0, :cond_5

    .line 525
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p0

    if-eq p0, v2, :cond_3

    const/4 v3, 0x3

    if-eq p0, v3, :cond_3

    const/4 v3, 0x6

    if-eq p0, v3, :cond_1

    const/4 v3, 0x7

    if-eq p0, v3, :cond_3

    goto :goto_1

    .line 5072
    :cond_1
    iget-boolean p0, p1, Lcom/tkay/core/common/m/h;->g:Z

    if-eqz p0, :cond_2

    goto :goto_2

    .line 5076
    :cond_2
    iput-boolean v2, p1, Lcom/tkay/core/common/m/h;->g:Z

    goto :goto_1

    .line 5064
    :cond_3
    iget-boolean p0, p1, Lcom/tkay/core/common/m/h;->f:Z

    if-eqz p0, :cond_4

    goto :goto_2

    .line 5068
    :cond_4
    iput-boolean v2, p1, Lcom/tkay/core/common/m/h;->f:Z

    :cond_5
    :goto_1
    move v1, v0

    :goto_2
    return v1
.end method

.method private static b(Ljava/util/List;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 327
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    const/4 v0, 0x0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    .line 328
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v2

    const/16 v3, 0x8

    if-ne v2, v3, :cond_0

    if-nez v0, :cond_1

    .line 330
    new-instance v0, Ljava/util/ArrayList;

    const/4 v2, 0x4

    invoke-direct {v0, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 332
    :cond_1
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method private j()D
    .locals 2

    const/4 v0, 0x0

    .line 343
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/m/f;->a(Z)D

    move-result-wide v0

    return-wide v0
.end method

.method private k()D
    .locals 2

    const/4 v0, 0x1

    .line 377
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/m/f;->a(Z)D

    move-result-wide v0

    return-wide v0
.end method


# virtual methods
.method public final a(Z)D
    .locals 5

    .line 348
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    monitor-enter v0

    .line 350
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const-wide/16 v2, 0x0

    if-nez v1, :cond_0

    .line 352
    monitor-exit v0

    return-wide v2

    .line 355
    :cond_0
    iget v4, p0, Lcom/tkay/core/common/m/f;->b:I

    add-int/lit8 v4, v4, -0x1

    add-int/lit8 v1, v1, -0x1

    if-eqz p1, :cond_1

    if-ge v1, v4, :cond_1

    .line 364
    monitor-exit v0

    return-wide v2

    .line 367
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-static {v4, v1}, Ljava/lang/Math;->min(II)I

    move-result v1

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/aj;

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v1

    .line 372
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-wide v1

    :catchall_0
    move-exception p1

    .line 373
    monitor-exit v0

    throw p1
.end method

.method public final a()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 86
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    return-object v0
.end method

.method public final a(I)V
    .locals 2

    .line 172
    iget v0, p0, Lcom/tkay/core/common/m/f;->c:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 174
    iget p1, p0, Lcom/tkay/core/common/m/f;->l:I

    sub-int/2addr p1, v0

    iput p1, p0, Lcom/tkay/core/common/m/f;->l:I

    :cond_0
    return-void
.end method

.method public final a(II)V
    .locals 1

    .line 154
    iget v0, p0, Lcom/tkay/core/common/m/f;->i:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/core/common/m/f;->i:I

    const/4 v0, 0x2

    if-eq p2, v0, :cond_0

    .line 161
    iget p2, p0, Lcom/tkay/core/common/m/f;->j:I

    add-int/2addr p2, p1

    iput p2, p0, Lcom/tkay/core/common/m/f;->j:I

    return-void

    .line 157
    :cond_0
    iget p2, p0, Lcom/tkay/core/common/m/f;->k:I

    add-int/2addr p2, p1

    iput p2, p0, Lcom/tkay/core/common/m/f;->k:I

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/aj;)V
    .locals 8

    .line 273
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    monitor-enter v0

    .line 274
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    if-eqz v1, :cond_3

    .line 275
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-nez v1, :cond_0

    .line 276
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 278
    invoke-direct {p0, p1, v3, v2}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;ILcom/tkay/core/common/f/aj;)V

    .line 279
    monitor-exit v0

    return-void

    .line 282
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v3, v1, :cond_2

    .line 283
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    .line 284
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    invoke-static {v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    cmpl-double v4, v4, v6

    if-lez v4, :cond_1

    .line 285
    iget-object v2, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v2, v3, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 287
    invoke-direct {p0, p1, v3, v1}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;ILcom/tkay/core/common/f/aj;)V

    .line 288
    monitor-exit v0

    return-void

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 292
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 294
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->o:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-direct {p0, p1, v1, v2}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;ILcom/tkay/core/common/f/aj;)V

    .line 296
    :cond_3
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V
    .locals 3

    .line 419
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x5

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 421
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    monitor-enter v1

    .line 422
    :try_start_0
    iget-object v2, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-direct {p0, v0, v2}, Lcom/tkay/core/common/m/f;->a(Ljava/util/List;Ljava/util/List;)V

    .line 423
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 424
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->g:Ljava/util/List;

    monitor-enter v1

    .line 425
    :try_start_1
    iget-object v2, p0, Lcom/tkay/core/common/m/f;->g:Ljava/util/List;

    invoke-direct {p0, v0, v2}, Lcom/tkay/core/common/m/f;->a(Ljava/util/List;Ljava/util/List;)V

    .line 426
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 428
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    const/4 v2, 0x0

    .line 429
    invoke-static {v1, p1, p2, v2}, Lcom/tkay/core/common/m/f;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;Z)V

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 426
    monitor-exit v1

    throw p1

    :catchall_1
    move-exception p1

    .line 423
    monitor-exit v1

    throw p1
.end method

.method public final b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 90
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->g:Ljava/util/List;

    return-object v0
.end method

.method public final b(I)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    .line 192
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    goto :goto_0

    .line 188
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->h:Ljava/util/List;

    .line 196
    :goto_0
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    if-eqz v1, :cond_b

    .line 198
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_1

    goto/16 :goto_4

    :cond_1
    const/4 v3, 0x0

    .line 203
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    if-ne p1, v0, :cond_2

    .line 207
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_3

    .line 209
    :cond_2
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v5

    const/4 p1, 0x1

    .line 1377
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/m/f;->a(Z)D

    move-result-wide v7

    cmpl-double v5, v5, v7

    if-lez v5, :cond_3

    move v5, p1

    goto :goto_1

    :cond_3
    move v5, v3

    .line 211
    :goto_1
    iget v6, p0, Lcom/tkay/core/common/m/f;->c:I

    if-ne v6, p1, :cond_6

    .line 218
    iget v0, p0, Lcom/tkay/core/common/m/f;->j:I

    iget v6, p0, Lcom/tkay/core/common/m/f;->d:I

    if-ge v0, v6, :cond_4

    move v3, p1

    :cond_4
    if-eqz v3, :cond_5

    if-eqz v5, :cond_5

    .line 221
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 223
    :cond_5
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "getNextRequestList, isLessThenMaxRequestNum: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v0, ", isExceedCachePrice"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_6
    if-ne v6, v0, :cond_a

    .line 228
    iget p1, p0, Lcom/tkay/core/common/m/f;->l:I

    if-nez p1, :cond_9

    if-eqz v5, :cond_9

    .line 230
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    .line 231
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result p1

    :goto_2
    if-ge v3, p1, :cond_8

    .line 234
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 236
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    cmpl-double v6, v6, v4

    if-nez v6, :cond_7

    .line 238
    invoke-interface {v2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_7
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    .line 245
    :cond_8
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result p1

    iput p1, p0, Lcom/tkay/core/common/m/f;->l:I

    .line 247
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "getNextRequestList: same price, need request num: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/core/common/m/f;->l:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_3

    .line 250
    :cond_9
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "getNextRequestList: The number of ad sources with the same price that did not return results: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/core/common/m/f;->l:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 256
    :cond_a
    :goto_3
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_b

    .line 257
    invoke-interface {v1, v2}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    :cond_b
    :goto_4
    return-object v2
.end method

.method public final b(Lcom/tkay/core/common/f/aj;)V
    .locals 6

    .line 385
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    monitor-enter v0

    .line 386
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    .line 387
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 390
    :cond_0
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v1

    const/4 v3, 0x0

    .line 393
    :goto_0
    iget-object v4, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_3

    .line 394
    iget-object v4, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    .line 395
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    cmpl-double v4, v1, v4

    if-lez v4, :cond_1

    .line 397
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v1, v3, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    goto :goto_1

    .line 401
    :cond_1
    iget-object v4, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    add-int/lit8 v4, v4, -0x1

    if-ne v3, v4, :cond_2

    .line 402
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->p:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 407
    :cond_3
    :goto_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final c()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 94
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->h:Ljava/util/List;

    return-object v0
.end method

.method public final c(Lcom/tkay/core/common/f/aj;)Z
    .locals 12

    .line 492
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    const/4 v2, 0x1

    .line 4377
    invoke-virtual {p0, v2}, Lcom/tkay/core/common/m/f;->a(Z)D

    move-result-wide v3

    .line 498
    iget-object v5, p0, Lcom/tkay/core/common/m/f;->g:Ljava/util/List;

    monitor-enter v5

    .line 499
    :try_start_0
    iget-object v6, p0, Lcom/tkay/core/common/m/f;->g:Ljava/util/List;

    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :cond_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_1

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/aj;

    .line 501
    invoke-static {v7}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v8

    .line 502
    invoke-virtual {v7}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v10

    cmpl-double v7, v8, v10

    if-lez v7, :cond_0

    goto :goto_0

    :cond_1
    const-wide/16 v8, 0x0

    .line 509
    :goto_0
    monitor-exit v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 515
    invoke-static {v3, v4, v8, v9}, Ljava/lang/Math;->max(DD)D

    move-result-wide v3

    cmpl-double p1, v0, v3

    if-lez p1, :cond_2

    return v2

    :cond_2
    const/4 p1, 0x0

    return p1

    :catchall_0
    move-exception p1

    .line 509
    monitor-exit v5

    throw p1
.end method

.method public final d()I
    .locals 1

    .line 99
    iget v0, p0, Lcom/tkay/core/common/m/f;->i:I

    return v0
.end method

.method public final e()I
    .locals 1

    .line 103
    iget v0, p0, Lcom/tkay/core/common/m/f;->j:I

    return v0
.end method

.method public final f()I
    .locals 1

    .line 107
    iget v0, p0, Lcom/tkay/core/common/m/f;->k:I

    return v0
.end method

.method public final g()Lcom/tkay/core/common/f/am;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->m:Lcom/tkay/core/common/f/am;

    return-object v0
.end method

.method public final h()Lcom/tkay/core/common/f/ae;
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/core/common/m/f;->n:Lcom/tkay/core/common/f/ae;

    return-object v0
.end method

.method public final i()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 120
    iget v0, p0, Lcom/tkay/core/common/m/f;->c:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 121
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 122
    iget v2, p0, Lcom/tkay/core/common/m/f;->d:I

    iget-object v3, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    invoke-static {v2, v3}, Ljava/lang/Math;->min(II)I

    move-result v2

    move v3, v1

    :goto_0
    if-ge v3, v2, :cond_2

    .line 124
    iget-object v4, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_0
    const/4 v3, 0x2

    if-ne v0, v3, :cond_1

    .line 127
    invoke-virtual {p0, v2}, Lcom/tkay/core/common/m/f;->b(I)Ljava/util/List;

    move-result-object v0

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    .line 129
    :cond_2
    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "startToRequestMediationAd: mRequestNumType: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, p0, Lcom/tkay/core/common/m/f;->c:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ", needRequestNum: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_3

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    :cond_3
    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", validCacheNum: "

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/core/common/m/f;->b:I

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mWaitingFillTime: "

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lcom/tkay/core/common/m/f;->e:J

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 132
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_4

    .line 133
    iget-object v1, p0, Lcom/tkay/core/common/m/f;->f:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->removeAll(Ljava/util/Collection;)Z

    :cond_4
    return-object v0
.end method
