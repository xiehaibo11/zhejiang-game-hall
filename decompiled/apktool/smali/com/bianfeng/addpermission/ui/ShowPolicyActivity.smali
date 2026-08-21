.class public Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;
.super Landroid/app/Dialog;
.source "ShowPolicyActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private cancel_btn:Landroid/widget/ImageView;

.field private context:Landroid/app/Activity;

.field private type:Ljava/lang/String;

.field private webView:Landroid/webkit/WebView;

.field private webViewClient:Landroid/webkit/WebViewClient;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    const-string v0, "R.style.DialogActivityTheme"

    .line 36
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 114
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity$1;-><init>(Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webViewClient:Landroid/webkit/WebViewClient;

    .line 37
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    .line 38
    iput-object p2, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->type:Ljava/lang/String;

    const-string p2, "R.layout.activity_show_policy_v2"

    .line 39
    invoke-static {p1, p2}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->setContentView(I)V

    return-void
.end method

.method private initdata()V
    .locals 5

    .line 79
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 80
    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 81
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-lt v3, v4, :cond_0

    .line 82
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSafeBrowsingEnabled(Z)V

    .line 84
    :cond_0
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 85
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 86
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 87
    sget-object v3, Landroid/webkit/WebSettings$LayoutAlgorithm;->NARROW_COLUMNS:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 88
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 89
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 90
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDisplayZoomControls(Z)V

    .line 91
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 92
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSupportMultipleWindows(Z)V

    .line 93
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 94
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 95
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 96
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 97
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    .line 98
    sget-object v3, Landroid/webkit/WebSettings$TextSize;->NORMAL:Landroid/webkit/WebSettings$TextSize;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setTextSize(Landroid/webkit/WebSettings$TextSize;)V

    const-wide v3, 0x7fffffffffffffffL

    .line 99
    invoke-virtual {v0, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 100
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 101
    sget-object v3, Landroid/webkit/WebSettings$PluginState;->ON_DEMAND:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 102
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 104
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setBackgroundColor(I)V

    .line 105
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setTextZoom(I)V

    .line 106
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    const/4 v1, 0x2

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3}, Landroid/webkit/WebView;->setLayerType(ILandroid/graphics/Paint;)V

    .line 107
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    invoke-virtual {v0, v2}, Landroid/webkit/WebView;->setClickable(Z)V

    .line 108
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 109
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webViewClient:Landroid/webkit/WebViewClient;

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 110
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->type:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->getUrl(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 111
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    invoke-virtual {v1, v0}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method public static openBrowser(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 139
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.VIEW"

    .line 140
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 141
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 144
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->resolveActivity(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 145
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->resolveActivity(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;

    const-string p1, "\u8bf7\u9009\u62e9\u6d4f\u89c8\u5668"

    .line 146
    invoke-static {v0, p1}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    const-string v0, "Toast.makeText(context,\u94fe\u63a5\u9519\u8bef\u6216\u65e0\u6d4f\u89c8\u5668)"

    .line 148
    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    :goto_0
    return-void
.end method

.method public static start(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 43
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    .line 44
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->show()V

    .line 45
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object p0

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->setPolicyDialogShow(Z)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 131
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    .line 132
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    const-string v1, "R.id.dialog_policy_close"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_0

    .line 133
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->dismiss()V

    .line 134
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->setPolicyDialogShow(Z)V

    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6

    .line 56
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 57
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 58
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 59
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    const/4 v2, 0x0

    .line 60
    invoke-virtual {p0, v2}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->setCancelable(Z)V

    .line 61
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    invoke-static {v2}, Lcom/bianfeng/addpermission/common/DensityUtils;->isPortrait(Landroid/app/Activity;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 62
    iget v2, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-double v2, v2

    const-wide/high16 v4, 0x3fe8000000000000L    # 0.75

    mul-double v2, v2, v4

    double-to-int v2, v2

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 63
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-double v1, v1

    const-wide v3, 0x3feb333333333333L    # 0.85

    mul-double v1, v1, v3

    double-to-int v1, v1

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_0

    .line 65
    :cond_0
    iget v2, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-double v2, v2

    const-wide v4, 0x3feccccccccccccdL    # 0.9

    mul-double v2, v2, v4

    double-to-int v2, v2

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 66
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-double v1, v1

    const-wide v3, 0x3fe999999999999aL    # 0.8

    mul-double v1, v1, v3

    double-to-int v1, v1

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 68
    :goto_0
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 69
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    const-string v0, "R.id.dialog_policy_close"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->cancel_btn:Landroid/widget/ImageView;

    .line 73
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 74
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_web"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/webkit/WebView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->webView:Landroid/webkit/WebView;

    .line 75
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->initdata()V

    return-void
.end method
