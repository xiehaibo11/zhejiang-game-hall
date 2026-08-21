.class final Lcom/tkay/interstitial/a/a$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/a$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

.field final synthetic b:Lcom/tkay/core/common/f/d;

.field final synthetic c:Lcom/tkay/interstitial/a/a$1;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/a$1;Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 166
    iput-object p1, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iput-object p2, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    iput-object p3, p0, Lcom/tkay/interstitial/a/a$1$2;->b:Lcom/tkay/core/common/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 169
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v1, v1, Lcom/tkay/interstitial/a/a$1;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->setScenario(Ljava/lang/String;)V

    .line 170
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 172
    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v3, v3, Lcom/tkay/interstitial/a/a$1;->f:Lcom/tkay/core/api/TYEventInterface;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/core/api/IExHandler;->createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    .line 174
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_1

    .line 175
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v1, v0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v2, v0, Lcom/tkay/interstitial/a/a$1;->b:Landroid/app/Activity;

    new-instance v3, Lcom/tkay/interstitial/a/d;

    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    iget-object v4, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v4, v4, Lcom/tkay/interstitial/a/a$1;->g:Lcom/tkay/interstitial/api/TYInterstitialListener;

    invoke-direct {v3, v0, v4}, Lcom/tkay/interstitial/a/d;-><init>(Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;Lcom/tkay/interstitial/api/TYInterstitialListener;)V

    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/interstitial/a/a$1$2;->b:Lcom/tkay/core/common/f/d;

    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v6, v0, Lcom/tkay/interstitial/a/a$1;->c:Ljava/lang/String;

    invoke-static/range {v1 .. v6}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/interstitial/a/a;Landroid/app/Activity;Lcom/tkay/interstitial/a/d;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;Ljava/lang/String;)V

    goto :goto_0

    .line 177
    :cond_1
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v1, v1, Lcom/tkay/interstitial/a/a$1;->b:Landroid/app/Activity;

    new-instance v2, Lcom/tkay/interstitial/a/d;

    iget-object v3, p0, Lcom/tkay/interstitial/a/a$1$2;->a:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    iget-object v4, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v4, v4, Lcom/tkay/interstitial/a/a$1;->g:Lcom/tkay/interstitial/api/TYInterstitialListener;

    invoke-direct {v2, v3, v4}, Lcom/tkay/interstitial/a/d;-><init>(Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;Lcom/tkay/interstitial/api/TYInterstitialListener;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->internalShow(Landroid/app/Activity;Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;)V

    .line 181
    :goto_0
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget v0, v0, Lcom/tkay/interstitial/a/a$1;->e:I

    if-lez v0, :cond_3

    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v0}, Lcom/tkay/interstitial/a/a;->e(Lcom/tkay/interstitial/a/a;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 182
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v0}, Lcom/tkay/interstitial/a/a;->f(Lcom/tkay/interstitial/a/a;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 183
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v0}, Lcom/tkay/interstitial/a/a;->f(Lcom/tkay/interstitial/a/a;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v1, v1, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v1}, Lcom/tkay/interstitial/a/a;->f(Lcom/tkay/interstitial/a/a;)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 185
    :cond_2
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$2;->c:Lcom/tkay/interstitial/a/a$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v0}, Lcom/tkay/interstitial/a/a;->e(Lcom/tkay/interstitial/a/a;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    :cond_3
    return-void
.end method
