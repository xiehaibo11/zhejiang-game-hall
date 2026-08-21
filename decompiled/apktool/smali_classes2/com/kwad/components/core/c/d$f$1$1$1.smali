.class final Lcom/kwad/components/core/c/d$f$1$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/c/d$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d$f$1$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ix:Lcom/kwad/components/core/c/d$f$1$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d$f$1$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$f$1$1$1;->Ix:Lcom/kwad/components/core/c/d$f$1$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final mo()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/c/d$f$1$1$1;->Ix:Lcom/kwad/components/core/c/d$f$1$1;

    iget-object v0, v0, Lcom/kwad/components/core/c/d$f$1$1;->bv:Lcom/kwad/components/core/p/a/a;

    iget-object v1, p0, Lcom/kwad/components/core/c/d$f$1$1$1;->Ix:Lcom/kwad/components/core/c/d$f$1$1;

    iget-object v1, v1, Lcom/kwad/components/core/c/d$f$1$1;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/p/a/a;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/components/core/response/model/AdResultData;Z)V

    return-void
.end method
