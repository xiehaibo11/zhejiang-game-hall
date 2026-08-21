.class final Lcom/kwad/components/ad/h/c$2;
.super Lcom/kwad/components/core/e/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/h/c;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ob:Lcom/kwad/components/ad/h/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/h/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/c$2;->ob:Lcom/kwad/components/ad/h/c;

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final fh()V
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/e/a/e;->mN()Lcom/kwad/components/core/e/a/e;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/a/e;->b(Lcom/kwad/components/core/e/a/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/c$2;->ob:Lcom/kwad/components/ad/h/c;

    invoke-static {v0}, Lcom/kwad/components/ad/h/c;->b(Lcom/kwad/components/ad/h/c;)V

    return-void
.end method
