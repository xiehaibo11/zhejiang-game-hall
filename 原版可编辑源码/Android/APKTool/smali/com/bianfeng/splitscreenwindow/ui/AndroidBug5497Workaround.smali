.class public Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;
.super Ljava/lang/Object;
.source "AndroidBug5497Workaround.java"


# instance fields
.field private _globalListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

.field private frameLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

.field private mChildOfContent:Landroid/view/View;

.field private usableHeightPrevious:I


# direct methods
.method private constructor <init>(Landroid/app/Activity;)V
    .locals 2

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const v0, 0x1020002

    .line 30
    invoke-virtual {p1, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    .line 31
    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->mChildOfContent:Landroid/view/View;

    .line 32
    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->frameLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

    .line 33
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround$1;-><init>(Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->_globalListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->possiblyResizeChildOfContent()V

    return-void
.end method

.method private computeUsableHeight()I
    .locals 2

    .line 73
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 74
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->mChildOfContent:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->getWindowVisibleDisplayFrame(Landroid/graphics/Rect;)V

    .line 75
    iget v1, v0, Landroid/graphics/Rect;->bottom:I

    iget v0, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v1, v0

    return v1
.end method

.method public static getInstance(Landroid/app/Activity;)Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;
    .locals 1

    .line 26
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;-><init>(Landroid/app/Activity;)V

    return-object v0
.end method

.method private possiblyResizeChildOfContent()V
    .locals 4

    .line 56
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->computeUsableHeight()I

    move-result v0

    .line 57
    iget v1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->usableHeightPrevious:I

    if-eq v0, v1, :cond_1

    .line 58
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->mChildOfContent:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getHeight()I

    move-result v1

    sub-int v2, v1, v0

    .line 60
    div-int/lit8 v3, v1, 0x4

    if-le v2, v3, :cond_0

    .line 62
    iget-object v3, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->frameLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

    sub-int/2addr v1, v2

    iput v1, v3, Landroid/widget/FrameLayout$LayoutParams;->height:I

    goto :goto_0

    .line 65
    :cond_0
    iget-object v2, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->frameLayoutParams:Landroid/widget/FrameLayout$LayoutParams;

    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 67
    :goto_0
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->mChildOfContent:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->requestLayout()V

    .line 68
    iput v0, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->usableHeightPrevious:I

    :cond_1
    return-void
.end method


# virtual methods
.method public removeListener()V
    .locals 0

    return-void
.end method

.method public setListener()V
    .locals 2

    .line 44
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->mChildOfContent:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/AndroidBug5497Workaround;->_globalListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    invoke-virtual {v0, v1}, Landroid/view/ViewTreeObserver;->addOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    return-void
.end method
