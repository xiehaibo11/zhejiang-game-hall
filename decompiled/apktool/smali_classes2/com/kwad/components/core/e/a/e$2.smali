.class final Lcom/kwad/components/core/e/a/e$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/e/a/e;->N(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic IZ:Lcom/kwad/components/core/e/a/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/e/a/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/a/e$2;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final fh()V
    .locals 2

    const-string v0, "InstalledActivateManager"

    const-string v1, "onViewClose"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$2;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-virtual {v0}, Lcom/kwad/components/core/e/a/e;->en()V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$2;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-static {v0}, Lcom/kwad/components/core/e/a/e;->c(Lcom/kwad/components/core/e/a/e;)V

    return-void
.end method

.method public final mL()V
    .locals 2

    const-string v0, "InstalledActivateManager"

    const-string v1, "onViewShow"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$2;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-virtual {v0}, Lcom/kwad/components/core/e/a/e;->es()V

    return-void
.end method
