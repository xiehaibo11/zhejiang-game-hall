.class final Lcom/kwad/components/ad/k/b$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/k/b$2;->a(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Hi:Lcom/kwad/components/ad/k/b$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/k/b$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/b$2$1;->Hi:Lcom/kwad/components/ad/k/b$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/k/b$2$1;->Hi:Lcom/kwad/components/ad/k/b$2;

    iget-object v0, v0, Lcom/kwad/components/ad/k/b$2;->Hh:Lcom/kwad/components/ad/k/b;

    invoke-static {v0}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/ad/k/b;)Lcom/kwad/components/ad/k/b$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/k/b$2$1;->Hi:Lcom/kwad/components/ad/k/b$2;

    iget-object v0, v0, Lcom/kwad/components/ad/k/b$2;->Hh:Lcom/kwad/components/ad/k/b;

    invoke-static {v0}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/ad/k/b;)Lcom/kwad/components/ad/k/b$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/ad/k/b$a;->iG()V

    :cond_0
    return-void
.end method
