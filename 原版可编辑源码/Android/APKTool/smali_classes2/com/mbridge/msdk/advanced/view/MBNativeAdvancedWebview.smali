.class public Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;
.super Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
.source "MBNativeAdvancedWebview.java"


# static fields
.field private static final e:Ljava/lang/String;


# instance fields
.field private f:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

.field private g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 15
    const-class v0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->e:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 21
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setBackgroundColor(I)V

    return-void
.end method


# virtual methods
.method public finishAdSession()V
    .locals 2

    const-string v0, "OMSDK"

    .line 69
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->f:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v1, :cond_0

    .line 70
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->f:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->finish()V

    const/4 v1, 0x0

    .line 71
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->f:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const-string v1, "finish adSession"

    .line 72
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 75
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public getAdSession()Lcom/iab/omid/library/mmadbridge/adsession/AdSession;
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->f:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    return-object v0
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 26
    invoke-super {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->onAttachedToWindow()V

    .line 27
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->registerNetWorkReceiver()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 32
    invoke-super {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->onDetachedFromWindow()V

    .line 33
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->unregisterNetWorkReceiver()V

    return-void
.end method

.method public registerNetWorkReceiver()V
    .locals 3

    .line 38
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    if-nez v0, :cond_0

    .line 39
    new-instance v0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;-><init>(Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    .line 41
    :cond_0
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 42
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 43
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 45
    sget-object v1, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->e:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setAdSession(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->f:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    return-void
.end method

.method public unregisterNetWorkReceiver()V
    .locals 2

    .line 51
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    if-eqz v0, :cond_0

    .line 52
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a()V

    .line 53
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->g:Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 56
    sget-object v1, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->e:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
