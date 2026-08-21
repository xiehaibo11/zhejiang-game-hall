.class public Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;
.super Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;


# static fields
.field private static b:Landroid/content/IntentFilter;


# instance fields
.field public a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private c:Lcom/sigmob/sdk/base/common/m$b;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/m$b;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p3}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a()Landroid/content/IntentFilter;

    return-void
.end method


# virtual methods
.method public a()Landroid/content/IntentFilter;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    if-nez v0, :cond_0

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.fail"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.show"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.click"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.interstitial.vopen"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b:Landroid/content/IntentFilter;

    return-object v0
.end method

.method public b(Landroid/content/BroadcastReceiver;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 6

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    if-eqz p1, :cond_8

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez p1, :cond_0

    goto/16 :goto_1

    :cond_0
    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a(Landroid/content/Intent;)Z

    move-result p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const/4 v0, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x4

    const/4 v3, 0x3

    const/4 v4, 0x2

    const/4 v5, 0x1

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v3

    goto :goto_0

    :sswitch_1
    const-string v1, "com.sigmob.action.interstitial.show"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v4

    goto :goto_0

    :sswitch_2
    const-string v1, "com.sigmob.action.interstitial.fail"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v0, 0x0

    goto :goto_0

    :sswitch_3
    const-string v1, "com.sigmob.action.interstitial.vopen"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v5

    goto :goto_0

    :sswitch_4
    const-string v1, "com.sigmob.action.interstitial.click"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move v0, v2

    :cond_2
    :goto_0
    if-eqz v0, :cond_7

    if-eq v0, v5, :cond_6

    if-eq v0, v4, :cond_5

    if-eq v0, v3, :cond_4

    if-eq v0, v2, :cond_3

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/base/common/m$b;->c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/base/common/m$b;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/base/common/m$b;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_1

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/base/common/m$b;->e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_1

    :cond_7
    const-string p1, "error"

    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->c:Lcom/sigmob/sdk/base/common/m$b;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/EventForwardingBroadcastReceiver;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {p2, v0, p1}, Lcom/sigmob/sdk/base/common/m$b;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_8
    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x7bde7ad4 -> :sswitch_4
        -0x7ad1449c -> :sswitch_3
        -0x5ed46d06 -> :sswitch_2
        -0x5ece6927 -> :sswitch_1
        0x322e192e -> :sswitch_0
    .end sparse-switch
.end method
