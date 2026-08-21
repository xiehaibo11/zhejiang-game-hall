.class public Lcom/kwad/sdk/core/download/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/download/d;


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/download/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;III)V
    .locals 0

    return-void
.end method

.method public a(Ljava/lang/String;ILcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;ILjava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final am(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final c(Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final d(Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final e(Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    return-void
.end method

.method public final nx()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    return-object v0
.end method

.method public final ny()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    return-object v0
.end method
