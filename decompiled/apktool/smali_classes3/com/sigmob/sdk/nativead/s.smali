.class public Lcom/sigmob/sdk/nativead/s;
.super Lcom/sigmob/sdk/base/common/i;


# instance fields
.field private f:Landroid/widget/RelativeLayout;

.field private g:Landroid/widget/LinearLayout;

.field private h:Landroid/widget/TextView;

.field private i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private j:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 0

    invoke-direct {p0, p1, p5, p6}, Lcom/sigmob/sdk/base/common/i;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    const-string p1, "\u6b64\u5e7f\u544a\u7531SigMob\u63d0\u4f9b\uff0c\u4e3a\u4e86\u5728\u5e94\u7528\u7a0b\u5e8f\u4e0a\u5411\u60a8\u63a8\u8350\u5c55\u793a\u51fa\u66f4\u52a0\u4e2a\u6027\u548c\u5b9e\u7528\u7684\u5e7f\u544a\uff0c\u5bf9\u60a8\u53ef\u80fd\u4f1a\u63a5\u6536\u5230\u7684\u4e00\u90e8\u5206\u5e7f\u544a\u8fdb\u884c\u66f4\u5177\u76f8\u5173\u6027\u7684\u5b9a\u5236\uff0c\u4ece\u800c\u4f7f\u60a8\u5728\u5e94\u7528\u7a0b\u5e8f\u4e0a\u6709\u66f4\u597d\u7684\u7528\u6237\u4f53\u9a8c\u3002SigMob\u975e\u5e38\u91cd\u89c6\u6570\u636e\u5b89\u5168\uff0c\u5c06\u52aa\u529b\u91c7\u53d6\u5408\u7406\u7684\u5b89\u5168\u63aa\u65bd\uff08\u5305\u62ec\u6280\u672f\u65b9\u9762\u548c\u7ba1\u7406\u65b9\u9762\uff09\u6765\u4fdd\u62a4\u6570\u636e\u5b89\u5168\uff0c\u9632\u6b62\u6570\u636e\u4fe1\u606f\u88ab\u4e0d\u6b63\u5f53\u4f7f\u7528\u6216\u672a\u7ecf\u6388\u6743\u7684\u60c5\u51b5\u4e0b\u88ab\u8bbf\u95ee\u3002"

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/s;->j:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/s;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/s;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/s;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/s;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/s;->d:Lcom/sigmob/sdk/base/common/j;

    return-object p0
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
    .locals 10

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->c:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->removeAllViews()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->c:Landroid/widget/RelativeLayout;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->d:Lcom/sigmob/sdk/base/common/j;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/s;->c:Landroid/widget/RelativeLayout;

    invoke-interface {v0, v2}, Lcom/sigmob/sdk/base/common/j;->onSetContentView(Landroid/view/View;)V

    new-instance v0, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setOrientation(I)V

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/s;->c:Landroid/widget/RelativeLayout;

    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v4, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v3, v0, v4}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v3, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v3, p0, Lcom/sigmob/sdk/nativead/s;->f:Landroid/widget/RelativeLayout;

    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x42480000    # 50.0f

    invoke-static {v6, v5}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v5

    invoke-direct {v4, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v3, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v3, Landroid/view/View;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    const-string v4, "#E0E6EC"

    invoke-static {v4}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v3, v4}, Landroid/view/View;->setBackgroundColor(I)V

    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x3f800000    # 1.0f

    invoke-static {v6, v5}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v5

    invoke-direct {v4, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v3, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41200000    # 10.0f

    invoke-static {v4, v3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v3

    new-instance v4, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    new-instance v5, Lcom/sigmob/sdk/nativead/s$1;

    invoke-direct {v5, p0}, Lcom/sigmob/sdk/nativead/s$1;-><init>(Lcom/sigmob/sdk/nativead/s;)V

    invoke-virtual {v4, v5}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v5

    const-string v6, "sig_image_video_back_left_black"

    invoke-static {v5, v6}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v4, v5}, Landroid/widget/ImageView;->setImageResource(I)V

    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    mul-int/lit8 v6, v3, 0x2

    invoke-direct {v5, v6, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v6, 0x0

    invoke-virtual {v5, v3, v6, v3, v6}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    const/16 v6, 0x9

    invoke-virtual {v5, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v6, 0xf

    invoke-virtual {v5, v6}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/s;->f:Landroid/widget/RelativeLayout;

    invoke-virtual {v6, v4, v5}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "\u4e3a\u4ec0\u4e48\u770b\u5230\u6b64\u5e7f\u544a"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v5, -0x1000000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    const/high16 v6, 0x41a00000    # 20.0f

    invoke-virtual {v4, v2, v6}, Landroid/widget/TextView;->setTextSize(IF)V

    const/16 v6, 0x11

    invoke-virtual {v4, v6}, Landroid/widget/TextView;->setGravity(I)V

    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v7, -0x2

    invoke-direct {v6, v7, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v8, 0xd

    invoke-virtual {v6, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v9, p0, Lcom/sigmob/sdk/nativead/s;->f:Landroid/widget/RelativeLayout;

    invoke-virtual {v9, v4, v6}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v4, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v4, v6}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/sigmob/sdk/nativead/s;->g:Landroid/widget/LinearLayout;

    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v6, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v4, v6}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance v0, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/s;->i()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v0, v4}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/s;->h:Landroid/widget/TextView;

    iget-object v4, p0, Lcom/sigmob/sdk/nativead/s;->j:Ljava/lang/String;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->h:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setTextColor(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->h:Landroid/widget/TextView;

    const/high16 v4, 0x41700000    # 15.0f

    invoke-virtual {v0, v2, v4}, Landroid/widget/TextView;->setTextSize(IF)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->h:Landroid/widget/TextView;

    const/high16 v2, 0x40000000    # 2.0f

    const v4, 0x3f99999a    # 1.2f

    invoke-virtual {v0, v2, v4}, Landroid/widget/TextView;->setLineSpacing(FF)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v1, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v8}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    div-int/lit8 v3, v3, 0x2

    invoke-virtual {v0, v3, v3, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/s;->g:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/s;->h:Landroid/widget/TextView;

    invoke-virtual {v1, v2, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method public d()V
    .locals 0

    return-void
.end method

.method public e()V
    .locals 0

    invoke-super {p0}, Lcom/sigmob/sdk/base/common/i;->e()V

    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->d:Lcom/sigmob/sdk/base/common/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/s;->d:Lcom/sigmob/sdk/base/common/j;

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
