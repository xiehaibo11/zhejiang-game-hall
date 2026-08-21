.class final Lcom/kwad/components/ad/interstitial/aggregate/c$2;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/aggregate/c;->a(Lcom/kwad/components/core/p/a/b;Lcom/kwad/components/core/p/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/p/a;",
        "Lcom/kwad/components/core/response/model/AdResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic ib:Lcom/kwad/components/ad/interstitial/aggregate/c;

.field final synthetic ig:Lcom/kwad/components/core/p/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/aggregate/c;Lcom/kwad/components/core/p/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ib:Lcom/kwad/components/ad/interstitial/aggregate/c;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ig:Lcom/kwad/components/core/p/h;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private b(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ib:Lcom/kwad/components/ad/interstitial/aggregate/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/c;->a(Lcom/kwad/components/ad/interstitial/aggregate/c;Z)Z

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->isAdResultDataEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ig:Lcom/kwad/components/core/p/h;

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v2, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/core/p/h;->onError(ILjava/lang/String;)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ig:Lcom/kwad/components/core/p/h;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/p/h;->a(Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method

.method private f(ILjava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ib:Lcom/kwad/components/ad/interstitial/aggregate/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/c;->a(Lcom/kwad/components/ad/interstitial/aggregate/c;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->ig:Lcom/kwad/components/core/p/h;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/p/h;->onError(ILjava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->f(ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/interstitial/aggregate/c$2;->b(Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method
