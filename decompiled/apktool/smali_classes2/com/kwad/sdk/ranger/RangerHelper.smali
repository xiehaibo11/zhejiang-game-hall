.class public Lcom/kwad/sdk/ranger/RangerHelper;
.super Ljava/lang/Object;


# static fields
.field private static volatile aGN:Z

.field private static aGO:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static aGP:Lcom/kwad/sdk/ranger/d;

.field private static aGQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lokhttp3/OkHttpClient;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/ranger/RangerHelper;->aGQ:Ljava/util/List;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static Ht()Z
    .locals 6

    const-string v0, ""

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Lokhttp3/internal/Version;->userAgent()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v4, "Ranger_Helper"

    if-eqz v3, :cond_0

    :try_start_1
    const-string v0, "TextUtils.isEmpty(userAgent)"

    invoke-static {v4, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "userAgent:"

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "okhttp/"

    invoke-virtual {v2, v3, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "3."

    invoke-virtual {v2, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    return v1

    :cond_1
    const-string v3, "\\."

    invoke-virtual {v2, v3, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/16 v2, 0x186

    if-lt v0, v2, :cond_3

    const/16 v2, 0xc3b

    if-le v0, v2, :cond_2

    goto :goto_0

    :cond_2
    const/4 v0, 0x1

    return v0

    :catchall_0
    :cond_3
    :goto_0
    return v1
.end method

.method private static a(Lokhttp3/internal/connection/StreamAllocation;)V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/ranger/RangerHelper$2;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/ranger/RangerHelper$2;-><init>(Lokhttp3/internal/connection/StreamAllocation;)V

    sget-object p0, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v1, 0x0

    invoke-static {v0, v1, v2, p0}, Lcom/kwad/sdk/utils/g;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V

    return-void
.end method

.method static synthetic b(Lokhttp3/internal/connection/StreamAllocation;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerHelper;->a(Lokhttp3/internal/connection/StreamAllocation;)V

    return-void
.end method

.method static c(Lcom/kwad/sdk/ranger/d;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/ranger/RangerHelper;->aGP:Lcom/kwad/sdk/ranger/d;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/d;->aGG:Ljava/util/List;

    sput-object p0, Lcom/kwad/sdk/ranger/RangerHelper;->aGO:Ljava/util/List;

    return-void
.end method

.method private static m(Ljava/lang/Object;)V
    .locals 4

    const-string v0, "Ranger_Helper"

    if-nez p0, :cond_0

    const-string p0, "real call null"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    :try_start_0
    const-string v1, "client"

    invoke-static {p0, v1}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lokhttp3/OkHttpClient;

    sget-object v2, Lcom/kwad/sdk/ranger/RangerHelper;->aGQ:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string p0, "already invoke"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    sget-object v2, Lcom/kwad/sdk/ranger/RangerHelper;->aGQ:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v2, "eventListener"

    invoke-static {p0, v2}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_2

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "eventListener.getClass().getName():"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Lcom/kwad/sdk/ranger/c;

    new-instance v3, Lcom/kwad/sdk/ranger/RangerHelper$3;

    invoke-direct {v3}, Lcom/kwad/sdk/ranger/RangerHelper$3;-><init>()V

    invoke-direct {v2, p0, v3}, Lcom/kwad/sdk/ranger/c;-><init>(Ljava/lang/Object;Lcom/kwad/sdk/ranger/c$a;)V

    const-string p0, "eventListenerFactory"

    invoke-static {v1, p0, v2}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic n(Ljava/lang/Object;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/ranger/RangerHelper;->m(Ljava/lang/Object;)V

    return-void
.end method

.method public static replaceInternal()V
    .locals 5

    sget-boolean v0, Lcom/kwad/sdk/ranger/RangerHelper;->aGN:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/ranger/RangerHelper;->Ht()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    sput-boolean v1, Lcom/kwad/sdk/ranger/RangerHelper;->aGN:Z

    return-void

    :cond_1
    const-class v0, Lokhttp3/internal/Internal;

    const-string v2, "instance"

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/s;->c(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lokhttp3/internal/Internal;

    if-nez v0, :cond_2

    sput-boolean v1, Lcom/kwad/sdk/ranger/RangerHelper;->aGN:Z

    return-void

    :cond_2
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "internal:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Ranger_Helper"

    invoke-static {v4, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :try_start_0
    new-instance v3, Lcom/kwad/sdk/ranger/RangerHelper$1;

    invoke-direct {v3, v0}, Lcom/kwad/sdk/ranger/RangerHelper$1;-><init>(Lokhttp3/internal/Internal;)V

    invoke-static {v0, v2, v3}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    sput-boolean v1, Lcom/kwad/sdk/ranger/RangerHelper;->aGN:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    sput-boolean v1, Lcom/kwad/sdk/ranger/RangerHelper;->aGN:Z

    invoke-static {v0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
