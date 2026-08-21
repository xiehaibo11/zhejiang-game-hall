.class public final Lcom/kwad/components/ad/reward/q;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/q$a;
    }
.end annotation


# direct methods
.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 2

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bC(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handleRewardVerify callbackUrl: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ServerCallbackHandle"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/q$1;

    invoke-direct {v0, p1, p0}, Lcom/kwad/components/ad/reward/q$1;-><init>(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method
