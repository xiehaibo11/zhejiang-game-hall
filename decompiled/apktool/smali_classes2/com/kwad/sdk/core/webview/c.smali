.class public Lcom/kwad/sdk/core/webview/c;
.super Landroid/webkit/WebView;


# instance fields
.field private ayj:Z

.field private ayk:Lcom/kwad/sdk/core/webview/a/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/c;->bn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/c;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/c;->bn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1, p2}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/c;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/c;->bn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1, p2, p3}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/c;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/c;->bn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/c;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/c;->bn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    invoke-direct {p0}, Lcom/kwad/sdk/core/webview/c;->init()V

    return-void
.end method

.method private static bn(Landroid/content/Context;)Landroid/content/Context;
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-ge v0, v1, :cond_0

    new-instance v0, Landroid/content/res/Configuration;

    invoke-direct {v0}, Landroid/content/res/Configuration;-><init>()V

    invoke-virtual {p0, v0}, Landroid/content/Context;->createConfigurationContext(Landroid/content/res/Configuration;)Landroid/content/Context;

    move-result-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dt(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "KSApiWebView context not except--context:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "--classloader:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, "--context2:"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dt(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    const-class p0, Lcom/kwad/sdk/service/a/d;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/service/a/d;

    invoke-interface {p0, v0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dt(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :cond_1
    return-object p0
.end method

.method private init()V
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/utils/bo;->a(Landroid/webkit/WebView;)Landroid/webkit/WebSettings;

    new-instance v0, Lcom/kwad/sdk/core/webview/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/webview/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/webview/c;->ayk:Lcom/kwad/sdk/core/webview/a/a;

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/webview/c;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    return-void
.end method


# virtual methods
.method public destroy()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/c;->release()V

    :cond_0
    return-void
.end method

.method public final release()V
    .locals 2

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/c;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v1, v0, Landroid/view/ViewGroup;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/webview/c;->removeAllViews()V

    invoke-super {p0}, Landroid/webkit/WebView;->destroy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method

.method public setEnableDestroy(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/webview/c;->ayj:Z

    return-void
.end method

.method public setNeedHybridLoad(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/webview/c;->ayk:Lcom/kwad/sdk/core/webview/a/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/a/a;->setNeedHybridLoad(Z)V

    return-void
.end method
