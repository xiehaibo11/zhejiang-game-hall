.class public Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;
.super Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;
.source "MBStarLevelLayoutView.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 14
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public static dip2px(Landroid/content/Context;F)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 42
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    if-nez p0, :cond_1

    return v0

    .line 45
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
    .locals 7

    .line 18
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->removeAllViews()V

    const/4 v0, 0x5

    if-nez p1, :cond_0

    move p1, v0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    .line 25
    new-instance v2, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 26
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/16 v5, 0xa

    invoke-static {v4, v5}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;I)I

    move-result v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v5}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;I)I

    move-result v5

    invoke-direct {v3, v4, v5}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    const-string v4, "drawable"

    if-ge v1, p1, :cond_1

    .line 28
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "mbridge_download_message_dialog_star_sel"

    invoke-static {v5, v6, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_1

    .line 30
    :cond_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v5

    const-string v6, "mbridge_download_message_dilaog_star_nor"

    invoke-static {v5, v6, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 32
    :goto_1
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x1

    invoke-static {v5, v6}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;I)I

    move-result v5

    int-to-float v5, v5

    invoke-static {v4, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->dip2px(Landroid/content/Context;F)I

    move-result v4

    iput v4, v3, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    .line 33
    invoke-virtual {p0, v2, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBStarLevelLayoutView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method
