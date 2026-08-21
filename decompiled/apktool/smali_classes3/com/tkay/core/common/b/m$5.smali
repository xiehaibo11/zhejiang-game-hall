.class final Lcom/tkay/core/common/b/m$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYInitConfig;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Lcom/tkay/core/api/TYInitConfig;Landroid/content/Context;)V
    .locals 0

    .line 2059
    iput-object p1, p0, Lcom/tkay/core/common/b/m$5;->c:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$5;->a:Lcom/tkay/core/api/TYInitConfig;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$5;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 2063
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m$5;->a:Lcom/tkay/core/api/TYInitConfig;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYInitConfig;->getInitMediation()Lcom/tkay/core/api/TYInitMediation;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 2065
    invoke-virtual {v0}, Lcom/tkay/core/api/TYInitMediation;->getNetworkName()Ljava/lang/String;

    move-result-object v1

    .line 2069
    iget-object v2, p0, Lcom/tkay/core/common/b/m$5;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v2}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_network_init_data"

    const-string v4, ""

    invoke-static {v2, v3, v1, v4}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2070
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 2071
    invoke-static {v2}, Lcom/tkay/core/common/l/h;->c(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    goto :goto_0

    .line 2073
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/b/m$5;->a:Lcom/tkay/core/api/TYInitConfig;

    invoke-virtual {v2}, Lcom/tkay/core/api/TYInitConfig;->getRequestParamMap()Ljava/util/Map;

    move-result-object v2

    const-string v3, "tkay_local"

    .line 2075
    sget-object v4, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :goto_0
    const/4 v3, 0x0

    .line 2082
    :try_start_1
    iget-object v4, p0, Lcom/tkay/core/common/b/m$5;->b:Landroid/content/Context;

    invoke-static {v4}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/p;->c()Z

    move-result v4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 2083
    :try_start_2
    iget-object v5, p0, Lcom/tkay/core/common/b/m$5;->b:Landroid/content/Context;

    invoke-static {v5}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/p;->d()Z

    move-result v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 2084
    :try_start_3
    iget-object v6, p0, Lcom/tkay/core/common/b/m$5;->b:Landroid/content/Context;

    invoke-virtual {v0, v6, v4, v5}, Lcom/tkay/core/api/TYInitMediation;->setUserDataConsent(Landroid/content/Context;ZZ)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v6

    goto :goto_1

    :catchall_1
    move-exception v6

    move v5, v3

    goto :goto_1

    :catchall_2
    move-exception v6

    move v4, v3

    move v5, v4

    .line 2086
    :goto_1
    :try_start_4
    invoke-virtual {v6}, Ljava/lang/Throwable;->printStackTrace()V

    .line 2089
    :goto_2
    iget-object v6, p0, Lcom/tkay/core/common/b/m$5;->b:Landroid/content/Context;

    invoke-static {v6}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/core/common/b/m$5;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v7}, Lcom/tkay/core/common/b/m;->e(Lcom/tkay/core/common/b/m;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v6

    const-string v7, "app_ccpa_switch"

    .line 2091
    invoke-virtual {v6}, Lcom/tkay/core/c/a;->p()I

    move-result v8

    const/4 v9, 0x3

    const/4 v10, 0x1

    if-ne v8, v9, :cond_1

    move v8, v10

    goto :goto_3

    :cond_1
    move v8, v3

    :goto_3
    invoke-static {v8}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v8

    invoke-interface {v2, v7, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2093
    invoke-static {}, Lcom/tkay/core/common/l/g;->b()Z

    move-result v7

    const-string v8, "app_coppa_switch"

    .line 2094
    invoke-virtual {v6}, Lcom/tkay/core/c/a;->q()I

    move-result v6

    const/4 v9, 0x2

    if-ne v6, v9, :cond_2

    if-eqz v7, :cond_2

    move v3, v10

    :cond_2
    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-interface {v2, v8, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2097
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, "tkay"

    .line 2098
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "pre init network: ["

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "], params: "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", gdpr: "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ", in eu: "

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 2102
    :cond_3
    iget-object v1, p0, Lcom/tkay/core/common/b/m$5;->c:Lcom/tkay/core/common/b/m;

    invoke-static {v1}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/api/TYInitMediation;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :cond_4
    return-void

    :catchall_3
    move-exception v0

    .line 2105
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
