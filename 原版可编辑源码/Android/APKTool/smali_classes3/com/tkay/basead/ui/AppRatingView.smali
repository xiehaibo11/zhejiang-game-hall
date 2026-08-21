.class public Lcom/tkay/basead/ui/AppRatingView;
.super Landroid/widget/LinearLayout;


# instance fields
.field private a:Landroid/content/Context;

.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/basead/ui/StarLevelView;",
            ">;"
        }
    .end annotation
.end field

.field private c:I

.field private d:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 25
    invoke-direct {p0, p1, v0, v1}, Lcom/tkay/basead/ui/AppRatingView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 29
    invoke-direct {p0, p1, p2, v0}, Lcom/tkay/basead/ui/AppRatingView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 34
    iput-object p1, p0, Lcom/tkay/basead/ui/AppRatingView;->a:Landroid/content/Context;

    const/16 p1, 0x11

    .line 35
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/AppRatingView;->setStarSizeInDp(I)V

    const/16 p1, 0x8

    .line 36
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/AppRatingView;->setStarMargin(I)V

    return-void
.end method

.method public static dip2px(Landroid/content/Context;F)I
    .locals 0

    .line 80
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

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
    .locals 4

    const/4 v0, 0x0

    move v1, v0

    .line 69
    :goto_0
    iget-object v2, p0, Lcom/tkay/basead/ui/AppRatingView;->b:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 70
    iget-object v2, p0, Lcom/tkay/basead/ui/AppRatingView;->b:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/basead/ui/StarLevelView;

    if-ge v1, p1, :cond_0

    const/4 v3, 0x1

    .line 72
    invoke-virtual {v2, v3}, Lcom/tkay/basead/ui/StarLevelView;->setState(Z)V

    goto :goto_1

    .line 74
    :cond_0
    invoke-virtual {v2, v0}, Lcom/tkay/basead/ui/StarLevelView;->setState(Z)V

    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public setStarMargin(I)V
    .locals 0

    .line 44
    iput p1, p0, Lcom/tkay/basead/ui/AppRatingView;->d:I

    return-void
.end method

.method public setStarNum(I)V
    .locals 6

    .line 48
    iget-object v0, p0, Lcom/tkay/basead/ui/AppRatingView;->b:Ljava/util/List;

    if-nez v0, :cond_0

    .line 49
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/ui/AppRatingView;->b:Ljava/util/List;

    .line 51
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/AppRatingView;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 52
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AppRatingView;->removeAllViews()V

    const/4 v0, 0x0

    .line 53
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/AppRatingView;->setOrientation(I)V

    move v1, v0

    :goto_0
    if-ge v1, p1, :cond_2

    .line 55
    new-instance v2, Lcom/tkay/basead/ui/StarLevelView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/AppRatingView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/basead/ui/StarLevelView;-><init>(Landroid/content/Context;)V

    .line 56
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    iget v4, p0, Lcom/tkay/basead/ui/AppRatingView;->c:I

    invoke-direct {v3, v4, v4}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    add-int/lit8 v4, p1, -0x1

    if-eq v1, v4, :cond_1

    .line 58
    invoke-virtual {p0}, Lcom/tkay/basead/ui/AppRatingView;->getContext()Landroid/content/Context;

    move-result-object v4

    iget v5, p0, Lcom/tkay/basead/ui/AppRatingView;->d:I

    int-to-float v5, v5

    invoke-static {v4, v5}, Lcom/tkay/basead/ui/AppRatingView;->dip2px(Landroid/content/Context;F)I

    move-result v4

    invoke-virtual {v3, v0, v0, v4, v0}, Landroid/widget/LinearLayout$LayoutParams;->setMargins(IIII)V

    .line 60
    :cond_1
    invoke-virtual {v2, v3}, Lcom/tkay/basead/ui/StarLevelView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 62
    invoke-virtual {p0, v2}, Lcom/tkay/basead/ui/AppRatingView;->addView(Landroid/view/View;)V

    .line 63
    iget-object v3, p0, Lcom/tkay/basead/ui/AppRatingView;->b:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public setStarSizeInDp(I)V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/basead/ui/AppRatingView;->a:Landroid/content/Context;

    int-to-float p1, p1

    invoke-static {v0, p1}, Lcom/tkay/basead/ui/AppRatingView;->dip2px(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/ui/AppRatingView;->c:I

    return-void
.end method
