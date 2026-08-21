.class public Lcom/igexin/push/core/a/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/a/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 0

    sget-object p1, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    return-object p1
.end method

.method public a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 5

    const-string v0, "actionid"

    const-string v1, "do"

    const-string v2, "duration"

    :try_start_0
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    new-instance v3, Lcom/igexin/push/core/bean/d;

    invoke-direct {v3}, Lcom/igexin/push/core/bean/d;-><init>()V

    const-string v4, "type"

    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/igexin/push/core/bean/d;->setType(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Lcom/igexin/push/core/bean/d;->setActionId(Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Lcom/igexin/push/core/bean/d;->setDoActionId(Ljava/lang/String;)V

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    invoke-virtual {v3, v0, v1}, Lcom/igexin/push/core/bean/d;->a(J)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-object v3

    :catch_0
    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 4

    check-cast p2, Lcom/igexin/push/core/bean/d;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p2}, Lcom/igexin/push/core/bean/d;->a()J

    move-result-wide p1

    const-wide/16 v2, 0x3e8

    mul-long/2addr p1, v2

    add-long/2addr v0, p1

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Lcom/igexin/push/core/b/i;->a(Z)Z

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/igexin/push/core/b/i;->c(J)Z

    return p2
.end method
