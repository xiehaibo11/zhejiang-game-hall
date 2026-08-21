.class final Lcom/kwad/components/ad/adbit/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/adbit/c;->b(Lcom/kwad/components/core/p/a/a;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic bv:Lcom/kwad/components/core/p/a/a;

.field final synthetic bw:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/adbit/c$3;->bw:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const/4 v0, 0x1

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/kwad/components/ad/adbit/c$3;->bw:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v2, Lcom/kwad/components/ad/adbit/AdBitResultData;

    iget-object v3, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    iget-object v3, v3, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v3, v3, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v2, v3}, Lcom/kwad/components/ad/adbit/AdBitResultData;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v2, v1}, Lcom/kwad/components/ad/adbit/AdBitResultData;->parseJson(Lorg/json/JSONObject;)V

    invoke-static {v2}, Lcom/kwad/components/ad/adbit/c;->b(Lcom/kwad/components/ad/adbit/AdBitResultData;)Ljava/util/List;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/kwad/components/ad/adbit/AdBitResultData;->setAdTemplateList(Ljava/util/List;)V

    invoke-virtual {v2}, Lcom/kwad/components/ad/adbit/AdBitResultData;->isAdResultDataEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    sget-object v3, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v3, v3, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v4, v2, Lcom/kwad/components/ad/adbit/AdBitResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object v2, v2, Lcom/kwad/components/ad/adbit/AdBitResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-static {v1, v3, v2, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void

    :cond_1
    invoke-virtual {v2}, Lcom/kwad/components/ad/adbit/AdBitResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    const/4 v3, 0x0

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    iget-object v3, v3, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v3, v3, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v3

    const/16 v4, 0x2710

    if-eq v3, v4, :cond_2

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v1

    if-eq v3, v1, :cond_2

    iget-object v1, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoY:Lcom/kwad/sdk/core/network/f;

    iget v2, v2, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v3, Lcom/kwad/sdk/core/network/f;->aoY:Lcom/kwad/sdk/core/network/f;

    iget-object v3, v3, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-static {v1, v2, v3, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    return-void

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-static {v1, v2, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v1

    iget-object v2, p0, Lcom/kwad/components/ad/adbit/c$3;->bv:Lcom/kwad/components/core/p/a/a;

    sget-object v3, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget v3, v3, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v4, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget-object v4, v4, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-static {v2, v3, v4, v0}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;ILjava/lang/String;Z)V

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method
