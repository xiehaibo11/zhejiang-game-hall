.class public Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;
.super Lcom/qihoo360/replugin/compat/LocalBroadcastManager;
.source "LocalBroadcastManagerSupport.java"


# instance fields
.field private final localBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;-><init>()V

    .line 19
    invoke-static {p1}, Landroid/support/v4/content/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;->localBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    return-void
.end method


# virtual methods
.method public registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;->localBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/content/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    return-void
.end method

.method public sendBroadcast(Landroid/content/Intent;)Z
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;->localBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {v0, p1}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public sendBroadcastSync(Landroid/content/Intent;)V
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;->localBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {v0, p1}, Landroid/support/v4/content/LocalBroadcastManager;->sendBroadcastSync(Landroid/content/Intent;)V

    return-void
.end method

.method public unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/qihoo360/replugin/compat/LocalBroadcastManagerSupport;->localBroadcastManager:Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {v0, p1}, Landroid/support/v4/content/LocalBroadcastManager;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    return-void
.end method
