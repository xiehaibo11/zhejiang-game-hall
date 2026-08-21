.class public Lcom/kwad/components/core/t/k;
.super Ljava/lang/Object;


# static fields
.field private static final Rp:Ljava/lang/String;

.field private static volatile Rq:Lcom/kwad/components/core/t/k;

.field public static final TAG:Ljava/lang/String;


# instance fields
.field private Rr:Z

.field private Rs:Lcom/kwad/sdk/core/config/item/o$a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const-class v0, Lcom/kwad/components/core/t/k;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kwad/components/core/t/k;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/core/t/k;->Rp:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/t/k;->Rr:Z

    return-void
.end method

.method private static B(J)V
    .locals 4

    sget-object v0, Lcom/kwad/components/core/t/k;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "checkBySuper end:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sub-long/2addr v2, p0

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Ljava/util/List;Ljava/lang/Class;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/Class;",
            ")Z"
        }
    .end annotation

    const/4 v0, 0x0

    move v1, v0

    :cond_0
    if-eqz p1, :cond_3

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    const-string v3, "java.lang.Object"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    return v4

    :cond_2
    invoke-virtual {p1}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object p1

    add-int/2addr v1, v4

    const/4 v2, 0x4

    if-lt v1, v2, :cond_0

    :cond_3
    return v0
.end method

.method private a(Ljava/util/List;Ljava/util/List;)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p1, :cond_4

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-gtz v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v1

    array-length v2, v1

    :goto_0
    if-ge v0, v2, :cond_3

    aget-object v3, v1, v0

    invoke-virtual {v3}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_2

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_2

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_3
    invoke-direct {p0, p2, v1}, Lcom/kwad/components/core/t/k;->a(Ljava/util/List;[Ljava/lang/StackTraceElement;)Z

    move-result p1

    return p1

    :cond_4
    :goto_1
    return v0
.end method

.method private a(Ljava/util/List;[Ljava/lang/StackTraceElement;)Z
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;[",
            "Ljava/lang/StackTraceElement;",
            ")Z"
        }
    .end annotation

    const-string v0, "$"

    const/4 v1, 0x0

    if-eqz p1, :cond_4

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sget-object v4, Lcom/kwad/components/core/t/k;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "checkBySuper begin:"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    array-length v4, p2

    move v5, v1

    :goto_0
    if-ge v5, v4, :cond_3

    aget-object v6, p2, v5

    invoke-virtual {v6}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_2

    invoke-static {v6}, Lcom/kwad/components/core/t/k;->ax(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    invoke-static {v6}, Lcom/kwad/components/core/t/k;->ay(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    const/4 v7, 0x1

    :try_start_0
    invoke-static {v6}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v8

    invoke-static {p1, v8}, Lcom/kwad/components/core/t/k;->a(Ljava/util/List;Ljava/lang/Class;)Z

    move-result v8

    if-eqz v8, :cond_1

    invoke-static {v2, v3}, Lcom/kwad/components/core/t/k;->B(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v7

    :catchall_0
    :cond_1
    :try_start_1
    invoke-virtual {v6, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_2

    invoke-virtual {v6, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v6, v1, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v6

    invoke-static {p1, v6}, Lcom/kwad/components/core/t/k;->a(Ljava/util/List;Ljava/lang/Class;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-static {v2, v3}, Lcom/kwad/components/core/t/k;->B(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return v7

    :catchall_1
    :cond_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_3
    invoke-static {v2, v3}, Lcom/kwad/components/core/t/k;->B(J)V

    :cond_4
    :goto_1
    return v1
.end method

.method private static ax(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "android"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "java"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "dalvik"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "com.android"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/components/core/t/k;->Rp:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "androidx"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static ay(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "com.kwad"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static az(Ljava/lang/String;)Z
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :catchall_0
    :cond_1
    return v1
.end method

.method public static qo()Lcom/kwad/components/core/t/k;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/t/k;->Rq:Lcom/kwad/components/core/t/k;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/t/k;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/t/k;->Rq:Lcom/kwad/components/core/t/k;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/t/k;

    invoke-direct {v1}, Lcom/kwad/components/core/t/k;-><init>()V

    sput-object v1, Lcom/kwad/components/core/t/k;->Rq:Lcom/kwad/components/core/t/k;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/core/t/k;->Rq:Lcom/kwad/components/core/t/k;

    return-object v0
.end method

.method private qq()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-boolean v1, p0, Lcom/kwad/components/core/t/k;->Rr:Z

    if-nez v1, :cond_1

    iget-object v0, v0, Lcom/kwad/sdk/core/config/item/o$a;->amN:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v0, v0, Lcom/kwad/sdk/core/config/item/o$a;->amN:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/components/core/t/k;->az(Ljava/lang/String;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/kwad/components/core/t/k;->Rr:Z

    if-nez v1, :cond_1

    goto :goto_0

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/components/core/t/k;->Rr:Z

    if-nez v0, :cond_2

    return-void

    :cond_2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v1, v1, Lcom/kwad/sdk/core/config/item/o$a;->amK:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_4

    iget-object v1, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v1, v1, Lcom/kwad/sdk/core/config/item/o$a;->amK:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Lcom/kwad/components/core/t/k;->az(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_4
    iget-object v1, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v1, v1, Lcom/kwad/sdk/core/config/item/o$a;->amL:Ljava/util/List;

    iget-object v2, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v2, v2, Lcom/kwad/sdk/core/config/item/o$a;->amM:Ljava/util/List;

    invoke-direct {p0, v1, v2}, Lcom/kwad/components/core/t/k;->a(Ljava/util/List;Ljava/util/List;)Z

    move-result v1

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v2

    invoke-virtual {v2, v1, v0}, Lcom/kwad/components/core/o/a;->a(ZLjava/util/List;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/lang/String;)Z
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/t/k;->Rr:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v0, v0, Lcom/kwad/sdk/core/config/item/o$a;->amL:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    iget-object v1, v1, Lcom/kwad/sdk/core/config/item/o$a;->amM:Ljava/util/List;

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/core/t/k;->a(Ljava/util/List;Ljava/util/List;)Z

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v1

    invoke-virtual {v1, p1, v0, p2}, Lcom/kwad/components/core/o/a;->a(Lcom/kwad/sdk/internal/api/SceneImpl;ZLjava/lang/String;)V

    return v0
.end method

.method public final init()V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akS:Lcom/kwad/sdk/core/config/item/o;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/o$a;

    iput-object v0, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/core/t/k;->qq()V

    :cond_0
    return-void
.end method

.method public final qp()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/t/k;->Rs:Lcom/kwad/sdk/core/config/item/o$a;

    if-eqz v0, :cond_0

    iget v0, v0, Lcom/kwad/sdk/core/config/item/o$a;->amO:I

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
