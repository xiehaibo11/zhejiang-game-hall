.class public Lcom/sigmob/sdk/nativead/k;
.super Landroid/widget/RelativeLayout;


# instance fields
.field private a:Landroid/widget/TextView;

.field private b:Landroid/widget/TextView;

.field private c:Landroid/view/ViewGroup;

.field private d:Lcom/sigmob/sdk/base/views/h;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/k;->getLayoutId()I

    move-result v0

    invoke-static {p1, v0, p0}, Landroid/view/View;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/k;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_app_name"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/k;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/k;->a:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/k;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_app_cta"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/k;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/k;->b:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/k;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_app_icon"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/k;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/k;->c:Landroid/view/ViewGroup;

    new-instance v0, Lcom/sigmob/sdk/base/views/h;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/base/views/h;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/k;->d:Lcom/sigmob/sdk/base/views/h;

    const/4 p1, 0x0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/views/h;->setCircle(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/k;->d:Lcom/sigmob/sdk/base/views/h;

    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/h;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/k;->c:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/k;->d:Lcom/sigmob/sdk/base/views/h;

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private getLayoutId()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/k;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_app_layout"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getLayoutId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    return v0
.end method


# virtual methods
.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/k;->a:Landroid/widget/TextView;

    invoke-virtual {v0, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/k;->b:Landroid/widget/TextView;

    invoke-virtual {p2, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/k;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/ImageManager;->with(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/czhj/sdk/common/utils/ImageManager;->load(Ljava/lang/String;)Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/k;->d:Lcom/sigmob/sdk/base/views/h;

    invoke-virtual {p1, p2}, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;->into(Landroid/widget/ImageView;)V

    return-void
.end method

.method public getCtaView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/k;->b:Landroid/widget/TextView;

    return-object v0
.end method

.method public setOnClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/k;->b:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method
