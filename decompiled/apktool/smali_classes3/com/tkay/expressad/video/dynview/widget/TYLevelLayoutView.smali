.class public Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;
.super Landroid/widget/LinearLayout;


# instance fields
.field private a:D

.field private b:I

.field private c:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 36
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method private a()V
    .locals 14

    .line 75
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->c:Z

    const/high16 v1, 0x40000000    # 2.0f

    const/4 v2, -0x2

    const/high16 v3, 0x41700000    # 15.0f

    const/4 v4, 0x0

    const/4 v5, 0x0

    if-eqz v0, :cond_0

    .line 76
    new-instance v0, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v3}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v6

    invoke-direct {v0, v2, v6}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 77
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v6

    invoke-virtual {v0, v5, v6, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    .line 78
    new-instance v6, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v6, v7}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 79
    invoke-virtual {v6, v5}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 80
    invoke-virtual {v6, v0}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 81
    new-instance v7, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v7, v8}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 82
    invoke-virtual {v7, v5}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 83
    invoke-virtual {v7, v0}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    :cond_0
    move-object v6, v4

    move-object v7, v6

    .line 85
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->removeAllViews()V

    const-string v0, "drawable"

    if-eqz v7, :cond_1

    .line 88
    new-instance v8, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9, v3}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v9

    invoke-direct {v8, v2, v9}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 89
    new-instance v2, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v9

    invoke-direct {v2, v9}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const/4 v9, 0x1

    .line 90
    invoke-static {v9}, Landroid/graphics/Typeface;->defaultFromStyle(I)Landroid/graphics/Typeface;

    move-result-object v10

    invoke-virtual {v2, v10}, Landroid/widget/TextView;->setTypeface(Landroid/graphics/Typeface;)V

    const-string v10, "("

    .line 91
    invoke-virtual {v2, v10}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const-string v10, "#5f5f5f"

    .line 92
    invoke-static {v10}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v2, v11}, Landroid/widget/TextView;->setTextColor(I)V

    .line 93
    new-instance v11, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-direct {v11, v12}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 94
    invoke-static {v9}, Landroid/graphics/Typeface;->defaultFromStyle(I)Landroid/graphics/Typeface;

    move-result-object v12

    invoke-virtual {v11, v12}, Landroid/widget/TextView;->setTypeface(Landroid/graphics/Typeface;)V

    const/16 v12, 0x11

    .line 95
    invoke-virtual {v11, v12}, Landroid/widget/TextView;->setGravity(I)V

    .line 96
    invoke-static {v10}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v11, v10}, Landroid/widget/TextView;->setTextColor(I)V

    .line 97
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getResources()Landroid/content/res/Resources;

    move-result-object v10

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v12

    const-string v13, "tkay_reward_user"

    invoke-static {v12, v13, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v12

    invoke-virtual {v10, v12}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v10

    .line 99
    invoke-virtual {v10}, Landroid/graphics/drawable/Drawable;->getMinimumWidth()I

    move-result v12

    invoke-virtual {v10}, Landroid/graphics/drawable/Drawable;->getMinimumHeight()I

    move-result v13

    invoke-virtual {v10, v5, v5, v12, v13}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 100
    invoke-virtual {v11, v10, v4, v4, v4}, Landroid/widget/TextView;->setCompoundDrawables(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V

    .line 101
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget v10, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->b:I

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " )"

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v11, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 102
    sget-object v4, Landroid/text/TextUtils$TruncateAt;->END:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {v11, v4}, Landroid/widget/TextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    .line 103
    invoke-virtual {v11, v9}, Landroid/widget/TextView;->setLines(I)V

    .line 104
    invoke-virtual {v7, v2, v8}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 105
    invoke-virtual {v7, v11, v8}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 108
    :cond_1
    iget-wide v8, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->a:D

    const-wide/16 v10, 0x0

    cmpl-double v2, v8, v10

    if-nez v2, :cond_2

    const-wide/high16 v8, 0x4014000000000000L    # 5.0

    :cond_2
    move v2, v5

    :goto_1
    const/4 v4, 0x5

    if-ge v2, v4, :cond_5

    .line 114
    new-instance v4, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v10

    invoke-direct {v4, v10}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 115
    new-instance v10, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v3}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v11

    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12, v3}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v12

    invoke-direct {v10, v11, v12}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    int-to-double v11, v2

    cmpg-double v11, v11, v8

    if-gez v11, :cond_3

    .line 117
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v11

    const-string v12, "tkay_download_message_dialog_star_sel"

    invoke-static {v11, v12, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v4, v11}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_2

    .line 119
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v11

    const-string v12, "tkay_download_message_dilaog_star_nor"

    invoke-static {v11, v12, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v11

    invoke-virtual {v4, v11}, Landroid/widget/ImageView;->setImageResource(I)V

    :goto_2
    const/high16 v11, 0x3f800000    # 1.0f

    .line 121
    iput v11, v10, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    .line 122
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v11

    invoke-static {v11, v1}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v11

    invoke-virtual {v10, v11, v5, v5, v5}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    if-eqz v6, :cond_4

    .line 124
    invoke-virtual {v6, v4, v10}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_3

    .line 126
    :cond_4
    invoke-virtual {p0, v4, v10}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :goto_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_5
    if-eqz v6, :cond_6

    if-eqz v6, :cond_6

    .line 131
    invoke-virtual {p0, v6}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->addView(Landroid/view/View;)V

    .line 132
    invoke-virtual {p0, v7}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->addView(Landroid/view/View;)V

    :cond_6
    return-void
.end method

.method public static dip2px(Landroid/content/Context;F)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 140
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    if-nez p0, :cond_1

    return v0

    .line 143
    :cond_1
    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method


# virtual methods
.method public setRating(I)V
    .locals 2

    int-to-double v0, p1

    .line 66
    iput-wide v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->a:D

    .line 67
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->a()V

    return-void
.end method

.method public setRatingAndUser(DI)V
    .locals 2

    .line 50
    iput-wide p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->a:D

    if-nez p3, :cond_0

    .line 53
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide p1

    const-wide/high16 v0, 0x4022000000000000L    # 9.0

    mul-double/2addr p1, v0

    const-wide/high16 v0, 0x3ff0000000000000L    # 1.0

    add-double/2addr p1, v0

    const-wide v0, 0x40c3880000000000L    # 10000.0

    mul-double/2addr p1, v0

    double-to-int p3, p1

    .line 55
    :cond_0
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->b:I

    const/4 p1, 0x1

    .line 56
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->c:Z

    .line 57
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->a()V

    return-void
.end method
