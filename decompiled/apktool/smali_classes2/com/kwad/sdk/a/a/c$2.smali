.class final Lcom/kwad/sdk/a/a/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c;->an(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahI:Lcom/kwad/sdk/a/a/c;

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field final synthetic se:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$2;->ahI:Lcom/kwad/sdk/a/a/c;

    iput-object p2, p0, Lcom/kwad/sdk/a/a/c$2;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p3, p0, Lcom/kwad/sdk/a/a/c$2;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$2;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/ak;->al(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    if-nez v2, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$2;->ahI:Lcom/kwad/sdk/a/a/c;

    iget-object v2, p0, Lcom/kwad/sdk/a/a/c$2;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    :cond_1
    return-void
.end method
