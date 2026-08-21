.class public Lcom/sigmob/sdk/base/views/a;
.super Landroid/app/Dialog;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;
.implements Landroid/content/DialogInterface$OnShowListener;
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Landroid/view/Window;

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/base/d;->e()I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/a;->b:Landroid/view/Window;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/a;->g:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/views/a;->h:Ljava/lang/String;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/a;->b()Landroid/widget/ImageView;

    move-result-object p2

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p2

    iget p2, p2, Landroid/util/DisplayMetrics;->widthPixels:I

    iput p2, p0, Lcom/sigmob/sdk/base/views/a;->d:I

    const/high16 p2, 0x42f00000    # 120.0f

    invoke-static {p2, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/base/views/a;->c:I

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/a;->h:Ljava/lang/String;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 1

    :try_start_0
    const-string v0, "clipboard"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/ClipboardManager;

    const-string v0, ""

    invoke-static {v0, p2}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/a;Landroid/content/Context;Ljava/lang/String;)Z
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/base/views/a;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private b()Landroid/widget/ImageView;
    .locals 2

    new-instance v0, Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    sget-object v1, Lcom/sigmob/sdk/base/views/o;->e:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    const/16 v1, 0x7f

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageAlpha(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setClickable(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    return-object v0
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/a;->g:Ljava/lang/String;

    return-object p0
.end method

.method private c()Landroid/widget/TextView;
    .locals 2

    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v1, "\u590d\u5236\u5e7f\u544a\u4fe1\u606f"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v1, -0xffff01

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    new-instance v1, Lcom/sigmob/sdk/base/views/a$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/a$1;-><init>(Lcom/sigmob/sdk/base/views/a;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-object v0
.end method

.method private d()Landroid/view/View;
    .locals 7

    new-instance v0, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41a00000    # 20.0f

    invoke-static {v2, v1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setOrientation(I)V

    new-instance v2, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    div-int/lit8 v1, v1, 0x4

    const/4 v3, 0x0

    invoke-virtual {v2, v3, v1, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "appid: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/windad/WindAds;->getAppId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v3, -0x1000000

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setTextColor(I)V

    const/high16 v4, 0x41400000    # 12.0f

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextSize(F)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v1, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "p_id: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/sigmob/sdk/base/views/a;->h:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextSize(F)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v1, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v1, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "req_id: "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/sigmob/sdk/base/views/a;->g:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v4}, Landroid/widget/TextView;->setTextSize(F)V

    invoke-virtual {v1, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-object v0
.end method

.method private e()V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/a;->b:Landroid/view/Window;

    if-eqz v0, :cond_1

    const/16 v1, 0x50

    invoke-virtual {v0, v1}, Landroid/view/Window;->setGravity(I)V

    invoke-static {}, Lcom/sigmob/sdk/base/d;->f()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/a;->b:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setWindowAnimations(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->b:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->b:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/sdk/base/views/a;->d:I

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    iget v1, p0, Lcom/sigmob/sdk/base/views/a;->c:I

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/a;->b:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    if-eqz v0, :cond_1

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    :cond_1
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->dismiss()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 10

    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    new-instance p1, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    const/high16 v3, 0x41a00000    # 20.0f

    invoke-static {v3, v2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v2

    const/16 v3, 0x8

    new-array v3, v3, [F

    int-to-float v2, v2

    const/4 v4, 0x0

    aput v2, v3, v4

    const/4 v5, 0x1

    aput v2, v3, v5

    const/4 v6, 0x2

    aput v2, v3, v6

    const/4 v7, 0x3

    aput v2, v3, v7

    const/4 v2, 0x4

    const/4 v8, 0x0

    aput v8, v3, v2

    const/4 v2, 0x5

    aput v8, v3, v2

    const/4 v2, 0x6

    aput v8, v3, v2

    const/4 v2, 0x7

    aput v8, v3, v2

    invoke-virtual {v0, v3}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadii([F)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    const/high16 v3, 0x41200000    # 10.0f

    invoke-static {v3, v2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v2

    invoke-virtual {p1, v2, v2, v2, v2}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setBackground(Landroid/graphics/drawable/Drawable;)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/a;->setContentView(Landroid/view/View;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/base/views/a;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/base/views/a;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AdInfoDialog onCreate:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/sigmob/sdk/base/views/a;->d:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/sigmob/sdk/base/views/a;->c:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/a;->a:Landroid/content/Context;

    const/high16 v2, 0x41900000    # 18.0f

    invoke-static {v2, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    const/16 v3, 0xa

    if-eqz v2, :cond_0

    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v2, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v8, 0xb

    invoke-virtual {v2, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/lit8 v8, v0, 0x4

    div-int/lit8 v9, v0, 0x2

    invoke-virtual {v2, v4, v8, v9, v4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v8, p0, Lcom/sigmob/sdk/base/views/a;->i:Landroid/widget/ImageView;

    invoke-virtual {p1, v8, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/a;->c()Landroid/widget/TextView;

    move-result-object v2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v8

    invoke-virtual {v2, v8}, Landroid/widget/TextView;->setId(I)V

    new-instance v8, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v8, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v8, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v3, 0x9

    invoke-virtual {v8, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/lit8 v9, v0, 0x4

    div-int/2addr v0, v6

    invoke-virtual {v8, v4, v9, v0, v4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {p1, v2, v8}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v4, -0x2

    invoke-direct {v0, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2}, Landroid/widget/TextView;->getId()I

    move-result v1

    invoke-virtual {v0, v7, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    invoke-virtual {v0, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/a;->d()Landroid/view/View;

    move-result-object v1

    invoke-virtual {p1, v1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0, v5}, Lcom/sigmob/sdk/base/views/a;->setCanceledOnTouchOutside(Z)V

    invoke-virtual {p0, v5}, Lcom/sigmob/sdk/base/views/a;->setCancelable(Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/a;->e()V

    return-void
.end method

.method public onDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "AdInfoDialog  onDismiss"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method public onShow(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "AdInfoDialog  onShow"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method
