.class public Lcom/bianfeng/customwidgetlib/HorizontalListView;
.super Landroid/widget/AdapterView;
.source "HorizontalListView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/AdapterView<",
        "Landroid/widget/ListAdapter;",
        ">;"
    }
.end annotation


# instance fields
.field private volatile isScrollingTimer:Ljava/util/Timer;

.field ismove:Z

.field protected mAdapter:Landroid/widget/ListAdapter;

.field public mAlwaysOverrideTouch:Z

.field protected mCurrentX:I

.field private mDataChanged:Z

.field private mDataObserver:Landroid/database/DataSetObserver;

.field private mDisplayOffset:I

.field private mGesture:Landroid/view/GestureDetector;

.field private mLeftViewIndex:I

.field private mMaxX:I

.field protected mNextX:I

.field private mOnGesture:Landroid/view/GestureDetector$OnGestureListener;

.field private mOnItemClicked:Landroid/widget/AdapterView$OnItemClickListener;

.field private mOnItemLongClicked:Landroid/widget/AdapterView$OnItemLongClickListener;

.field private mOnItemSelected:Landroid/widget/AdapterView$OnItemSelectedListener;

.field private mRemovedViewQueue:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private mRightViewIndex:I

.field protected mScroller:Landroid/widget/Scroller;

.field startX:F

.field startY:F

.field private timer:Ljava/util/Timer;

.field private width:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 43
    invoke-direct {p0, p1, p2}, Landroid/widget/AdapterView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x1

    .line 26
    iput-boolean p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAlwaysOverrideTouch:Z

    const/4 p1, -0x1

    .line 28
    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    const/4 p1, 0x0

    .line 29
    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    const p2, 0x7fffffff

    .line 32
    iput p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    .line 33
    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    .line 36
    new-instance p2, Ljava/util/LinkedList;

    invoke-direct {p2}, Ljava/util/LinkedList;-><init>()V

    iput-object p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRemovedViewQueue:Ljava/util/Queue;

    .line 40
    iput-boolean p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataChanged:Z

    .line 73
    new-instance p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView$1;-><init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V

    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataObserver:Landroid/database/DataSetObserver;

    .line 385
    new-instance p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$4;

    invoke-direct {p1, p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView$4;-><init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V

    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnGesture:Landroid/view/GestureDetector$OnGestureListener;

    .line 44
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->initView()V

    return-void
.end method

.method static synthetic access$002(Lcom/bianfeng/customwidgetlib/HorizontalListView;Z)Z
    .locals 0

    .line 22
    iput-boolean p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataChanged:Z

    return p1
.end method

.method static synthetic access$100(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->reset()V

    return-void
.end method

.method static synthetic access$200(Lcom/bianfeng/customwidgetlib/HorizontalListView;)Ljava/util/Timer;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrollingTimer:Ljava/util/Timer;

    return-object p0
.end method

.method static synthetic access$300(Lcom/bianfeng/customwidgetlib/HorizontalListView;)I
    .locals 0

    .line 22
    iget p0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->width:I

    return p0
.end method

.method static synthetic access$400(Lcom/bianfeng/customwidgetlib/HorizontalListView;)Landroid/widget/AdapterView$OnItemClickListener;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnItemClicked:Landroid/widget/AdapterView$OnItemClickListener;

    return-object p0
.end method

.method static synthetic access$500(Lcom/bianfeng/customwidgetlib/HorizontalListView;)I
    .locals 0

    .line 22
    iget p0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    return p0
.end method

.method static synthetic access$600(Lcom/bianfeng/customwidgetlib/HorizontalListView;)Landroid/widget/AdapterView$OnItemSelectedListener;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnItemSelected:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-object p0
.end method

.method static synthetic access$700(Lcom/bianfeng/customwidgetlib/HorizontalListView;)Landroid/widget/AdapterView$OnItemLongClickListener;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnItemLongClicked:Landroid/widget/AdapterView$OnItemLongClickListener;

    return-object p0
.end method

.method private addAndMeasureChild(Landroid/view/View;I)V
    .locals 2

    .line 123
    invoke-virtual {p1}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-nez v0, :cond_0

    .line 125
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    :cond_0
    const/4 v1, 0x1

    .line 128
    invoke-virtual {p0, p1, p2, v0, v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->addViewInLayout(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;Z)Z

    .line 129
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getWidth()I

    move-result p2

    const/high16 v0, -0x80000000

    invoke-static {p2, v0}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p2

    .line 130
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getHeight()I

    move-result v1

    invoke-static {v1, v0}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v0

    .line 129
    invoke-virtual {p1, p2, v0}, Landroid/view/View;->measure(II)V

    return-void
.end method

.method private fillList(I)V
    .locals 2

    .line 183
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildCount()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 185
    invoke-virtual {v0}, Landroid/view/View;->getRight()I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 187
    :goto_0
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->fillListRight(II)V

    .line 190
    invoke-virtual {p0, v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 192
    invoke-virtual {v0}, Landroid/view/View;->getLeft()I

    move-result v1

    .line 194
    :cond_1
    invoke-direct {p0, v1, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->fillListLeft(II)V

    return-void
.end method

.method private fillListLeft(II)V
    .locals 3

    :goto_0
    add-int v0, p1, p2

    if-lez v0, :cond_0

    .line 216
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    if-ltz v0, :cond_0

    .line 217
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    iget-object v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRemovedViewQueue:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    invoke-interface {v1, v0, v2, p0}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    .line 218
    invoke-direct {p0, v0, v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->addAndMeasureChild(Landroid/view/View;I)V

    .line 219
    invoke-virtual {v0}, Landroid/view/View;->getMeasuredWidth()I

    move-result v1

    sub-int/2addr p1, v1

    .line 220
    iget v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    add-int/lit8 v1, v1, -0x1

    iput v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    .line 221
    iget v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    invoke-virtual {v0}, Landroid/view/View;->getMeasuredWidth()I

    move-result v0

    sub-int/2addr v1, v0

    iput v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    goto :goto_0

    :cond_0
    return-void
.end method

.method private fillListRight(II)V
    .locals 3

    :goto_0
    add-int v0, p1, p2

    .line 198
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getWidth()I

    move-result v1

    if-ge v0, v1, :cond_2

    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    invoke-interface {v1}, Landroid/widget/ListAdapter;->getCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 200
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    iget v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    iget-object v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRemovedViewQueue:Ljava/util/Queue;

    invoke-interface {v2}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    invoke-interface {v0, v1, v2, p0}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    const/4 v1, -0x1

    .line 201
    invoke-direct {p0, v0, v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->addAndMeasureChild(Landroid/view/View;I)V

    .line 202
    invoke-virtual {v0}, Landroid/view/View;->getMeasuredWidth()I

    move-result v0

    add-int/2addr p1, v0

    .line 204
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    invoke-interface {v1}, Landroid/widget/ListAdapter;->getCount()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    if-ne v0, v1, :cond_0

    .line 205
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mCurrentX:I

    add-int/2addr v0, p1

    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getWidth()I

    move-result v1

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    .line 208
    :cond_0
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    if-gez v0, :cond_1

    const/4 v0, 0x0

    .line 209
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    .line 211
    :cond_1
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    goto :goto_0

    :cond_2
    return-void
.end method

.method private declared-synchronized initView()V
    .locals 3

    monitor-enter p0

    const/4 v0, -0x1

    .line 48
    :try_start_0
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    const/4 v0, 0x0

    .line 49
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    .line 50
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    .line 51
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mCurrentX:I

    .line 52
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    const v0, 0x7fffffff

    .line 53
    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    .line 54
    new-instance v0, Landroid/widget/Scroller;

    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/widget/Scroller;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    .line 55
    new-instance v0, Landroid/view/GestureDetector;

    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnGesture:Landroid/view/GestureDetector$OnGestureListener;

    invoke-direct {v0, v1, v2}, Landroid/view/GestureDetector;-><init>(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V

    iput-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mGesture:Landroid/view/GestureDetector;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 56
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private isScrolling()V
    .locals 7

    .line 282
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrollingTimer:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 283
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrollingTimer:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 284
    iput-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrollingTimer:Ljava/util/Timer;

    .line 286
    :cond_0
    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrollingTimer:Ljava/util/Timer;

    .line 287
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrollingTimer:Ljava/util/Timer;

    new-instance v2, Lcom/bianfeng/customwidgetlib/HorizontalListView$3;

    invoke-direct {v2, p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView$3;-><init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V

    const-wide/16 v3, 0x64

    const-wide/16 v5, 0x3e8

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    return-void
.end method

.method private positionItems(I)V
    .locals 6

    .line 246
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 247
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    add-int/2addr v0, p1

    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    const/4 p1, 0x0

    const/4 v1, 0x0

    .line 249
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 250
    invoke-virtual {p0, v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 251
    invoke-virtual {v2}, Landroid/view/View;->getMeasuredWidth()I

    move-result v3

    add-int v4, v0, v3

    .line 252
    invoke-virtual {v2}, Landroid/view/View;->getMeasuredHeight()I

    move-result v5

    invoke-virtual {v2, v0, p1, v4, v5}, Landroid/view/View;->layout(IIII)V

    .line 253
    invoke-virtual {v2}, Landroid/view/View;->getPaddingRight()I

    move-result v2

    add-int/2addr v3, v2

    add-int/2addr v0, v3

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private removeNonVisibleItems(I)V
    .locals 4

    const/4 v0, 0x0

    .line 226
    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    :goto_0
    if-eqz v1, :cond_0

    .line 227
    invoke-virtual {v1}, Landroid/view/View;->getRight()I

    move-result v2

    add-int/2addr v2, p1

    if-gtz v2, :cond_0

    .line 228
    iget v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    invoke-virtual {v1}, Landroid/view/View;->getMeasuredWidth()I

    move-result v3

    add-int/2addr v2, v3

    iput v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDisplayOffset:I

    .line 229
    iget-object v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRemovedViewQueue:Ljava/util/Queue;

    invoke-interface {v2, v1}, Ljava/util/Queue;->offer(Ljava/lang/Object;)Z

    .line 230
    invoke-virtual {p0, v1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->removeViewInLayout(Landroid/view/View;)V

    .line 231
    iget v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mLeftViewIndex:I

    .line 232
    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    goto :goto_0

    .line 236
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildCount()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    :goto_1
    if-eqz v0, :cond_1

    .line 237
    invoke-virtual {v0}, Landroid/view/View;->getLeft()I

    move-result v1

    add-int/2addr v1, p1

    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getWidth()I

    move-result v2

    if-lt v1, v2, :cond_1

    .line 238
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRemovedViewQueue:Ljava/util/Queue;

    invoke-interface {v1, v0}, Ljava/util/Queue;->offer(Ljava/lang/Object;)Z

    .line 239
    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->removeViewInLayout(Landroid/view/View;)V

    .line 240
    iget v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mRightViewIndex:I

    .line 241
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildCount()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    goto :goto_1

    :cond_1
    return-void
.end method

.method private declared-synchronized reset()V
    .locals 1

    monitor-enter p0

    .line 113
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->initView()V

    .line 114
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->removeAllViewsInLayout()V

    .line 115
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->requestLayout()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 116
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public autoScroll()V
    .locals 6

    .line 276
    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->timer:Ljava/util/Timer;

    .line 277
    new-instance v1, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;

    iget-object v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {v2}, Landroid/widget/Scroller;->getCurrX()I

    move-result v2

    invoke-direct {v1, p0, v2}, Lcom/bianfeng/customwidgetlib/HorizontalListView$TimeTaskScroll;-><init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;I)V

    const-wide/16 v2, 0x1f4

    const-wide/16 v4, 0xbb8

    invoke-virtual/range {v0 .. v5}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    return-void
.end method

.method public dispatchTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 4

    .line 338
    invoke-super {p0, p1}, Landroid/widget/AdapterView;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v0

    .line 339
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mGesture:Landroid/view/GestureDetector;

    invoke-virtual {v1, p1}, Landroid/view/GestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v1

    or-int/2addr v0, v1

    .line 340
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    const/4 v2, 0x1

    invoke-interface {v1, v2}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    .line 342
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v1

    if-eqz v1, :cond_3

    if-eq v1, v2, :cond_2

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 350
    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    float-to-int v1, v1

    .line 351
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v2

    float-to-int v2, v2

    int-to-float v1, v1

    .line 353
    iget v3, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startX:F

    sub-float/2addr v1, v3

    float-to-int v1, v1

    int-to-float v2, v2

    .line 354
    iget v3, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startY:F

    sub-float/2addr v2, v3

    float-to-int v2, v2

    .line 356
    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result v1

    add-int/lit8 v1, v1, 0x32

    invoke-static {v2}, Ljava/lang/Math;->abs(I)I

    move-result v2

    if-le v1, v2, :cond_1

    goto :goto_0

    .line 360
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    goto :goto_0

    .line 364
    :cond_2
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->isScrolling()V

    goto :goto_0

    .line 344
    :cond_3
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    float-to-int v1, v1

    int-to-float v1, v1

    iput v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startX:F

    .line 345
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v1

    float-to-int v1, v1

    int-to-float v1, v1

    iput v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startY:F

    .line 346
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->stopScroll()V

    .line 368
    :goto_0
    invoke-super {p0, p1}, Landroid/widget/AdapterView;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    or-int/2addr p1, v0

    return p1
.end method

.method public bridge synthetic getAdapter()Landroid/widget/Adapter;
    .locals 1

    .line 22
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    return-object v0
.end method

.method public getAdapter()Landroid/widget/ListAdapter;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    return-object v0
.end method

.method public getSelectedView()Landroid/view/View;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected onDown(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 381
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/widget/Scroller;->forceFinished(Z)V

    return v0
.end method

.method protected onFling(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 9

    .line 373
    monitor-enter p0

    .line 374
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    iget v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    const/4 v2, 0x0

    neg-float p1, p3

    float-to-int v3, p1

    const/4 v4, 0x0

    const/4 v5, 0x0

    iget v6, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v0 .. v8}, Landroid/widget/Scroller;->fling(IIIIIIII)V

    .line 375
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 376
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->requestLayout()V

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 375
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 6

    .line 456
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-eqz v0, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 462
    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    .line 463
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v1

    .line 465
    iget v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startX:F

    sub-float/2addr v0, v2

    .line 466
    iget v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startY:F

    sub-float/2addr v1, v2

    .line 468
    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v2

    const/high16 v3, 0x41200000    # 10.0f

    sub-float/2addr v2, v3

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v4

    const/4 v5, 0x1

    cmpl-float v2, v2, v4

    if-lez v2, :cond_1

    return v5

    .line 470
    :cond_1
    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v0

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    sub-float/2addr v1, v3

    cmpg-float v0, v0, v1

    if-gez v0, :cond_3

    return v5

    .line 458
    :cond_2
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startX:F

    .line 459
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v0

    iput v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->startY:F

    .line 477
    :cond_3
    :goto_0
    invoke-super {p0, p1}, Landroid/widget/AdapterView;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method protected declared-synchronized onLayout(ZIIII)V
    .locals 0

    monitor-enter p0

    .line 135
    :try_start_0
    invoke-super/range {p0 .. p5}, Landroid/widget/AdapterView;->onLayout(ZIIII)V

    .line 137
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_0

    .line 138
    monitor-exit p0

    return-void

    .line 140
    :cond_0
    :try_start_1
    iget-boolean p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataChanged:Z

    const/4 p2, 0x0

    if-eqz p1, :cond_1

    .line 141
    iget p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mCurrentX:I

    .line 142
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->initView()V

    .line 143
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->removeAllViewsInLayout()V

    .line 144
    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    .line 145
    iput-boolean p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataChanged:Z

    .line 148
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {p1}, Landroid/widget/Scroller;->computeScrollOffset()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 149
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {p1}, Landroid/widget/Scroller;->getCurrX()I

    move-result p1

    .line 150
    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    .line 153
    :cond_2
    iget p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    const/4 p3, 0x1

    if-gtz p1, :cond_3

    .line 154
    iput p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    .line 155
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {p1, p3}, Landroid/widget/Scroller;->forceFinished(Z)V

    .line 157
    :cond_3
    iget p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    iget p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    if-lt p1, p2, :cond_4

    .line 158
    iget p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mMaxX:I

    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    .line 159
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {p1, p3}, Landroid/widget/Scroller;->forceFinished(Z)V

    .line 162
    :cond_4
    iget p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mCurrentX:I

    iget p2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    sub-int/2addr p1, p2

    .line 164
    invoke-direct {p0, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->removeNonVisibleItems(I)V

    .line 165
    invoke-direct {p0, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->fillList(I)V

    .line 166
    invoke-direct {p0, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->positionItems(I)V

    .line 168
    iget p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mCurrentX:I

    .line 170
    iget-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    invoke-virtual {p1}, Landroid/widget/Scroller;->isFinished()Z

    move-result p1

    if-nez p1, :cond_5

    .line 171
    new-instance p1, Lcom/bianfeng/customwidgetlib/HorizontalListView$2;

    invoke-direct {p1, p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView$2;-><init>(Lcom/bianfeng/customwidgetlib/HorizontalListView;)V

    invoke-virtual {p0, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->post(Ljava/lang/Runnable;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 179
    :cond_5
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0

    .line 265
    invoke-super {p0, p1}, Landroid/widget/AdapterView;->onWindowFocusChanged(Z)V

    .line 266
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->postInvalidate()V

    return-void
.end method

.method public declared-synchronized scrollTo(I)V
    .locals 3

    monitor-enter p0

    .line 259
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mScroller:Landroid/widget/Scroller;

    iget v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    iget v2, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mNextX:I

    sub-int/2addr p1, v2

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2, p1, v2}, Landroid/widget/Scroller;->startScroll(IIII)V

    .line 260
    invoke-virtual {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->requestLayout()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 261
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public bridge synthetic setAdapter(Landroid/widget/Adapter;)V
    .locals 0

    .line 22
    check-cast p1, Landroid/widget/ListAdapter;

    invoke-virtual {p0, p1}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->setAdapter(Landroid/widget/ListAdapter;)V

    return-void
.end method

.method public setAdapter(Landroid/widget/ListAdapter;)V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    if-eqz v0, :cond_0

    .line 105
    iget-object v1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataObserver:Landroid/database/DataSetObserver;

    invoke-interface {v0, v1}, Landroid/widget/ListAdapter;->unregisterDataSetObserver(Landroid/database/DataSetObserver;)V

    .line 107
    :cond_0
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mAdapter:Landroid/widget/ListAdapter;

    .line 108
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mDataObserver:Landroid/database/DataSetObserver;

    invoke-interface {p1, v0}, Landroid/widget/ListAdapter;->registerDataSetObserver(Landroid/database/DataSetObserver;)V

    .line 109
    invoke-direct {p0}, Lcom/bianfeng/customwidgetlib/HorizontalListView;->reset()V

    return-void
.end method

.method public setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnItemClicked:Landroid/widget/AdapterView$OnItemClickListener;

    return-void
.end method

.method public setOnItemLongClickListener(Landroid/widget/AdapterView$OnItemLongClickListener;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnItemLongClicked:Landroid/widget/AdapterView$OnItemLongClickListener;

    return-void
.end method

.method public setOnItemSelectedListener(Landroid/widget/AdapterView$OnItemSelectedListener;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->mOnItemSelected:Landroid/widget/AdapterView$OnItemSelectedListener;

    return-void
.end method

.method public setSelection(I)V
    .locals 0

    return-void
.end method

.method public setWidth(I)V
    .locals 0

    .line 272
    iput p1, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->width:I

    return-void
.end method

.method public stopScroll()V
    .locals 1

    .line 299
    iget-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->timer:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 300
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 301
    iput-object v0, p0, Lcom/bianfeng/customwidgetlib/HorizontalListView;->timer:Ljava/util/Timer;

    :cond_0
    return-void
.end method
