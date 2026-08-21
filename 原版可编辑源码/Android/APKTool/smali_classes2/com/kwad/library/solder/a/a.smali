.class public final Lcom/kwad/library/solder/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/library/solder/a/a$a;,
        Lcom/kwad/library/solder/a/a$c;,
        Lcom/kwad/library/solder/a/a$b;
    }
.end annotation


# static fields
.field private static afq:Lcom/kwad/library/solder/a/a$a;

.field private static final handler:Landroid/os/Handler;

.field private static volatile hasInit:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/kwad/library/solder/a/a;->handler:Landroid/os/Handler;

    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/b;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<P:",
            "Lcom/kwad/library/solder/lib/a/a;",
            "R:",
            "Lcom/kwad/library/solder/lib/a/f<",
            "TP;>;>(",
            "Landroid/content/Context;",
            "TR;",
            "Lcom/kwad/library/solder/lib/ext/b<",
            "TP;TR;>;)V"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/library/solder/a/a;->init(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/i;->wd()Lcom/kwad/library/solder/lib/ext/c;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/ext/c;->getRetryCount()I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/kwad/library/solder/lib/a/f;->bJ(I)V

    new-instance p0, Lcom/kwad/library/solder/a/a$b;

    new-instance v0, Lcom/kwad/library/solder/a/a$1;

    invoke-direct {v0}, Lcom/kwad/library/solder/a/a$1;-><init>()V

    invoke-direct {p0, p2, v0}, Lcom/kwad/library/solder/a/a$b;-><init>(Lcom/kwad/library/solder/lib/ext/b;Lcom/kwad/library/solder/a/a$c;)V

    invoke-virtual {p1, p0}, Lcom/kwad/library/solder/lib/a/f;->a(Lcom/kwad/library/solder/lib/ext/b;)V

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object p0

    const/16 p2, 0x10

    invoke-virtual {p0, p1, p2}, Lcom/kwad/library/solder/lib/i;->a(Lcom/kwad/library/solder/lib/a/f;I)Lcom/kwad/library/solder/lib/i$a;

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/library/solder/lib/c/b;Lcom/kwad/library/solder/lib/ext/b$a;)V
    .locals 1

    new-instance v0, Lcom/kwad/library/solder/lib/b/a;

    invoke-direct {v0, p1}, Lcom/kwad/library/solder/lib/b/a;-><init>(Lcom/kwad/library/solder/lib/c/b;)V

    invoke-static {p0, v0, p2}, Lcom/kwad/library/solder/a/a;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/b;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/library/solder/lib/c/b;Lcom/kwad/library/solder/lib/ext/b$c;)V
    .locals 1

    new-instance v0, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {v0, p1}, Lcom/kwad/library/solder/lib/b/c;-><init>(Lcom/kwad/library/solder/lib/c/b;)V

    invoke-static {p0, v0, p2}, Lcom/kwad/library/solder/a/a;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/b;)V

    return-void
.end method

.method public static a(Lcom/kwad/library/solder/a/a$a;)V
    .locals 0

    sput-object p0, Lcom/kwad/library/solder/a/a;->afq:Lcom/kwad/library/solder/a/a$a;

    return-void
.end method

.method public static h(Landroid/content/Context;Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/kwad/library/solder/lib/a/a;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/library/solder/a/a;->init(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/i;->we()Lcom/kwad/library/solder/lib/a/d;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/kwad/library/solder/lib/a/d;->bB(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object p0

    return-object p0
.end method

.method private static declared-synchronized init(Landroid/content/Context;)V
    .locals 7

    const-class v0, Lcom/kwad/library/solder/a/a;

    monitor-enter v0

    :try_start_0
    sget-boolean v1, Lcom/kwad/library/solder/a/a;->hasInit:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    sget-object v1, Lcom/kwad/library/solder/a/a;->afq:Lcom/kwad/library/solder/a/a$a;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    sget-object v1, Lcom/kwad/library/solder/a/a;->afq:Lcom/kwad/library/solder/a/a$a;

    invoke-interface {v1}, Lcom/kwad/library/solder/a/a$a;->getMaxRetryCount()I

    move-result v1

    sget-object v4, Lcom/kwad/library/solder/a/a;->afq:Lcom/kwad/library/solder/a/a$a;

    invoke-interface {v4}, Lcom/kwad/library/solder/a/a$a;->vY()Z

    move-result v4

    goto :goto_0

    :cond_1
    move v4, v2

    move v1, v3

    :goto_0
    new-instance v5, Lcom/kwad/library/solder/lib/ext/c$a;

    invoke-direct {v5}, Lcom/kwad/library/solder/lib/ext/c$a;-><init>()V

    const-string v6, "sodler"

    invoke-virtual {v5, v6}, Lcom/kwad/library/solder/lib/ext/c$a;->bM(Ljava/lang/String;)Lcom/kwad/library/solder/lib/ext/c$a;

    move-result-object v5

    invoke-virtual {v5, v1}, Lcom/kwad/library/solder/lib/ext/c$a;->bK(I)Lcom/kwad/library/solder/lib/ext/c$a;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/kwad/library/solder/lib/ext/c$a;->ba(Z)Lcom/kwad/library/solder/lib/ext/c$a;

    move-result-object v1

    invoke-virtual {v1, v4}, Lcom/kwad/library/solder/lib/ext/c$a;->bb(Z)Lcom/kwad/library/solder/lib/ext/c$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/library/solder/lib/ext/c$a;->wN()Lcom/kwad/library/solder/lib/ext/c;

    move-result-object v1

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object v2

    invoke-virtual {v2, p0, v1}, Lcom/kwad/library/solder/lib/i;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/ext/c;)V

    sget-object p0, Lcom/kwad/library/solder/a/a;->afq:Lcom/kwad/library/solder/a/a$a;

    if-eqz p0, :cond_2

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/i;->wf()Lcom/kwad/library/solder/lib/a/g;

    move-result-object p0

    new-instance v1, Lcom/kwad/library/solder/a/a$2;

    invoke-direct {v1}, Lcom/kwad/library/solder/a/a$2;-><init>()V

    invoke-interface {p0, v1}, Lcom/kwad/library/solder/lib/a/g;->a(Lcom/kwad/library/solder/lib/a/g$a;)Lcom/kwad/library/solder/lib/a/g;

    :cond_2
    sput-boolean v3, Lcom/kwad/library/solder/a/a;->hasInit:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic vW()Landroid/os/Handler;
    .locals 1

    sget-object v0, Lcom/kwad/library/solder/a/a;->handler:Landroid/os/Handler;

    return-object v0
.end method

.method static synthetic vX()Lcom/kwad/library/solder/a/a$a;
    .locals 1

    sget-object v0, Lcom/kwad/library/solder/a/a;->afq:Lcom/kwad/library/solder/a/a$a;

    return-object v0
.end method
