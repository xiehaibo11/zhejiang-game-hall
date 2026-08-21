.class abstract Lcom/sigmob/sdk/mraid2/a;
.super Landroid/webkit/WebView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid2/a$a;
    }
.end annotation


# static fields
.field public static a:Ljava/util/HashMap; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid/i;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Ljava/lang/String; = "BaseWebView2"

.field private static c:Z


# instance fields
.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/a;->d:Ljava/util/Map;

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/a;->e:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->a(Landroid/webkit/WebSettings;)V

    sget-boolean p1, Lcom/sigmob/sdk/mraid2/a;->c:Z

    if-nez p1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->a(Landroid/content/Context;)V

    const/4 p1, 0x1

    sput-boolean p1, Lcom/sigmob/sdk/mraid2/a;->c:Z

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 8

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-ne v0, v1, :cond_0

    new-instance v0, Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setBackgroundColor(I)V

    const/4 v3, 0x0

    const/4 v7, 0x0

    const-string v4, ""

    const-string v5, "text/html"

    const-string v6, "UTF-8"

    move-object v2, v0

    invoke-virtual/range {v2 .. v7}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    new-instance v1, Landroid/view/WindowManager$LayoutParams;

    invoke-direct {v1}, Landroid/view/WindowManager$LayoutParams;-><init>()V

    const/4 v2, 0x1

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->height:I

    const/16 v2, 0x7d5

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->type:I

    const v2, 0x1000018

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->flags:I

    const/4 v2, -0x2

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->format:I

    const v2, 0x800033

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    const-string v2, "window"

    invoke-virtual {p1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/WindowManager;

    if-eqz p1, :cond_0

    invoke-interface {p1, v0, v1}, Landroid/view/WindowManager;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/webkit/WebSettings;)V
    .locals 5

    const/4 v0, 0x2

    const/4 v1, 0x1

    :try_start_0
    new-instance v2, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    new-instance v3, Ljava/lang/String;

    const-string v4, "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="

    invoke-static {v4, v0}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v2, p1, v3}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v3, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    :try_start_1
    new-instance v2, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    new-instance v3, Ljava/lang/String;

    const-string v4, "c2V0QWxsb3dGaWxlQWNjZXNz"

    invoke-static {v4, v0}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v2, p1, v3}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v3, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    const-string v2, "UTF-8"

    invoke-virtual {p1, v2}, Landroid/webkit/WebSettings;->setDefaultTextEncodingName(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    sget-object v0, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setBlockNetworkImage(Z)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setBlockNetworkLoads(Z)V

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    :cond_0
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setLoadsImagesAutomatically(Z)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-ge v1, v2, :cond_1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    :cond_1
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-lt v1, v2, :cond_2

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    :cond_2
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_3

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V

    :cond_3
    new-instance p1, Lcom/sigmob/sdk/mraid2/a$a;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/mraid2/a$a;-><init>(Lcom/sigmob/sdk/mraid2/a;)V

    const-string v0, "sigandroidapk"

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/mraid2/a;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic f()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->b:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method a()V
    .locals 1

    const-string v0, "download_start"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 3

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->d:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    new-instance v1, Lcom/sigmob/sdk/mraid2/a$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/a$1;-><init>(Lcom/sigmob/sdk/mraid2/a;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;-><init>(Lcom/sigmob/sdk/base/common/m$a;Ljava/lang/String;)V

    invoke-virtual {v0, v0}, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->a(Landroid/content/BroadcastReceiver;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/a;->d:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method a(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/mraid2/a$2;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/mraid2/a$2;-><init>(Lcom/sigmob/sdk/mraid2/a;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/a;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method a(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Injecting Javascript into MRAID WebView:\n\t"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/mraid2/a;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    goto :goto_0

    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "javascript:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->loadUrl(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public a(Z)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x12

    if-lt v0, v1, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    sget-object v0, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    sget-object v0, Landroid/webkit/WebSettings$PluginState;->OFF:Landroid/webkit/WebSettings$PluginState;

    :goto_0
    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    return-void
.end method

.method b()V
    .locals 1

    const-string v0, "download_fail"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method public b(Z)V
    .locals 0

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->stopLoading()V

    const-string p1, ""

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->loadUrl(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->onPause()V

    return-void
.end method

.method c()V
    .locals 1

    const-string v0, "download_end"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method d()V
    .locals 1

    const-string v0, "install_start"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method public destroy()V
    .locals 2

    const-string v0, " BaseWebView destroy called "

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->d:Ljava/util/Map;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;

    invoke-virtual {v1, v1}, Lcom/sigmob/sdk/nativead/APKStatusBroadcastReceiver;->b(Landroid/content/BroadcastReceiver;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    :cond_1
    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Ljava/util/HashMap;->size()I

    move-result v0

    if-lez v0, :cond_4

    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid/i;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/i;->c()V

    goto :goto_1

    :cond_3
    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    :cond_4
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->removeAllViews()V

    invoke-super {p0}, Landroid/webkit/WebView;->destroy()V

    return-void
.end method

.method e()V
    .locals 1

    const-string v0, "install_end"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid2/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method abstract getAdUnitList()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end method

.method public loadUrl(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->e:Ljava/util/Map;

    const-string v1, ""

    const-string v2, "Referer"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    const/4 v2, 0x0

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/a;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isDisablexRequestWith()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->e:Ljava/util/Map;

    const-string v2, "X-Requested-With"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/a;->e:Ljava/util/Map;

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/mraid2/a;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 0

    invoke-super {p0}, Landroid/webkit/WebView;->onAttachedToWindow()V

    return-void
.end method

.method public setWebViewClient(Landroid/webkit/WebViewClient;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    return-void
.end method
