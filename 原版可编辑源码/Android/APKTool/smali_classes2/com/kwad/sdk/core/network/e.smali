.class public Lcom/kwad/sdk/core/network/e;
.super Ljava/lang/Object;


# static fields
.field private static volatile aoN:Lcom/kwad/sdk/core/network/e;


# instance fields
.field private aoO:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/network/e;->Bg()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/e;->aoO:Ljava/lang/String;

    return-void
.end method

.method public static Be()Lcom/kwad/sdk/core/network/e;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/network/e;->aoN:Lcom/kwad/sdk/core/network/e;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/core/network/e;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/network/e;->aoN:Lcom/kwad/sdk/core/network/e;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/network/e;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/e;-><init>()V

    sput-object v1, Lcom/kwad/sdk/core/network/e;->aoN:Lcom/kwad/sdk/core/network/e;

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
    sget-object v0, Lcom/kwad/sdk/core/network/e;->aoN:Lcom/kwad/sdk/core/network/e;

    return-object v0
.end method

.method private static Bg()Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Ljava/io/File;

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/av;->cO(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-string v1, "UTF-8"

    invoke-static {v1}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/q;->a(Ljava/io/File;Ljava/nio/charset/Charset;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    return-object v0
.end method

.method private static cY(Ljava/lang/String;)V
    .locals 3

    :try_start_0
    new-instance v0, Ljava/io/File;

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/av;->cO(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-string v1, "UTF-8"

    invoke-static {v1}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v0, p0, v1, v2}, Lcom/kwad/sdk/utils/q;->a(Ljava/io/File;Ljava/lang/String;Ljava/nio/charset/Charset;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method


# virtual methods
.method public final Bf()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/e;->aoO:Ljava/lang/String;

    return-object v0
.end method

.method public final cX(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/e;->aoO:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/kwad/sdk/utils/bc;->isEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    iput-object p1, p0, Lcom/kwad/sdk/core/network/e;->aoO:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/network/e;->cY(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
