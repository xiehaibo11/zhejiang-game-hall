.class final Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    const-string v1, ""

    invoke-static {v0, v1, p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a:Z

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->startLoadAdForReward()V

    return-void

    .line 97
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;->c:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V

    return-void
.end method
