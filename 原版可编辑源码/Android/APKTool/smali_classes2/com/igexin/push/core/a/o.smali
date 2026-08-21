.class public Lcom/igexin/push/core/a/o;
.super Lcom/igexin/push/core/a/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;Lorg/json/JSONObject;)Z
    .locals 6

    const-string v0, "action"

    const/4 v1, 0x0

    const/4 v2, 0x1

    :try_start_0
    check-cast p1, Lcom/igexin/push/d/c/m;

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "pushmessage"

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 v0, 0x0

    iget-object v3, p1, Lcom/igexin/push/d/c/m;->f:Ljava/lang/Object;

    instance-of v3, v3, [B

    if-eqz v3, :cond_0

    iget-object p1, p1, Lcom/igexin/push/d/c/m;->f:Ljava/lang/Object;

    check-cast p1, [B

    move-object v0, p1

    check-cast v0, [B

    :cond_0
    const-string p1, "taskid"

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v3, "getui receive message : %s"

    new-array v4, v2, [Ljava/lang/Object;

    aput-object p2, v4, v1

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v0, :cond_2

    sget-object v3, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v3}, Lcom/igexin/assist/sdk/a;->i(Landroid/content/Context;)Z

    move-result v3

    if-eqz v3, :cond_2

    new-instance v3, Lcom/igexin/push/core/b/d;

    sget-object v4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v3, v4}, Lcom/igexin/push/core/b/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v3, p1}, Lcom/igexin/push/core/b/d;->a(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    const-string v3, "10"

    :goto_0
    invoke-virtual {p1, p2, v3}, Lcom/igexin/push/core/a/e;->a(Lorg/json/JSONObject;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/igexin/assist/action/MessageManger;->getInstance()Lcom/igexin/assist/action/MessageManger;

    move-result-object v4

    sget-object v5, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v4, v5}, Lcom/igexin/assist/action/MessageManger;->getBrandCode(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_2
    :goto_1
    invoke-static {}, Lcom/igexin/push/core/w;->a()Lcom/igexin/push/core/w;

    move-result-object p1

    invoke-virtual {p1, p2, v0, v2}, Lcom/igexin/push/core/w;->a(Lorg/json/JSONObject;[BZ)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PushmessageAction|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    :goto_2
    return v2
.end method
