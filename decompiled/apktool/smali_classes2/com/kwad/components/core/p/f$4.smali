.class final Lcom/kwad/components/core/p/f$4;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/p/f;->pF()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/core/p/e;",
        "Lcom/kwad/sdk/core/response/model/SdkConfigData;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/e;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onStartRequest request url = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/p/e;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ConfigRequestManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/network/p;->onStartRequest(Lcom/kwad/sdk/core/network/g;)V

    return-void
.end method

.method private a(Lcom/kwad/components/core/p/e;ILjava/lang/String;)V
    .locals 1

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/network/p;->onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onError errorCode="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " errorMsg="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ConfigRequestManager"

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/p/f;->pG()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/config/b;->aO(Landroid/content/Context;)Z

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->c(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/kwad/components/core/p/f;->aD(Z)Z

    invoke-static {}, Lcom/kwad/components/core/p/f;->aR()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/p/f$a;

    if-eqz v1, :cond_0

    invoke-interface {v1, p0}, Lcom/kwad/components/core/p/f$a;->a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V

    goto :goto_0

    :cond_1
    if-eqz p0, :cond_2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/SdkConfigData;->httpDnsInfo:Lcom/kwad/sdk/core/response/model/HttpDnsInfo;

    invoke-static {p0}, Lcom/kwad/sdk/ip/direct/a;->a(Lcom/kwad/sdk/core/response/model/HttpDnsInfo;)V

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/x;->Io()V

    invoke-static {}, Lcom/kwad/sdk/utils/x;->Ii()V

    invoke-static {}, Lcom/kwad/components/core/p/f;->pG()Landroid/content/Context;

    move-result-object p0

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/y;->j(Landroid/content/Context;I)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/e;

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/core/p/f$4;->a(Lcom/kwad/components/core/p/e;ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/p/e;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/p/f$4;->a(Lcom/kwad/components/core/p/e;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/sdk/core/response/model/SdkConfigData;

    invoke-static {p2}, Lcom/kwad/components/core/p/f$4;->b(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V

    return-void
.end method
