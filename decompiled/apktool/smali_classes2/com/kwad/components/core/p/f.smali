.class public final Lcom/kwad/components/core/p/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/p/f$a;
    }
.end annotation


# static fields
.field private static volatile PE:Z

.field private static volatile PF:Z

.field private static PG:Landroid/content/Context;

.field private static final PH:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/p/f$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/components/core/p/f;->PH:Ljava/util/List;

    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;Lcom/kwad/components/core/p/f$a;)V
    .locals 2

    const-class v0, Lcom/kwad/components/core/p/f;

    monitor-enter v0

    :try_start_0
    sget-boolean v1, Lcom/kwad/components/core/p/f;->PE:Z

    if-eqz v1, :cond_0

    const-string p0, "ConfigRequestManager"

    const-string p1, "config request manager has init-ed"

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :cond_0
    const/4 v1, 0x1

    :try_start_1
    sput-boolean v1, Lcom/kwad/components/core/p/f;->PE:Z

    sput-object p0, Lcom/kwad/components/core/p/f;->PG:Landroid/content/Context;

    sget-object p0, Lcom/kwad/components/core/p/f;->PH:Ljava/util/List;

    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object p0, Lcom/kwad/components/core/p/f;->PH:Ljava/util/List;

    new-instance p1, Lcom/kwad/components/core/p/f$1;

    invoke-direct {p1}, Lcom/kwad/components/core/p/f$1;-><init>()V

    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance p0, Lcom/kwad/components/core/p/f$2;

    invoke-direct {p0}, Lcom/kwad/components/core/p/f$2;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Lcom/kwad/components/core/p/f$a;)V
    .locals 1

    sget-object v0, Lcom/kwad/components/core/p/f;->PH:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/kwad/components/core/p/f;->isLoaded()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Lcom/kwad/components/core/p/f$a;->on()V

    :cond_0
    sget-boolean v0, Lcom/kwad/components/core/p/f;->PF:Z

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zw()Lcom/kwad/sdk/core/response/model/SdkConfigData;

    move-result-object v0

    invoke-interface {p0, v0}, Lcom/kwad/components/core/p/f$a;->a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V

    :cond_1
    return-void
.end method

.method static synthetic aD(Z)Z
    .locals 0

    const/4 p0, 0x1

    sput-boolean p0, Lcom/kwad/components/core/p/f;->PF:Z

    return p0
.end method

.method static synthetic aR()Ljava/util/List;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/p/f;->PH:Ljava/util/List;

    return-object v0
.end method

.method private static isLoaded()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isLoaded()Z

    move-result v0

    return v0
.end method

.method public static pF()V
    .locals 2

    const-string v0, "ConfigRequestManager"

    const-string v1, "load()"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/components/core/p/f$3;

    invoke-direct {v0}, Lcom/kwad/components/core/p/f$3;-><init>()V

    new-instance v1, Lcom/kwad/components/core/p/f$4;

    invoke-direct {v1}, Lcom/kwad/components/core/p/f$4;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method

.method static synthetic pG()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/p/f;->PG:Landroid/content/Context;

    return-object v0
.end method
