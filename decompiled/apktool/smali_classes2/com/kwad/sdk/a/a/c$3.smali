.class final Lcom/kwad/sdk/a/a/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahI:Lcom/kwad/sdk/a/a/c;

.field final synthetic ahJ:Z

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/c;ZLcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$3;->ahI:Lcom/kwad/sdk/a/a/c;

    iput-boolean p2, p0, Lcom/kwad/sdk/a/a/c$3;->ahJ:Z

    iput-object p3, p0, Lcom/kwad/sdk/a/a/c$3;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zl()I

    move-result v0

    iget-boolean v1, p0, Lcom/kwad/sdk/a/a/c$3;->ahJ:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$3;->ahI:Lcom/kwad/sdk/a/a/c;

    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$3;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    new-instance v3, Lcom/kwad/sdk/a/a/c$3$1;

    invoke-direct {v3, p0}, Lcom/kwad/sdk/a/a/c$3$1;-><init>(Lcom/kwad/sdk/a/a/c$3;)V

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/content/DialogInterface$OnDismissListener;Landroid/content/DialogInterface$OnClickListener;)V

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$3;->ahI:Lcom/kwad/sdk/a/a/c;

    iget-object v2, p0, Lcom/kwad/sdk/a/a/c$3;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-boolean v3, p0, Lcom/kwad/sdk/a/a/c$3;->ahJ:Z

    const/4 v4, 0x0

    invoke-static {v1, v2, v3, v0, v4}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;ZIZ)V

    return-void
.end method
