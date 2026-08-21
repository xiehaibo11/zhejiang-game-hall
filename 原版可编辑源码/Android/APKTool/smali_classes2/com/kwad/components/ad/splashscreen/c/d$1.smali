.class final Lcom/kwad/components/ad/splashscreen/c/d$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic CL:Lcom/kwad/components/ad/splashscreen/c/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/d$1;->CL:Lcom/kwad/components/ad/splashscreen/c/d;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/d$1;->CL:Lcom/kwad/components/ad/splashscreen/c/d;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/d;->b(Lcom/kwad/components/ad/splashscreen/c/d;)V

    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/d$1;->CL:Lcom/kwad/components/ad/splashscreen/c/d;

    invoke-static {p1, p3, p4}, Lcom/kwad/components/ad/splashscreen/c/d;->a(Lcom/kwad/components/ad/splashscreen/c/d;J)V

    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/d$1;->CL:Lcom/kwad/components/ad/splashscreen/c/d;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/d;->a(Lcom/kwad/components/ad/splashscreen/c/d;)V

    return-void
.end method
