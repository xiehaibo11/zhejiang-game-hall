.class Lcom/bykv/vk/openvk/TTAppContextHolder$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/TTAppContextHolder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "rg"
.end annotation


# static fields
.field private static volatile rg:Landroid/app/Application;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    const-string v0, "MyApplication"

    .line 66
    :try_start_0
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder$rg;->df()Ljava/lang/Object;

    move-result-object v1

    .line 67
    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-string v3, "getApplication"

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v4, [Ljava/lang/Object;

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    .line 68
    check-cast v1, Landroid/app/Application;

    sput-object v1, Lcom/bykv/vk/openvk/TTAppContextHolder$rg;->rg:Landroid/app/Application;

    const-string v1, "application get success"

    .line 69
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->pt(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "application get failed"

    .line 71
    invoke-static {v0, v2, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method private static df()Ljava/lang/Object;
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "android.app.ActivityThread"

    .line 78
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "currentActivityThread"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v2, 0x1

    .line 79
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v3, [Ljava/lang/Object;

    .line 80
    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "MyApplication"

    const-string v3, "ActivityThread get error, maybe api level <= 4.2.2"

    .line 82
    invoke-static {v2, v3, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-object v0
.end method

.method public static rg()Landroid/app/Application;
    .locals 1

    .line 57
    sget-object v0, Lcom/bykv/vk/openvk/TTAppContextHolder$rg;->rg:Landroid/app/Application;

    return-object v0
.end method
