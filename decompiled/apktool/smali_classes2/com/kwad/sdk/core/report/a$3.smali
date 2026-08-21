.class final Lcom/kwad/sdk/core/report/a$3;
.super Lcom/kwad/sdk/core/report/y;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aqA:I

.field final synthetic aqB:Lcom/kwad/sdk/core/report/z$b;

.field final synthetic aqz:Lorg/json/JSONObject;

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/a$3;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput p2, p0, Lcom/kwad/sdk/core/report/a$3;->aqA:I

    iput-object p3, p0, Lcom/kwad/sdk/core/report/a$3;->aqB:Lcom/kwad/sdk/core/report/z$b;

    iput-object p4, p0, Lcom/kwad/sdk/core/report/a$3;->aqz:Lorg/json/JSONObject;

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/y;-><init>()V

    return-void
.end method

.method private BP()Lcom/kwad/sdk/core/report/z;
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/report/z;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/a$3;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget v2, p0, Lcom/kwad/sdk/core/report/a$3;->aqA:I

    iget-object v3, p0, Lcom/kwad/sdk/core/report/a$3;->aqB:Lcom/kwad/sdk/core/report/z$b;

    iget-object v4, p0, Lcom/kwad/sdk/core/report/a$3;->aqz:Lorg/json/JSONObject;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/kwad/sdk/core/report/z;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/a$3;->BP()Lcom/kwad/sdk/core/report/z;

    move-result-object v0

    return-object v0
.end method
