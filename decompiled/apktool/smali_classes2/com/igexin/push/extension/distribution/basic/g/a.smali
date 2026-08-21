.class public Lcom/igexin/push/extension/distribution/basic/g/a;
.super Ljava/lang/Object;


# static fields
.field private static a:I

.field private static b:I


# direct methods
.method public static a(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/push/extension/distribution/basic/g/a;->b:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.xiaomi.MiuiPushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkXMDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/push/extension/distribution/basic/g/a;->b:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/push/extension/distribution/basic/g/a;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/push/extension/distribution/basic/g/a;->b:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/push/extension/distribution/basic/g/a;->b:I

    return v2
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 6

    sget v0, Lcom/igexin/push/extension/distribution/basic/g/a;->a:I

    and-int/lit8 v1, v0, 0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    and-int/lit8 p0, v0, 0x2

    if-eqz p0, :cond_0

    move v2, v3

    :cond_0
    return v2

    :cond_1
    :try_start_0
    const-string v0, "com.igexin.assist.control.meizu.FlymePushManager"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "checkMZDevice"

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const/4 v1, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    aput-object p0, v4, v2

    invoke-virtual {v0, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_2

    sget p0, Lcom/igexin/push/extension/distribution/basic/g/a;->a:I

    or-int/lit8 p0, p0, 0x2

    sput p0, Lcom/igexin/push/extension/distribution/basic/g/a;->a:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    sget p0, Lcom/igexin/push/extension/distribution/basic/g/a;->a:I

    or-int/2addr p0, v3

    sput p0, Lcom/igexin/push/extension/distribution/basic/g/a;->a:I

    return v2
.end method

.method public static c(Landroid/content/Context;)V
    .locals 7

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/igexin/push/extension/distribution/basic/g/a;->a(Landroid/content/Context;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x0

    const-string v3, "clearNotification"

    const/4 v4, 0x1

    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "com.xiaomi.mipush.sdk.MiPushClient"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v0

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Object;

    aput-object p0, v3, v0

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "AssistUtil | cancelAllAssistNotification() XM "

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/igexin/push/extension/distribution/basic/g/a;->b(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "com.meizu.cloud.pushsdk.PushManager"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v0

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Object;

    aput-object p0, v3, v0

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "AssistUtil | cancelAllAssistNotification() MZ "

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AssistUtil | cancelAllAssistNotification() err "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p0, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method
