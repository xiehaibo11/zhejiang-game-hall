.class public final Lcom/qihoo360/replugin/compat/CompatConfig;
.super Ljava/lang/Object;
.source "CompatConfig.java"


# static fields
.field public static final DEPENDENCY_ANDROIDX:Z

.field public static final DEPENDENCY_SUPPORT:Z

.field private static volatile sInstance:Lcom/qihoo360/replugin/compat/CompatConfig;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "androidx.localbroadcastmanager.content.LocalBroadcastManager"

    .line 18
    invoke-static {v0}, Lcom/qihoo360/replugin/compat/CompatConfig;->findClassByClassName(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Lcom/qihoo360/replugin/compat/CompatConfig;->DEPENDENCY_ANDROIDX:Z

    const-string v0, "android.support.v4.content.LocalBroadcastManager"

    .line 19
    invoke-static {v0}, Lcom/qihoo360/replugin/compat/CompatConfig;->findClassByClassName(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Lcom/qihoo360/replugin/compat/CompatConfig;->DEPENDENCY_SUPPORT:Z

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static findClassByClassName(Ljava/lang/String;)Z
    .locals 0

    .line 41
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static getInstance()Lcom/qihoo360/replugin/compat/CompatConfig;
    .locals 2

    .line 28
    sget-object v0, Lcom/qihoo360/replugin/compat/CompatConfig;->sInstance:Lcom/qihoo360/replugin/compat/CompatConfig;

    if-nez v0, :cond_1

    .line 29
    const-class v0, Lcom/qihoo360/replugin/compat/CompatConfig;

    monitor-enter v0

    .line 30
    :try_start_0
    sget-object v1, Lcom/qihoo360/replugin/compat/CompatConfig;->sInstance:Lcom/qihoo360/replugin/compat/CompatConfig;

    if-nez v1, :cond_0

    .line 31
    new-instance v1, Lcom/qihoo360/replugin/compat/CompatConfig;

    invoke-direct {v1}, Lcom/qihoo360/replugin/compat/CompatConfig;-><init>()V

    sput-object v1, Lcom/qihoo360/replugin/compat/CompatConfig;->sInstance:Lcom/qihoo360/replugin/compat/CompatConfig;

    .line 33
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/qihoo360/replugin/compat/CompatConfig;->sInstance:Lcom/qihoo360/replugin/compat/CompatConfig;

    return-object v0
.end method
