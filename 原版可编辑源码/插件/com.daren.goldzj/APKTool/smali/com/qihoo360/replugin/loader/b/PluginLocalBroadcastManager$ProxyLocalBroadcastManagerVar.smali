.class public Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ProxyLocalBroadcastManagerVar"
.end annotation


# static fields
.field static a:Lcom/qihoo360/replugin/b;

.field static b:Lcom/qihoo360/replugin/b;

.field static c:Lcom/qihoo360/replugin/b;

.field static d:Lcom/qihoo360/replugin/b;

.field static e:Lcom/qihoo360/replugin/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static initLocked(Ljava/lang/ClassLoader;)V
    .locals 6

    sget-boolean v0, Llibrary/b;->a:Z

    if-eqz v0, :cond_0

    const-string v0, "androidx.localbroadcastmanager.content.LocalBroadcastManager"

    goto :goto_0

    :cond_0
    const-string v0, "android.support.v4.content.LocalBroadcastManager"

    :goto_0
    new-instance v1, Lcom/qihoo360/replugin/b;

    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-string v4, "getInstance"

    invoke-direct {v1, p0, v0, v4, v3}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->a:Lcom/qihoo360/replugin/b;

    new-instance v1, Lcom/qihoo360/replugin/b;

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/Class;

    const-class v4, Landroid/content/BroadcastReceiver;

    aput-object v4, v3, v5

    const-class v4, Landroid/content/IntentFilter;

    aput-object v4, v3, v2

    const-string v4, "registerReceiver"

    invoke-direct {v1, p0, v0, v4, v3}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->b:Lcom/qihoo360/replugin/b;

    new-instance v1, Lcom/qihoo360/replugin/b;

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/BroadcastReceiver;

    aput-object v4, v3, v5

    const-string v4, "unregisterReceiver"

    invoke-direct {v1, p0, v0, v4, v3}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->c:Lcom/qihoo360/replugin/b;

    new-instance v1, Lcom/qihoo360/replugin/b;

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Intent;

    aput-object v4, v3, v5

    const-string v4, "sendBroadcast"

    invoke-direct {v1, p0, v0, v4, v3}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->d:Lcom/qihoo360/replugin/b;

    new-instance v1, Lcom/qihoo360/replugin/b;

    new-array v2, v2, [Ljava/lang/Class;

    const-class v3, Landroid/content/Intent;

    aput-object v3, v2, v5

    const-string v3, "sendBroadcastSync"

    invoke-direct {v1, p0, v0, v3, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v1, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->e:Lcom/qihoo360/replugin/b;

    return-void
.end method
