.class final Lcom/kwad/components/ad/reward/h$b$1;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/h$b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/ad/reward/i;",
        "Lcom/kwad/sdk/core/network/BaseResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/kwad/components/ad/reward/h$b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/h$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/h$b$1;->this$0:Lcom/kwad/components/ad/reward/h$b;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/i;ILjava/lang/String;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/p;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/h$b$1;->this$0:Lcom/kwad/components/ad/reward/h$b;

    invoke-static {p2}, Lcom/kwad/components/ad/reward/h$b;->a(Lcom/kwad/components/ad/reward/h$b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p2

    const/4 v0, 0x1

    invoke-virtual {p1, p2, v0, p3}, Lcom/kwad/components/core/o/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V

    const-string p1, "RewardCallbackVerifyHelper"

    const-string p2, "callbackUrlInfo verify failed"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/kwad/components/ad/reward/i;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 2

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/core/network/p;->onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/h$b$1;->this$0:Lcom/kwad/components/ad/reward/h$b;

    invoke-static {p2}, Lcom/kwad/components/ad/reward/h$b;->a(Lcom/kwad/components/ad/reward/h$b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p2

    const/4 v0, 0x0

    const-string v1, "success"

    invoke-virtual {p1, p2, v0, v1}, Lcom/kwad/components/core/o/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V

    const-string p1, "RewardCallbackVerifyHelper"

    const-string p2, "callbackUrlInfo verify success"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/i;

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/ad/reward/h$b$1;->a(Lcom/kwad/components/ad/reward/i;ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/i;

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/h$b$1;->a(Lcom/kwad/components/ad/reward/i;Lcom/kwad/sdk/core/network/BaseResultData;)V

    return-void
.end method
