.class public Lcom/igexin/push/extension/distribution/basic/c/b;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/b;->a()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/b;->a:Ljava/lang/String;

    return-void
.end method

.method private static a()Ljava/lang/String;
    .locals 8

    const-string v0, "com.igexin.sdk.action.doaction"

    :try_start_0
    const-class v1, Lcom/igexin/push/core/CoreConsts;

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    array-length v3, v2

    const/4 v4, 0x0

    move v5, v4

    :goto_0
    if-ge v5, v3, :cond_1

    aget-object v6, v2, v5

    const/4 v7, 0x1

    invoke-virtual {v6, v7}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    const-class v7, Ljava/lang/Deprecated;

    invoke-virtual {v6, v7}, Ljava/lang/reflect/Method;->isAnnotationPresent(Ljava/lang/Class;)Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-virtual {v6}, Ljava/lang/reflect/Method;->getParameterTypes()[Ljava/lang/Class;

    move-result-object v7

    array-length v7, v7

    if-nez v7, :cond_0

    new-array v7, v4, [Ljava/lang/Object;

    invoke-virtual {v6, v1, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v6

    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :catch_0
    :cond_1
    return-object v0
.end method
