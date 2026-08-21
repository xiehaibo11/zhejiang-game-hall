.class public final Lcom/kwad/components/ad/draw/b/b/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/draw/b/b/a$a;,
        Lcom/kwad/components/ad/draw/b/b/a$b;
    }
.end annotation


# instance fields
.field private cv:Lcom/kwad/components/ad/draw/b/b/a$a;

.field private cw:Lcom/kwad/components/ad/draw/b/b/a$b;

.field private cx:Z

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/draw/b/b/a;->cx:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/draw/b/b/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b/b/a;->cv:Lcom/kwad/components/ad/draw/b/b/a$a;

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/draw/b/b/a$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b/b/a;->cw:Lcom/kwad/components/ad/draw/b/b/a$b;

    return-void
.end method

.method public final an()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/draw/b/b/a;->cx:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/draw/b/b/a;->cx:Z

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    if-eq v1, v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/a;->cw:Lcom/kwad/components/ad/draw/b/b/a$b;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Lcom/kwad/components/ad/draw/b/b/a$b;->ap()Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/b/a;->cv:Lcom/kwad/components/ad/draw/b/b/a$a;

    if-eqz v0, :cond_3

    invoke-interface {v0}, Lcom/kwad/components/ad/draw/b/b/a$a;->ao()V

    :cond_3
    :goto_0
    return-void
.end method
