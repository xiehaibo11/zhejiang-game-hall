.class public Lcom/mbridge/msdk/foundation/controller/a;
.super Ljava/lang/Object;
.source "MBSDKContext.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/controller/a$b;,
        Lcom/mbridge/msdk/foundation/controller/a$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;

.field public static b:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static d:Lcom/mbridge/msdk/foundation/controller/a;

.field private static r:Ljava/util/concurrent/CopyOnWriteArraySet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArraySet<",
            "Lcom/mbridge/msdk/foundation/entity/i;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private e:Landroid/content/Context;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:I

.field private k:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private l:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private m:I

.field private n:Lorg/json/JSONObject;

.field private o:I

.field private p:Z

.field private q:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private s:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 50
    const-class v0, Lcom/mbridge/msdk/foundation/controller/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    .line 64
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/foundation/controller/a;->b:Ljava/util/HashMap;

    .line 83
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    .line 87
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 170
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 70
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->m:I

    .line 79
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->p:Z

    const/4 v0, 0x0

    .line 81
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->q:Ljava/util/List;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/controller/a;)Landroid/content/Context;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/controller/a;Ljava/lang/String;)V
    .locals 3

    .line 4622
    :try_start_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 4624
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "saveGAID gaid:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 4625
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v0, "ga_id"

    invoke-static {p0, v0, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 4628
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/foundation/controller/a;)Ljava/lang/String;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/a;->g:Ljava/lang/String;

    return-object p0
.end method

.method public static e()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Lcom/mbridge/msdk/foundation/entity/i;",
            ">;"
        }
    .end annotation

    .line 163
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    return-object v0
.end method

.method public static f()Lcom/mbridge/msdk/foundation/controller/a;
    .locals 2

    .line 174
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->d:Lcom/mbridge/msdk/foundation/controller/a;

    if-nez v0, :cond_1

    .line 175
    const-class v0, Lcom/mbridge/msdk/foundation/controller/a;

    monitor-enter v0

    .line 176
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->d:Lcom/mbridge/msdk/foundation/controller/a;

    if-nez v1, :cond_0

    .line 177
    new-instance v1, Lcom/mbridge/msdk/foundation/controller/a;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/controller/a;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/controller/a;->d:Lcom/mbridge/msdk/foundation/controller/a;

    .line 179
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 181
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->d:Lcom/mbridge/msdk/foundation/controller/a;

    return-object v0
.end method

.method public static declared-synchronized g()V
    .locals 5

    const-class v0, Lcom/mbridge/msdk/foundation/controller/a;

    monitor-enter v0

    .line 285
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 286
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 288
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->ak()Ljava/lang/String;

    move-result-object v1

    .line 290
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 291
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 292
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 293
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2, v1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 294
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-lez v1, :cond_1

    .line 296
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    .line 297
    :goto_0
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_0

    .line 298
    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v4

    .line 299
    invoke-interface {v1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 301
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    .line 3148
    iput-object v1, v2, Lcom/mbridge/msdk/foundation/controller/a;->q:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 310
    :catch_0
    :cond_1
    :goto_1
    monitor-exit v0

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/ref/WeakReference;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation

    .line 91
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->l:Ljava/lang/ref/WeakReference;

    return-object v0
.end method

.method public final a(Z)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 579
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    .line 4144
    iget-object v0, v0, Lcom/mbridge/msdk/foundation/controller/a;->q:Ljava/util/List;

    if-eqz p1, :cond_0

    .line 594
    sget-object p1, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    return-object p1

    .line 596
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    if-eqz p1, :cond_1

    sget-object p1, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_1

    .line 597
    sget-object p1, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    return-object p1

    .line 611
    :cond_1
    sget-object p1, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    .line 615
    :catch_0
    sget-object p1, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    const-string v0, "get package info list error"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(I)V
    .locals 0

    .line 103
    iput p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->j:I

    return-void
.end method

.method public final a(Landroid/content/Context;)V
    .locals 1

    .line 111
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->k:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/controller/a$b;)V
    .locals 7

    monitor-enter p0

    .line 399
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/l;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/tools/l;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/tools/l;->a(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArraySet;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    if-eqz v0, :cond_6

    .line 401
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_2

    .line 408
    :cond_0
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>()V

    .line 409
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 411
    :cond_1
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_3

    .line 413
    :try_start_1
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/i;

    .line 414
    sget-object v3, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    if-eqz v3, :cond_1

    sget-object v3, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_1

    if-eqz v2, :cond_1

    const/4 v3, 0x0

    .line 415
    :goto_1
    sget-object v4, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 416
    sget-object v4, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 417
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/i;->b()Ljava/lang/String;

    move-result-object v5

    .line 418
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 419
    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 420
    invoke-virtual {v0, v2}, Ljava/util/concurrent/CopyOnWriteArraySet;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :catch_0
    move-exception v2

    .line 425
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 426
    sget-object v2, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    const-string v3, "remove list error"

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 431
    :cond_3
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    if-eqz v1, :cond_4

    .line 432
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->clear()V

    .line 434
    :cond_4
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->size()I

    move-result v1

    if-lez v1, :cond_5

    .line 435
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->addAll(Ljava/util/Collection;)Z

    .line 437
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/l;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/tools/l;

    move-result-object v0

    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/tools/l;->a(Ljava/util/Set;)V

    if-eqz p1, :cond_8

    .line 439
    invoke-interface {p1}, Lcom/mbridge/msdk/foundation/controller/a$b;->a()V

    goto :goto_3

    :cond_6
    :goto_2
    if-eqz p1, :cond_7

    .line 403
    invoke-interface {p1}, Lcom/mbridge/msdk/foundation/controller/a$b;->a()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 405
    :cond_7
    monitor-exit p0

    return-void

    .line 444
    :catchall_0
    :cond_8
    :goto_3
    monitor-exit p0

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/controller/a$b;Landroid/os/Handler;)V
    .locals 4

    .line 185
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->p:Z

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return-void

    .line 189
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->n:Lorg/json/JSONObject;

    const-string v1, "webgl"

    const/4 v2, 0x0

    .line 190
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 192
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    :try_start_1
    const-string v0, "-1"

    .line 1635
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v2, "ga_id"

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1636
    instance-of v2, v1, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 1637
    check-cast v1, Ljava/lang/String;

    .line 1638
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1639
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "sp init gaid:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1640
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1641
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v2, "authority_device_id"

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1642
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->h(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 1648
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 2213
    :cond_1
    :goto_1
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/foundation/controller/a$1;

    invoke-direct {v1, p0, p2, p1}, Lcom/mbridge/msdk/foundation/controller/a$1;-><init>(Lcom/mbridge/msdk/foundation/controller/a;Landroid/os/Handler;Lcom/mbridge/msdk/foundation/controller/a$b;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2278
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 153
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->s:Ljava/lang/String;

    .line 154
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 155
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v1, "applicationIds"

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 158
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/ref/WeakReference;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;)V"
        }
    .end annotation

    .line 95
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->l:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 0

    .line 789
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->n:Lorg/json/JSONObject;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 99
    iget v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->j:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 119
    iput p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->o:I

    return-void
.end method

.method public final b(Landroid/content/Context;)V
    .locals 0

    .line 491
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 499
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->f:Ljava/lang/String;

    return-void
.end method

.method public final c()Landroid/content/Context;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->k:Ljava/lang/ref/WeakReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    :goto_0
    return-object v0
.end method

.method public final c(I)V
    .locals 0

    .line 780
    iput p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->m:I

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 2

    .line 519
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->g:Ljava/lang/String;

    .line 520
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 521
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v1, "sp_appId"

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 524
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 134
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 135
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 138
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 2

    .line 540
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->h:Ljava/lang/String;

    .line 541
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 542
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v1, "sp_appKey"

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 545
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 2

    .line 561
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 562
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a;->i:Ljava/lang/String;

    .line 563
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 564
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v1, "sp_wx_appKey"

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 568
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final h()V
    .locals 2

    .line 448
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 449
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/l;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/tools/l;

    move-result-object v0

    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/tools/l;->a(Ljava/util/Set;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final i()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .line 459
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    if-eqz v0, :cond_2

    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 460
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->r:Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 461
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 462
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 463
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/i;

    .line 464
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/i;->a()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v3, :cond_0

    .line 466
    :try_start_1
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/i;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 468
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/NumberFormatException;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :cond_1
    return-object v1

    :catchall_0
    :cond_2
    const/4 v0, 0x0

    return-object v0
.end method

.method public final j()Landroid/content/Context;
    .locals 1

    .line 487
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    return-object v0
.end method

.method public final k()Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 504
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/a;->g:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 505
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->g:Ljava/lang/String;

    return-object v0

    .line 507
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v1, :cond_1

    .line 508
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    const-string v2, "sp_appId"

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v1

    .line 511
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method public final l()Ljava/lang/String;
    .locals 3

    .line 529
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 530
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->h:Ljava/lang/String;

    return-object v0

    .line 532
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_1

    const-string v1, "sp_appKey"

    const-string v2, ""

    .line 533
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public final m()Ljava/lang/String;
    .locals 3

    .line 550
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 551
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->i:Ljava/lang/String;

    return-object v0

    .line 553
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->e:Landroid/content/Context;

    if-eqz v0, :cond_1

    const-string v1, "sp_wx_appKey"

    const-string v2, ""

    .line 554
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public final n()I
    .locals 1

    .line 776
    iget v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->m:I

    return v0
.end method

.method public final o()Lorg/json/JSONObject;
    .locals 1

    .line 785
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a;->n:Lorg/json/JSONObject;

    return-object v0
.end method
