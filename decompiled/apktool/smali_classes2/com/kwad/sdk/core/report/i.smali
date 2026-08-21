.class public Lcom/kwad/sdk/core/report/i;
.super Lcom/kwad/sdk/core/report/c;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/report/c<",
        "Lcom/kwad/sdk/core/report/r;",
        "Lcom/kwad/sdk/core/report/h;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile PE:Z

.field private static volatile aqU:Lcom/kwad/sdk/core/report/i;

.field private static aqV:Lcom/kwad/sdk/core/report/v;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/core/report/v<",
            "Lcom/kwad/sdk/core/report/r;",
            "Lcom/kwad/sdk/core/report/h;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/c;-><init>()V

    return-void
.end method

.method private static BY()Lcom/kwad/sdk/core/report/i;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/core/report/i;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/report/i;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/i;-><init>()V

    sput-object v1, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

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
    sget-object v0, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/i;->checkInit()V

    sget-object v0, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

    return-object v0
.end method

.method private static Q(J)Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/core/report/w;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/report/w;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0, p1}, Lcom/kwad/sdk/core/report/w;->Q(J)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static a(Lcom/kwad/sdk/core/report/r;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;Z)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/report/r;Z)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/report/i;->BY()Lcom/kwad/sdk/core/report/i;

    move-result-object v0

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/report/i;->b(Lcom/kwad/sdk/core/report/r;Z)V

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/report/r;)Lcom/kwad/sdk/core/report/h;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/report/i;->aqV:Lcom/kwad/sdk/core/report/v;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/v;->Ci()Lcom/kwad/sdk/core/network/g;

    move-result-object p1

    :goto_0
    check-cast p1, Lcom/kwad/sdk/core/report/h;

    return-object p1

    :cond_0
    invoke-super {p0, p1}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/g;)Lcom/kwad/sdk/core/network/g;

    move-result-object p1

    goto :goto_0
.end method

.method private b(Lcom/kwad/sdk/core/report/r;Z)V
    .locals 2

    if-eqz p1, :cond_3

    sget-boolean v0, Lcom/kwad/sdk/core/report/i;->PE:Z

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    if-nez p2, :cond_2

    iget-wide v0, p1, Lcom/kwad/sdk/core/report/r;->arp:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/i;->Q(J)Z

    move-result p2

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    sget-object p2, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

    new-instance v0, Lcom/kwad/sdk/core/report/i$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/report/i$2;-><init>(Lcom/kwad/sdk/core/report/i;Lcom/kwad/sdk/core/report/r;)V

    invoke-virtual {p2, v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/n;)V

    return-void

    :cond_2
    :goto_0
    sget-object p2, Lcom/kwad/sdk/core/report/i;->aqU:Lcom/kwad/sdk/core/report/i;

    new-instance v0, Lcom/kwad/sdk/core/report/i$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/report/i$1;-><init>(Lcom/kwad/sdk/core/report/i;Lcom/kwad/sdk/core/report/r;)V

    invoke-virtual {p2, v0}, Lcom/kwad/sdk/core/report/i;->b(Lcom/kwad/sdk/core/report/n;)V

    :cond_3
    :goto_1
    return-void
.end method

.method private declared-synchronized checkInit()V
    .locals 5

    monitor-enter p0

    :try_start_0
    sget-boolean v0, Lcom/kwad/sdk/core/report/i;->PE:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_1

    monitor-exit p0

    return-void

    :cond_1
    :try_start_2
    const-class v1, Lcom/kwad/sdk/service/a/f;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/f;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez v1, :cond_2

    monitor-exit p0

    return-void

    :cond_2
    :try_start_3
    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-nez v0, :cond_3

    monitor-exit p0

    return-void

    :cond_3
    :try_start_4
    invoke-interface {v1, v0}, Lcom/kwad/sdk/service/a/f;->av(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/report/i;->i(Landroid/content/Context;I)V

    invoke-static {v0}, Lcom/kwad/sdk/core/report/x;->init(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/sdk/core/report/x;->Ck()Ljava/lang/String;

    const-string v2, "BatchReporter"

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "cache type = "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x2

    if-ne v1, v2, :cond_4

    invoke-static {v0}, Lcom/kwad/sdk/core/report/u;->bd(Landroid/content/Context;)Lcom/kwad/sdk/core/report/u;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/o;)V

    :cond_4
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/core/report/i;->PE:Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private u(Ljava/util/List;)Lcom/kwad/sdk/core/report/h;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/report/r;",
            ">;)",
            "Lcom/kwad/sdk/core/report/h;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/report/i;->aqV:Lcom/kwad/sdk/core/report/v;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/v;->Cj()Lcom/kwad/sdk/core/network/g;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/report/h;

    return-object p1

    :cond_0
    invoke-static {p1}, Lcom/kwad/sdk/core/report/i;->v(Ljava/util/List;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    new-instance p1, Lcom/kwad/sdk/core/report/h;

    invoke-direct {p1, v0}, Lcom/kwad/sdk/core/report/h;-><init>(Ljava/lang/String;)V

    return-object p1

    :cond_1
    new-instance v0, Lcom/kwad/sdk/core/report/h;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/core/report/h;-><init>(Ljava/util/List;)V

    return-object v0
.end method

.method private static v(Ljava/util/List;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/report/r;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/report/r;

    iget-object v0, v0, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, ",\"actionList\":["

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/report/r;

    iget-object v1, v1, Lcom/kwad/sdk/core/report/r;->asx:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x2c

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    add-int/lit8 v1, p0, -0x1

    const-string v2, "]"

    invoke-virtual {v0, v1, p0, v2}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string p0, ""

    return-object p0
.end method


# virtual methods
.method protected final synthetic a(Lcom/kwad/sdk/core/report/g;)Lcom/kwad/sdk/core/network/g;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/r;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/report/i;->b(Lcom/kwad/sdk/core/report/r;)Lcom/kwad/sdk/core/report/h;

    move-result-object p1

    return-object p1
.end method

.method protected final a(Landroid/content/Context;Lcom/kwad/sdk/core/report/o;Ljava/util/concurrent/atomic/AtomicInteger;)Ljava/lang/Runnable;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/kwad/sdk/core/report/o<",
            "Lcom/kwad/sdk/core/report/r;",
            ">;",
            "Ljava/util/concurrent/atomic/AtomicInteger;",
            ")",
            "Ljava/lang/Runnable;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/report/i;->aqV:Lcom/kwad/sdk/core/report/v;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/v;->Ch()Lcom/kwad/sdk/core/report/aa;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/report/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/report/o;Ljava/util/concurrent/atomic/AtomicInteger;)Ljava/lang/Runnable;

    move-result-object p1

    return-object p1
.end method

.method protected final synthetic s(Ljava/util/List;)Lcom/kwad/sdk/core/network/g;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/report/i;->u(Ljava/util/List;)Lcom/kwad/sdk/core/report/h;

    move-result-object p1

    return-object p1
.end method
