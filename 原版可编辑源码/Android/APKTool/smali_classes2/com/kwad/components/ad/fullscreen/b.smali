.class public final Lcom/kwad/components/ad/fullscreen/b;
.super Ljava/lang/Object;


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-void
.end method


# virtual methods
.method public final bB()Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object v0
.end method

.method public final bC()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    return v0
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method
