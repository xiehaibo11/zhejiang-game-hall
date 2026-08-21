.class public Lcom/sigmob/sdk/base/views/q;
.super Landroid/app/Dialog;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;
.implements Landroid/content/DialogInterface$OnShowListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/views/q$a;,
        Lcom/sigmob/sdk/base/views/q$b;
    }
.end annotation


# instance fields
.field private a:Lcom/sigmob/sdk/base/views/q$b;

.field private b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:Landroid/content/Context;

.field private d:Landroid/view/Window;

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:Lcom/sigmob/sdk/base/views/i;

.field private j:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private k:Z

.field private l:Landroid/widget/ImageView;

.field private m:Ljava/lang/String;

.field private n:Ljava/io/File;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/base/d;->e()I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/q;->d:Landroid/view/Window;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/q;->k:Z

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/q;->j:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/q;->b()Lcom/sigmob/sdk/base/views/i;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/q;->d()Landroid/widget/ImageView;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p1, p0, Lcom/sigmob/sdk/base/views/q;->g:I

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->heightPixels:I

    iput p1, p0, Lcom/sigmob/sdk/base/views/q;->h:I

    iget p2, p0, Lcom/sigmob/sdk/base/views/q;->g:I

    if-le p1, p2, :cond_0

    mul-int/lit8 p1, p1, 0x1

    div-int/lit8 p1, p1, 0x2

    iput p1, p0, Lcom/sigmob/sdk/base/views/q;->e:I

    iput p2, p0, Lcom/sigmob/sdk/base/views/q;->f:I

    goto :goto_0

    :cond_0
    mul-int/lit8 p2, p1, 0x5

    div-int/lit8 p2, p2, 0x6

    iput p2, p0, Lcom/sigmob/sdk/base/views/q;->e:I

    iput p1, p0, Lcom/sigmob/sdk/base/views/q;->f:I

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q$b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/q;->a:Lcom/sigmob/sdk/base/views/q$b;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/q;->j:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method private d()Landroid/widget/ImageView;
    .locals 2

    new-instance v0, Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    sget-object v1, Lcom/sigmob/sdk/base/views/o;->e:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    const/16 v1, 0x7f

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageAlpha(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setClickable(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    new-instance v1, Lcom/sigmob/sdk/base/views/q$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/q$1;-><init>(Lcom/sigmob/sdk/base/views/q;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    return-object v0
.end method

.method private e()V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/q;->getWindow()Landroid/view/Window;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/q;->d:Landroid/view/Window;

    if-eqz v0, :cond_1

    const/16 v1, 0x50

    invoke-virtual {v0, v1}, Landroid/view/Window;->setGravity(I)V

    invoke-static {}, Lcom/sigmob/sdk/base/d;->f()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q;->d:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setWindowAnimations(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->d:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->d:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/sdk/base/views/q;->f:I

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    iget v1, p0, Lcom/sigmob/sdk/base/views/q;->e:I

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q;->d:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/views/q$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/q;->a:Lcom/sigmob/sdk/base/views/q$b;

    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/q;->k:Z

    return v0
.end method

.method public b()Lcom/sigmob/sdk/base/views/i;
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->j:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    if-eqz v1, :cond_2

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_info_url:Ljava/lang/String;

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    :cond_0
    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    if-eqz v1, :cond_1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_info:Ljava/util/Map;

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->b:Ljava/util/Map;

    :cond_1
    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/File;

    sget-object v2, Lcom/sigmob/sdk/base/utils/b;->b:Ljava/lang/String;

    invoke-static {v2}, Lcom/sigmob/sdk/base/utils/b;->b(Ljava/lang/String;)Ljava/io/File;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".html"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v2, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->n:Ljava/io/File;

    goto :goto_0

    :cond_2
    const-string v0, "ad_privacy is null"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v0, :cond_4

    :goto_1
    iput-boolean v3, p0, Lcom/sigmob/sdk/base/views/q;->k:Z

    goto :goto_2

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->n:Ljava/io/File;

    if-eqz v0, :cond_7

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->b:Ljava/util/Map;

    if-eqz v0, :cond_7

    goto :goto_1

    :goto_2
    new-instance v0, Lcom/sigmob/sdk/base/views/i;

    iget-object v4, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-direct {v0, v4}, Lcom/sigmob/sdk/base/views/i;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/views/i;->a(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    iget-object v3, p0, Lcom/sigmob/sdk/base/views/q;->j:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/views/i;->setAdUnit(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/i;->a(Lcom/sigmob/sdk/base/common/m$a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    new-instance v1, Lcom/sigmob/sdk/base/views/q$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/q$2;-><init>(Lcom/sigmob/sdk/base/views/q;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/i;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    :goto_3
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/i;->loadUrl(Ljava/lang/String;)V

    goto :goto_4

    :cond_5
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->n:Ljava/io/File;

    if-eqz v0, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    new-instance v1, Lcom/sigmob/sdk/base/views/q$a;

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/q;->b:Ljava/util/Map;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/views/q$a;-><init>(Ljava/util/Map;)V

    const-string v2, "sigPrivacy"

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/views/i;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "file://"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/q;->n:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_3

    :cond_6
    iput-boolean v2, p0, Lcom/sigmob/sdk/base/views/q;->k:Z

    :goto_4
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    return-object v0

    :cond_7
    iput-boolean v2, p0, Lcom/sigmob/sdk/base/views/q;->k:Z

    return-object v1
.end method

.method public c()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/i;->destroy()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    if-eqz v0, :cond_2

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->a:Lcom/sigmob/sdk/base/views/q$b;

    if-eqz v0, :cond_3

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/q;->a:Lcom/sigmob/sdk/base/views/q$b;

    :cond_3
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 8

    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    new-instance p1, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/q;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-nez v0, :cond_0

    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    const/high16 v5, 0x41a00000    # 20.0f

    iget-object v6, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-static {v5, v6}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v5

    const/16 v6, 0x8

    new-array v6, v6, [F

    int-to-float v5, v5

    aput v5, v6, v4

    aput v5, v6, v3

    aput v5, v6, v2

    const/4 v7, 0x3

    aput v5, v6, v7

    const/4 v5, 0x4

    const/4 v7, 0x0

    aput v7, v6, v5

    const/4 v5, 0x5

    aput v7, v6, v5

    const/4 v5, 0x6

    aput v7, v6, v5

    const/4 v5, 0x7

    aput v7, v6, v5

    invoke-virtual {v0, v6}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadii([F)V

    const/high16 v5, 0x41200000    # 10.0f

    iget-object v6, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-static {v5, v6}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v5

    invoke-virtual {p1, v5, v5, v5, v5}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v4}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    :goto_0
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/q;->setContentView(Landroid/view/View;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/base/views/q;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/base/views/q;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "FourElementsDialog onCreate:"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/sigmob/sdk/base/views/q;->f:I

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, ":"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/sigmob/sdk/base/views/q;->e:I

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    if-eqz v0, :cond_1

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q;->i:Lcom/sigmob/sdk/base/views/i;

    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const/high16 v0, 0x41900000    # 18.0f

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/q;->c:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0xa

    invoke-virtual {v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v5, 0xb

    invoke-virtual {v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/2addr v0, v2

    invoke-virtual {v1, v4, v0, v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/q;->l:Landroid/widget/ImageView;

    invoke-virtual {p1, v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    invoke-virtual {p0, v3}, Lcom/sigmob/sdk/base/views/q;->setCanceledOnTouchOutside(Z)V

    invoke-virtual {p0, v3}, Lcom/sigmob/sdk/base/views/q;->setCancelable(Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/q;->e()V

    return-void
.end method

.method public onDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "FourElementsDialog  onDismiss"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/q;->a:Lcom/sigmob/sdk/base/views/q$b;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/sigmob/sdk/base/views/q$b;->a()V

    :cond_0
    return-void
.end method

.method public onShow(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "FourElementsDialog  onShow"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/q;->a:Lcom/sigmob/sdk/base/views/q$b;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/sigmob/sdk/base/views/q$b;->b()V

    :cond_0
    return-void
.end method
