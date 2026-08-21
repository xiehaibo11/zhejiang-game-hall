.class public Lcom/tkay/basead/ui/EndCardView;
.super Lcom/tkay/basead/ui/BaseEndCardView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/EndCardView$a;
    }
.end annotation


# instance fields
.field private e:Lcom/tkay/basead/ui/EndCardView$a;

.field private f:I

.field private g:I

.field private h:Landroid/widget/ImageView;

.field private i:Lcom/tkay/core/common/ui/component/RoundImageView;

.field private j:Landroid/widget/ImageView;

.field private k:Landroid/widget/TextView;

.field private final l:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 66
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseEndCardView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V

    .line 42
    new-instance p1, Lcom/tkay/basead/ui/EndCardView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/EndCardView$1;-><init>(Lcom/tkay/basead/ui/EndCardView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->l:Landroid/view/View$OnClickListener;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/basead/ui/EndCardView;->e:Lcom/tkay/basead/ui/EndCardView$a;

    return-object p0
.end method

.method private a(Lcom/tkay/core/common/f/h;)V
    .locals 5

    .line 81
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/res/e;

    const/4 v2, 0x1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v2, p0, Lcom/tkay/basead/ui/EndCardView;->f:I

    iget v3, p0, Lcom/tkay/basead/ui/EndCardView;->g:I

    new-instance v4, Lcom/tkay/basead/ui/EndCardView$2;

    invoke-direct {v4, p0, p1}, Lcom/tkay/basead/ui/EndCardView$2;-><init>(Lcom/tkay/basead/ui/EndCardView;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V
    :try_end_0
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 126
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    :catch_1
    move-exception p1

    .line 124
    invoke-virtual {p1}, Ljava/lang/OutOfMemoryError;->printStackTrace()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/TextView;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    return-object p0
.end method

.method private b()V
    .locals 4

    .line 208
    new-instance v0, Lcom/tkay/basead/ui/ScanningAnimTextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/basead/ui/ScanningAnimTextView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    .line 209
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_cta_learn_more"

    const-string v3, "string"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    .line 210
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    const-string v1, "#ffffffff"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    .line 211
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    const/high16 v1, 0x41600000    # 14.0f

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextSize(F)V

    .line 212
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    const/16 v1, 0x11

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setGravity(I)V

    .line 213
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "myoffer_splash_bg_rectangle_btn_cta_asseblem"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 215
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/basead/ui/EndCardView;->l:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 217
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42400000    # 48.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    const/4 v2, -0x1

    invoke-direct {v0, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v1, 0xc

    .line 218
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 219
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42c00000    # 96.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 220
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41c00000    # 24.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 221
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 223
    iget-object v1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/basead/ui/EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private b(Lcom/tkay/core/common/f/h;)V
    .locals 6

    .line 165
    new-instance v0, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    .line 166
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41400000    # 12.0f

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    .line 167
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xb

    .line 168
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v2, 0xc

    .line 169
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 170
    iget-object v2, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v2, v1}, Lcom/tkay/basead/ui/EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 172
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object p1

    .line 173
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 174
    iget-object v1, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    .line 175
    iget v2, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 176
    iget v1, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 177
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v3

    new-instance v4, Lcom/tkay/core/common/res/e;

    const/4 v5, 0x1

    invoke-direct {v4, v5, p1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v5, Lcom/tkay/basead/ui/EndCardView$3;

    invoke-direct {v5, p0, p1, v0}, Lcom/tkay/basead/ui/EndCardView$3;-><init>(Lcom/tkay/basead/ui/EndCardView;Ljava/lang/String;I)V

    invoke-virtual {v3, v4, v2, v1, v5}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/basead/ui/EndCardView;->h:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/core/common/ui/component/RoundImageView;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/basead/ui/EndCardView;->i:Lcom/tkay/core/common/ui/component/RoundImageView;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    return-object p0
.end method


# virtual methods
.method protected final a()V
    .locals 0

    return-void
.end method

.method public getLearnMoreButton()Landroid/view/View;
    .locals 1

    .line 244
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    return-object v0
.end method

.method public init(ZZLcom/tkay/basead/ui/EndCardView$a;)V
    .locals 7

    .line 131
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "myoffer_end_card_id"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/EndCardView;->setId(I)V

    .line 133
    iput-object p3, p0, Lcom/tkay/basead/ui/EndCardView;->e:Lcom/tkay/basead/ui/EndCardView$a;

    .line 136
    new-instance p3, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p3, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;)V

    iput-object p3, p0, Lcom/tkay/basead/ui/EndCardView;->i:Lcom/tkay/core/common/ui/component/RoundImageView;

    .line 137
    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p3, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 139
    new-instance p3, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p3, v0}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;)V

    iput-object p3, p0, Lcom/tkay/basead/ui/EndCardView;->h:Landroid/widget/ImageView;

    .line 141
    new-instance p3, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p3, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 144
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    iget v2, p0, Lcom/tkay/basead/ui/EndCardView;->f:I

    iget v3, p0, Lcom/tkay/basead/ui/EndCardView;->g:I

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xd

    .line 145
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 147
    iget-object v2, p0, Lcom/tkay/basead/ui/EndCardView;->i:Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p0, v2, p3}, Lcom/tkay/basead/ui/EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 148
    iget-object p3, p0, Lcom/tkay/basead/ui/EndCardView;->h:Landroid/widget/ImageView;

    invoke-virtual {p0, p3, v1}, Lcom/tkay/basead/ui/EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    const/16 p3, 0xc

    if-eqz p1, :cond_0

    .line 151
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->b:Lcom/tkay/core/common/f/h;

    .line 1165
    new-instance v1, Lcom/tkay/core/common/ui/component/RoundImageView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/core/common/ui/component/RoundImageView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    .line 1166
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41400000    # 12.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 1167
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v2, v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0xb

    .line 1168
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1169
    invoke-virtual {v2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1170
    iget-object v3, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    invoke-virtual {p0, v3, v2}, Lcom/tkay/basead/ui/EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1172
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->v()Ljava/lang/String;

    move-result-object p1

    .line 1173
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1174
    iget-object v2, p0, Lcom/tkay/basead/ui/EndCardView;->j:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    .line 1175
    iget v3, v2, Landroid/view/ViewGroup$LayoutParams;->width:I

    .line 1176
    iget v2, v2, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 1177
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v4

    new-instance v5, Lcom/tkay/core/common/res/e;

    const/4 v6, 0x1

    invoke-direct {v5, v6, p1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v6, Lcom/tkay/basead/ui/EndCardView$3;

    invoke-direct {v6, p0, p1, v1}, Lcom/tkay/basead/ui/EndCardView$3;-><init>(Lcom/tkay/basead/ui/EndCardView;Ljava/lang/String;I)V

    invoke-virtual {v4, v5, v3, v2, v6}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    :cond_0
    if-eqz p2, :cond_1

    .line 1208
    new-instance p1, Lcom/tkay/basead/ui/ScanningAnimTextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-direct {p1, p2}, Lcom/tkay/basead/ui/ScanningAnimTextView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    .line 1209
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    const-string v1, "myoffer_cta_learn_more"

    const-string v2, "string"

    invoke-static {p2, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(I)V

    .line 1210
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    const-string p2, "#ffffffff"

    invoke-static {p2}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 1211
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    const/high16 p2, 0x41600000    # 14.0f

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setTextSize(F)V

    .line 1212
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    const/16 p2, 0x11

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setGravity(I)V

    .line 1213
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    const-string v1, "myoffer_splash_bg_rectangle_btn_cta_asseblem"

    const-string v2, "drawable"

    invoke-static {p2, v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 1215
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    iget-object p2, p0, Lcom/tkay/basead/ui/EndCardView;->l:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1217
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    const/high16 v1, 0x42400000    # 48.0f

    invoke-static {p2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    invoke-direct {p1, v0, p2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1218
    invoke-virtual {p1, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1219
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    const/high16 p3, 0x42c00000    # 96.0f

    invoke-static {p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    iput p2, p1, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 1220
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    const/high16 p3, 0x41c00000    # 24.0f

    invoke-static {p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    iput p2, p1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 1221
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result p2

    iput p2, p1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1223
    iget-object p2, p0, Lcom/tkay/basead/ui/EndCardView;->k:Landroid/widget/TextView;

    invoke-virtual {p0, p2, p1}, Lcom/tkay/basead/ui/EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 160
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView;->l:Landroid/view/View$OnClickListener;

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/EndCardView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public load()V
    .locals 6

    .line 227
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView;->b:Lcom/tkay/core/common/f/h;

    .line 2081
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/common/res/e;

    const/4 v3, 0x1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    iget v3, p0, Lcom/tkay/basead/ui/EndCardView;->f:I

    iget v4, p0, Lcom/tkay/basead/ui/EndCardView;->g:I

    new-instance v5, Lcom/tkay/basead/ui/EndCardView$2;

    invoke-direct {v5, p0, v0}, Lcom/tkay/basead/ui/EndCardView$2;-><init>(Lcom/tkay/basead/ui/EndCardView;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V
    :try_end_0
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 2126
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    :catch_1
    move-exception v0

    .line 2124
    invoke-virtual {v0}, Ljava/lang/OutOfMemoryError;->printStackTrace()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 233
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseEndCardView;->onDetachedFromWindow()V

    return-void
.end method

.method public setSize(II)V
    .locals 0

    .line 75
    iput p1, p0, Lcom/tkay/basead/ui/EndCardView;->f:I

    .line 76
    iput p2, p0, Lcom/tkay/basead/ui/EndCardView;->g:I

    return-void
.end method
