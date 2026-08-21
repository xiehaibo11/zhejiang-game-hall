.class final Lcom/kwad/components/core/t/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Rj:Lcom/kwad/components/core/t/b;

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/t/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/t/b$1;->Rj:Lcom/kwad/components/core/t/b;

    iput-object p2, p0, Lcom/kwad/components/core/t/b$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    invoke-static {}, Lcom/kwad/components/core/c/a;->mg()Lcom/kwad/components/core/c/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/t/b$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/c/a;->o(J)V

    :cond_0
    return-void
.end method
