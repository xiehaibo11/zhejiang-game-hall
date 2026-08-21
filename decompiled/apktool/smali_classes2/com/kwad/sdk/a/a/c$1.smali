.class final Lcom/kwad/sdk/a/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c;->am(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
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

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$1;->ahI:Lcom/kwad/sdk/a/a/c;

    iput-object p2, p0, Lcom/kwad/sdk/a/a/c$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p3, p0, Lcom/kwad/sdk/a/a/c$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/16 v1, 0xc

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/16 v1, 0xa

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$1;->ahI:Lcom/kwad/sdk/a/a/c;

    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    :cond_0
    return-void
.end method
