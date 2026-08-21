.class public Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;
.super Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;


# static fields
.field private static a:Landroid/content/IntentFilter;


# instance fields
.field private b:Lcom/sigmob/sdk/splash/f$a;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/splash/f$a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a()Landroid/content/IntentFilter;

    return-void
.end method


# virtual methods
.method public a()Landroid/content/IntentFilter;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    if-nez v0, :cond_0

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.splash.stoptime"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.splash.playFail"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.splash.skip"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.loadpage.show"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    const-string v1, "com.sigmob.action.loadpage.dismiss"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a:Landroid/content/IntentFilter;

    return-object v0
.end method

.method public b(Landroid/content/BroadcastReceiver;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 6

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->a(Landroid/content/Intent;)Z

    move-result p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const/4 p2, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/4 v1, 0x5

    const/4 v2, 0x4

    const/4 v3, 0x3

    const/4 v4, 0x2

    const/4 v5, 0x1

    sparse-switch v0, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v0, "com.sigmob.action.splash.skip"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v4

    goto :goto_0

    :sswitch_1
    const-string v0, "com.sigmob.action.splash.play"

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
    const-string v0, "com.sigmob.action.splash.playFail"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v5

    goto :goto_0

    :sswitch_5
    const-string v0, "com.sigmob.action.splash.stoptime"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p2, v3

    :cond_2
    :goto_0
    if-eqz p2, :cond_8

    if-eq p2, v5, :cond_7

    if-eq p2, v4, :cond_6

    if-eq p2, v3, :cond_5

    if-eq p2, v2, :cond_4

    if-eq p2, v1, :cond_3

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/splash/f$a;->b()V

    goto :goto_1

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/splash/f$a;->a()V

    goto :goto_1

    :cond_5
    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/splash/f$a;->f()V

    goto :goto_1

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/splash/f$a;->d()V

    goto :goto_1

    :cond_7
    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/splash/f$a;->c()V

    goto :goto_1

    :cond_8
    iget-object p1, p0, Lcom/sigmob/sdk/splash/SplashAdBroadcastReceiver;->b:Lcom/sigmob/sdk/splash/f$a;

    invoke-interface {p1}, Lcom/sigmob/sdk/splash/f$a;->e()V

    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x7e78cdb0 -> :sswitch_5
        -0x74c83b0d -> :sswitch_4
        -0x62b423d0 -> :sswitch_3
        -0x58a6bf89 -> :sswitch_2
        -0x39a663cb -> :sswitch_1
        -0x39a50980 -> :sswitch_0
    .end sparse-switch
.end method
