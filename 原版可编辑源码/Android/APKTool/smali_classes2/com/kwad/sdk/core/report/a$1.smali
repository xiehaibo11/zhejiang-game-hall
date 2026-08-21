.class final Lcom/kwad/sdk/core/report/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/a;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aqz:Lorg/json/JSONObject;

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/a$1;->aqz:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/core/report/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadSource:I

    iput v1, v0, Lcom/kwad/sdk/core/report/z$b;->downloadSource:I

    iget-object v1, p0, Lcom/kwad/sdk/core/report/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/report/a;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/z$b;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/report/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/sdk/core/report/a$1;->aqz:Lorg/json/JSONObject;

    const/16 v3, 0x1f

    invoke-static {v1, v3, v0, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/a$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/kwad/sdk/utils/ak;->as(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
