.class public Lcom/tkay/core/activity/component/PrivacyPolicyView;
.super Landroid/widget/RelativeLayout;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/activity/component/PrivacyPolicyView$a;
    }
.end annotation


# static fields
.field private static n:Ljava/lang/String;


# instance fields
.field a:Landroid/view/ViewGroup;

.field b:Landroid/widget/LinearLayout;

.field c:Lcom/tkay/core/activity/component/LoadingView;

.field d:Landroid/widget/TextView;

.field e:Landroid/widget/FrameLayout;

.field f:Landroid/webkit/WebView;

.field g:Landroid/widget/CheckBox;

.field h:Landroid/view/View;

.field i:Landroid/widget/TextView;

.field j:Z

.field k:Z

.field l:Ljava/lang/String;

.field m:Lcom/tkay/core/activity/component/PrivacyPolicyView$a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 44
    const-class v0, Lcom/tkay/core/activity/component/PrivacyPolicyView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->n:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 6

    .line 61
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x1

    .line 57
    iput-boolean p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->j:Z

    const/4 v0, 0x0

    .line 58
    iput-boolean v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->k:Z

    .line 1067
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "privace_policy_layout"

    const-string v4, "layout"

    invoke-static {v2, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 1068
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "id"

    const-string v3, "policy_content_view"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    iput-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->a:Landroid/view/ViewGroup;

    .line 1070
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "policy_loading_view"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    iput-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    .line 1071
    new-instance v1, Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Lcom/tkay/core/activity/component/LoadingView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    .line 1072
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41f00000    # 30.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v1, v3, v4}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1073
    iput p1, v1, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 1074
    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {v3, v1}, Lcom/tkay/core/activity/component/LoadingView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1076
    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    .line 1077
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v1, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1078
    iput p1, v1, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 1079
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v1, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 1080
    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1082
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    const-string v3, "Page failed to load, please try again later."

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1083
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    const v3, -0x888889

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setTextColor(I)V

    .line 1084
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    const/high16 v3, 0x41400000    # 12.0f

    invoke-virtual {v1, p1, v3}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 1086
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 1087
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 1090
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    new-instance v3, Lcom/tkay/core/activity/component/PrivacyPolicyView$1;

    invoke-direct {v3, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$1;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1110
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v3, "policy_webview_area"

    invoke-static {v1, v3, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/FrameLayout;

    iput-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->e:Landroid/widget/FrameLayout;

    .line 1113
    new-instance v1, Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    .line 1114
    invoke-static {v1}, Lcom/tkay/core/common/l/g;->a(Landroid/webkit/WebView;)V

    .line 1115
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->e:Landroid/widget/FrameLayout;

    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v4, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v5}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v3, v4}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1141
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 1143
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 1144
    invoke-virtual {v1, p1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 1146
    invoke-virtual {v1, p1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 1147
    invoke-virtual {v1, p1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 1148
    invoke-virtual {v1, p1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 1149
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 1150
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 1151
    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 1153
    sget-object v0, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 1154
    sget-object v0, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 1155
    sget-object v0, Landroid/webkit/WebSettings$LayoutAlgorithm;->NORMAL:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 1163
    invoke-virtual {v1, p1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 1164
    invoke-virtual {v1, p1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 1167
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v0, Lcom/tkay/core/activity/component/PrivacyPolicyView$2;

    invoke-direct {v0, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$2;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 1232
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v0, Lcom/tkay/core/activity/component/PrivacyPolicyView$3;

    invoke-direct {v0, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$3;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 1118
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "policy_check_box"

    invoke-static {p1, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->g:Landroid/widget/CheckBox;

    .line 1119
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "policy_agree_view"

    invoke-static {p1, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    .line 1120
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "policy_reject_view"

    invoke-static {p1, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    .line 1122
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1123
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1125
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object p1

    const/high16 v0, 0x41a00000    # 20.0f

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p1

    .line 1126
    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const v1, -0xcd920c

    .line 1128
    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float p1, p1

    .line 1133
    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 1134
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 1136
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    const-string v0, "<u>No,Thanks</u>"

    invoke-static {v0}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 43
    sget-object v0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->n:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 2279
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.VIEW"

    .line 2280
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 2281
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    .line 2282
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 2283
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 2284
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private b()V
    .locals 6

    .line 67
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "privace_policy_layout"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 68
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "policy_content_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->a:Landroid/view/ViewGroup;

    .line 70
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "policy_loading_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    .line 71
    new-instance v0, Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/tkay/core/activity/component/LoadingView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    .line 72
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41f00000    # 30.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v2, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const/4 v2, 0x1

    .line 73
    iput v2, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 74
    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {v3, v0}, Lcom/tkay/core/activity/component/LoadingView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 76
    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    .line 77
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v0, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 78
    iput v2, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 79
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-static {v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v3

    iput v3, v0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 80
    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 82
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    const-string v3, "Page failed to load, please try again later."

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 83
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    const v3, -0x888889

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setTextColor(I)V

    .line 84
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    const/high16 v3, 0x41400000    # 12.0f

    invoke-virtual {v0, v2, v3}, Landroid/widget/TextView;->setTextSize(IF)V

    .line 86
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 87
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 90
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    new-instance v3, Lcom/tkay/core/activity/component/PrivacyPolicyView$1;

    invoke-direct {v3, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$1;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 110
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "policy_webview_area"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->e:Landroid/widget/FrameLayout;

    .line 113
    new-instance v0, Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    .line 114
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Landroid/webkit/WebView;)V

    .line 115
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->e:Landroid/widget/FrameLayout;

    iget-object v3, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v4, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v5}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v3, v4}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 2141
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v3, 0x0

    .line 2143
    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 2144
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 2146
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 2147
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 2148
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 2149
    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 2150
    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 2151
    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 2153
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 2154
    sget-object v3, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 2155
    sget-object v3, Landroid/webkit/WebSettings$LayoutAlgorithm;->NORMAL:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 2163
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 2164
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 2167
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v2, Lcom/tkay/core/activity/component/PrivacyPolicyView$2;

    invoke-direct {v2, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$2;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {v0, v2}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 2232
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v2, Lcom/tkay/core/activity/component/PrivacyPolicyView$3;

    invoke-direct {v2, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$3;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {v0, v2}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 118
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "policy_check_box"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->g:Landroid/widget/CheckBox;

    .line 119
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "policy_agree_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    .line 120
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "policy_reject_view"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    .line 122
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 123
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 125
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41a00000    # 20.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    .line 126
    new-instance v1, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v1}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    const v2, -0xcd920c

    .line 128
    invoke-virtual {v1, v2}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    int-to-float v0, v0

    .line 133
    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    .line 134
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 136
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    const-string v1, "<u>No,Thanks</u>"

    invoke-static {v1}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private static b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 279
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.VIEW"

    .line 280
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 281
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    .line 282
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 283
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 284
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private c()V
    .locals 3

    .line 141
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 143
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    const/4 v2, 0x1

    .line 144
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    .line 146
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 147
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 148
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 149
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 150
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 151
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 153
    sget-object v1, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 154
    sget-object v1, Landroid/webkit/WebSettings$PluginState;->ON:Landroid/webkit/WebSettings$PluginState;

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setPluginState(Landroid/webkit/WebSettings$PluginState;)V

    .line 155
    sget-object v1, Landroid/webkit/WebSettings$LayoutAlgorithm;->NORMAL:Landroid/webkit/WebSettings$LayoutAlgorithm;

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLayoutAlgorithm(Landroid/webkit/WebSettings$LayoutAlgorithm;)V

    .line 163
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 164
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 167
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/activity/component/PrivacyPolicyView$2;

    invoke-direct {v1, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$2;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 232
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/activity/component/PrivacyPolicyView$3;

    invoke-direct {v1, p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView$3;-><init>(Lcom/tkay/core/activity/component/PrivacyPolicyView;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 290
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->removeAllViews()V

    .line 292
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->a:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 293
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 296
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->e:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_1

    .line 297
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->e:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 298
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->removeAllViews()V

    .line 301
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 302
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->clearHistory()V

    .line 303
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->clearCache(Z)V

    .line 307
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->destroy()V

    const/4 v0, 0x0

    .line 308
    iput-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method public loadPolicyUrl(Ljava/lang/String;)V
    .locals 3

    .line 248
    iget-boolean v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->k:Z

    if-eqz v0, :cond_0

    return-void

    .line 252
    :cond_0
    iput-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->l:Ljava/lang/String;

    .line 253
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result p1

    const/16 v0, 0x8

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    const/4 p1, 0x1

    .line 254
    iput-boolean p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->j:Z

    .line 255
    iget-object v2, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 256
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {v1}, Lcom/tkay/core/activity/component/LoadingView;->clearAnimation()V

    .line 257
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {v1}, Lcom/tkay/core/activity/component/LoadingView;->startAnimation()V

    .line 258
    iget-object v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    .line 259
    iput-boolean p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->k:Z

    .line 260
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->l:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 261
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->reload()V

    return-void

    .line 263
    :cond_1
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->f:Landroid/webkit/WebView;

    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->l:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 266
    :cond_2
    iput-boolean v1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->j:Z

    .line 267
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->b:Landroid/widget/LinearLayout;

    invoke-virtual {p1, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 268
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->c:Lcom/tkay/core/activity/component/LoadingView;

    invoke-virtual {p1}, Lcom/tkay/core/activity/component/LoadingView;->clearAnimation()V

    .line 269
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->d:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 270
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->a:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 271
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->m:Lcom/tkay/core/activity/component/PrivacyPolicyView$a;

    if-eqz p1, :cond_3

    .line 272
    invoke-interface {p1}, Lcom/tkay/core/activity/component/PrivacyPolicyView$a;->onPageLoadFail()V

    :cond_3
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 326
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->h:Landroid/view/View;

    if-ne p1, v0, :cond_0

    .line 327
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tkay/core/api/TYSDK;->setGDPRUploadDataLevel(Landroid/content/Context;I)V

    .line 328
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 329
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->m:Lcom/tkay/core/activity/component/PrivacyPolicyView$a;

    if-eqz p1, :cond_1

    .line 330
    invoke-interface {p1, v1}, Lcom/tkay/core/activity/component/PrivacyPolicyView$a;->onLevelSelect(I)V

    return-void

    .line 332
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->i:Landroid/widget/TextView;

    if-ne p1, v0, :cond_1

    .line 333
    invoke-virtual {p0}, Lcom/tkay/core/activity/component/PrivacyPolicyView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tkay/core/api/TYSDK;->setGDPRUploadDataLevel(Landroid/content/Context;I)V

    .line 334
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 335
    iget-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->m:Lcom/tkay/core/activity/component/PrivacyPolicyView$a;

    if-eqz p1, :cond_1

    .line 336
    invoke-interface {p1, v1}, Lcom/tkay/core/activity/component/PrivacyPolicyView$a;->onLevelSelect(I)V

    :cond_1
    return-void
.end method

.method public setResultCallbackListener(Lcom/tkay/core/activity/component/PrivacyPolicyView$a;)V
    .locals 0

    .line 321
    iput-object p1, p0, Lcom/tkay/core/activity/component/PrivacyPolicyView;->m:Lcom/tkay/core/activity/component/PrivacyPolicyView$a;

    return-void
.end method
