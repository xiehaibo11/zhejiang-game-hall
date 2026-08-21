.class public Lcom/vivo/push/PushClient;
.super Ljava/lang/Object;


# static fields
.field public static final DEFAULT_REQUEST_ID:Ljava/lang/String; = "1"

.field private static volatile sPushClient:Lcom/vivo/push/PushClient;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/vivo/push/e;->a(Landroid/content/Context;)V

    return-void
.end method

.method private checkParam(Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "PushManager String param should not be "

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static declared-synchronized getInstance(Landroid/content/Context;)Lcom/vivo/push/PushClient;
    .locals 2

    const-class v0, Lcom/vivo/push/PushClient;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/vivo/push/PushClient;->sPushClient:Lcom/vivo/push/PushClient;

    if-nez v1, :cond_0

    new-instance v1, Lcom/vivo/push/PushClient;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/vivo/push/PushClient;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/vivo/push/PushClient;->sPushClient:Lcom/vivo/push/PushClient;

    :cond_0
    sget-object p0, Lcom/vivo/push/PushClient;->sPushClient:Lcom/vivo/push/PushClient;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method


# virtual methods
.method public bindAlias(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/vivo/push/PushClient;->checkParam(Ljava/lang/String;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/vivo/push/e;->a(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V

    return-void
.end method

.method public checkManifest()V
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/vivo/push/e;->b()V

    return-void
.end method

.method public delTopic(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object p1

    invoke-virtual {p1, v0, p2}, Lcom/vivo/push/e;->b(Ljava/util/ArrayList;Lcom/vivo/push/IPushActionListener;)V

    return-void
.end method

.method public getAlias()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/vivo/push/e;->j()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getRegId()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/vivo/push/e;->f()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTopics()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/vivo/push/e;->c()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "3.4.0.0"

    return-object v0
.end method

.method public initialize()V
    .locals 2

    invoke-virtual {p0}, Lcom/vivo/push/PushClient;->checkManifest()V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    new-instance v1, Lcom/vivo/push/b/f;

    invoke-direct {v1}, Lcom/vivo/push/b/f;-><init>()V

    invoke-virtual {v0, v1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    return-void
.end method

.method public isSupport()Z
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/vivo/push/e;->d()Z

    move-result v0

    return v0
.end method

.method public setSystemModel(Z)V
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/vivo/push/e;->a(Z)V

    return-void
.end method

.method public setTopic(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object p1

    invoke-virtual {p1, v0, p2}, Lcom/vivo/push/e;->a(Ljava/util/ArrayList;Lcom/vivo/push/IPushActionListener;)V

    return-void
.end method

.method public turnOffPush(Lcom/vivo/push/IPushActionListener;)V
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/vivo/push/e;->b(Lcom/vivo/push/IPushActionListener;)V

    return-void
.end method

.method public turnOnPush(Lcom/vivo/push/IPushActionListener;)V
    .locals 1

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/vivo/push/e;->a(Lcom/vivo/push/IPushActionListener;)V

    return-void
.end method

.method public unBindAlias(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/vivo/push/PushClient;->checkParam(Ljava/lang/String;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/vivo/push/e;->b(Ljava/lang/String;Lcom/vivo/push/IPushActionListener;)V

    return-void
.end method
