.class final Lcom/tkay/interstitial/a/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/c;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/api/TYAdInfo;

.field final synthetic c:Lcom/tkay/core/api/TYNetworkConfirmInfo;

.field final synthetic d:Lcom/tkay/interstitial/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/c;Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/tkay/interstitial/a/c$2;->d:Lcom/tkay/interstitial/a/c;

    iput-object p2, p0, Lcom/tkay/interstitial/a/c$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/interstitial/a/c$2;->b:Lcom/tkay/core/api/TYAdInfo;

    iput-object p4, p0, Lcom/tkay/interstitial/a/c$2;->c:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 43
    iget-object v0, p0, Lcom/tkay/interstitial/a/c$2;->d:Lcom/tkay/interstitial/a/c;

    iget-object v0, v0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    if-eqz v0, :cond_1

    .line 44
    iget-object v0, p0, Lcom/tkay/interstitial/a/c$2;->d:Lcom/tkay/interstitial/a/c;

    iget-object v0, v0, Lcom/tkay/interstitial/a/c;->a:Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;

    iget-object v1, p0, Lcom/tkay/interstitial/a/c$2;->a:Landroid/content/Context;

    if-nez v1, :cond_0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v1

    :cond_0
    iget-object v2, p0, Lcom/tkay/interstitial/a/c$2;->b:Lcom/tkay/core/api/TYAdInfo;

    iget-object v3, p0, Lcom/tkay/interstitial/a/c$2;->c:Lcom/tkay/core/api/TYNetworkConfirmInfo;

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_1
    return-void
.end method
