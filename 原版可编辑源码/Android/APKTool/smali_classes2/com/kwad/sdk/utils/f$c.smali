.class final Lcom/kwad/sdk/utils/f$c;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "c"
.end annotation


# direct methods
.method public constructor <init>(Landroid/os/Looper;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method

.method private static H(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/f$a;",
            ">;)V"
        }
    .end annotation

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/t;->I(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p0

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HO()Lcom/kwad/sdk/collector/h;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/collector/h;->c(Lorg/json/JSONArray;)V

    return-void
.end method

.method private static b(Ljava/util/ArrayList;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/collector/model/b;",
            ">;)V"
        }
    .end annotation

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/f$a;->F(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HO()Lcom/kwad/sdk/collector/h;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/collector/h;->c(Lorg/json/JSONArray;)V

    :cond_1
    return-void
.end method

.method private c(Landroid/os/Message;)V
    .locals 6

    const-string v0, "resultJson"

    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    const-string v1, "AppStatusHelper"

    const/4 v2, 0x0

    if-eqz p1, :cond_2

    :try_start_0
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v3, Lcom/kwad/sdk/utils/f$c$1;

    invoke-direct {v3, p0}, Lcom/kwad/sdk/utils/f$c$1;-><init>(Lcom/kwad/sdk/utils/f$c;)V

    invoke-static {v0, v3}, Lcom/kwad/sdk/utils/t;->a(Ljava/lang/String;Lcom/kwad/sdk/core/c;)Ljava/util/List;

    move-result-object v0

    move-object v3, v0

    move-object v0, v2

    goto :goto_0

    :cond_0
    const-string v0, "data"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getSerializable(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v3, v2

    goto :goto_0

    :catchall_0
    move-object v0, v2

    move-object v3, v0

    :goto_0
    if-eqz v0, :cond_1

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "ClientHandler: handleMessage data size: "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/f$c;->b(Ljava/util/ArrayList;)V

    :cond_1
    if-eqz v3, :cond_2

    invoke-static {v3}, Lcom/kwad/sdk/utils/f$c;->H(Ljava/util/List;)V

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/f;->HP()Ljava/lang/ref/WeakReference;

    move-result-object v0

    if-eqz v0, :cond_6

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HP()Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_6

    if-eqz p1, :cond_6

    const-string v0, "allStrategyJson"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_4

    new-instance v0, Lcom/kwad/sdk/utils/f$c$2;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/f$c$2;-><init>(Lcom/kwad/sdk/utils/f$c;)V

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/t;->a(Ljava/lang/String;Lcom/kwad/sdk/core/c;)Ljava/util/List;

    move-result-object v2

    goto :goto_1

    :cond_3
    const-string v0, "allStrategy"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getSerializable(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p1

    move-object v2, p1

    check-cast v2, Ljava/util/ArrayList;

    :cond_4
    :goto_1
    if-eqz v2, :cond_6

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_5
    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;

    invoke-virtual {v0}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->getNeedSaveLaunchTime()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v4, v2, v4

    if-ltz v4, :cond_5

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HP()Ljava/lang/ref/WeakReference;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/content/Context;

    invoke-static {v4, v0, v2, v3}, Lcom/kwad/sdk/collector/i;->a(Landroid/content/Context;Lcom/kwad/sdk/collector/AppStatusRules$Strategy;J)V

    goto :goto_2

    :cond_6
    invoke-static {}, Lcom/kwad/sdk/utils/f;->HP()Ljava/lang/ref/WeakReference;

    move-result-object p1

    if-eqz p1, :cond_7

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HQ()Landroid/content/ServiceConnection;

    move-result-object p1

    if-eqz p1, :cond_7

    const-string p1, "unbindASService"

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HP()Ljava/lang/ref/WeakReference;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HQ()Landroid/content/ServiceConnection;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/collector/b/a;->b(Landroid/content/Context;Landroid/content/ServiceConnection;)V

    :cond_7
    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x65

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/f$c;->c(Landroid/os/Message;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    return-void

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method
