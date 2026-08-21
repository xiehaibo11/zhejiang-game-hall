.class final Lcom/kwad/components/ad/adbit/c$5;
.super Lcom/kwad/sdk/core/network/p;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/adbit/c;->a(Ljava/util/List;Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/core/p/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/p<",
        "Lcom/kwad/components/ad/a/b;",
        "Lcom/kwad/components/ad/adbit/AdBitResultData;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic bv:Lcom/kwad/components/core/p/a/a;

.field final synthetic bx:Lcom/kwad/components/ad/adbit/AdBitResultData;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/adbit/c$5;->bx:Lcom/kwad/components/ad/adbit/AdBitResultData;

    iput-object p2, p0, Lcom/kwad/components/ad/adbit/c$5;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/p;-><init>()V

    return-void
.end method

.method private b(ILjava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/adbit/c$5;->bv:Lcom/kwad/components/core/p/a/a;

    const/4 v1, 0x0

    invoke-static {v0, p1, p2, v1}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void
.end method

.method private c(Lcom/kwad/components/ad/adbit/AdBitResultData;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/adbit/c$5;->bx:Lcom/kwad/components/ad/adbit/AdBitResultData;

    invoke-static {v0, p1}, Lcom/kwad/components/ad/adbit/c;->b(Lcom/kwad/components/ad/adbit/AdBitResultData;Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/adbit/AdBitResultData;->setAdTemplateList(Ljava/util/List;)V

    invoke-virtual {p1}, Lcom/kwad/components/ad/adbit/AdBitResultData;->isAdResultDataEmpty()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/adbit/c$5;->bv:Lcom/kwad/components/core/p/a/a;

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v2, v2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v3, p1, Lcom/kwad/components/ad/adbit/AdBitResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/components/ad/adbit/AdBitResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-static {v0, v2, p1, v1}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/components/ad/adbit/AdBitResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/adbit/c$5;->bv:Lcom/kwad/components/core/p/a/a;

    iget-object v2, v2, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v2, v2, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget v2, v2, Lcom/kwad/sdk/internal/api/SceneImpl;->adStyle:I

    const/16 v3, 0x2710

    if-eq v2, v3, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v0

    if-eq v2, v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/adbit/c$5;->bv:Lcom/kwad/components/core/p/a/a;

    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoY:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoY:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-static {p1, v0, v2, v1}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/adbit/c$5;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-static {v0, p1, v1}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;Z)V

    return-void
.end method


# virtual methods
.method public final synthetic onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/adbit/c$5;->b(ILjava/lang/String;)V

    return-void
.end method

.method public final synthetic onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0

    check-cast p2, Lcom/kwad/components/ad/adbit/AdBitResultData;

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/adbit/c$5;->c(Lcom/kwad/components/ad/adbit/AdBitResultData;)V

    return-void
.end method
