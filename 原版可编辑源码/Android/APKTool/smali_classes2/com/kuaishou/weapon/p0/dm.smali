.class public final Lcom/kuaishou/weapon/p0/dm;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kuaishou/weapon/p0/dm$a;
    }
.end annotation


# static fields
.field private static a:Lcom/kuaishou/weapon/p0/dm$a;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/dm;->b(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "arm64-v8a"

    return-object p0

    :cond_0
    const-string p0, "armeabi-v7a"

    return-object p0
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/dm;->c(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/dm$a;

    move-result-object p0

    sget-object v1, Lcom/kuaishou/weapon/p0/dm$a;->c:Lcom/kuaishou/weapon/p0/dm$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ne p0, v1, :cond_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    :cond_0
    return v0
.end method

.method private static c(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/dm$a;
    .locals 5

    sget-object v0, Lcom/kuaishou/weapon/p0/dm;->a:Lcom/kuaishou/weapon/p0/dm$a;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_2

    :cond_1
    sget-object p0, Lcom/kuaishou/weapon/p0/dm$a;->b:Lcom/kuaishou/weapon/p0/dm$a;

    :goto_0
    sput-object p0, Lcom/kuaishou/weapon/p0/dm;->a:Lcom/kuaishou/weapon/p0/dm$a;

    goto :goto_3

    :cond_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v0, v2, :cond_3

    invoke-static {}, Landroid/os/Process;->is64Bit()Z

    move-result p0

    if-eqz p0, :cond_1

    sget-object p0, Lcom/kuaishou/weapon/p0/dm$a;->c:Lcom/kuaishou/weapon/p0/dm$a;

    goto :goto_0

    :cond_3
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_6

    :try_start_0
    const-string v0, "dalvik.system.VMRuntime"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getRuntime"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const-string v3, "is64Bit"

    new-array v4, v2, [Ljava/lang/Class;

    invoke-virtual {v0, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v2, [Ljava/lang/Object;

    invoke-virtual {v1, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    invoke-virtual {v3, v0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_4

    sget-object v0, Lcom/kuaishou/weapon/p0/dm$a;->c:Lcom/kuaishou/weapon/p0/dm$a;

    goto :goto_1

    :cond_4
    sget-object v0, Lcom/kuaishou/weapon/p0/dm$a;->b:Lcom/kuaishou/weapon/p0/dm$a;

    :goto_1
    sput-object v0, Lcom/kuaishou/weapon/p0/dm;->a:Lcom/kuaishou/weapon/p0/dm$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :try_start_1
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->nativeLibraryDir:Ljava/lang/String;

    const-string v0, "arm64"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_5

    sget-object p0, Lcom/kuaishou/weapon/p0/dm$a;->c:Lcom/kuaishou/weapon/p0/dm$a;

    :goto_2
    sput-object p0, Lcom/kuaishou/weapon/p0/dm;->a:Lcom/kuaishou/weapon/p0/dm$a;

    goto :goto_3

    :cond_5
    sget-object p0, Lcom/kuaishou/weapon/p0/dm$a;->a:Lcom/kuaishou/weapon/p0/dm$a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    sget-object p0, Lcom/kuaishou/weapon/p0/dm$a;->a:Lcom/kuaishou/weapon/p0/dm$a;

    goto :goto_0

    :cond_6
    :goto_3
    sget-object p0, Lcom/kuaishou/weapon/p0/dm;->a:Lcom/kuaishou/weapon/p0/dm$a;

    return-object p0
.end method
