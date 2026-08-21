.class final Lcom/kwad/components/ad/draw/d$1;
.super Lcom/kwad/components/core/p/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/draw/d;->loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic bS:Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/d$1;->bS:Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;

    invoke-direct {p0}, Lcom/kwad/components/core/p/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 4

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v2, :cond_0

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    new-instance v3, Lcom/kwad/components/ad/draw/c;

    invoke-direct {v3, v2}, Lcom/kwad/components/ad/draw/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_3

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v1, v1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "(\u65e0\u89c6\u9891\u8d44\u6e90)"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_2
    iget-object p1, p1, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_1
    invoke-virtual {p0, v0, p1}, Lcom/kwad/components/ad/draw/d$1;->onError(ILjava/lang/String;)V

    return-void

    :cond_3
    new-instance p1, Lcom/kwad/components/ad/draw/d$1$2;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/ad/draw/d$1$2;-><init>(Lcom/kwad/components/ad/draw/d$1;Ljava/util/List;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/draw/d$1$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/ad/draw/d$1$1;-><init>(Lcom/kwad/components/ad/draw/d$1;ILjava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
