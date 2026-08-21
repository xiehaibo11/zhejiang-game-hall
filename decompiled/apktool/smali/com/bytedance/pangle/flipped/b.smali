.class public final Lcom/bytedance/pangle/flipped/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/pangle/flipped/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final invokeHiddenApiRestrictions()V
    .locals 8

    .line 22
    :try_start_0
    const-class v0, Ljava/lang/Class;

    const-string v1, "getDeclaredMethod"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, [Ljava/lang/Class;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const-string v1, "dalvik.system.VMRuntime"

    .line 23
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    new-array v3, v2, [Ljava/lang/Object;

    const-string v4, "getRuntime"

    aput-object v4, v3, v5

    new-array v4, v5, [Ljava/lang/Class;

    aput-object v4, v3, v6

    .line 24
    invoke-virtual {v0, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/reflect/Method;

    .line 25
    invoke-virtual {v3, v6}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    const/4 v4, 0x0

    new-array v7, v5, [Ljava/lang/Object;

    .line 26
    invoke-virtual {v3, v4, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    new-array v2, v2, [Ljava/lang/Object;

    const-string v4, "setHiddenApiExemptions"

    aput-object v4, v2, v5

    new-array v4, v6, [Ljava/lang/Class;

    .line 27
    const-class v7, [Ljava/lang/String;

    aput-object v7, v4, v5

    aput-object v4, v2, v6

    .line 28
    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/reflect/Method;

    .line 29
    invoke-virtual {v0, v6}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v1, v6, [Ljava/lang/Object;

    const-string v2, "L"

    .line 30
    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    aput-object v2, v1, v5

    invoke-virtual {v0, v3, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 33
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "V1 invokeHiddenApiRestrictions fail: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "FlippedV1Impl"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
