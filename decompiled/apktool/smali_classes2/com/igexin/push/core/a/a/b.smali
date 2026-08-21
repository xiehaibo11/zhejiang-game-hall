.class public Lcom/igexin/push/core/a/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/a/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_0

    const/4 v0, 0x1

    :catch_0
    :cond_0
    return v0
.end method


# virtual methods
.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 0

    sget-object p1, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    return-object p1
.end method

.method public a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 6

    const-string v0, "android"

    const-string v1, "appstartupid"

    const-string v2, "actionid"

    const-string v3, "do_installed"

    :try_start_0
    const-string v4, "type"

    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    new-instance v4, Lcom/igexin/push/core/bean/b;

    invoke-direct {v4}, Lcom/igexin/push/core/bean/b;-><init>()V

    const-string v5, "checkapp"

    invoke-virtual {v4, v5}, Lcom/igexin/push/core/bean/b;->setType(Ljava/lang/String;)V

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Lcom/igexin/push/core/bean/b;->setActionId(Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Lcom/igexin/push/core/bean/b;->a(Ljava/lang/String;)V

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "do_uninstalled"

    if-nez v0, :cond_0

    :try_start_1
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_0
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Lcom/igexin/push/core/bean/b;->b(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, p1}, Lcom/igexin/push/core/bean/b;->c(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_2
    return-object v4

    :catch_0
    :cond_3
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 3

    check-cast p2, Lcom/igexin/push/core/bean/b;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->a()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/igexin/push/core/a/a/b;->a(Ljava/lang/String;)Z

    move-result v1

    const-string v2, ""

    if-eqz v1, :cond_0

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->b()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v1

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->b()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->c()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v1

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/b;->c()Ljava/lang/String;

    move-result-object p2

    :goto_0
    invoke-virtual {v1, v0, p1, p2}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    :cond_1
    const/4 p1, 0x1

    return p1
.end method
