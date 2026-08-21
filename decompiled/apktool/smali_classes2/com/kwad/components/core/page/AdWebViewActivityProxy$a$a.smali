.class public final Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private MB:Ljava/lang/String;

.field private MC:Ljava/lang/String;

.field private ME:Z

.field private MF:Z

.field private adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method public final aq(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->MB:Ljava/lang/String;

    return-object p0
.end method

.method public final ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->MC:Ljava/lang/String;

    return-object p0
.end method

.method public final ay(Z)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->MF:Z

    return-object p0
.end method

.method public final az(Z)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ME:Z

    return-object p0
.end method

.method public final oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;
    .locals 8

    new-instance v7, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->MB:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->MC:Ljava/lang/String;

    iget-object v3, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v4, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->MF:Z

    iget-boolean v5, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ME:Z

    const/4 v6, 0x0

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;ZZB)V

    return-object v7
.end method
