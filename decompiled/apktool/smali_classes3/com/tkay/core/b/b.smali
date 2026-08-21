.class public abstract Lcom/tkay/core/b/b;
.super Lcom/tkay/core/b/a;


# static fields
.field public static final d:D = 10000.0


# instance fields
.field final e:Ljava/lang/String;

.field protected final f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
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

.field i:Ljava/lang/String;

.field j:Ljava/lang/String;

.field k:Ljava/lang/String;

.field l:Lcom/tkay/core/b/b/a;

.field m:J

.field protected n:Lcom/tkay/core/common/f/l;

.field protected o:Ljava/lang/String;

.field protected p:Ljava/util/concurrent/atomic/AtomicBoolean;

.field protected q:Ljava/util/concurrent/atomic/AtomicBoolean;

.field r:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field s:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field t:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field u:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field v:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 4

    .line 94
    invoke-direct {p0, p1}, Lcom/tkay/core/b/a;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 53
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    .line 54
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    .line 55
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    .line 56
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    .line 71
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/tkay/core/b/b;->p:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 72
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 75
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    .line 76
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    .line 77
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    .line 79
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/b/b;->u:Ljava/util/concurrent/ConcurrentHashMap;

    .line 81
    new-instance v0, Lcom/tkay/core/b/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/b/b$1;-><init>(Lcom/tkay/core/b/b;)V

    iput-object v0, p0, Lcom/tkay/core/b/b;->v:Ljava/lang/Runnable;

    .line 96
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 97
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    if-eqz v1, :cond_0

    .line 99
    iget-object v2, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    iget-object v2, p0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 105
    :cond_1
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    if-eqz v0, :cond_2

    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 106
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    .line 107
    iget-object v2, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 110
    :cond_2
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->s:Lorg/json/JSONObject;

    if-eqz v0, :cond_3

    .line 111
    iget-object v0, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->s:Lorg/json/JSONObject;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 115
    :cond_3
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    if-eqz v0, :cond_5

    .line 116
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    .line 117
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/b;->o:Ljava/lang/String;

    .line 118
    iget-object v0, p0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    if-nez v0, :cond_5

    .line 119
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v2, p1, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 121
    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    goto :goto_2

    .line 123
    :cond_4
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0, v1}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    .line 128
    :cond_5
    :goto_2
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/core/b/b;->i:Ljava/lang/String;

    .line 129
    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/core/b/b;->j:Ljava/lang/String;

    .line 131
    invoke-virtual {p0}, Lcom/tkay/core/b/b;->e()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/b;->k:Ljava/lang/String;

    return-void
.end method

.method private static synthetic a(Lcom/tkay/core/b/b;Ljava/lang/Object;)Ljava/util/List;
    .locals 4

    .line 6580
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 6581
    instance-of v1, p1, Lorg/json/JSONObject;

    if-eqz v1, :cond_1

    .line 6582
    check-cast p1, Lorg/json/JSONObject;

    const-string v1, "data"

    .line 6583
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    const/4 v1, 0x0

    .line 6584
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 6585
    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/f/l;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/l;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 6587
    iget-object v3, p0, Lcom/tkay/core/b/b;->i:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 6588
    :cond_0
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private a(Ljava/lang/Object;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/l;",
            ">;"
        }
    .end annotation

    .line 580
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 581
    instance-of v1, p1, Lorg/json/JSONObject;

    if-eqz v1, :cond_1

    .line 582
    check-cast p1, Lorg/json/JSONObject;

    const-string v1, "data"

    .line 583
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    const/4 v1, 0x0

    .line 584
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 585
    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/f/l;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/l;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 587
    iget-object v3, p0, Lcom/tkay/core/b/b;->i:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 588
    :cond_0
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private a(J)V
    .locals 2

    .line 232
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/b/b;->v:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private a(JILjava/lang/String;Ljava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(JI",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 465
    invoke-interface {p5}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v3, v1

    check-cast v3, Lcom/tkay/core/common/f/aj;

    .line 466
    invoke-virtual {p0, v3, p4, p3}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 468
    iget-object v1, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    move-object v2, p0

    move-object v4, p4

    move-wide v5, p1

    move v7, p3

    .line 470
    invoke-direct/range {v2 .. v7}, Lcom/tkay/core/b/b;->b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    goto :goto_0

    .line 473
    :cond_1
    invoke-interface {p5}, Ljava/util/Map;->clear()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/tkay/core/b/b;->g()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;J)V
    .locals 0

    .line 51
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/b/b;->b(J)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;Lcom/tkay/core/common/f/aj;)V
    .locals 8

    .line 4742
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    .line 4743
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/b/c;->b(I)Z

    move-result v7

    .line 4745
    iget-object v3, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v4, p0, Lcom/tkay/core/b/b;->m:J

    sub-long v4, v1, v4

    const/4 v6, 0x1

    move-object v2, p1

    invoke-static/range {v2 .. v7}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/ag;JZZ)V

    .line 4747
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/tkay/core/b/c;->a(I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)V
    .locals 6

    const-wide/16 v3, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v5, p3

    .line 51
    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/b/b;->b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;Ljava/lang/Object;Ljava/util/List;)V
    .locals 20

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 6610
    instance-of v2, v1, Lorg/json/JSONObject;

    if-eqz v2, :cond_10

    .line 6611
    check-cast v1, Lorg/json/JSONObject;

    const-string v2, "wf"

    .line 6613
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_10

    .line 6616
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_10

    .line 6621
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    move v4, v3

    .line 6623
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_0

    .line 6624
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/b/j;->a(Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v5

    .line 6625
    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 6628
    :cond_0
    invoke-static {v2}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 6632
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v1

    const-wide v4, 0x40c3880000000000L    # 10000.0

    const-wide/16 v6, 0x0

    const/4 v8, 0x1

    if-ne v1, v8, :cond_5

    .line 6635
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/b/j;

    .line 6637
    iget-wide v2, v1, Lcom/tkay/core/b/j;->c:D

    cmpl-double v2, v2, v6

    if-nez v2, :cond_10

    iget-object v2, v0, Lcom/tkay/core/b/b;->o:Ljava/lang/String;

    .line 7030
    iget-object v3, v1, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    .line 6637
    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_10

    .line 6638
    iput-wide v4, v1, Lcom/tkay/core/b/j;->c:D

    .line 6641
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/l;

    .line 6642
    iget-object v4, v1, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    iget-object v5, v3, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-static {v4, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v3}, Lcom/tkay/core/common/f/l;->isSuccessWithUseType()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 6644
    iget-object v2, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    if-eqz v2, :cond_2

    iget-object v2, v2, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v4, v1, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    invoke-static {v2, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 6650
    :cond_2
    iput-object v3, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    .line 6661
    :cond_3
    iget-wide v4, v1, Lcom/tkay/core/b/j;->c:D

    iget-wide v2, v3, Lcom/tkay/core/common/f/l;->o:D

    invoke-static {v4, v5, v2, v3}, Ljava/lang/Math;->max(DD)D

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/core/b/j;->c:D

    .line 6667
    :cond_4
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    iget-object v3, v1, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    invoke-virtual {v0, v2, v3, v1}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/b/j;)V

    return-void

    :cond_5
    add-int/lit8 v8, v1, -0x1

    :goto_1
    if-ge v3, v1, :cond_10

    .line 6672
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/tkay/core/b/j;

    .line 6674
    iget-wide v10, v9, Lcom/tkay/core/b/j;->c:D

    cmpl-double v10, v10, v6

    if-nez v10, :cond_f

    iget-object v10, v0, Lcom/tkay/core/b/b;->o:Ljava/lang/String;

    .line 8030
    iget-object v11, v9, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    .line 6674
    invoke-static {v10, v11}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_f

    const-wide v10, 0x3fb999999999999aL    # 0.1

    if-nez v3, :cond_7

    add-int/lit8 v12, v3, 0x1

    .line 6677
    invoke-interface {v2, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/tkay/core/b/j;

    iget-wide v13, v13, Lcom/tkay/core/b/j;->c:D

    cmpl-double v13, v13, v6

    if-nez v13, :cond_6

    .line 6678
    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    .line 6680
    :cond_6
    invoke-interface {v2, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Lcom/tkay/core/b/j;

    iget-wide v12, v12, Lcom/tkay/core/b/j;->c:D

    add-double/2addr v12, v10

    iput-wide v12, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    :cond_7
    const-wide/high16 v12, 0x4000000000000000L    # 2.0

    if-ne v3, v8, :cond_9

    add-int/lit8 v14, v3, -0x1

    .line 6684
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/tkay/core/b/j;

    iget-wide v4, v15, Lcom/tkay/core/b/j;->c:D

    sub-double/2addr v4, v10

    cmpg-double v4, v4, v6

    if-gtz v4, :cond_8

    .line 6685
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/b/j;

    iget-wide v4, v4, Lcom/tkay/core/b/j;->c:D

    div-double/2addr v4, v12

    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    .line 6687
    :cond_8
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/b/j;

    iget-wide v4, v4, Lcom/tkay/core/b/j;->c:D

    sub-double/2addr v4, v10

    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    :cond_9
    add-int/lit8 v4, v3, -0x1

    .line 6691
    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/b/j;

    iget-wide v4, v4, Lcom/tkay/core/b/j;->c:D

    add-int/lit8 v14, v3, 0x1

    .line 6692
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/tkay/core/b/j;

    iget-wide v14, v14, Lcom/tkay/core/b/j;->c:D

    sub-double v16, v4, v10

    sub-double v14, v4, v14

    .line 6695
    invoke-static {v14, v15}, Ljava/lang/Math;->abs(D)D

    move-result-wide v18

    cmpg-double v10, v18, v10

    if-gtz v10, :cond_a

    div-double/2addr v14, v12

    sub-double v16, v4, v14

    :cond_a
    move-wide/from16 v4, v16

    .line 6699
    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    .line 6703
    :goto_2
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_b
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_e

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/f/l;

    .line 6704
    iget-object v10, v9, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    iget-object v11, v5, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-static {v10, v11}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_b

    invoke-virtual {v5}, Lcom/tkay/core/common/f/l;->isSuccessWithUseType()Z

    move-result v10

    if-eqz v10, :cond_b

    .line 6706
    iget-object v4, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    if-eqz v4, :cond_c

    iget-object v4, v4, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v10, v9, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    invoke-static {v4, v10}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_d

    .line 6711
    :cond_c
    iput-object v5, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    .line 6722
    :cond_d
    iget-wide v10, v9, Lcom/tkay/core/b/j;->c:D

    iget-wide v4, v5, Lcom/tkay/core/common/f/l;->o:D

    invoke-static {v10, v11, v4, v5}, Ljava/lang/Math;->max(DD)D

    move-result-wide v4

    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    .line 6733
    :cond_e
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v4

    iget-object v5, v9, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    iget-object v10, v9, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    invoke-virtual {v4, v5, v10, v9}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/b/j;)V

    :cond_f
    add-int/lit8 v3, v3, 0x1

    const-wide v4, 0x40c3880000000000L    # 10000.0

    goto/16 :goto_1

    :cond_10
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 7

    const-string v0, "There is no Network Adapter."

    .line 5751
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "This network don\'t support header bidding in current TY\'s version."

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 5755
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p1

    .line 5756
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/b/c;->b(I)Z

    move-result v6

    .line 5758
    iget-object v2, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v3, p0, Lcom/tkay/core/b/b;->m:J

    sub-long v3, v0, v3

    const/4 v5, 0x0

    move-object v1, p2

    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/ag;JZZ)V

    .line 5760
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tkay/core/b/c;->a(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V
    .locals 0

    .line 51
    invoke-direct/range {p0 .. p5}, Lcom/tkay/core/b/b;->a(Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/b;Lorg/json/JSONObject;Lcom/tkay/core/common/f/aj;)V
    .locals 6

    .line 5240
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "handleBidTokenResult"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5243
    iget-object v0, p0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 5244
    invoke-direct {p0}, Lcom/tkay/core/b/b;->f()V

    .line 5246
    iget-object v0, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    .line 5251
    :goto_0
    monitor-enter p0

    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    .line 5254
    :try_start_0
    iget-object v3, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {v3, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 5255
    iget-object p1, p0, Lcom/tkay/core/b/b;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5259
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_3

    if-nez v0, :cond_4

    .line 5395
    iget-object p1, p0, Lcom/tkay/core/b/b;->p:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-nez p1, :cond_2

    move p1, v1

    goto :goto_1

    :cond_2
    move p1, v2

    :goto_1
    if-eqz p1, :cond_3

    goto :goto_2

    :cond_3
    move v1, v2

    :cond_4
    :goto_2
    if-eqz v1, :cond_5

    .line 5261
    iget-wide p1, p0, Lcom/tkay/core/b/b;->m:J

    invoke-direct {p0, p1, p2}, Lcom/tkay/core/b/b;->b(J)V

    .line 5262
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 5264
    :cond_5
    monitor-exit p0

    .line 5267
    iget-object p1, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_6

    invoke-direct {p0}, Lcom/tkay/core/b/b;->m()Z

    move-result p1

    if-eqz p1, :cond_6

    const/4 v1, 0x0

    const-wide/16 v2, 0x0

    const/4 v5, 0x0

    const-string v4, ""

    move-object v0, p0

    .line 5268
    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/b/b;->a(Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V

    :cond_6
    return-void

    :catchall_0
    move-exception p1

    .line 5264
    monitor-exit p0

    throw p1
.end method

.method private a(Lcom/tkay/core/common/f/l;)V
    .locals 11

    .line 404
    iget-object v0, p1, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 406
    :try_start_0
    iget-object v0, p1, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p1, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iget v2, p1, Lcom/tkay/core/common/f/l;->d:I

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/a/c;->a(Ljava/lang/String;Lorg/json/JSONObject;I)Lcom/tkay/core/common/f/f;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 411
    :cond_0
    iget v1, p1, Lcom/tkay/core/common/f/l;->d:I

    const/16 v2, 0x43

    if-ne v1, v2, :cond_1

    .line 412
    iget-object v1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->P()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;J)V

    .line 413
    iget-object v1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->q()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->P()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;J)V

    .line 415
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object v5

    iget-object v0, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v6, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    iget v7, p1, Lcom/tkay/core/common/f/l;->d:I

    iget-object v8, p1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    iget-object v9, p1, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    iget-object v10, p1, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-virtual/range {v5 .. v10}, Lcom/tkay/core/common/a/a;->a(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method private a(Ljava/lang/Object;Ljava/util/List;)V
    .locals 20
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/l;",
            ">;)V"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 610
    instance-of v2, v1, Lorg/json/JSONObject;

    if-eqz v2, :cond_12

    .line 611
    check-cast v1, Lorg/json/JSONObject;

    const-string v2, "wf"

    .line 613
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    return-void

    .line 616
    :cond_0
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-nez v1, :cond_1

    return-void

    .line 621
    :cond_1
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    move v4, v3

    .line 623
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_2

    .line 624
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/b/j;->a(Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v5

    .line 625
    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 628
    :cond_2
    invoke-static {v2}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 632
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v1

    const-wide v4, 0x40c3880000000000L    # 10000.0

    const-wide/16 v6, 0x0

    const/4 v8, 0x1

    if-ne v1, v8, :cond_7

    .line 635
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/b/j;

    .line 637
    iget-wide v2, v1, Lcom/tkay/core/b/j;->c:D

    cmpl-double v2, v2, v6

    if-nez v2, :cond_12

    iget-object v2, v0, Lcom/tkay/core/b/b;->o:Ljava/lang/String;

    .line 3030
    iget-object v3, v1, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    .line 637
    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_12

    .line 638
    iput-wide v4, v1, Lcom/tkay/core/b/j;->c:D

    .line 641
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_6

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/l;

    .line 642
    iget-object v4, v1, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    iget-object v5, v3, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-static {v4, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/l;->isSuccessWithUseType()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 644
    iget-object v2, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    if-eqz v2, :cond_4

    iget-object v2, v2, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v4, v1, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    invoke-static {v2, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 650
    :cond_4
    iput-object v3, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    .line 661
    :cond_5
    iget-wide v4, v1, Lcom/tkay/core/b/j;->c:D

    iget-wide v2, v3, Lcom/tkay/core/common/f/l;->o:D

    invoke-static {v4, v5, v2, v3}, Ljava/lang/Math;->max(DD)D

    move-result-wide v2

    iput-wide v2, v1, Lcom/tkay/core/b/j;->c:D

    .line 667
    :cond_6
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    iget-object v4, v1, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    invoke-virtual {v2, v3, v4, v1}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/b/j;)V

    return-void

    :cond_7
    add-int/lit8 v8, v1, -0x1

    :goto_1
    if-ge v3, v1, :cond_12

    .line 672
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/tkay/core/b/j;

    .line 674
    iget-wide v10, v9, Lcom/tkay/core/b/j;->c:D

    cmpl-double v10, v10, v6

    if-nez v10, :cond_11

    iget-object v10, v0, Lcom/tkay/core/b/b;->o:Ljava/lang/String;

    .line 4030
    iget-object v11, v9, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    .line 674
    invoke-static {v10, v11}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_11

    const-wide v10, 0x3fb999999999999aL    # 0.1

    if-nez v3, :cond_9

    add-int/lit8 v12, v3, 0x1

    .line 677
    invoke-interface {v2, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/tkay/core/b/j;

    iget-wide v13, v13, Lcom/tkay/core/b/j;->c:D

    cmpl-double v13, v13, v6

    if-nez v13, :cond_8

    .line 678
    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    .line 680
    :cond_8
    invoke-interface {v2, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Lcom/tkay/core/b/j;

    iget-wide v12, v12, Lcom/tkay/core/b/j;->c:D

    add-double/2addr v12, v10

    iput-wide v12, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    :cond_9
    const-wide/high16 v12, 0x4000000000000000L    # 2.0

    if-ne v3, v8, :cond_b

    add-int/lit8 v14, v3, -0x1

    .line 684
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/tkay/core/b/j;

    iget-wide v4, v15, Lcom/tkay/core/b/j;->c:D

    sub-double/2addr v4, v10

    cmpg-double v4, v4, v6

    if-gtz v4, :cond_a

    .line 685
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/b/j;

    iget-wide v4, v4, Lcom/tkay/core/b/j;->c:D

    div-double/2addr v4, v12

    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    .line 687
    :cond_a
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/b/j;

    iget-wide v4, v4, Lcom/tkay/core/b/j;->c:D

    sub-double/2addr v4, v10

    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_2

    :cond_b
    add-int/lit8 v4, v3, -0x1

    .line 691
    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/b/j;

    iget-wide v4, v4, Lcom/tkay/core/b/j;->c:D

    add-int/lit8 v14, v3, 0x1

    .line 692
    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/tkay/core/b/j;

    iget-wide v14, v14, Lcom/tkay/core/b/j;->c:D

    sub-double v16, v4, v10

    sub-double v14, v4, v14

    .line 695
    invoke-static {v14, v15}, Ljava/lang/Math;->abs(D)D

    move-result-wide v18

    cmpg-double v10, v18, v10

    if-gtz v10, :cond_c

    div-double/2addr v14, v12

    sub-double v16, v4, v14

    :cond_c
    move-wide/from16 v4, v16

    .line 699
    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    .line 703
    :goto_2
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_d
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_10

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/f/l;

    .line 704
    iget-object v10, v9, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    iget-object v11, v5, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-static {v10, v11}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_d

    invoke-virtual {v5}, Lcom/tkay/core/common/f/l;->isSuccessWithUseType()Z

    move-result v10

    if-eqz v10, :cond_d

    .line 706
    iget-object v4, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    if-eqz v4, :cond_e

    iget-object v4, v4, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v10, v9, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    invoke-static {v4, v10}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_f

    .line 711
    :cond_e
    iput-object v5, v0, Lcom/tkay/core/b/b;->n:Lcom/tkay/core/common/f/l;

    .line 722
    :cond_f
    iget-wide v10, v9, Lcom/tkay/core/b/j;->c:D

    iget-wide v4, v5, Lcom/tkay/core/common/f/l;->o:D

    invoke-static {v10, v11, v4, v5}, Ljava/lang/Math;->max(DD)D

    move-result-wide v4

    iput-wide v4, v9, Lcom/tkay/core/b/j;->c:D

    .line 733
    :cond_10
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v4

    iget-object v5, v9, Lcom/tkay/core/b/j;->d:Ljava/lang/String;

    iget-object v10, v9, Lcom/tkay/core/b/j;->b:Ljava/lang/String;

    invoke-virtual {v4, v5, v10, v9}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/b/j;)V

    :cond_11
    add-int/lit8 v3, v3, 0x1

    const-wide v4, 0x40c3880000000000L    # 10000.0

    goto/16 :goto_1

    :cond_12
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 7

    const-string v0, "There is no Network Adapter."

    .line 751
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "This network don\'t support header bidding in current TY\'s version."

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 755
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p1

    .line 756
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/b/c;->b(I)Z

    move-result v6

    .line 758
    iget-object v2, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v3, p0, Lcom/tkay/core/b/b;->m:J

    sub-long v3, v0, v3

    const/4 v5, 0x0

    move-object v1, p2

    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/ag;JZZ)V

    .line 760
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/core/b/c;->a(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method private declared-synchronized a(Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/l;",
            ">;J",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 477
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "handleResult: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p1, :cond_5

    .line 478
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 479
    invoke-static {p1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    const/4 v0, 0x0

    .line 481
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_5

    .line 482
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/l;

    .line 483
    iget-object v2, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v3, v1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 484
    iget-object v2, v1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-interface {p5, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    if-nez v2, :cond_0

    .line 487
    iget-object v3, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v4, v1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 488
    iget-object v2, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v3, v1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 489
    iget-object v3, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    :cond_0
    if-eqz v2, :cond_4

    .line 494
    invoke-virtual {v1}, Lcom/tkay/core/common/f/l;->isSuccessWithUseType()Z

    move-result v3

    if-eqz v3, :cond_3

    add-int/lit8 v3, v0, 0x1

    .line 496
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    const-wide/16 v5, 0x0

    if-ge v3, v4, :cond_2

    .line 497
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/l;

    .line 498
    invoke-virtual {v3}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v7

    cmpl-double v4, v7, v5

    if-nez v4, :cond_1

    .line 500
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v4

    iget-object v3, v3, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v3, v5}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;)D

    move-result-wide v5

    goto :goto_1

    :cond_1
    move-wide v5, v7

    .line 503
    :cond_2
    :goto_1
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v3

    invoke-virtual {p0, v3, v1, v5, v6}, Lcom/tkay/core/b/b;->a(ILcom/tkay/core/common/f/k;D)V

    .line 505
    :cond_3
    invoke-virtual {p0, v2, v1, p2, p3}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V

    :cond_4
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_5
    if-eqz p5, :cond_8

    .line 512
    invoke-interface {p5}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 513
    :cond_6
    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 514
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-eqz v0, :cond_7

    .line 516
    iget-object v1, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 518
    :cond_7
    iget-object v1, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 519
    iget-object v0, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    goto :goto_2

    :cond_8
    if-eqz p5, :cond_a

    const-string p1, "No Response error."

    .line 526
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 527
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :cond_9
    move-object v4, p1

    const/4 v3, -0x4

    move-object v0, p0

    move-wide v1, p2

    move-object v5, p5

    .line 529
    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/b/b;->a(JILjava/lang/String;Ljava/util/Map;)V

    .line 532
    :cond_a
    iget-object p1, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    const/4 p2, 0x2

    if-lt p1, p2, :cond_b

    .line 533
    iget-object p1, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-static {p1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 536
    :cond_b
    invoke-direct {p0}, Lcom/tkay/core/b/b;->l()V

    .line 538
    invoke-direct {p0}, Lcom/tkay/core/b/b;->k()V

    .line 540
    invoke-direct {p0}, Lcom/tkay/core/b/b;->j()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 542
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Lorg/json/JSONObject;Lcom/tkay/core/common/f/aj;)V
    .locals 6

    .line 240
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "handleBidTokenResult"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 243
    iget-object v0, p0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 244
    invoke-direct {p0}, Lcom/tkay/core/b/b;->f()V

    .line 246
    iget-object v0, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    .line 251
    :goto_0
    monitor-enter p0

    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    .line 254
    :try_start_0
    iget-object v3, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {v3, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 255
    iget-object p1, p0, Lcom/tkay/core/b/b;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 259
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_3

    if-nez v0, :cond_4

    .line 2395
    iget-object p1, p0, Lcom/tkay/core/b/b;->p:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result p1

    if-nez p1, :cond_2

    move p1, v1

    goto :goto_1

    :cond_2
    move p1, v2

    :goto_1
    if-eqz p1, :cond_3

    goto :goto_2

    :cond_3
    move v1, v2

    :cond_4
    :goto_2
    if-eqz v1, :cond_5

    .line 261
    iget-wide p1, p0, Lcom/tkay/core/b/b;->m:J

    invoke-direct {p0, p1, p2}, Lcom/tkay/core/b/b;->b(J)V

    .line 262
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 264
    :cond_5
    monitor-exit p0

    .line 267
    iget-object p1, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_6

    invoke-direct {p0}, Lcom/tkay/core/b/b;->m()Z

    move-result p1

    if-eqz p1, :cond_6

    const/4 v1, 0x0

    const-wide/16 v2, 0x0

    const/4 v5, 0x0

    const-string v4, ""

    move-object v0, p0

    .line 268
    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/b/b;->a(Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V

    :cond_6
    return-void

    :catchall_0
    move-exception p1

    .line 264
    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized b(J)V
    .locals 4

    monitor-enter p0

    .line 299
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 300
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "beginRequestBidInfo, in bid requesting, do nothing."

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 301
    monitor-exit p0

    return-void

    .line 304
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "beginRequestBidInfo"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 305
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 306
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    .line 308
    invoke-virtual {p0, v0, v1}, Lcom/tkay/core/b/b;->a(Ljava/util/List;Ljava/util/Map;)V

    .line 310
    iget-object v2, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 313
    new-instance v2, Lcom/tkay/core/b/b$3;

    invoke-direct {v2, p0, p1, p2, v1}, Lcom/tkay/core/b/b$3;-><init>(Lcom/tkay/core/b/b;JLjava/util/Map;)V

    .line 370
    invoke-virtual {p0, v0, v2}, Lcom/tkay/core/b/b;->a(Ljava/util/List;Lcom/tkay/core/common/h/k;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 371
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private b(Lcom/tkay/core/common/f/aj;)V
    .locals 8

    .line 742
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    .line 743
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/b/c;->b(I)Z

    move-result v7

    .line 745
    iget-object v3, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v4, p0, Lcom/tkay/core/b/b;->m:J

    sub-long v4, v1, v4

    const/4 v6, 0x1

    move-object v2, p1

    invoke-static/range {v2 .. v7}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/ag;JZZ)V

    .line 747
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tkay/core/b/c;->a(I)V

    return-void
.end method

.method private b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V
    .locals 0

    .line 814
    invoke-static {p1, p2, p3, p4, p5}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    .line 815
    iget-object p2, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private f()V
    .locals 2

    .line 236
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/b/b;->v:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method

.method private declared-synchronized g()V
    .locals 2

    monitor-enter p0

    .line 274
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/b;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 275
    monitor-exit p0

    return-void

    .line 277
    :cond_0
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "get token short timeout."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 278
    iget-object v0, p0, Lcom/tkay/core/b/b;->p:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 280
    iget-object v0, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 281
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/tkay/core/b/b;->b(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 283
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private h()Z
    .locals 1

    .line 395
    iget-object v0, p0, Lcom/tkay/core/b/b;->p:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private declared-synchronized i()V
    .locals 8

    monitor-enter p0

    .line 425
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/b;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    .line 426
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/b/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "finishCallback: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 428
    iget-object v0, p0, Lcom/tkay/core/b/b;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 430
    invoke-direct {p0}, Lcom/tkay/core/b/b;->f()V

    const-string v0, "Request Timeout."

    .line 438
    iget-object v1, p0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    const-wide/16 v3, 0x0

    const/4 v5, -0x3

    .line 440
    iget-object v7, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    move-object v2, p0

    move-object v6, v0

    invoke-direct/range {v2 .. v7}, Lcom/tkay/core/b/b;->a(JILjava/lang/String;Ljava/util/Map;)V

    const-wide/16 v3, 0x0

    const/4 v5, -0x3

    .line 441
    iget-object v7, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    move-object v2, p0

    move-object v6, v0

    invoke-direct/range {v2 .. v7}, Lcom/tkay/core/b/b;->a(JILjava/lang/String;Ljava/util/Map;)V

    .line 444
    invoke-direct {p0}, Lcom/tkay/core/b/b;->l()V

    .line 446
    invoke-direct {p0}, Lcom/tkay/core/b/b;->k()V

    .line 448
    invoke-direct {p0}, Lcom/tkay/core/b/b;->j()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 451
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private j()V
    .locals 3

    .line 454
    iget-object v0, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 455
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/b/b;->l:Lcom/tkay/core/b/b/a;

    if-eqz v0, :cond_1

    .line 456
    iget-object v1, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    iget-object v2, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/b/b/a;->a(Ljava/util/List;Ljava/util/List;)V

    .line 460
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 461
    iget-object v0, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method

.method private declared-synchronized k()V
    .locals 2

    monitor-enter p0

    .line 546
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/b/b;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 547
    iget-object v0, p0, Lcom/tkay/core/b/b;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 549
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private l()V
    .locals 3

    .line 552
    iget-boolean v0, p0, Lcom/tkay/core/b/b;->b:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 553
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "S2S HeadBidding Success List"

    .line 556
    iget-object v2, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-static {v2}, Lcom/tkay/core/b/b;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "S2S HeadBidding Fail List"

    .line 557
    iget-object v2, p0, Lcom/tkay/core/b/b;->g:Ljava/util/List;

    invoke-static {v2}, Lcom/tkay/core/b/b;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 562
    :catch_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "tkay_bidding"

    invoke-static {v2, v0, v1}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_1
    return-void
.end method

.method private m()Z
    .locals 1

    .line 575
    iget-object v0, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/b/b;->s:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method protected final a(Lcom/tkay/core/b/b/a;)V
    .locals 5

    .line 141
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/b/b;->m:J

    .line 142
    iput-object p1, p0, Lcom/tkay/core/b/b;->l:Lcom/tkay/core/b/b/a;

    .line 144
    iget-boolean p1, p0, Lcom/tkay/core/b/b;->b:Z

    if-eqz p1, :cond_0

    .line 145
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "S2S Start HeadBidding List"

    .line 147
    iget-object v1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-static {v1}, Lcom/tkay/core/b/b;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "S2S Start HeadBidding List(Directly)"

    .line 148
    iget-object v1, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-static {v1}, Lcom/tkay/core/b/b;->b(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 152
    :catch_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    const-string v1, "tkay_bidding"

    invoke-static {v1, p1, v0}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 156
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_1

    .line 157
    iget-wide v0, p0, Lcom/tkay/core/b/b;->m:J

    invoke-direct {p0, v0, v1}, Lcom/tkay/core/b/b;->b(J)V

    return-void

    .line 163
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->u()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-gtz p1, :cond_2

    const-wide/16 v0, 0x1f4

    .line 1232
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/core/b/b;->v:Ljava/lang/Runnable;

    invoke-virtual {p1, v2, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 167
    iget-object p1, p0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 168
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 171
    new-instance v1, Lcom/tkay/core/b/f;

    iget-object v2, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    invoke-direct {v1, v2}, Lcom/tkay/core/b/f;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 172
    new-instance v2, Lcom/tkay/core/b/b$2;

    invoke-direct {v2, p0}, Lcom/tkay/core/b/b$2;-><init>(Lcom/tkay/core/b/b;)V

    .line 2049
    iput-object v2, v1, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    .line 2051
    invoke-static {v0}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v3

    if-nez v3, :cond_3

    const-string v1, "There is no Network Adapter."

    .line 2055
    invoke-interface {v2, v1, v0}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    goto :goto_0

    .line 2060
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v2

    new-instance v4, Lcom/tkay/core/b/f$1;

    invoke-direct {v4, v1, v3, v0}, Lcom/tkay/core/b/f$1;-><init>(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v2, v4}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_4
    return-void
.end method

.method protected a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V
    .locals 11

    .line 766
    instance-of v0, p2, Lcom/tkay/core/common/f/l;

    if-eqz v0, :cond_8

    .line 767
    check-cast p2, Lcom/tkay/core/common/f/l;

    .line 768
    invoke-virtual {p2}, Lcom/tkay/core/common/f/l;->isSuccessWithUseType()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 4404
    iget-object v0, p2, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 4406
    :try_start_0
    iget-object v0, p2, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p2, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iget v2, p2, Lcom/tkay/core/common/f/l;->d:I

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/a/c;->a(Ljava/lang/String;Lorg/json/JSONObject;I)Lcom/tkay/core/common/f/f;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 4411
    :cond_0
    iget v1, p2, Lcom/tkay/core/common/f/l;->d:I

    const/16 v2, 0x43

    if-ne v1, v2, :cond_1

    .line 4412
    iget-object v1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->P()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;J)V

    .line 4413
    iget-object v1, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->q()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->P()J

    move-result-wide v3

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;J)V

    .line 4415
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object v5

    iget-object v0, p0, Lcom/tkay/core/b/b;->a:Lcom/tkay/core/common/f/ag;

    iget-object v6, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    iget v7, p2, Lcom/tkay/core/common/f/l;->d:I

    iget-object v8, p2, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    iget-object v9, p2, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    iget-object v10, p2, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-virtual/range {v5 .. v10}, Lcom/tkay/core/common/a/a;->a(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 772
    :catchall_0
    :cond_2
    :goto_0
    invoke-virtual {p1, p3, p4}, Lcom/tkay/core/common/f/aj;->a(J)V

    .line 773
    iget-object p3, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {p3, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 775
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p3

    const/4 p4, 0x3

    if-eq p3, p4, :cond_4

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p3

    const/4 p4, 0x7

    if-ne p3, p4, :cond_3

    goto :goto_1

    .line 778
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide p3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    add-long/2addr p3, v0

    iput-wide p3, p2, Lcom/tkay/core/common/f/l;->f:J

    goto :goto_2

    .line 776
    :cond_4
    :goto_1
    iget-wide p3, p2, Lcom/tkay/core/common/f/l;->e:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    add-long/2addr p3, v0

    iput-wide p3, p2, Lcom/tkay/core/common/f/l;->f:J

    .line 781
    :goto_2
    invoke-virtual {p0, p1, p2}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/l;)V

    return-void

    .line 787
    :cond_5
    iget v0, p2, Lcom/tkay/core/common/f/l;->useType:I

    const/4 v1, 0x2

    const/4 v2, 0x0

    if-ne v0, v1, :cond_6

    const/4 p2, 0x1

    .line 791
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->P()V

    const-string v0, "filter by s2s bid max count"

    move-object v5, v0

    move v8, v2

    move v2, p2

    goto :goto_3

    .line 793
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "errorCode:["

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p2, Lcom/tkay/core/common/f/l;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "],errorMsg:["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p2, Lcom/tkay/core/common/f/l;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "]"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 p2, -0x1

    move v8, p2

    move-object v5, v0

    .line 798
    :goto_3
    invoke-virtual {p0, p1, v5, v8, v2}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;II)Z

    move-result p2

    if-eqz p2, :cond_7

    .line 800
    iget-object p2, p0, Lcom/tkay/core/b/b;->h:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_7
    move-object v3, p0

    move-object v4, p1

    move-wide v6, p3

    .line 802
    invoke-direct/range {v3 .. v8}, Lcom/tkay/core/b/b;->b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    :cond_8
    return-void
.end method

.method protected abstract a(Ljava/util/List;Lcom/tkay/core/common/h/k;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;",
            "Lcom/tkay/core/common/h/k;",
            ")V"
        }
    .end annotation
.end method

.method protected declared-synchronized a(Ljava/util/List;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 287
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 288
    iget-object p1, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 290
    iget-object p1, p0, Lcom/tkay/core/b/b;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {p2, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 291
    iget-object p1, p0, Lcom/tkay/core/b/b;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 292
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Z)V
    .locals 0

    .line 136
    iput-boolean p1, p0, Lcom/tkay/core/b/b;->b:Z

    return-void
.end method

.method protected final b()V
    .locals 0

    .line 810
    invoke-direct {p0}, Lcom/tkay/core/b/b;->i()V

    return-void
.end method

.method protected final declared-synchronized c()V
    .locals 2

    monitor-enter p0

    .line 374
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/b/b;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 375
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/b/b$4;

    invoke-direct {v1, p0}, Lcom/tkay/core/b/b$4;-><init>(Lcom/tkay/core/b/b;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 386
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method protected final d()Z
    .locals 1

    .line 390
    iget-object v0, p0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/b/b;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected abstract e()Ljava/lang/String;
.end method
