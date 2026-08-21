.class final Lcom/tkay/network/adx/AdxTYNativeAd$1;
.super Lcom/tkay/basead/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYNativeAd;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/h;ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/tkay/network/adx/AdxTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYNativeAd;Lcom/tkay/core/common/f/h;Landroid/content/Context;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iput-object p3, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->b:Landroid/content/Context;

    invoke-direct {p0, p2}, Lcom/tkay/basead/e/e;-><init>(Lcom/tkay/core/common/f/h;)V

    return-void
.end method


# virtual methods
.method public final onAdClick(I)V
    .locals 3

    .line 65
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYNativeAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 67
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(I)V

    .line 69
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-virtual {p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->notifyAdClicked()V

    .line 70
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object p1, p1, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->n()I

    move-result p1

    const/16 v0, 0x43

    if-ne p1, v0, :cond_2

    .line 71
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object p1, p1, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/basead/d/h;->a(ZZ)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 72
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v2, v2, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v2}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2, v0, v1}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;II)V

    .line 74
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object p1, p1, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {p1, v1, v1}, Lcom/tkay/basead/d/h;->a(ZZ)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 75
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v2, v2, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v2}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2, v0, v1}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;II)V

    :cond_2
    return-void
.end method

.method public final onAdClosed()V
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYNativeAd;->notifyAdDislikeClick()V

    return-void
.end method

.method public final onAdShow()V
    .locals 4

    .line 46
    invoke-super {p0}, Lcom/tkay/basead/e/e;->onAdShow()V

    .line 47
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYNativeAd;->notifyAdImpression()V

    .line 48
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->n()I

    move-result v0

    const/16 v1, 0x43

    if-ne v0, v1, :cond_1

    .line 49
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    const/4 v1, 0x1

    invoke-virtual {v0, v1, v1}, Lcom/tkay/basead/d/h;->a(ZZ)Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 50
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v3, v3, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v3}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v2, v1}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;II)V

    .line 52
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v0, v0, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v0, v2, v1}, Lcom/tkay/basead/d/h;->a(ZZ)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 53
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    iget-object v3, v3, Lcom/tkay/network/adx/AdxTYNativeAd;->a:Lcom/tkay/basead/d/h;

    invoke-virtual {v3}, Lcom/tkay/basead/d/h;->a()Lcom/tkay/core/common/f/h;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v2, v1}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;II)V

    :cond_1
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$1;->c:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-virtual {v0, p1}, Lcom/tkay/network/adx/AdxTYNativeAd;->notifyDeeplinkCallback(Z)V

    return-void
.end method

.method public final onShowFailed(Lcom/tkay/basead/c/e;)V
    .locals 0

    return-void
.end method
