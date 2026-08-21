.class final Lcom/kwad/sdk/a/a/c$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ZZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahI:Lcom/kwad/sdk/a/a/c;

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$9;->ahI:Lcom/kwad/sdk/a/a/c;

    iput-object p2, p0, Lcom/kwad/sdk/a/a/c$9;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$9;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-static {v0}, Lcom/kwad/sdk/a/a/c;->c(Lcom/kwad/sdk/a/a/c;)Lcom/kwad/sdk/a/a/e;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$9;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-static {v0}, Lcom/kwad/sdk/a/a/c;->c(Lcom/kwad/sdk/a/a/c;)Lcom/kwad/sdk/a/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/e;->dismiss()V

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$9;->ahI:Lcom/kwad/sdk/a/a/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/a/a/e;)Lcom/kwad/sdk/a/a/e;

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$9;->ahI:Lcom/kwad/sdk/a/a/c;

    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$9;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x2

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_0
    return-void
.end method
