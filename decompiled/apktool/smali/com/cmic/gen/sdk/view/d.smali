.class public Lcom/cmic/gen/sdk/view/d;
.super Landroid/app/Dialog;
.source "ServerClauseDialog.java"


# instance fields
.field private a:Landroid/webkit/WebView;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Landroid/widget/LinearLayout;


# direct methods
.method public constructor <init>(Landroid/content/Context;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 30
    invoke-direct {p0, p1, p2}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 32
    :try_start_0
    iput-object p3, p0, Lcom/cmic/gen/sdk/view/d;->c:Ljava/lang/String;

    .line 33
    iput-object p4, p0, Lcom/cmic/gen/sdk/view/d;->b:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 36
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/view/d;)Landroid/webkit/WebView;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    return-object p0
.end method

.method private c()Landroid/view/ViewGroup;
    .locals 10

    .line 71
    :try_start_0
    new-instance v0, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    const/4 v1, 0x1

    .line 72
    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 73
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 74
    iget-object v2, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v0}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 75
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v0

    .line 76
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseLayoutResID()I

    move-result v2

    .line 77
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/d;->c:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    sget-object v3, Lcom/cmic/gen/sdk/c;->d:[Ljava/lang/String;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getAppLanguageType()I

    move-result v4

    aget-object v3, v3, v4

    goto :goto_0

    :cond_0
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/d;->c:Ljava/lang/String;

    :goto_0
    move-object v8, v3

    if-eq v2, v1, :cond_2

    .line 79
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v1

    .line 80
    iget-object v3, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v5

    .line 81
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v4

    const v6, 0x111111

    const/4 v7, 0x0

    const/4 v9, 0x0

    invoke-static/range {v4 .. v9}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;Landroid/view/View;IILjava/lang/String;Landroid/view/View$OnClickListener;)Landroid/widget/RelativeLayout;

    move-result-object v1

    .line 86
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getClauseLayoutReturnID()Ljava/lang/String;

    move-result-object v0

    .line 87
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 88
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v0}, Lcom/cmic/gen/sdk/view/c;->a(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 90
    new-instance v2, Lcom/cmic/gen/sdk/view/d$1;

    invoke-direct {v2, p0}, Lcom/cmic/gen/sdk/view/d$1;-><init>(Lcom/cmic/gen/sdk/view/d;)V

    invoke-virtual {v0, v2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 99
    :cond_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    goto :goto_1

    .line 101
    :cond_2
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v4

    const/4 v5, 0x0

    const v6, 0x111111

    const v7, 0x222222

    new-instance v9, Lcom/cmic/gen/sdk/view/d$2;

    invoke-direct {v9, p0}, Lcom/cmic/gen/sdk/view/d$2;-><init>(Lcom/cmic/gen/sdk/view/d;)V

    invoke-static/range {v4 .. v9}, Lcom/cmic/gen/sdk/view/e;->a(Landroid/content/Context;Landroid/view/View;IILjava/lang/String;Landroid/view/View$OnClickListener;)Landroid/widget/RelativeLayout;

    move-result-object v0

    .line 112
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    invoke-virtual {v1, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 115
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 118
    :goto_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    return-object v0
.end method

.method private d()V
    .locals 3

    .line 150
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v0

    .line 151
    new-instance v1, Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    .line 152
    invoke-virtual {v1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    const/4 v2, 0x0

    .line 153
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 154
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setAllowContentAccess(Z)V

    .line 155
    invoke-virtual {v1, v2}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 156
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getWebStorage()Z

    move-result v0

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    const/4 v0, 0x1

    .line 157
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 158
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 159
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    invoke-virtual {v1, v2, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 162
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-ge v0, v1, :cond_0

    .line 163
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    const-string v1, "searchBoxJavaBridge_"

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 164
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    const-string v1, "accessibility"

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 165
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    const-string v1, "accessibilityTraversal"

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 167
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    new-instance v1, Landroid/webkit/WebViewClient;

    invoke-direct {v1}, Landroid/webkit/WebViewClient;-><init>()V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 169
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    iget-object v1, p0, Lcom/cmic/gen/sdk/view/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 4

    const/4 v0, 0x1

    .line 41
    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/view/d;->requestWindowFeature(I)Z

    .line 42
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFeatureDrawableAlpha(II)V

    .line 43
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getInstance(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->getAuthThemeConfig()Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;

    move-result-object v0

    .line 44
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x15

    if-lt v2, v3, :cond_0

    .line 49
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getStatusBarColor()I

    move-result v2

    if-eqz v2, :cond_0

    .line 50
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v2

    const/high16 v3, -0x80000000

    invoke-virtual {v2, v3}, Landroid/view/Window;->addFlags(I)V

    .line 51
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v2

    const/high16 v3, 0x4000000

    invoke-virtual {v2, v3}, Landroid/view/Window;->clearFlags(I)V

    .line 52
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v2

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getStatusBarColor()I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/Window;->setStatusBarColor(I)V

    .line 53
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v2

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->getStatusBarColor()I

    move-result v3

    invoke-virtual {v2, v3}, Landroid/view/Window;->setNavigationBarColor(I)V

    .line 57
    :cond_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x17

    if-lt v2, v3, :cond_2

    .line 58
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenAuthThemeConfig;->isLightColor()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 59
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x2000

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    goto :goto_0

    .line 61
    :cond_1
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 64
    :cond_2
    :goto_0
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/d;->c()Landroid/view/ViewGroup;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/cmic/gen/sdk/view/d;->setContentView(Landroid/view/View;)V

    return-void
.end method

.method public b()V
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 131
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->goBack()V

    goto :goto_0

    .line 133
    :cond_0
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->dismiss()V

    :goto_0
    return-void
.end method

.method public dismiss()V
    .locals 1

    .line 123
    invoke-super {p0}, Landroid/app/Dialog;->dismiss()V

    .line 124
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 125
    invoke-virtual {v0}, Landroid/webkit/WebView;->stopLoading()V

    :cond_0
    return-void
.end method

.method public show()V
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->d:Landroid/widget/LinearLayout;

    if-nez v0, :cond_0

    .line 140
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/d;->a()V

    .line 142
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/d;->a:Landroid/webkit/WebView;

    if-nez v0, :cond_1

    .line 143
    invoke-direct {p0}, Lcom/cmic/gen/sdk/view/d;->d()V

    .line 146
    :cond_1
    invoke-super {p0}, Landroid/app/Dialog;->show()V

    return-void
.end method
