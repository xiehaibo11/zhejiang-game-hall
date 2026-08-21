.class public Lcom/igexin/push/extension/distribution/basic/a/e;
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
    .locals 0

    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/push/extension/distribution/basic/b/b;->a(Ljava/lang/String;)Lcom/igexin/push/extension/distribution/basic/b/b;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 2

    check-cast p2, Lcom/igexin/push/extension/distribution/basic/b/b;

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/igexin/push/extension/distribution/basic/a/f;

    invoke-direct {v1, p0, p2, p1}, Lcom/igexin/push/extension/distribution/basic/a/f;-><init>(Lcom/igexin/push/extension/distribution/basic/a/e;Lcom/igexin/push/extension/distribution/basic/b/b;Lcom/igexin/push/core/bean/PushTaskBean;)V

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/b;->a()J

    move-result-wide p1

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    const/4 p1, 0x1

    return p1
.end method
