.class public Lcom/qihoo360/loader2/VMRuntimeCompat;
.super Ljava/lang/Object;
.source "VMRuntimeCompat.java"


# static fields
.field private static final GET_LOCKER:[B

.field private static volatile sIs64Bit:Ljava/lang/Boolean;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 32
    sput-object v0, Lcom/qihoo360/loader2/VMRuntimeCompat;->GET_LOCKER:[B

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getArtOatCpuType()Ljava/lang/String;
    .locals 1

    .line 98
    invoke-static {}, Lcom/qihoo360/loader2/VMRuntimeCompat;->is64Bit()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "arm64"

    goto :goto_0

    :cond_0
    const-string v0, "arm"

    :goto_0
    return-object v0
.end method

.method public static is64Bit()Z
    .locals 2

    .line 42
    sget-object v0, Lcom/qihoo360/loader2/VMRuntimeCompat;->sIs64Bit:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    .line 43
    sget-object v0, Lcom/qihoo360/loader2/VMRuntimeCompat;->sIs64Bit:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0

    .line 45
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/VMRuntimeCompat;->GET_LOCKER:[B

    monitor-enter v0

    .line 46
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/VMRuntimeCompat;->sIs64Bit:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    .line 47
    sget-object v1, Lcom/qihoo360/loader2/VMRuntimeCompat;->sIs64Bit:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    monitor-exit v0

    return v1

    .line 51
    :cond_1
    invoke-static {}, Lcom/qihoo360/loader2/VMRuntimeCompat;->is64BitImpl()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    sput-object v1, Lcom/qihoo360/loader2/VMRuntimeCompat;->sIs64Bit:Ljava/lang/Boolean;

    .line 52
    sget-object v1, Lcom/qihoo360/loader2/VMRuntimeCompat;->sIs64Bit:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 53
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private static is64BitImpl()Z
    .locals 5

    const/4 v0, 0x0

    .line 58
    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-ge v1, v2, :cond_0

    return v0

    :cond_0
    const-string v1, "dalvik.system.VMRuntime"

    .line 63
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    if-nez v1, :cond_1

    return v0

    :cond_1
    const-string v2, "getRuntime"

    new-array v3, v0, [Ljava/lang/Class;

    .line 67
    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    if-nez v2, :cond_2

    return v0

    :cond_2
    const/4 v3, 0x0

    new-array v4, v0, [Ljava/lang/Object;

    .line 71
    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_3

    return v0

    :cond_3
    const-string v3, "is64Bit"

    new-array v4, v0, [Ljava/lang/Class;

    .line 75
    invoke-virtual {v1, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    if-nez v1, :cond_4

    return v0

    :cond_4
    new-array v3, v0, [Ljava/lang/Object;

    .line 79
    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    .line 80
    instance-of v2, v1, Ljava/lang/Boolean;

    if-eqz v2, :cond_5

    .line 81
    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v1

    .line 84
    sget-boolean v2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz v2, :cond_5

    .line 85
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_5
    return v0
.end method
