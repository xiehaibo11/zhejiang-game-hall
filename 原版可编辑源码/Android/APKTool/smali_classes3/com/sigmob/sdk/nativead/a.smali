.class public Lcom/sigmob/sdk/nativead/a;
.super Landroid/app/Dialog;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;
.implements Landroid/content/DialogInterface$OnShowListener;
.implements Landroid/view/View$OnClickListener;
.implements Lcom/sigmob/sdk/nativead/r;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Landroid/view/Window;

.field private c:I

.field private d:I

.field private e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

.field private g:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private h:Landroid/widget/TextView;

.field private i:Landroid/widget/TextView;

.field private j:Landroid/widget/TextView;

.field private k:Landroid/widget/TextView;

.field private l:Landroid/widget/RelativeLayout;

.field private m:Landroid/widget/EditText;

.field private n:Lcom/sigmob/sdk/nativead/m;

.field private o:Landroid/view/ViewGroup;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    invoke-static {}, Lcom/sigmob/sdk/base/d;->e()I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/a;->b:Landroid/view/Window;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/a;->e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    iget p1, p1, Landroid/util/DisplayMetrics;->widthPixels:I

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p2

    iget p2, p2, Landroid/util/DisplayMetrics;->heightPixels:I

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const/high16 v1, 0x42200000    # 40.0f

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    if-le p2, p1, :cond_0

    sub-int/2addr p1, v0

    iput p1, p0, Lcom/sigmob/sdk/nativead/a;->d:I

    const/4 p1, -0x2

    iput p1, p0, Lcom/sigmob/sdk/nativead/a;->c:I

    goto :goto_0

    :cond_0
    sub-int p1, p2, v0

    iput p1, p0, Lcom/sigmob/sdk/nativead/a;->d:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/sigmob/sdk/videoplayer/d;->h(Landroid/content/Context;)I

    move-result p1

    sub-int/2addr p2, p1

    iput p2, p0, Lcom/sigmob/sdk/nativead/a;->c:I

    :goto_0
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/a;->c()V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/a;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/a;->k:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v1, Lcom/sigmob/sdk/nativead/a$3;

    invoke-direct {v1, p0, p3, p4}, Lcom/sigmob/sdk/nativead/a$3;-><init>(Lcom/sigmob/sdk/nativead/a;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1, p2, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/a;->e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method private c()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    const-string v1, "\u8fdd\u6cd5\u8fdd\u89c4"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    const-string v1, "\u7591\u4f3c\u6284\u88ad"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    const-string v1, "\u865a\u5047\u6b3a\u8bc8"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    const-string v1, "\u4f4e\u4fd7\u8272\u60c5"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    const-string v1, "\u8bf1\u5bfc\u70b9\u51fb"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private d()V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/a;->getWindow()Landroid/view/Window;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/a;->b:Landroid/view/Window;

    if-eqz v0, :cond_1

    const/16 v1, 0x11

    invoke-virtual {v0, v1}, Landroid/view/Window;->setGravity(I)V

    invoke-static {}, Lcom/sigmob/sdk/base/d;->f()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/a;->b:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setWindowAnimations(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->b:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->b:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    iget v1, p0, Lcom/sigmob/sdk/nativead/a;->d:I

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    iget v1, p0, Lcom/sigmob/sdk/nativead/a;->c:I

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/a;->b:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/a;->show()V

    const-string v0, ""

    const-string v1, "dislike"

    const-string v2, "click"

    invoke-direct {p0, v1, v2, v0, v0}, Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    return-void
.end method

.method public b()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    :cond_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->l:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, "dislike"

    const-string v4, ""

    if-eqz v0, :cond_0

    const-string p1, "why_click"

    invoke-direct {p0, v3, p1, v4, v4}, Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-class v0, Lcom/sigmob/sdk/base/common/AdActivity;

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/a;->e:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v0, v3}, Lcom/sigmob/sdk/base/common/AdActivity;->b(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;)V

    goto/16 :goto_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->i:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->i:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v0, "adnormal_show"

    invoke-direct {p0, v3, v0, v4, v4}, Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, p1

    move v2, v1

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->j:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->j:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const/4 v2, 0x2

    const-string v0, "cannot_close"

    :goto_0
    invoke-direct {p0, v3, v0, v4, v4}, Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    move-object v4, p1

    goto :goto_1

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->h:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->h:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const/4 v2, 0x3

    const-string v0, "nointerest_click"

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->k:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->m:Landroid/widget/EditText;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const/4 v0, 0x5

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v5

    invoke-static {v5, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    const-string v5, "advice"

    invoke-direct {p0, v3, v5, v4, v2}, Lcom/sigmob/sdk/nativead/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, p1

    move v2, v0

    :cond_5
    :goto_1
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz p1, :cond_6

    if-eqz v2, :cond_6

    invoke-interface {p1, v2, v4, v1}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onSelected(ILjava/lang/String;Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/a;->dismiss()V

    :cond_6
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4

    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_dislike_layout"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getLayoutId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->setContentView(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_why_watch_rl"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->l:Landroid/widget/RelativeLayout;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_not_show_tv"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->i:Landroid/widget/TextView;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_not_close_tv"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->j:Landroid/widget/TextView;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_dislike_tv"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->h:Landroid/widget/TextView;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_commit_sl"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->k:Landroid/widget/TextView;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_suggest_et"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/EditText;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->m:Landroid/widget/EditText;

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->l:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, p0}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->h:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->i:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->j:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->k:Landroid/widget/TextView;

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->m:Landroid/widget/EditText;

    new-instance v0, Lcom/sigmob/sdk/nativead/a$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/a$1;-><init>(Lcom/sigmob/sdk/nativead/a;)V

    invoke-virtual {p1, v0}, Landroid/widget/EditText;->addTextChangedListener(Landroid/text/TextWatcher;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    const-string v0, "sig_flow_sl"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->o:Landroid/view/ViewGroup;

    new-instance p1, Lcom/sigmob/sdk/nativead/m;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->a:Landroid/content/Context;

    invoke-direct {p1, v0}, Lcom/sigmob/sdk/nativead/m;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a;->n:Lcom/sigmob/sdk/nativead/m;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->g:Ljava/util/List;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/nativead/m;->setList(Ljava/util/List;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->n:Lcom/sigmob/sdk/nativead/m;

    new-instance v0, Lcom/sigmob/sdk/nativead/a$2;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/nativead/a$2;-><init>(Lcom/sigmob/sdk/nativead/a;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/nativead/m;->setOnItemClickListener(Lcom/sigmob/sdk/nativead/m$e;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->o:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a;->n:Lcom/sigmob/sdk/nativead/m;

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, -0x2

    invoke-direct {v1, v2, v3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/nativead/a;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/nativead/a;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->setCanceledOnTouchOutside(Z)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/nativead/a;->setCancelable(Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/a;->d()V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "DisLikeDialog onCreate:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/sigmob/sdk/nativead/a;->d:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ":"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/sigmob/sdk/nativead/a;->c:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method public onDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "DisLikeDialog  onDismiss"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onCancel()V

    :cond_0
    return-void
.end method

.method public onShow(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "DisLikeDialog  onShow"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->f:Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onShow()V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a;->n:Lcom/sigmob/sdk/nativead/m;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/m;->b()V

    :cond_1
    return-void
.end method
