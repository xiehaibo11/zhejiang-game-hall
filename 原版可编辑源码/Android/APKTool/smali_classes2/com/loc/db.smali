.class public final Lcom/loc/db;
.super Ljava/lang/Object;
.source "WifiCollector.java"


# instance fields
.field private a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;"
        }
    .end annotation
.end field

.field private b:Lcom/loc/ef;

.field private c:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/loc/eg;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/loc/db;->a:Ljava/util/List;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/loc/db;->c:Ljava/util/ArrayList;

    return-void
.end method

.method private static a(Ljava/util/List;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const/4 v2, 0x0

    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_0

    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/loc/eg;

    iget v4, v3, Lcom/loc/eg;->c:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v1, v4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    return-object v0
.end method

.method private a(Lcom/loc/ef;)Z
    .locals 4

    iget v0, p1, Lcom/loc/ef;->g:F

    const/high16 v1, 0x41200000    # 10.0f

    cmpl-float v0, v0, v1

    if-lez v0, :cond_0

    const/high16 v1, 0x43480000    # 200.0f

    goto :goto_0

    :cond_0
    iget v0, p1, Lcom/loc/ef;->g:F

    const/high16 v2, 0x40000000    # 2.0f

    cmpl-float v0, v0, v2

    if-lez v0, :cond_1

    const/high16 v1, 0x42480000    # 50.0f

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/loc/db;->b:Lcom/loc/ef;

    invoke-virtual {p1, v0}, Lcom/loc/ef;->a(Lcom/loc/ee;)D

    move-result-wide v2

    float-to-double v0, v1

    cmpl-double p1, v2, v0

    if-lez p1, :cond_2

    const/4 p1, 0x1

    return p1

    :cond_2
    const/4 p1, 0x0

    return p1
.end method

.method private static a(Lcom/loc/ef;JJ)Z
    .locals 4

    iget p0, p0, Lcom/loc/ef;->g:F

    const/high16 v0, 0x41200000    # 10.0f

    cmpl-float p0, p0, v0

    if-ltz p0, :cond_0

    const/16 p0, 0x7d0

    goto :goto_0

    :cond_0
    const/16 p0, 0xdac

    :goto_0
    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    cmp-long v3, p1, v0

    if-lez v3, :cond_1

    sub-long/2addr p3, p1

    int-to-long p0, p0

    cmp-long p2, p3, p0

    if-gez p2, :cond_1

    const/4 p0, 0x1

    const/4 v2, 0x1

    :cond_1
    return v2
.end method

.method private static a(Ljava/util/List;Ljava/util/List;)Z
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_5

    if-nez p1, :cond_0

    goto :goto_3

    :cond_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    add-int v3, v1, v2

    if-le v1, v2, :cond_1

    goto :goto_0

    :cond_1
    move-object v7, p1

    move-object p1, p0

    move-object p0, v7

    :goto_0
    new-instance v1, Ljava/util/HashMap;

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    const/4 v4, 0x1

    if-eqz v2, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/loc/eg;

    iget-wide v5, v2, Lcom/loc/eg;->a:J

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v1, v2, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_2
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    const/4 p1, 0x0

    :cond_3
    :goto_2
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/loc/eg;

    iget-wide v5, v2, Lcom/loc/eg;->a:J

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    if-eqz v2, :cond_3

    add-int/lit8 p1, p1, 0x1

    goto :goto_2

    :cond_4
    int-to-double p0, p1

    const-wide/high16 v1, 0x4000000000000000L    # 2.0

    mul-double p0, p0, v1

    int-to-double v1, v3

    const-wide/high16 v5, 0x3fe0000000000000L    # 0.5

    mul-double v1, v1, v5

    cmpl-double v3, p0, v1

    if-ltz v3, :cond_5

    return v4

    :cond_5
    :goto_3
    return v0
.end method

.method private b(Ljava/util/List;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;"
        }
    .end annotation

    new-instance v0, Lcom/loc/db$1;

    invoke-direct {v0, p0}, Lcom/loc/db$1;-><init>(Lcom/loc/db;)V

    invoke-static {p1, v0}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    return-object p1
.end method

.method private b(Ljava/util/List;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;)V"
        }
    .end annotation

    invoke-interface {p1}, Ljava/util/List;->clear()V

    if-eqz p2, :cond_1

    invoke-static {p2}, Lcom/loc/db;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/loc/db;->b(Ljava/util/List;)Ljava/util/List;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    const/16 v1, 0x28

    if-le v0, v1, :cond_0

    const/16 v0, 0x28

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b(Lcom/loc/ef;Ljava/util/List;ZJJ)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/loc/ef;",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;ZJJ)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p3, :cond_0

    return v0

    :cond_0
    invoke-static {p1, p4, p5, p6, p7}, Lcom/loc/db;->a(Lcom/loc/ef;JJ)Z

    move-result p3

    const/4 p4, 0x1

    if-eqz p3, :cond_2

    if-eqz p2, :cond_2

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p3

    if-lez p3, :cond_2

    iget-object p3, p0, Lcom/loc/db;->b:Lcom/loc/ef;

    if-eqz p3, :cond_1

    invoke-direct {p0, p1}, Lcom/loc/db;->a(Lcom/loc/ef;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object p1, p0, Lcom/loc/db;->a:Ljava/util/List;

    invoke-static {p2, p1}, Lcom/loc/db;->a(Ljava/util/List;Ljava/util/List;)Z

    move-result p1

    xor-int/lit8 v0, p1, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :cond_2
    :goto_0
    return v0
.end method


# virtual methods
.method final a(Lcom/loc/ef;Ljava/util/List;ZJJ)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/loc/ef;",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;ZJJ)",
            "Ljava/util/List<",
            "Lcom/loc/eg;",
            ">;"
        }
    .end annotation

    invoke-direct/range {p0 .. p7}, Lcom/loc/db;->b(Lcom/loc/ef;Ljava/util/List;ZJJ)Z

    move-result p3

    if-eqz p3, :cond_0

    iget-object p3, p0, Lcom/loc/db;->c:Ljava/util/ArrayList;

    invoke-direct {p0, p3, p2}, Lcom/loc/db;->b(Ljava/util/List;Ljava/util/List;)V

    iget-object p3, p0, Lcom/loc/db;->a:Ljava/util/List;

    invoke-interface {p3}, Ljava/util/List;->clear()V

    iget-object p3, p0, Lcom/loc/db;->a:Ljava/util/List;

    invoke-interface {p3, p2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    iput-object p1, p0, Lcom/loc/db;->b:Lcom/loc/ef;

    iget-object p1, p0, Lcom/loc/db;->c:Ljava/util/ArrayList;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method
