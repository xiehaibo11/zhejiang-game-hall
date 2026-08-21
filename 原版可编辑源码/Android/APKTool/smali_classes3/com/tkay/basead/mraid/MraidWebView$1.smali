.class final Lcom/tkay/basead/mraid/MraidWebView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/ViewTreeObserver$OnPreDrawListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/mraid/MraidWebView;->prepare(Landroid/content/Context;Lcom/tkay/basead/mraid/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/mraid/MraidWebView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/mraid/MraidWebView;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPreDraw()Z
    .locals 6

    const/4 v0, 0x0

    .line 81
    :try_start_0
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    iget-boolean v1, v1, Lcom/tkay/basead/mraid/MraidWebView;->b:Z

    if-nez v1, :cond_1

    .line 85
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v1}, Lcom/tkay/basead/mraid/MraidWebView;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v1

    invoke-virtual {v1, p0}, Landroid/view/ViewTreeObserver;->removeOnPreDrawListener(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V

    .line 86
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    const/4 v2, 0x1

    iput-boolean v2, v1, Lcom/tkay/basead/mraid/MraidWebView;->b:Z

    const/4 v1, 0x2

    new-array v1, v1, [I

    .line 88
    iget-object v3, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v3, v1}, Lcom/tkay/basead/mraid/MraidWebView;->getLocationInWindow([I)V

    .line 89
    iget-object v3, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    aget v4, v1, v0

    int-to-float v4, v4

    aget v5, v1, v2

    int-to-float v5, v5

    invoke-static {v3, v4, v5}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Landroid/webkit/WebView;FF)V

    .line 90
    iget-object v3, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    aget v4, v1, v0

    aget v1, v1, v2

    iget-object v2, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    .line 91
    invoke-virtual {v2}, Lcom/tkay/basead/mraid/MraidWebView;->getWidth()I

    move-result v2

    iget-object v5, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v5}, Lcom/tkay/basead/mraid/MraidWebView;->getHeight()I

    move-result v5

    .line 90
    invoke-static {v3, v4, v1, v2, v5}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Landroid/webkit/WebView;IIII)V

    .line 93
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-static {v1}, Lcom/tkay/basead/mraid/MraidWebView;->a(Lcom/tkay/basead/mraid/MraidWebView;)V

    .line 95
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    iget-boolean v1, v1, Lcom/tkay/basead/mraid/MraidWebView;->d:Z

    if-eqz v1, :cond_0

    .line 96
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-static {v1}, Lcom/tkay/basead/mraid/MraidWebView;->b(Lcom/tkay/basead/mraid/MraidWebView;)V

    .line 99
    :cond_0
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    iget-object v1, v1, Lcom/tkay/basead/mraid/MraidWebView;->a:Lcom/tkay/basead/mraid/b;

    if-eqz v1, :cond_1

    .line 100
    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$1;->a:Lcom/tkay/basead/mraid/MraidWebView;

    iget-object v1, v1, Lcom/tkay/basead/mraid/MraidWebView;->a:Lcom/tkay/basead/mraid/b;

    invoke-virtual {v1}, Lcom/tkay/basead/mraid/b;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 105
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method
