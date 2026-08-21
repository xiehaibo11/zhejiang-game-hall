.class public Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;
.super Ljava/lang/Object;
.source "SoftKeyBoardListener.java"

# interfaces
.implements Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;
    }
.end annotation


# static fields
.field private static softKeyBoardListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;


# instance fields
.field private onSoftKeyBoardChangeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

.field private rootView:Landroid/view/View;

.field rootViewVisibleHeight:I


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootView:Landroid/view/View;

    .line 20
    invoke-virtual {p1}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/view/ViewTreeObserver;->addOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    return-void
.end method

.method public static removeListener()V
    .locals 1

    .line 84
    sget-object v0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->softKeyBoardListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->remove()V

    return-void
.end method

.method public static setListener(Landroid/app/Activity;Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;)V
    .locals 1

    .line 79
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;-><init>(Landroid/app/Activity;)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->softKeyBoardListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;

    .line 80
    invoke-direct {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->setOnSoftKeyBoardChangeListener(Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;)V

    return-void
.end method

.method private setOnSoftKeyBoardChangeListener(Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;)V
    .locals 0

    .line 28
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->onSoftKeyBoardChangeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

    return-void
.end method


# virtual methods
.method public onGlobalLayout()V
    .locals 4

    .line 34
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "\u83b7\u53d6\u5f53\u524d\u6839\u89c6\u56fe\u5728\u5c4f\u5e55\u4e0a\u663e\u793a\u7684\u5927\u5c0f"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 35
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 37
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootView:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->getWindowVisibleDisplayFrame(Landroid/graphics/Rect;)V

    .line 38
    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v0

    .line 39
    iget v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    if-nez v1, :cond_0

    .line 40
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    const-string v2, "rootViewVisibleHeight == 0"

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 41
    iput v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    return-void

    :cond_0
    if-ne v1, v0, :cond_1

    .line 47
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "\u6839\u89c6\u56fe\u663e\u793a\u9ad8\u5ea6\u6ca1\u6709\u53d8\u5316 == 0"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    return-void

    :cond_1
    sub-int v2, v1, v0

    const/16 v3, 0xc8

    if-le v2, v3, :cond_3

    .line 53
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u53ef\u4ee5\u770b\u4f5c\u8f6f\u952e\u76d8\u663e\u793a\u4e86 == 0---"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 54
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->onSoftKeyBoardChangeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

    if-eqz v1, :cond_2

    .line 55
    iget v2, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    sub-int/2addr v2, v0

    invoke-interface {v1, v2}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;->keyBoardShow(I)V

    .line 57
    :cond_2
    iput v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    return-void

    :cond_3
    sub-int v1, v0, v1

    if-le v1, v3, :cond_5

    .line 63
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u53ef\u4ee5\u770b\u4f5c\u8f6f\u952e\u76d8\u9690\u85cf\u4e86 == 0---"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 64
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->onSoftKeyBoardChangeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

    if-eqz v1, :cond_4

    .line 65
    iget v2, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    sub-int v2, v0, v2

    invoke-interface {v1, v2}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;->keyBoardHide(I)V

    .line 67
    :cond_4
    iput v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootViewVisibleHeight:I

    :cond_5
    return-void
.end method

.method public remove()V
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->rootView:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v0

    invoke-virtual {v0, p0}, Landroid/view/ViewTreeObserver;->removeOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    return-void
.end method
