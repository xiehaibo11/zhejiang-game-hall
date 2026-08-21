.class final Lcom/tkay/expressad/video/module/TkayVideoView$b;
.super Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "b"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/video/module/TkayVideoView;

.field private b:I

.field private c:I

.field private d:Z

.field private e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

.field private f:Z

.field private g:Z

.field private h:Z

.field private i:Z

.field private j:Ljava/lang/String;

.field private k:Lcom/tkay/expressad/foundation/d/c;

.field private l:I

.field private m:I

.field private n:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 1

    .line 1622
    invoke-direct {p0}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;-><init>()V

    .line 1586
    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/module/TkayVideoView$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    const/4 v0, 0x0

    .line 1587
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->f:Z

    .line 1588
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->g:Z

    .line 1589
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->h:Z

    .line 1595
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->n:Z

    .line 1623
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    return-void
.end method

.method private a(I)V
    .locals 5

    const-string v0, "drawable"

    if-lez p1, :cond_0

    .line 1666
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_reward_video_time_count_num_bg"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 1667
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41f00000    # 30.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-direct {p1, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1668
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    const/4 v1, 0x1

    .line 1669
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_native_endcard_feed_btn"

    const-string v4, "id"

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p1, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/4 v1, 0x0

    .line 1670
    invoke-virtual {p1, v0, v1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 1671
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v2

    invoke-virtual {v2, v0, v1, v0, v1}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 1672
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 1674
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_reward_shape_progress"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    return-void
.end method

.method private a(III)V
    .locals 5

    .line 1941
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-nez v0, :cond_0

    return-void

    .line 1946
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "tkay_reward_video_view_reward_time_complete"

    invoke-static {v1, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 1947
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    const-string v4, "tkay_reward_video_view_reward_time_left"

    invoke-static {v3, v4, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-ltz p1, :cond_2

    sub-int/2addr p1, p3

    if-gtz p1, :cond_1

    goto :goto_0

    .line 1953
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_2
    sub-int/2addr p2, p3

    if-gtz p2, :cond_3

    if-gtz p1, :cond_5

    const-string v0, "0"

    goto :goto_0

    :cond_3
    if-gtz p1, :cond_4

    .line 1960
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1963
    :cond_5
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iput p3, p1, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    .line 1964
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1965
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object p1

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ProgressBar;->getVisibility()I

    move-result p1

    if-nez p1, :cond_6

    .line 1966
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object p1

    invoke-virtual {p1, p3}, Landroid/widget/ProgressBar;->setProgress(I)V

    :cond_6
    return-void
.end method

.method private b(I)V
    .locals 4

    .line 1685
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_3

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 1688
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    const/4 v1, 0x5

    const-string v2, "drawable"

    const-string v3, "tkay_reward_video_time_count_num_bg"

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    const/4 v1, 0x1

    if-le v0, v1, :cond_1

    if-gtz p1, :cond_1

    .line 1689
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 1690
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->d()V

    return-void

    :cond_1
    if-lez p1, :cond_2

    .line 1694
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->d()V

    goto :goto_0

    :cond_2
    const-string v3, "tkay_reward_shape_progress"

    .line 1698
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v3, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    :cond_3
    :goto_1
    return-void
.end method

.method private b(III)V
    .locals 3

    .line 1972
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-le p1, p2, :cond_1

    move p1, p2

    :cond_1
    if-gtz p1, :cond_2

    sub-int/2addr p2, p3

    goto :goto_0

    :cond_2
    sub-int p2, p1, p3

    :goto_0
    const-string v0, "string"

    if-gtz p2, :cond_4

    if-gtz p1, :cond_3

    const-string p1, "0"

    goto :goto_1

    .line 1982
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    const-string v1, "tkay_reward_video_view_reward_time_complete"

    invoke-static {p2, v1, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    goto :goto_1

    :cond_4
    if-gtz p1, :cond_5

    .line 1984
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_5
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_reward_video_view_reward_time_left"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1986
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p2}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1988
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object p1

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ProgressBar;->getVisibility()I

    move-result p1

    if-nez p1, :cond_6

    .line 1989
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object p1

    invoke-virtual {p1, p3}, Landroid/widget/ProgressBar;->setProgress(I)V

    :cond_6
    return-void
.end method

.method private c()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 1598
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method private d()V
    .locals 3

    .line 1705
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-nez v0, :cond_0

    return-void

    .line 1708
    :cond_0
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v0, :cond_1

    const/4 v1, -0x2

    .line 1710
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 1711
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41c80000    # 25.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 1712
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1714
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 1715
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2, v0, v2}, Landroid/widget/TextView;->setPadding(IIII)V

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 1614
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->b:I

    return v0
.end method

.method public final a(II)V
    .locals 0

    .line 1618
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->l:I

    .line 1619
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->m:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 1602
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 1610
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->j:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 1606
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->i:Z

    return-void
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 1994
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v0, 0x0

    .line 1995
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Z)Z

    return-void
.end method

.method public final onBufferingEnd()V
    .locals 3

    .line 1917
    :try_start_0
    invoke-super {p0}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onBufferingEnd()V

    .line 1922
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0xe

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 1924
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onBufferingStart(Ljava/lang/String;)V
    .locals 2

    .line 1902
    :try_start_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onBufferingStart(Ljava/lang/String;)V

    .line 1907
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0xd

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1910
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onPlayCompleted()V
    .locals 5

    .line 1720
    invoke-super {p0}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayCompleted()V

    .line 1721
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->w(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 1722
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    const-string v1, "0"

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 1723
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    if-lez v0, :cond_0

    .line 1724
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v3, "tkay_reward_video_view_reward_time_complete"

    const-string v4, "string"

    invoke-static {v1, v3, v4}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(I)V

    goto :goto_0

    .line 1726
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1728
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->n(I)V

    .line 1729
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    .line 1730
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->x(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 1731
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->y(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1732
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->y(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setClickable(Z)V

    .line 1734
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->z(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/widget/SoundImageView;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 1735
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->z(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/widget/SoundImageView;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/widget/SoundImageView;->setClickable(Z)V

    goto :goto_1

    .line 1739
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1748
    :cond_3
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->c(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/playercommon/PlayerView;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/playercommon/PlayerView;->setClickable(Z)V

    .line 1750
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Lcom/tkay/expressad/video/module/TkayVideoView;Z)Ljava/lang/String;

    move-result-object v0

    .line 1752
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_5

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v2

    const/4 v3, 0x5

    if-ne v2, v3, :cond_5

    .line 1754
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v2, :cond_5

    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->A(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/dynview/f/a;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 1756
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v2, v2, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v2, v3, :cond_5

    .line 1757
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 1758
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "position"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1759
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mMuteSwitch:I

    if-eqz v1, :cond_4

    .line 1760
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mMuteSwitch:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "mute"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1762
    :cond_4
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->A(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/dynview/f/a;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/tkay/expressad/video/dynview/f/a;->a(Ljava/util/Map;)V

    return-void

    .line 1767
    :cond_5
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v2, v2, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v3, 0x79

    const-string v4, ""

    invoke-interface {v2, v3, v4}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 1768
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v2, v2, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v3, 0xb

    invoke-interface {v2, v3, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 1769
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->c:I

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->b:I

    .line 1770
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iput v0, v2, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrentPlayProgressTime:I

    .line 1771
    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Z)Z

    return-void
.end method

.method public final onPlayError(Ljava/lang/String;)V
    .locals 2

    .line 1779
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayError(Ljava/lang/String;)V

    .line 1780
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_0

    .line 1781
    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0xc

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public final onPlayProgress(II)V
    .locals 8

    .line 1787
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayProgress(II)V

    .line 1788
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-boolean v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_d

    const/4 v0, 0x0

    .line 1790
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    .line 1791
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    .line 1792
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_1"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;I)V

    .line 1795
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v1

    const-string v2, "0"

    const-string v3, "tkay_reward_video_view_reward_time_complete"

    const-string v4, "tkay_reward_video_view_reward_time_left"

    const-string v5, "string"

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v1

    const/4 v6, 0x5

    if-ne v1, v6, :cond_6

    .line 1797
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->B(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v1

    .line 3941
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v6, :cond_d

    .line 3946
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v3, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v6, v3}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 3947
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7, v4, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v6, v4}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    if-ltz v0, :cond_2

    sub-int/2addr v0, p1

    if-gtz v0, :cond_1

    goto :goto_0

    .line 3953
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_2
    sub-int/2addr v1, p1

    if-gtz v1, :cond_3

    if-gtz v0, :cond_5

    goto :goto_1

    :cond_3
    if-gtz v0, :cond_4

    .line 3960
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :cond_5
    :goto_0
    move-object v2, v3

    .line 3963
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iput p1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    .line 3964
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3965
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    if-eqz v0, :cond_d

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getVisibility()I

    move-result v0

    if-nez v0, :cond_d

    .line 3966
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setProgress(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_5

    :catch_0
    move-exception v0

    .line 1799
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    goto/16 :goto_5

    .line 3972
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_c

    if-le v0, p2, :cond_7

    move v0, p2

    :cond_7
    if-gtz v0, :cond_8

    sub-int v1, p2, p1

    goto :goto_2

    :cond_8
    sub-int v1, v0, p1

    :goto_2
    if-gtz v1, :cond_a

    if-gtz v0, :cond_9

    goto :goto_4

    .line 3982
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v3, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v0

    move-object v2, v0

    check-cast v2, Ljava/lang/String;

    goto :goto_4

    :cond_a
    if-gtz v0, :cond_b

    .line 3984
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    goto :goto_3

    :cond_b
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v4, v5}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getText(I)Ljava/lang/CharSequence;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_3
    move-object v2, v0

    .line 3986
    :goto_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3988
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getVisibility()I

    move-result v0

    if-nez v0, :cond_c

    .line 3989
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 1803
    :cond_c
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iput p1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    .line 1806
    :cond_d
    :goto_5
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->c:I

    .line 1807
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iput p1, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrentPlayProgressTime:I

    .line 1808
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iput p1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    .line 1809
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iput p2, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    .line 1810
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->C(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v1

    iput-boolean v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->c:Z

    .line 1811
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->b:I

    .line 1812
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0xf

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 1830
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->d(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v0

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 1831
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->D(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v0

    if-nez v0, :cond_e

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 1832
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->j(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v0

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v1, :cond_e

    .line 1833
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->g(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    :cond_e
    const/4 v0, 0x1

    .line 1837
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_f

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->E(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    move-result-object v1

    if-eqz v1, :cond_f

    mul-int/lit8 v1, p1, 0x64

    .line 1838
    div-int/2addr v1, p2

    .line 1839
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->E(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    sub-int/2addr v3, v0

    invoke-virtual {v2, v1, v3}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setProgress(II)V

    .line 1840
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->n(I)V

    .line 1843
    :cond_f
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_10

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->v(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_10

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->v(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v1

    if-ne p1, v1, :cond_10

    .line 1844
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_10

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v1

    if-eqz v1, :cond_10

    .line 1845
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCTALayoutVisibleOrGone()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_6

    :catchall_0
    move-exception v1

    .line 1849
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 1853
    :cond_10
    :goto_6
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->l:I

    const/16 v2, 0x64

    if-eq v1, v2, :cond_15

    iget-boolean v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->n:Z

    if-nez v3, :cond_15

    if-nez v1, :cond_11

    return-void

    .line 1858
    :cond_11
    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->m:I

    if-le v3, v1, :cond_12

    .line 1859
    div-int/lit8 v1, v1, 0x2

    iput v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->m:I

    .line 1862
    :cond_12
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->m:I

    if-ltz v1, :cond_15

    mul-int/2addr p2, v1

    .line 1863
    div-int/2addr p2, v2

    if-lt p1, p2, :cond_15

    .line 1867
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v1, 0x5e

    if-eq p1, v1, :cond_14

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v1, 0x11f

    if-ne p1, v1, :cond_13

    goto :goto_7

    .line 1870
    :cond_13
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_8

    .line 1868
    :cond_14
    :goto_7
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1872
    :goto_8
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->j:Ljava/lang/String;

    invoke-virtual {v1, v2, p1}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1

    if-eqz p1, :cond_15

    .line 1874
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->i()V

    .line 1875
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->n:Z

    .line 1876
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "CDRate is : "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " and start download !"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_15
    return-void
.end method

.method public final onPlaySetDataSourceError(Ljava/lang/String;)V
    .locals 0

    .line 1930
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlaySetDataSourceError(Ljava/lang/String;)V

    return-void
.end method

.method public final onPlayStarted(I)V
    .locals 8

    .line 1628
    invoke-super {p0, p1}, Lcom/tkay/expressad/playercommon/DefaultVideoPlayerStatusListener;->onPlayStarted(I)V

    .line 1629
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->d:Z

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 1630
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_0

    .line 1631
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->q(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 1633
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0xa

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->e:Lcom/tkay/expressad/video/module/TkayVideoView$a;

    invoke-interface {v0, v2, v3}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 1634
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->d:Z

    .line 1636
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    const/4 v2, 0x0

    if-eqz v0, :cond_7

    .line 1637
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    .line 1638
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v3

    const-string v4, "tkay_reward_shape_progress"

    const-string v5, "tkay_reward_video_time_count_num_bg"

    const-string v6, "drawable"

    if-eqz v3, :cond_5

    .line 2685
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v3, :cond_7

    invoke-static {v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v3

    if-nez v3, :cond_2

    goto/16 :goto_0

    .line 2688
    :cond_2
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v3

    const/4 v7, 0x5

    if-ne v3, v7, :cond_3

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v3, v1, :cond_3

    if-gtz v0, :cond_3

    .line 2689
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v5, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 2690
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->d()V

    goto/16 :goto_0

    :cond_3
    if-lez v0, :cond_4

    .line 2694
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->d()V

    move-object v4, v5

    .line 2698
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    goto :goto_0

    :cond_5
    if-lez v0, :cond_6

    .line 3666
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v5, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 3667
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x41f00000    # 30.0f

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 3668
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    .line 3669
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    const-string v5, "tkay_native_endcard_feed_btn"

    const-string v6, "id"

    invoke-static {v4, v5, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v0, v1, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 3670
    invoke-virtual {v0, v3, v2, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 3671
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v1

    invoke-virtual {v1, v3, v2, v3, v2}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 3672
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 3674
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4, v6}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 1645
    :cond_7
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 1646
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setMax(I)V

    .line 1648
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_9

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_9

    .line 1649
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;

    move-result-object p1

    invoke-virtual {p1, v2}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 1651
    :cond_9
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_a

    .line 1652
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->u(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    .line 1654
    :cond_a
    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Z)Z

    .line 1657
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->v(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result p1

    if-nez p1, :cond_b

    .line 1658
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCTALayoutVisibleOrGone()V

    .line 1660
    :cond_b
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->showMoreOfferInPlayTemplate()V

    .line 1661
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->showBaitClickView()V

    return-void
.end method

.method public final onVideoDownloadResume()V
    .locals 3

    .line 1886
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x5e

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x11f

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 1889
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 1887
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->k:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1891
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->j:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1893
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->i()V

    const/4 v0, 0x1

    .line 1894
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$b;->n:Z

    :cond_2
    return-void
.end method
