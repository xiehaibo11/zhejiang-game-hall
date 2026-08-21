.class public final Lcom/tkay/core/common/l/a/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/l/a/f$b;,
        Lcom/tkay/core/common/l/a/f$c;,
        Lcom/tkay/core/common/l/a/f$a;,
        Lcom/tkay/core/common/l/a/f$d;
    }
.end annotation


# instance fields
.field final a:I

.field final b:Landroid/view/ViewTreeObserver$OnPreDrawListener;

.field private c:I

.field private final d:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private e:J

.field private final f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Landroid/view/View;",
            "Lcom/tkay/core/common/l/a/f$a;",
            ">;"
        }
    .end annotation
.end field

.field private final g:Lcom/tkay/core/common/l/a/f$b;

.field private h:Lcom/tkay/core/common/l/a/f$d;

.field private final i:Lcom/tkay/core/common/l/a/f$c;

.field private final j:Landroid/os/Handler;

.field private k:Z


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 96
    new-instance v0, Ljava/util/WeakHashMap;

    const/16 v1, 0xa

    invoke-direct {v0, v1}, Ljava/util/WeakHashMap;-><init>(I)V

    new-instance v1, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v1}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    new-instance v2, Landroid/os/Handler;

    .line 99
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 96
    invoke-direct {p0, v0, v1, v2}, Lcom/tkay/core/common/l/a/f;-><init>(Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Landroid/os/Handler;)V

    return-void
.end method

.method public constructor <init>(I)V
    .locals 4

    .line 103
    new-instance v0, Ljava/util/WeakHashMap;

    const/16 v1, 0xa

    invoke-direct {v0, v1}, Ljava/util/WeakHashMap;-><init>(I)V

    new-instance v1, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v1}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    new-instance v2, Landroid/os/Handler;

    .line 106
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 103
    invoke-direct {p0, v0, v1, v2}, Lcom/tkay/core/common/l/a/f;-><init>(Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Landroid/os/Handler;)V

    .line 107
    iput p1, p0, Lcom/tkay/core/common/l/a/f;->c:I

    return-void
.end method

.method private constructor <init>(Ljava/util/Map;Lcom/tkay/core/common/l/a/f$b;Landroid/os/Handler;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Landroid/view/View;",
            "Lcom/tkay/core/common/l/a/f$a;",
            ">;",
            "Lcom/tkay/core/common/l/a/f$b;",
            "Landroid/os/Handler;",
            ")V"
        }
    .end annotation

    .line 113
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x64

    .line 33
    iput v0, p0, Lcom/tkay/core/common/l/a/f;->c:I

    const/16 v0, 0x32

    .line 38
    iput v0, p0, Lcom/tkay/core/common/l/a/f;->a:I

    const-wide/16 v1, 0x0

    .line 45
    iput-wide v1, p0, Lcom/tkay/core/common/l/a/f;->e:J

    .line 114
    iput-object p1, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    .line 115
    iput-object p2, p0, Lcom/tkay/core/common/l/a/f;->g:Lcom/tkay/core/common/l/a/f$b;

    .line 116
    iput-object p3, p0, Lcom/tkay/core/common/l/a/f;->j:Landroid/os/Handler;

    .line 117
    new-instance p1, Lcom/tkay/core/common/l/a/f$c;

    invoke-direct {p1, p0}, Lcom/tkay/core/common/l/a/f$c;-><init>(Lcom/tkay/core/common/l/a/f;)V

    iput-object p1, p0, Lcom/tkay/core/common/l/a/f;->i:Lcom/tkay/core/common/l/a/f$c;

    .line 118
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/core/common/l/a/f;->d:Ljava/util/ArrayList;

    .line 120
    new-instance p1, Lcom/tkay/core/common/l/a/f$1;

    invoke-direct {p1, p0}, Lcom/tkay/core/common/l/a/f$1;-><init>(Lcom/tkay/core/common/l/a/f;)V

    iput-object p1, p0, Lcom/tkay/core/common/l/a/f;->b:Landroid/view/ViewTreeObserver$OnPreDrawListener;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/l/a/f;)Ljava/util/Map;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    return-object p0
.end method

.method private a(J)V
    .locals 4

    .line 211
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 212
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/l/a/f$a;

    iget-wide v2, v2, Lcom/tkay/core/common/l/a/f$a;->c:J

    cmp-long v2, v2, p1

    if-gez v2, :cond_0

    .line 213
    iget-object v2, p0, Lcom/tkay/core/common/l/a/f;->d:Ljava/util/ArrayList;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 217
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/common/l/a/f;->d:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 218
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/l/a/f;->a(Landroid/view/View;)V

    goto :goto_1

    .line 220
    :cond_2
    iget-object p1, p0, Lcom/tkay/core/common/l/a/f;->d:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clear()V

    return-void
.end method

.method private a(Landroid/view/View;ILjava/lang/Integer;)V
    .locals 6

    move-object v0, p0

    move-object v1, p1

    move-object v2, p1

    move v3, p2

    move v4, p2

    move-object v5, p3

    .line 1171
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/core/common/l/a/f;->a(Landroid/view/View;Landroid/view/View;IILjava/lang/Integer;)V

    return-void
.end method

.method private a(Landroid/view/View;Landroid/view/View;ILjava/lang/Integer;)V
    .locals 6

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move v4, p3

    move-object v5, p4

    .line 171
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/core/common/l/a/f;->a(Landroid/view/View;Landroid/view/View;IILjava/lang/Integer;)V

    return-void
.end method

.method private static a(Landroid/content/Context;Landroid/view/View;)Z
    .locals 3

    .line 1053
    instance-of v0, p0, Landroid/app/Activity;

    const v1, 0x1020002

    const/4 v2, 0x0

    if-nez v0, :cond_0

    move-object p0, v2

    goto :goto_0

    .line 1057
    :cond_0
    check-cast p0, Landroid/app/Activity;

    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    invoke-virtual {p0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p0

    :goto_0
    if-nez p1, :cond_1

    goto :goto_1

    .line 1066
    :cond_1
    invoke-virtual {p1}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object p1

    if-nez p1, :cond_2

    goto :goto_1

    .line 1072
    :cond_2
    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    if-eqz v2, :cond_3

    goto :goto_1

    :cond_3
    move-object v2, p1

    :goto_1
    if-eqz p0, :cond_4

    goto :goto_2

    :cond_4
    move-object p0, v2

    :goto_2
    const/4 p1, 0x0

    if-nez p0, :cond_5

    return p1

    .line 144
    :cond_5
    invoke-virtual {p0}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p0

    .line 145
    invoke-virtual {p0}, Landroid/view/ViewTreeObserver;->isAlive()Z

    move-result p0

    if-nez p0, :cond_6

    return p1

    :cond_6
    const/4 p0, 0x1

    return p0
.end method

.method static synthetic b(Lcom/tkay/core/common/l/a/f;)Lcom/tkay/core/common/l/a/f$b;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/core/common/l/a/f;->g:Lcom/tkay/core/common/l/a/f$b;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/core/common/l/a/f;)Lcom/tkay/core/common/l/a/f$d;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/core/common/l/a/f;->h:Lcom/tkay/core/common/l/a/f$d;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/core/common/l/a/f;)Z
    .locals 1

    const/4 v0, 0x0

    .line 31
    iput-boolean v0, p0, Lcom/tkay/core/common/l/a/f;->k:Z

    return v0
.end method


# virtual methods
.method final a()V
    .locals 2

    .line 234
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 235
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f;->j:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 236
    iput-boolean v1, p0, Lcom/tkay/core/common/l/a/f;->k:Z

    return-void
.end method

.method final a(Landroid/view/View;)V
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method final a(Landroid/view/View;Landroid/view/View;IILjava/lang/Integer;)V
    .locals 4

    .line 178
    :try_start_0
    invoke-virtual {p2}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/tkay/core/common/l/a/f;->a(Landroid/content/Context;Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 181
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/l/a/f$a;

    if-nez v0, :cond_1

    .line 183
    new-instance v0, Lcom/tkay/core/common/l/a/f$a;

    invoke-direct {v0}, Lcom/tkay/core/common/l/a/f$a;-><init>()V

    .line 184
    iget-object v1, p0, Lcom/tkay/core/common/l/a/f;->f:Ljava/util/Map;

    invoke-interface {v1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 185
    invoke-virtual {p0}, Lcom/tkay/core/common/l/a/f;->c()V

    .line 188
    :cond_1
    invoke-static {p4, p3}, Ljava/lang/Math;->min(II)I

    move-result p4

    .line 190
    iput-object p1, v0, Lcom/tkay/core/common/l/a/f$a;->d:Landroid/view/View;

    .line 191
    iput p3, v0, Lcom/tkay/core/common/l/a/f$a;->a:I

    .line 192
    iput p4, v0, Lcom/tkay/core/common/l/a/f$a;->b:I

    .line 193
    iget-wide p3, p0, Lcom/tkay/core/common/l/a/f;->e:J

    iput-wide p3, v0, Lcom/tkay/core/common/l/a/f$a;->c:J

    .line 194
    iput-object p5, v0, Lcom/tkay/core/common/l/a/f$a;->e:Ljava/lang/Integer;

    .line 196
    invoke-virtual {p2}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/core/common/l/a/f;->b:Landroid/view/ViewTreeObserver$OnPreDrawListener;

    invoke-virtual {p1, p2}, Landroid/view/ViewTreeObserver;->addOnPreDrawListener(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V

    .line 199
    iget-wide p1, p0, Lcom/tkay/core/common/l/a/f;->e:J

    const-wide/16 p3, 0x1

    add-long/2addr p1, p3

    iput-wide p1, p0, Lcom/tkay/core/common/l/a/f;->e:J

    const-wide/16 p3, 0x32

    .line 200
    rem-long v0, p1, p3

    const-wide/16 v2, 0x0

    cmp-long p5, v0, v2

    if-nez p5, :cond_2

    sub-long/2addr p1, p3

    .line 201
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/l/a/f;->a(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method final a(Lcom/tkay/core/common/l/a/f$d;)V
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/tkay/core/common/l/a/f;->h:Lcom/tkay/core/common/l/a/f$d;

    return-void
.end method

.method final b()V
    .locals 1

    .line 243
    invoke-virtual {p0}, Lcom/tkay/core/common/l/a/f;->a()V

    const/4 v0, 0x0

    .line 249
    iput-object v0, p0, Lcom/tkay/core/common/l/a/f;->h:Lcom/tkay/core/common/l/a/f$d;

    return-void
.end method

.method final c()V
    .locals 4

    .line 255
    iget-boolean v0, p0, Lcom/tkay/core/common/l/a/f;->k:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 259
    iput-boolean v0, p0, Lcom/tkay/core/common/l/a/f;->k:Z

    .line 260
    iget-object v0, p0, Lcom/tkay/core/common/l/a/f;->j:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/core/common/l/a/f;->i:Lcom/tkay/core/common/l/a/f$c;

    iget v2, p0, Lcom/tkay/core/common/l/a/f;->c:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
