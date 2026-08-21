.class public abstract Lcom/qihoo360/replugin/compat/LocalBroadcastManager;
.super Ljava/lang/Object;
.source "LocalBroadcastManager.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;
    .locals 1

    .line 17
    sget-boolean v0, Lcom/qihoo360/replugin/compat/CompatConfig;->DEPENDENCY_ANDROIDX:Z

    if-eqz v0, :cond_0

    .line 18
    new-instance v0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerAndroidX;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerAndroidX;-><init>(Landroid/content/Context;)V

    return-object v0

    .line 19
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/compat/CompatConfig;->DEPENDENCY_SUPPORT:Z

    if-eqz v0, :cond_1

    .line 20
    new-instance v0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;-><init>(Landroid/content/Context;)V

    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public abstract registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
.end method

.method public abstract sendBroadcast(Landroid/content/Intent;)Z
.end method

.method public abstract sendBroadcastSync(Landroid/content/Intent;)V
.end method

.method public abstract unregisterReceiver(Landroid/content/BroadcastReceiver;)V
.end method
