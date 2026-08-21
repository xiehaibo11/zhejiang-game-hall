.class public Lcom/tkay/basead/ui/MediaATView;
.super Lcom/tkay/basead/ui/BaseMediaATView;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field g:Landroid/widget/RelativeLayout;

.field h:Landroid/widget/RelativeLayout;

.field i:Landroid/widget/TextView;

.field j:Landroid/widget/TextView;

.field k:Landroid/widget/TextView;

.field l:Landroid/widget/TextView;

.field final m:F

.field private n:Landroid/widget/TextView;

.field private o:Landroid/widget/TextView;

.field private p:Landroid/widget/ImageView;

.field private q:Landroid/widget/ImageView;

.field private r:Landroid/widget/ImageView;

.field private s:Lcom/tkay/core/common/ui/component/RoundImageView;

.field private t:Landroid/widget/TextView;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 33
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "tkay_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-class v1, Lcom/tkay/basead/ui/MediaATView;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/MediaATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V
    .locals 0

    .line 69
    invoke-direct/range {p0 .. p5}, Lcom/tkay/basead/ui/BaseMediaATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V

    const/high16 p1, 0x3f800000    # 1.0f

    .line 60
    iput p1, p0, Lcom/tkay/basead/ui/MediaATView;->m:F

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/basead/ui/MediaATView;->q:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/basead/ui/MediaATView;->p:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/basead/ui/MediaATView;)Landroid/widget/ImageView;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/basead/ui/MediaATView;->r:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/basead/ui/MediaATView;)Lcom/tkay/core/common/ui/component/RoundImageView;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    return-object p0
.end method


# virtual methods
.method public getClickViews()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation

    .line 334
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 337
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 338
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->q:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 339
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->o:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 341
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 342
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->t:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 344
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->b:Lcom/tkay/core/common/f/j;

    if-eqz v1, :cond_0

    .line 345
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->b:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->x()I

    move-result v1

    if-nez v1, :cond_0

    .line 346
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->p:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 347
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->g:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    return-object v0
.end method

.method public getMonitorClickView()Landroid/view/View;
    .locals 1

    .line 329
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->o:Landroid/widget/TextView;

    return-object v0
.end method

.method public init(II)V
    .locals 8

    .line 87
    invoke-super {p0, p1, p2}, Lcom/tkay/basead/ui/BaseMediaATView;->init(II)V

    .line 88
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_media_ad_view"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    .line 89
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->f:Landroid/widget/FrameLayout;

    if-eqz v1, :cond_0

    .line 90
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->f:Landroid/widget/FrameLayout;

    invoke-virtual {v1}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 91
    iget-object v1, p0, Lcom/tkay/basead/ui/MediaATView;->f:Landroid/widget/FrameLayout;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v0, v3}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 97
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v3, "myoffer_banner_ad_title"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->n:Landroid/widget/TextView;

    .line 98
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_media_ad_cta"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->o:Landroid/widget/TextView;

    .line 100
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_media_ad_bg_blur"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->p:Landroid/widget/ImageView;

    .line 101
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_media_ad_main_image"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->q:Landroid/widget/ImageView;

    .line 102
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_ad_logo"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->r:Landroid/widget/ImageView;

    .line 104
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_media_ad_icon"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 105
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_banner_ad_desc"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->t:Landroid/widget/TextView;

    .line 106
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_media_ad_container"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->g:Landroid/widget/RelativeLayout;

    .line 107
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_four_element_container"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->h:Landroid/widget/RelativeLayout;

    .line 108
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_publisher_name"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->i:Landroid/widget/TextView;

    .line 109
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_privacy_agreement"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->j:Landroid/widget/TextView;

    .line 110
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_permission_manage"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->k:Landroid/widget/TextView;

    .line 111
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_version_name"

    invoke-static {v0, v3, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->l:Landroid/widget/TextView;

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v0

    .line 114
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/16 v4, 0x8

    if-nez v3, :cond_1

    .line 115
    iget-object v3, p0, Lcom/tkay/basead/ui/MediaATView;->n:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 117
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->n:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 118
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->t:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    .line 119
    instance-of v3, v0, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz v3, :cond_2

    .line 120
    move-object v3, v0

    check-cast v3, Landroid/widget/LinearLayout$LayoutParams;

    iput v2, v3, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 121
    iget-object v3, p0, Lcom/tkay/basead/ui/MediaATView;->t:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 125
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->w()Ljava/lang/String;

    move-result-object v0

    .line 126
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const-string v5, "string"

    if-nez v3, :cond_3

    .line 127
    iget-object v3, p0, Lcom/tkay/basead/ui/MediaATView;->o:Landroid/widget/TextView;

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 129
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->o:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v3

    const-string v6, "myoffer_cta_learn_more"

    invoke-static {v3, v6, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setText(I)V

    .line 132
    :goto_1
    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->q:Landroid/widget/ImageView;

    sget-object v3, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v3}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 133
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v0

    new-instance v3, Lcom/tkay/core/common/res/e;

    iget-object v6, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x1

    invoke-direct {v3, v7, v6}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v6, Lcom/tkay/basead/ui/MediaATView$1;

    invoke-direct {v6, p0}, Lcom/tkay/basead/ui/MediaATView$1;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {v0, v3, p1, p2, v6}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    .line 172
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_4

    .line 173
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object p1

    new-instance p2, Lcom/tkay/core/common/res/e;

    iget-object v0, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p2, v7, v0}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v0, Lcom/tkay/basead/ui/MediaATView$2;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/MediaATView$2;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p1, p2, v0}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    goto :goto_2

    .line 201
    :cond_4
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->r:Landroid/widget/ImageView;

    invoke-virtual {p1, v4}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 222
    :goto_2
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->s()Ljava/lang/String;

    move-result-object p1

    .line 223
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_5

    .line 224
    iget-object p2, p0, Lcom/tkay/basead/ui/MediaATView;->t:Landroid/widget/TextView;

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_3

    .line 226
    :cond_5
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->t:Landroid/widget/TextView;

    invoke-virtual {p1, v4}, Landroid/widget/TextView;->setVisibility(I)V

    .line 230
    :goto_3
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 231
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    const/4 p2, 0x6

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/ui/component/RoundImageView;->setRadiusInDip(I)V

    .line 232
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, v7}, Lcom/tkay/core/common/ui/component/RoundImageView;->setNeedRadiu(Z)V

    .line 234
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1}, Lcom/tkay/core/common/ui/component/RoundImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    .line 235
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object p2

    new-instance v0, Lcom/tkay/core/common/res/e;

    iget-object v3, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->t()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v7, v3}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v3, p1, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget p1, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    new-instance v4, Lcom/tkay/basead/ui/MediaATView$3;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/MediaATView$3;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p2, v0, v3, p1, v4}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    goto :goto_4

    .line 251
    :cond_6
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->s:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p1, v4}, Lcom/tkay/core/common/ui/component/RoundImageView;->setVisibility(I)V

    .line 255
    :goto_4
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->K()Z

    move-result p1

    if-eqz p1, :cond_b

    .line 256
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->h:Landroid/widget/RelativeLayout;

    if-eqz p1, :cond_7

    .line 257
    invoke-virtual {p1, v2}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 258
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->h:Landroid/widget/RelativeLayout;

    new-instance p2, Lcom/tkay/basead/ui/MediaATView$4;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/MediaATView$4;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 266
    :cond_7
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->i:Landroid/widget/TextView;

    if-eqz p1, :cond_8

    .line 267
    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 268
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->i:Landroid/widget/TextView;

    iget-object p2, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->F()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 269
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->i:Landroid/widget/TextView;

    new-instance p2, Lcom/tkay/basead/ui/MediaATView$5;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/MediaATView$5;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 276
    :cond_8
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->j:Landroid/widget/TextView;

    if-eqz p1, :cond_9

    .line 277
    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 278
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->j:Landroid/widget/TextView;

    new-instance p2, Lcom/tkay/basead/ui/MediaATView$6;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/MediaATView$6;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 285
    :cond_9
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->k:Landroid/widget/TextView;

    if-eqz p1, :cond_a

    .line 286
    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 287
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->k:Landroid/widget/TextView;

    new-instance p2, Lcom/tkay/basead/ui/MediaATView$7;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/MediaATView$7;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 294
    :cond_a
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->l:Landroid/widget/TextView;

    if-eqz p1, :cond_b

    .line 295
    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 296
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->l:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    .line 297
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v3, "myoffer_panel_version"

    invoke-static {v0, v3, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    new-array v3, v7, [Ljava/lang/Object;

    iget-object v4, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    .line 298
    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->G()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v3, v2

    .line 296
    invoke-virtual {p2, v0, v3}, Landroid/content/res/Resources;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 300
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->l:Landroid/widget/TextView;

    new-instance p2, Lcom/tkay/basead/ui/MediaATView$8;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/MediaATView$8;-><init>(Lcom/tkay/basead/ui/MediaATView;)V

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 310
    :cond_b
    iget-object p1, p0, Lcom/tkay/basead/ui/MediaATView;->a:Lcom/tkay/core/common/f/h;

    invoke-static {p1}, Lcom/tkay/basead/a/e;->a(Lcom/tkay/core/common/f/h;)Z

    move-result p1

    if-nez p1, :cond_c

    .line 311
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object p1

    const-string p2, "myoffer_media_ad_main_image_container"

    invoke-static {p1, p2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/MediaATView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_c

    .line 313
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 314
    instance-of v0, p2, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v0, :cond_c

    .line 315
    move-object v0, p2

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MediaATView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42a80000    # 84.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    .line 316
    invoke-virtual {p1, p2}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_c
    return-void
.end method

.method protected onLayout(ZIIII)V
    .locals 0

    .line 74
    invoke-super/range {p0 .. p5}, Lcom/tkay/basead/ui/BaseMediaATView;->onLayout(ZIIII)V

    return-void
.end method
