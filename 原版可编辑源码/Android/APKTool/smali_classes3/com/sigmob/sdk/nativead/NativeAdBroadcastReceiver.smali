.class public Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;
.super Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;


# static fields
.field private static a:Landroid/content/IntentFilter;


# instance fields
.field private b:Lcom/sigmob/sdk/nativead/c$a;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/nativead/c$a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a()Landroid/content/IntentFilter;

    return-void
.end method


# virtual methods
.method public a()Landroid/content/IntentFilter;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    if-nez v0, :cond_0

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.native.temple.show"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.native.temple.click"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.native.temple.dismiss"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.loadpage.show"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.loadpage.dismiss"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    return-object v0
.end method

.method public b(Landroid/content/BroadcastReceiver;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 5

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->a(Landroid/content/Intent;)Z

    move-result p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const/4 p2, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/4 v1, 0x4

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v0, "com.sigmob.action.native.temple.dismiss"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v3

    goto :goto_0

    :sswitch_1
    const-string v0, "com.sigmob.action.native.temple.show"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p2, 0x0

    goto :goto_0

    :sswitch_2
    const-string v0, "com.sigmob.action.loadpage.dismiss"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v1

    goto :goto_0

    :sswitch_3
    const-string v0, "com.sigmob.action.loadpage.show"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v2

    goto :goto_0

    :sswitch_4
    const-string v0, "com.sigmob.action.native.temple.click"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v4

    :cond_2
    :goto_0
    if-eqz p2, :cond_7

    if-eq p2, v4, :cond_6

    if-eq p2, v3, :cond_5

    if-eq p2, v2, :cond_4

    if-eq p2, v1, :cond_3

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/c$a;->b()V

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/c$a;->a()V

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/c$a;->e()V

    goto :goto_1

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/c$a;->d()V

    goto :goto_1

    :cond_7
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/NativeAdBroadcastReceiver;->b:Lcom/sigmob/sdk/nativead/c$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/c$a;->c()V

    :goto_1
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x7c58b708 -> :sswitch_4
        -0x62b423d0 -> :sswitch_3
        -0x58a6bf89 -> :sswitch_2
        -0x1cc1d673 -> :sswitch_1
        0x675219fa -> :sswitch_0
    .end sparse-switch
.end method
