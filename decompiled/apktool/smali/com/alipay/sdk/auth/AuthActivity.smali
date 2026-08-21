.class public Lcom/alipay/sdk/auth/AuthActivity;
.super Landroid/app/Activity;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/auth/AuthActivity$a;,
        Lcom/alipay/sdk/auth/AuthActivity$b;,
        Lcom/alipay/sdk/auth/AuthActivity$c;
    }
.end annotation


# static fields
.field static final a:Ljava/lang/String; = "params"

.field static final b:Ljava/lang/String; = "redirectUri"


# instance fields
.field private c:Landroid/webkit/WebView;

.field private d:Ljava/lang/String;

.field private e:Lcom/alipay/sdk/widget/a;

.field private f:Landroid/os/Handler;

.field private g:Z

.field private h:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method

.method private a()V
    .locals 2

    .line 380
    :try_start_0
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->e:Lcom/alipay/sdk/widget/a;

    if-nez v0, :cond_0

    .line 381
    new-instance v0, Lcom/alipay/sdk/widget/a;

    const-string v1, "\u6b63\u5728\u52a0\u8f7d"

    invoke-direct {v0, p0, v1}, Lcom/alipay/sdk/widget/a;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->e:Lcom/alipay/sdk/widget/a;

    .line 383
    :cond_0
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->e:Lcom/alipay/sdk/widget/a;

    invoke-virtual {v0}, Lcom/alipay/sdk/widget/a;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    .line 385
    iput-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->e:Lcom/alipay/sdk/widget/a;

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/alipay/sdk/auth/AuthActivity;Lcom/alipay/sdk/authjs/a;)V
    .locals 0

    .line 53
    invoke-direct {p0, p1}, Lcom/alipay/sdk/auth/AuthActivity;->a(Lcom/alipay/sdk/authjs/a;)V

    return-void
.end method

.method private a(Lcom/alipay/sdk/authjs/a;)V
    .locals 3

    .line 334
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 339
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/alipay/sdk/authjs/a;->g()Ljava/lang/String;

    move-result-object p1

    const-string v0, "AlipayJSBridge._invokeJS(%s)"

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    .line 343
    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 345
    new-instance v0, Lcom/alipay/sdk/auth/c;

    invoke-direct {v0, p0, p1}, Lcom/alipay/sdk/auth/c;-><init>(Lcom/alipay/sdk/auth/AuthActivity;Ljava/lang/String;)V

    .line 355
    invoke-virtual {p0, v0}, Lcom/alipay/sdk/auth/AuthActivity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    const-string v0, "msp"

    .line 357
    invoke-static {v0, p1}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/alipay/sdk/auth/AuthActivity;)Z
    .locals 0

    .line 53
    iget-boolean p0, p0, Lcom/alipay/sdk/auth/AuthActivity;->g:Z

    return p0
.end method

.method static synthetic a(Lcom/alipay/sdk/auth/AuthActivity;Ljava/lang/String;)Z
    .locals 0

    .line 53
    invoke-direct {p0, p1}, Lcom/alipay/sdk/auth/AuthActivity;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/alipay/sdk/auth/AuthActivity;Z)Z
    .locals 0

    .line 53
    iput-boolean p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->h:Z

    return p1
.end method

.method private a(Ljava/lang/String;)Z
    .locals 2

    .line 303
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const-string v0, "http://"

    .line 306
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "https://"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "SDKLite://h5quit"

    .line 310
    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 311
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->d:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 312
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?resultCode=150"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 314
    :cond_2
    invoke-static {p0, p1}, Lcom/alipay/sdk/auth/g;->a(Landroid/app/Activity;Ljava/lang/String;)V

    .line 316
    :cond_3
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    const/4 p1, 0x1

    return p1

    :cond_4
    :goto_0
    return v1
.end method

.method static synthetic b(Lcom/alipay/sdk/auth/AuthActivity;)Ljava/lang/String;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/alipay/sdk/auth/AuthActivity;->d:Ljava/lang/String;

    return-object p0
.end method

.method private b()V
    .locals 1

    .line 390
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->e:Lcom/alipay/sdk/widget/a;

    if-eqz v0, :cond_0

    .line 391
    invoke-virtual {v0}, Lcom/alipay/sdk/widget/a;->c()V

    :cond_0
    const/4 v0, 0x0

    .line 393
    iput-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->e:Lcom/alipay/sdk/widget/a;

    return-void
.end method

.method static synthetic b(Lcom/alipay/sdk/auth/AuthActivity;Ljava/lang/String;)V
    .locals 0

    .line 53
    invoke-direct {p0, p1}, Lcom/alipay/sdk/auth/AuthActivity;->b(Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 3

    .line 321
    new-instance v0, Lcom/alipay/sdk/authjs/d;

    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Lcom/alipay/sdk/auth/b;

    invoke-direct {v2, p0}, Lcom/alipay/sdk/auth/b;-><init>(Lcom/alipay/sdk/auth/AuthActivity;)V

    invoke-direct {v0, v1, v2}, Lcom/alipay/sdk/authjs/d;-><init>(Landroid/content/Context;Lcom/alipay/sdk/authjs/c;)V

    .line 329
    invoke-virtual {v0, p1}, Lcom/alipay/sdk/authjs/d;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/alipay/sdk/auth/AuthActivity;Z)Z
    .locals 0

    .line 53
    iput-boolean p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->g:Z

    return p1
.end method

.method static synthetic c(Lcom/alipay/sdk/auth/AuthActivity;)V
    .locals 0

    .line 53
    invoke-direct {p0}, Lcom/alipay/sdk/auth/AuthActivity;->a()V

    return-void
.end method

.method static synthetic d(Lcom/alipay/sdk/auth/AuthActivity;)Landroid/os/Handler;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/alipay/sdk/auth/AuthActivity;->f:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic e(Lcom/alipay/sdk/auth/AuthActivity;)V
    .locals 0

    .line 53
    invoke-direct {p0}, Lcom/alipay/sdk/auth/AuthActivity;->b()V

    return-void
.end method

.method static synthetic f(Lcom/alipay/sdk/auth/AuthActivity;)Landroid/webkit/WebView;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    return-object p0
.end method


# virtual methods
.method public onBackPressed()V
    .locals 3

    .line 171
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    const-string v1, "?resultCode=150"

    if-eqz v0, :cond_1

    .line 172
    iget-boolean v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->h:Z

    if-eqz v0, :cond_0

    .line 173
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/alipay/sdk/auth/AuthActivity;->d:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 174
    invoke-static {p0, v0}, Lcom/alipay/sdk/auth/g;->a(Landroid/app/Activity;Ljava/lang/String;)V

    .line 175
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    :cond_0
    return-void

    .line 180
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/alipay/sdk/auth/AuthActivity;->d:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 181
    invoke-static {p0, v0}, Lcom/alipay/sdk/auth/g;->a(Landroid/app/Activity;Ljava/lang/String;)V

    .line 182
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 398
    invoke-super {p0, p1}, Landroid/app/Activity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 8

    const-string v0, "accessibilityTraversal"

    const-string v1, "accessibility"

    const-string v2, "searchBoxJavaBridge_"

    .line 68
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 71
    :try_start_0
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-nez p1, :cond_0

    .line 77
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    return-void

    :cond_0
    :try_start_1
    const-string v3, "redirectUri"

    .line 82
    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/alipay/sdk/auth/AuthActivity;->d:Ljava/lang/String;

    const-string v3, "params"

    .line 83
    invoke-virtual {p1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 88
    invoke-static {p1}, Lcom/alipay/sdk/util/n;->f(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 90
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    return-void

    :cond_1
    const/4 v3, 0x1

    .line 94
    invoke-super {p0, v3}, Landroid/app/Activity;->requestWindowFeature(I)Z

    .line 95
    new-instance v4, Landroid/os/Handler;

    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->getMainLooper()Landroid/os/Looper;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->f:Landroid/os/Handler;

    .line 97
    new-instance v4, Landroid/widget/LinearLayout;

    invoke-direct {v4, p0}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 98
    new-instance v5, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v6, -0x1

    invoke-direct {v5, v6, v6}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 99
    invoke-virtual {v4, v3}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 100
    invoke-virtual {p0, v4, v5}, Lcom/alipay/sdk/auth/AuthActivity;->setContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 102
    new-instance v6, Landroid/webkit/WebView;

    invoke-direct {v6, p0}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    iput-object v6, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    const/high16 v6, 0x3f800000    # 1.0f

    .line 103
    iput v6, v5, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 104
    iget-object v6, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    const/4 v7, 0x0

    invoke-virtual {v6, v7}, Landroid/webkit/WebView;->setVisibility(I)V

    .line 105
    iget-object v6, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v4, v6, v5}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 107
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v4}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v4

    .line 108
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/alipay/sdk/util/n;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/webkit/WebSettings;->setUserAgentString(Ljava/lang/String;)V

    .line 109
    sget-object v5, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v4, v5}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 110
    invoke-virtual {v4, v3}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 111
    invoke-virtual {v4, v3}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 112
    invoke-virtual {v4, v7}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 113
    invoke-virtual {v4, v3}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 114
    invoke-virtual {v4}, Landroid/webkit/WebSettings;->getMinimumFontSize()I

    move-result v5

    add-int/lit8 v5, v5, 0x8

    invoke-virtual {v4, v5}, Landroid/webkit/WebSettings;->setMinimumFontSize(I)V

    .line 115
    invoke-virtual {v4, v7}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 116
    invoke-virtual {v4, v7}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    .line 117
    invoke-virtual {v4, v7}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    .line 118
    invoke-virtual {v4, v7}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    .line 119
    sget-object v5, Landroid/webkit/WebSettings$TextSize;->NORMAL:Landroid/webkit/WebSettings$TextSize;

    invoke-virtual {v4, v5}, Landroid/webkit/WebSettings;->setTextSize(Landroid/webkit/WebSettings$TextSize;)V

    .line 120
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v4, v3}, Landroid/webkit/WebView;->setVerticalScrollbarOverlay(Z)V

    .line 121
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    new-instance v5, Lcom/alipay/sdk/auth/AuthActivity$c;

    const/4 v6, 0x0

    invoke-direct {v5, p0, v6}, Lcom/alipay/sdk/auth/AuthActivity$c;-><init>(Lcom/alipay/sdk/auth/AuthActivity;Lcom/alipay/sdk/auth/a;)V

    invoke-virtual {v4, v5}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 122
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    new-instance v5, Lcom/alipay/sdk/auth/AuthActivity$b;

    invoke-direct {v5, p0, v6}, Lcom/alipay/sdk/auth/AuthActivity$b;-><init>(Lcom/alipay/sdk/auth/AuthActivity;Lcom/alipay/sdk/auth/a;)V

    invoke-virtual {v4, v5}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 123
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    new-instance v5, Lcom/alipay/sdk/auth/a;

    invoke-direct {v5, p0}, Lcom/alipay/sdk/auth/a;-><init>(Lcom/alipay/sdk/auth/AuthActivity;)V

    invoke-virtual {v4, v5}, Landroid/webkit/WebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 138
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v4, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 140
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v4, 0x7

    if-lt p1, v4, :cond_2

    .line 142
    :try_start_2
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    const-string v4, "setDomStorageEnabled"

    new-array v5, v3, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v7

    invoke-virtual {p1, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 144
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v4}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v4

    new-array v5, v3, [Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v5, v7

    invoke-virtual {p1, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    .line 150
    :catch_0
    :cond_2
    :try_start_3
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {p1, v2}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 151
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {p1, v1}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 152
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    .line 155
    :catchall_0
    :try_start_4
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    const-string v4, "removeJavascriptInterface"

    new-array v5, v7, [Ljava/lang/Class;

    invoke-virtual {p1, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 157
    iget-object v4, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    new-array v5, v3, [Ljava/lang/Object;

    aput-object v2, v5, v7

    invoke-virtual {p1, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 158
    iget-object v2, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    new-array v4, v3, [Ljava/lang/Object;

    aput-object v1, v4, v7

    invoke-virtual {p1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 159
    iget-object v1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    new-array v2, v3, [Ljava/lang/Object;

    aput-object v0, v2, v7

    invoke-virtual {p1, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_0

    :catchall_1
    nop

    .line 164
    :cond_3
    :goto_0
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x13

    if-lt p1, v0, :cond_4

    .line 165
    iget-object p1, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    invoke-virtual {p1, v3}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    :cond_4
    return-void

    .line 85
    :catch_1
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    return-void

    .line 73
    :catch_2
    invoke-virtual {p0}, Lcom/alipay/sdk/auth/AuthActivity;->finish()V

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 403
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 404
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 405
    invoke-virtual {v0}, Landroid/webkit/WebView;->removeAllViews()V

    .line 408
    :try_start_0
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->destroy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const/4 v0, 0x0

    .line 411
    iput-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity;->c:Landroid/webkit/WebView;

    :cond_0
    return-void
.end method
