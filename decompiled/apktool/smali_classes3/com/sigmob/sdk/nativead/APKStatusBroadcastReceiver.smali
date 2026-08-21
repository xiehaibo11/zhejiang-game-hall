.class public Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;
.super Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;


# instance fields
.field a:Lcom/sigmob/sdk/base/common/m$a;

.field b:Landroid/content/IntentFilter;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/common/m$a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    return-void
.end method


# virtual methods
.method public a()Landroid/content/IntentFilter;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b:Landroid/content/IntentFilter;

    if-nez v0, :cond_0

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.download.start"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.download.end"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.install.start"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.install.end"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b:Landroid/content/IntentFilter;

    return-object v0
.end method

.method public b(Landroid/content/BroadcastReceiver;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a(Landroid/content/Intent;)Z

    move-result p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "result"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    const-wide/16 v1, -0x1

    const-string v3, "downloadId"

    invoke-virtual {p2, v3, v1, v2}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v1

    const/4 p2, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v3

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    sparse-switch v3, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v3, "com.sigmob.action.interstitial.install.start"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v5

    goto :goto_0

    :sswitch_1
    const-string v3, "com.sigmob.action.interstitial.download.end"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v6

    goto :goto_0

    :sswitch_2
    const-string v3, "com.sigmob.action.interstitial.download.start"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p2, 0x0

    goto :goto_0

    :sswitch_3
    const-string v3, "com.sigmob.action.interstitial.install.end"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v4

    :cond_2
    :goto_0
    if-eqz p2, :cond_6

    if-eq p2, v6, :cond_5

    if-eq p2, v5, :cond_4

    if-eq p2, v4, :cond_3

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/base/common/m$a;->b(Z)V

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/base/common/m$a;->a(Z)V

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    invoke-interface {p1, v0, v1, v2}, Lcom/sigmob/sdk/base/common/m$a;->b(ZJ)V

    goto :goto_1

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a:Lcom/sigmob/sdk/base/common/m$a;

    invoke-interface {p1, v0, v1, v2}, Lcom/sigmob/sdk/base/common/m$a;->a(ZJ)V

    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x605f3954 -> :sswitch_3
        -0x326a73a8 -> :sswitch_2
        0x1fe9d651 -> :sswitch_1
        0x3b51d1f3 -> :sswitch_0
    .end sparse-switch
.end method
