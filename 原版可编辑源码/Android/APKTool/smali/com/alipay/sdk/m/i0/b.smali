.class public Lcom/alipay/sdk/m/i0/b;
.super Ljava/lang/Object;
.source "SourceFile"


# static fields
.field public static final a:Ljava/lang/String; = "OpenIdHelper"

.field public static b:Ljava/lang/reflect/Method;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/alipay/sdk/m/i0/f;->a()Lcom/alipay/sdk/m/i0/f;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    iget-object v1, v0, Lcom/alipay/sdk/m/i0/f;->c:Lcom/alipay/sdk/m/i0/a;

    invoke-virtual {v0, p0, v1}, Lcom/alipay/sdk/m/i0/f;->a(Landroid/content/Context;Lcom/alipay/sdk/m/i0/a;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Z)V
    .locals 0

    invoke-static {}, Lcom/alipay/sdk/m/i0/f;->a()Lcom/alipay/sdk/m/i0/f;

    invoke-static {p0}, Lcom/alipay/sdk/m/i0/f;->a(Z)V

    return-void
.end method

.method public static final a()Z
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    sget-object v2, Lcom/alipay/sdk/m/i0/b;->b:Ljava/lang/reflect/Method;

    if-nez v2, :cond_0

    const-string v2, "android.app.ActivityThread"

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "currentApplication"

    :try_start_1
    new-array v4, v1, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    sput-object v2, Lcom/alipay/sdk/m/i0/b;->b:Ljava/lang/reflect/Method;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    :cond_0
    sget-object v2, Lcom/alipay/sdk/m/i0/b;->b:Ljava/lang/reflect/Method;

    new-array v3, v1, [Ljava/lang/Object;

    invoke-virtual {v2, v0, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/content/Context;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-object v0, v2

    goto :goto_0

    :catch_0
    move-exception v2

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "ActivityThread:currentApplication --> "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "OpenIdHelper"

    invoke-static {v3, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    if-nez v0, :cond_1

    return v1

    :cond_1
    invoke-static {}, Lcom/alipay/sdk/m/i0/f;->a()Lcom/alipay/sdk/m/i0/f;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Lcom/alipay/sdk/m/i0/f;->a(Landroid/content/Context;Z)Z

    move-result v0

    return v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/alipay/sdk/m/i0/f;->a()Lcom/alipay/sdk/m/i0/f;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    iget-object v1, v0, Lcom/alipay/sdk/m/i0/f;->b:Lcom/alipay/sdk/m/i0/a;

    invoke-virtual {v0, p0, v1}, Lcom/alipay/sdk/m/i0/f;->a(Landroid/content/Context;Lcom/alipay/sdk/m/i0/a;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/alipay/sdk/m/i0/f;->a()Lcom/alipay/sdk/m/i0/f;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    iget-object v1, v0, Lcom/alipay/sdk/m/i0/f;->a:Lcom/alipay/sdk/m/i0/a;

    invoke-virtual {v0, p0, v1}, Lcom/alipay/sdk/m/i0/f;->a(Landroid/content/Context;Lcom/alipay/sdk/m/i0/a;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/alipay/sdk/m/i0/f;->a()Lcom/alipay/sdk/m/i0/f;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    iget-object v1, v0, Lcom/alipay/sdk/m/i0/f;->d:Lcom/alipay/sdk/m/i0/a;

    invoke-virtual {v0, p0, v1}, Lcom/alipay/sdk/m/i0/f;->a(Landroid/content/Context;Lcom/alipay/sdk/m/i0/a;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
