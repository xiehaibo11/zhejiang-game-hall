.class public final Lcom/tkay/basead/mraid/e;
.super Lcom/tkay/expressad/atsignalcommon/base/b;


# instance fields
.field final a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Lcom/tkay/basead/mraid/b;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 20
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/base/b;-><init>()V

    .line 15
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/mraid/e;->a:Ljava/lang/String;

    .line 21
    iput-object p1, p0, Lcom/tkay/basead/mraid/e;->b:Ljava/lang/String;

    return-void
.end method

.method private a(Lcom/tkay/basead/mraid/b;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/basead/mraid/e;->c:Lcom/tkay/basead/mraid/b;

    return-void
.end method


# virtual methods
.method public final onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 30
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/atsignalcommon/base/b;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 34
    :try_start_0
    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "javascript:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 35
    invoke-static {}, Lcom/tkay/expressad/d/b/a;->a()Lcom/tkay/expressad/d/b/a;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->b()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 37
    sget p3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x13

    if-gt p3, v0, :cond_0

    .line 38
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 40
    :cond_0
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-instance p3, Lcom/tkay/basead/mraid/e$1;

    invoke-direct {p3, p0}, Lcom/tkay/basead/mraid/e$1;-><init>(Lcom/tkay/basead/mraid/e;)V

    invoke-virtual {p1, p2, p3}, Landroid/webkit/WebView;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z
    .locals 0

    .line 53
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/base/b;->shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z

    move-result p1

    return p1
.end method

.method public final shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 1

    .line 60
    :try_start_0
    iget-object p1, p0, Lcom/tkay/basead/mraid/e;->b:Ljava/lang/String;

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    return v0

    .line 67
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/mraid/e;->c:Lcom/tkay/basead/mraid/b;

    if-eqz p1, :cond_1

    .line 68
    iget-object p1, p0, Lcom/tkay/basead/mraid/e;->c:Lcom/tkay/basead/mraid/b;

    invoke-virtual {p1, p2}, Lcom/tkay/basead/mraid/b;->open(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return v0

    :catchall_0
    const/4 p1, 0x0

    return p1
.end method
