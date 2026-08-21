.class public Lcom/tkay/core/common/l/a/c;
.super Ljava/lang/Object;


# instance fields
.field private final a:Lcom/tkay/core/common/l/a/f;

.field private final b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Landroid/view/View;",
            "Lcom/tkay/core/common/l/a/b;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Landroid/view/View;",
            "Lcom/tkay/core/common/l/a/d<",
            "Lcom/tkay/core/common/l/a/b;",
            ">;>;"
        }
    .end annotation
.end field

.field private final d:Lcom/tkay/core/common/l/a/f$b;

.field private e:Lcom/tkay/core/common/l/a/f$d;


# direct methods
.method public constructor <init>()V
    .locals 6

    .line 50
    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    new-instance v1, Ljava/util/WeakHashMap;

    invoke-direct {v1}, Ljava/util/WeakHashMap;-><init>()V

    new-instance v2, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v2}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    new-instance v3, Lcom/tkay/core/common/l/a/f;

    invoke-direct {v3}, Lcom/tkay/core/common/l/a/f;-><init>()V

    new-instance v4, Landroid/os/Handler;

    .line 54
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 50
    invoke-direct {p0, v0, v1, v2, v3}, Lcom/tkay/core/common/l/a/c;-><init>(Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/core/common/l/a/f;)V

    return-void
.end method

.method public constructor <init>(I)V
    .locals 5

    .line 58
    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    new-instance v1, Ljava/util/WeakHashMap;

    invoke-direct {v1}, Ljava/util/WeakHashMap;-><init>()V

    new-instance v2, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v2}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    new-instance v3, Lcom/tkay/core/common/l/a/f;

    invoke-direct {v3, p1}, Lcom/tkay/core/common/l/a/f;-><init>(I)V

    new-instance p1, Landroid/os/Handler;

    .line 62
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v4

    invoke-direct {p1, v4}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 58
    invoke-direct {p0, v0, v1, v2, v3}, Lcom/tkay/core/common/l/a/c;-><init>(Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/core/common/l/a/f;)V

    return-void
.end method

.method private constructor <init>(Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/core/common/l/a/f;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Landroid/view/View;",
            "Lcom/tkay/core/common/l/a/b;",
            ">;",
            "Ljava/util/Map<",
            "Landroid/view/View;",
            "Lcom/tkay/core/common/l/a/d<",
            "Lcom/tkay/core/common/l/a/b;",
            ">;>;",
            "Lcom/tkay/core/common/l/a/f$b;",
            "Lcom/tkay/core/common/l/a/f;",
            ")V"
        }
    .end annotation

    .line 69
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 70
    iput-object p1, p0, Lcom/tkay/core/common/l/a/c;->b:Ljava/util/Map;

    .line 71
    iput-object p2, p0, Lcom/tkay/core/common/l/a/c;->c:Ljava/util/Map;

    .line 72
    iput-object p3, p0, Lcom/tkay/core/common/l/a/c;->d:Lcom/tkay/core/common/l/a/f$b;

    .line 73
    iput-object p4, p0, Lcom/tkay/core/common/l/a/c;->a:Lcom/tkay/core/common/l/a/f;

    .line 75
    new-instance p1, Lcom/tkay/core/common/l/a/c$1;

    invoke-direct {p1, p0}, Lcom/tkay/core/common/l/a/c$1;-><init>(Lcom/tkay/core/common/l/a/c;)V

    iput-object p1, p0, Lcom/tkay/core/common/l/a/c;->e:Lcom/tkay/core/common/l/a/f$d;

    .line 106
    iget-object p2, p0, Lcom/tkay/core/common/l/a/c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/l/a/f;->a(Lcom/tkay/core/common/l/a/f$d;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/l/a/c;)Ljava/util/Map;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/core/common/l/a/c;->b:Ljava/util/Map;

    return-object p0
.end method

.method private b(Landroid/view/View;)V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->c:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private c()Lcom/tkay/core/common/l/a/f$d;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 214
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->e:Lcom/tkay/core/common/l/a/f$d;

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 144
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 145
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/f;->a()V

    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 1

    .line 134
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 135
    invoke-direct {p0, p1}, Lcom/tkay/core/common/l/a/c;->b(Landroid/view/View;)V

    .line 136
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/l/a/f;->a(Landroid/view/View;)V

    return-void
.end method

.method public final a(Landroid/view/View;Lcom/tkay/core/common/l/a/b;)V
    .locals 7

    .line 117
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-ne v0, p2, :cond_0

    return-void

    .line 122
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;)V

    .line 124
    invoke-interface {p2}, Lcom/tkay/core/common/l/a/b;->isImpressionRecorded()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 128
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->b:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 129
    iget-object v1, p0, Lcom/tkay/core/common/l/a/c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-interface {p2}, Lcom/tkay/core/common/l/a/b;->getImpressionMinPercentageViewed()I

    move-result v5

    .line 130
    invoke-interface {p2}, Lcom/tkay/core/common/l/a/b;->getImpressionMinVisiblePx()Ljava/lang/Integer;

    move-result-object v6

    move-object v2, p1

    move-object v3, p1

    move v4, v5

    .line 1171
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/core/common/l/a/f;->a(Landroid/view/View;Landroid/view/View;IILjava/lang/Integer;)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 150
    invoke-virtual {p0}, Lcom/tkay/core/common/l/a/c;->a()V

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/l/a/c;->a:Lcom/tkay/core/common/l/a/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/f;->b()V

    const/4 v0, 0x0

    .line 152
    iput-object v0, p0, Lcom/tkay/core/common/l/a/c;->e:Lcom/tkay/core/common/l/a/f$d;

    return-void
.end method
