.class final Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->init()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->p()V

    .line 116
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {p1, p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->a(Lcom/tkay/basead/c/e;)V

    return-void
.end method

.method public final onAdClicked(Landroid/view/View;)V
    .locals 1

    .line 89
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz p1, :cond_0

    .line 90
    iget-object p1, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    const/4 v0, 0x1

    invoke-interface {p1, v0}, Lcom/tkay/basead/e/b$b;->a(I)V

    :cond_0
    return-void
.end method

.method public final onAdDislikeButtonClick()V
    .locals 0

    return-void
.end method

.method public final onAdImpressed()V
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->a()V

    :cond_0
    return-void
.end method

.method public final onAdVideoEnd()V
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->b(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->G()V

    .line 107
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 108
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->c()V

    .line 110
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->p()V

    return-void
.end method

.method public final onAdVideoProgress(I)V
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->b(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    .line 122
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {v0, p1}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->a(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;I)V

    return-void
.end method

.method public final onAdVideoStart()V
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->a(Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;)V

    .line 97
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 98
    iget-object v0, p0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView$2;->a:Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/ThirdPartyFullScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->b()V

    :cond_0
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 0

    return-void
.end method

.method public final onDownloadConfirmCallback(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    return-void
.end method
