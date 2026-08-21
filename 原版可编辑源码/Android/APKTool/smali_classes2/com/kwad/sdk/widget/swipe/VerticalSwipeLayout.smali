.class public Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;
.super Landroid/widget/FrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;
    }
.end annotation


# instance fields
.field private aMr:I

.field private aMs:I

.field private aMt:Lcom/kwad/sdk/widget/swipe/a;

.field private aMu:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;",
            ">;"
        }
    .end annotation
.end field

.field private fx:F

.field private fy:F


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x0

    iput p2, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p2, 0x0

    iput p2, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->init(Landroid/content/Context;)V

    return-void
.end method

.method private declared-synchronized KM()V
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;

    invoke-interface {v1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;->dZ()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized KN()V
    .locals 2

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;

    invoke-interface {v1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;->dY()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private c(Landroid/view/MotionEvent;)Z
    .locals 8

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    const-string v1, "VerticalSwipeLayout"

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz v0, :cond_5

    if-eq v0, v2, :cond_4

    const/4 v4, 0x2

    if-eq v0, v4, :cond_1

    const/4 p1, 0x3

    if-eq v0, p1, :cond_0

    goto :goto_3

    :cond_0
    iput v3, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    goto :goto_3

    :cond_1
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iget v5, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fx:F

    sub-float/2addr v0, v5

    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v5

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    iget v6, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fy:F

    sub-float/2addr p1, v6

    invoke-static {p1}, Ljava/lang/Math;->abs(F)F

    move-result v6

    iget v7, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMr:I

    int-to-float v7, v7

    cmpl-float v7, v6, v7

    if-lez v7, :cond_3

    cmpl-float v5, v6, v5

    if-lez v5, :cond_3

    const/4 v5, 0x0

    cmpl-float p1, p1, v5

    if-lez p1, :cond_2

    iput v2, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    goto :goto_0

    :cond_2
    iput v4, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    :cond_3
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v4, "onInterceptTouchEvent ACTION_MOVE mDragState="

    invoke-direct {p1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v4, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "--dx="

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_4
    iput v3, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    const-string p1, "onInterceptTouchEvent ACTION_UP"

    goto :goto_2

    :cond_5
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fx:F

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fy:F

    iput v3, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onInterceptTouchEvent ACTION_DOWN mInitialMotionX="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fx:F

    :goto_1
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_2
    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    iget p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    if-eqz p1, :cond_6

    return v2

    :cond_6
    return v3
.end method

.method private d(Landroid/view/MotionEvent;)Z
    .locals 8

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    const/4 v1, 0x0

    const-string v2, "VerticalSwipeLayout"

    const/4 v3, 0x1

    if-eqz v0, :cond_6

    const/4 v4, 0x2

    if-eq v0, v3, :cond_4

    if-eq v0, v4, :cond_1

    const/4 p1, 0x3

    if-eq v0, p1, :cond_0

    goto/16 :goto_3

    :cond_0
    :goto_0
    iput v1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    goto/16 :goto_3

    :cond_1
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iget v5, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fx:F

    sub-float/2addr v0, v5

    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v5

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    iget v6, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fy:F

    sub-float/2addr p1, v6

    invoke-static {p1}, Ljava/lang/Math;->abs(F)F

    move-result v6

    iget v7, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    if-nez v7, :cond_3

    iget v7, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMr:I

    int-to-float v7, v7

    cmpl-float v7, v6, v7

    if-lez v7, :cond_3

    cmpl-float v5, v6, v5

    if-lez v5, :cond_3

    const/4 v5, 0x0

    cmpl-float p1, p1, v5

    if-lez p1, :cond_2

    iput v3, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    goto :goto_1

    :cond_2
    iput v4, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    :cond_3
    :goto_1
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v4, "onTouchEvent ACTION_MOVE mDragState="

    invoke-direct {p1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v4, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "--dx="

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onTouchEvent ACTION_UP mDragState="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_0

    iget p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    if-eqz p1, :cond_0

    if-ne p1, v3, :cond_5

    invoke-direct {p0}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->KN()V

    goto :goto_0

    :cond_5
    if-ne p1, v4, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->KM()V

    goto :goto_0

    :cond_6
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onTouchEvent ACTION_DOWN mInitialMotionX="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->fx:F

    :goto_2
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    iget p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMs:I

    if-eqz p1, :cond_7

    return v3

    :cond_7
    return v1
.end method

.method private init(Landroid/content/Context;)V
    .locals 0

    invoke-static {p1}, Landroid/view/ViewConfiguration;->get(Landroid/content/Context;)Landroid/view/ViewConfiguration;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/ViewConfiguration;->getScaledPagingTouchSlop()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMr:I

    return-void
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public dispatchTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    if-eq v0, v1, :cond_0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    const/4 v1, 0x0

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    :goto_0
    invoke-interface {v0, v1}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    :cond_2
    :goto_1
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public declared-synchronized getOnSwipedListeners()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout$a;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMt:Lcom/kwad/sdk/widget/swipe/a;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0, p1}, Lcom/kwad/sdk/widget/swipe/a;->b(Landroid/view/View;Landroid/view/MotionEvent;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "VerticalSwipeLayout"

    const-string v0, "onInterceptTouchEvent true"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->c(Landroid/view/MotionEvent;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMt:Lcom/kwad/sdk/widget/swipe/a;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0, p1}, Lcom/kwad/sdk/widget/swipe/a;->c(Landroid/view/View;Landroid/view/MotionEvent;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "VerticalSwipeLayout"

    const-string v0, "handlerTouchEvent true"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMu:Ljava/util/List;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->d(Landroid/view/MotionEvent;)Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public setTouchDetector(Lcom/kwad/sdk/widget/swipe/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/widget/swipe/VerticalSwipeLayout;->aMt:Lcom/kwad/sdk/widget/swipe/a;

    return-void
.end method
