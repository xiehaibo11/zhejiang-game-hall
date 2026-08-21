.class final Lcom/kwad/components/ad/reward/m/c$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/m/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# instance fields
.field private appName:Ljava/lang/String;

.field private ql:Ljava/lang/String;

.field private qm:Ljava/lang/String;

.field private yD:F

.field private yE:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private yF:I

.field private yG:Ljava/lang/String;


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0xf

    iput v0, p0, Lcom/kwad/components/ad/reward/m/c$b;->yF:I

    return-void
.end method

.method public static A(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/c$b;
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/m/c$b;

    invoke-direct {v1}, Lcom/kwad/components/ad/reward/m/c$b;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ap(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    :goto_0
    iput-object v2, v1, Lcom/kwad/components/ad/reward/m/c$b;->appName:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->au(Lcom/kwad/sdk/core/response/model/AdInfo;)F

    move-result v2

    iput v2, v1, Lcom/kwad/components/ad/reward/m/c$b;->yD:F

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/kwad/components/ad/reward/m/c$b;->qm:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ct(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_2
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    :goto_1
    iput-object v0, v1, Lcom/kwad/components/ad/reward/m/c$b;->ql:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/d;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gE()I

    move-result v0

    iput v0, v1, Lcom/kwad/components/ad/reward/m/c$b;->yF:I

    const-string v0, "\u5b89\u88c5\u5e76\u4f53\u9a8c%s\u79d2  \u53ef\u9886\u53d6\u5956\u52b1"

    goto :goto_2

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zC()I

    move-result v0

    iput v0, v1, Lcom/kwad/components/ad/reward/m/c$b;->yF:I

    const-string v0, "\u6d4f\u89c8\u8be6\u60c5\u9875%s\u79d2\uff0c\u9886\u53d6\u5956\u52b1"

    :goto_2
    iput-object v0, v1, Lcom/kwad/components/ad/reward/m/c$b;->yG:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/c;->bX(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/util/List;

    move-result-object p0

    iput-object p0, v1, Lcom/kwad/components/ad/reward/m/c$b;->yE:Ljava/util/List;

    return-object v1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/c$b;->ql:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/c$b;->appName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/c$b;->qm:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/m/c$b;)F
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/reward/m/c$b;->yD:F

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/m/c$b;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/m/c$b;->yE:Ljava/util/List;

    return-object p0
.end method


# virtual methods
.method public final jW()Ljava/lang/String;
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c$b;->yG:Ljava/lang/String;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    iget v2, p0, Lcom/kwad/components/ad/reward/m/c$b;->yF:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
