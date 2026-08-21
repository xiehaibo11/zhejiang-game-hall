.class public Lcom/sigmob/sdk/base/common/u;
.super Lcom/sigmob/sdk/base/common/i;


# instance fields
.field f:Lcom/sigmob/sdk/base/views/e;

.field private g:I

.field private h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private i:Landroid/widget/RelativeLayout;

.field private j:Landroid/widget/TextView;

.field private k:Landroid/widget/ImageView;

.field private l:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 0

    invoke-direct {p0, p1, p5, p6}, Lcom/sigmob/sdk/base/common/i;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz p3, :cond_0

    const-string p1, "land_page_url"

    invoke-virtual {p3, p1}, Landroid/os/Bundle;->getSerializable(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object p1

    instance-of p2, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz p2, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    const/4 p2, 0x1

    if-eq p1, p2, :cond_2

    const/4 p2, 0x2

    if-eq p1, p2, :cond_1

    const/4 p1, 0x3

    const-string p2, "REQUESTED_ORIENTATION"

    invoke-virtual {p3, p2, p1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p1

    goto :goto_0

    :cond_1
    const/4 p1, 0x6

    goto :goto_0

    :cond_2
    const/4 p1, 0x7

    :goto_0
    iput p1, p0, Lcom/sigmob/sdk/base/common/u;->g:I

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result p1

    const/4 p2, 0x5

    if-eq p1, p2, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    iget p2, p0, Lcom/sigmob/sdk/base/common/u;->g:I

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/base/common/j;->a(I)V

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->k()Landroid/app/Activity;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/app/Activity;->requestWindowFeature(I)Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->k()Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 p2, 0x400

    invoke-virtual {p1, p2}, Landroid/view/Window;->addFlags(I)V

    goto :goto_1

    :cond_4
    const-string p1, "com.sigmob.action.interstitial.fail"

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/u;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/u;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/u;->l:Ljava/lang/String;

    return-object p1
.end method

.method private a()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    :try_start_0
    new-instance v0, Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->k()Landroid/app/Activity;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/base/views/e;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/e;->setScrollBarStyle(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/e;->setAdUnit(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    new-instance v2, Lcom/sigmob/sdk/base/common/u$1;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/common/u$1;-><init>(Lcom/sigmob/sdk/base/common/u;)V

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/e;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    new-instance v2, Lcom/sigmob/sdk/base/common/u$2;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/common/u$2;-><init>(Lcom/sigmob/sdk/base/common/u;)V

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/e;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->d:Lcom/sigmob/sdk/base/common/j;

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    :goto_0
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v0, v2, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    new-instance v2, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->k()Landroid/app/Activity;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v2, v3, v1, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->d:Lcom/sigmob/sdk/base/common/j;

    invoke-interface {v0, v2}, Lcom/sigmob/sdk/base/common/j;->onSetContentView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    new-instance v1, Lcom/sigmob/sdk/base/common/u$3;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/common/u$3;-><init>(Lcom/sigmob/sdk/base/common/u;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/e;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    new-instance v1, Lcom/sigmob/sdk/base/common/u$4;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/common/u$4;-><init>(Lcom/sigmob/sdk/base/common/u;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/e;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/common/u$5;

    invoke-direct {v0, p0, p4}, Lcom/sigmob/sdk/base/common/u$5;-><init>(Lcom/sigmob/sdk/base/common/u;Ljava/lang/String;)V

    invoke-static {p2, p1, p3, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/common/u;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/u;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/common/u;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/u;->j:Landroid/widget/TextView;

    return-object p0
.end method

.method private l()V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->i:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_0

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/high16 v3, 0x41a00000    # 20.0f

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/u;->b:Landroid/content/Context;

    invoke-static {v3, v4}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v3

    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v4, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0xf

    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v5, 0x9

    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/lit8 v3, v3, 0x2

    const/4 v5, 0x0

    invoke-virtual {v4, v3, v3, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    new-instance v3, Landroid/widget/ImageView;

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/u;->b:Landroid/content/Context;

    invoke-direct {v3, v5}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v3, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    sget-object v5, Lcom/sigmob/sdk/base/views/o;->h:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v5

    invoke-virtual {v3, v5}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    sget-object v5, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v3, v5}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    const/4 v5, 0x1

    invoke-virtual {v3, v5}, Landroid/widget/ImageView;->setClickable(Z)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/widget/ImageView;->setId(I)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    new-instance v5, Lcom/sigmob/sdk/base/common/u$6;

    invoke-direct {v5, p0}, Lcom/sigmob/sdk/base/common/u$6;-><init>(Lcom/sigmob/sdk/base/common/u;)V

    invoke-virtual {v3, v5}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v3, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->i()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v3, v5}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v3, p0, Lcom/sigmob/sdk/base/common/u;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->i:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    invoke-virtual {v0, v1, v4}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/TextView;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/u;->j:Landroid/widget/TextView;

    const/high16 v1, -0x1000000

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->j:Landroid/widget/TextView;

    const/high16 v1, 0x41900000    # 18.0f

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->j:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->i:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/u;->j:Landroid/widget/TextView;

    invoke-virtual {v1, v2, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private m()V
    .locals 3

    new-instance v0, Landroid/app/ActionBar$LayoutParams;

    const/4 v1, -0x1

    const/16 v2, 0x11

    invoke-direct {v0, v1, v1, v2}, Landroid/app/ActionBar$LayoutParams;-><init>(III)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->k()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Activity;->getActionBar()Landroid/app/ActionBar;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/u;->l()V

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/u;->i:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, v2, v0}, Landroid/app/ActionBar;->setCustomView(Landroid/view/View;Landroid/app/ActionBar$LayoutParams;)V

    const/16 v0, 0x10

    invoke-virtual {v1, v0}, Landroid/app/ActionBar;->setDisplayOptions(I)V

    const/4 v0, 0x1

    invoke-virtual {v1, v0}, Landroid/app/ActionBar;->setDisplayShowCustomEnabled(Z)V

    const/4 v0, 0x0

    invoke-virtual {v1, v0}, Landroid/app/ActionBar;->setDisplayShowHomeEnabled(Z)V

    invoke-virtual {v1, v0}, Landroid/app/ActionBar;->setDisplayShowTitleEnabled(Z)V

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Landroid/content/res/Configuration;)V
    .locals 0

    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public b()V
    .locals 3

    invoke-static {}, Lcom/sigmob/sdk/base/d;->c()I

    move-result v0

    if-lez v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/u;->k()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Activity;->getTheme()Landroid/content/res/Resources$Theme;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v0, v2}, Landroid/content/res/Resources$Theme;->applyStyle(IZ)V

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/u;->m()V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/u;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->macroProcess(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLandUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->h:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLandUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/e;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/e;->loadUrl(Ljava/lang/String;)V

    :goto_0
    const-string v0, "com.sigmob.action.loadpage.show"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/common/u;->a(Ljava/lang/String;)V

    return-void
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method public d()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->resumeTimers()V

    :cond_0
    return-void
.end method

.method public e()V
    .locals 2

    const-string v0, "com.sigmob.action.loadpage.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/common/u;->a(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/common/u;->k:Landroid/widget/ImageView;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->destroy()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    :cond_1
    invoke-super {p0}, Lcom/sigmob/sdk/base/common/i;->e()V

    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/u;->f:Lcom/sigmob/sdk/base/views/e;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/e;->goBack()V

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method
