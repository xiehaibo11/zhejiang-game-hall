.class final Lcom/kwad/components/core/page/b/e$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/b/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MR:Lcom/kwad/components/core/page/b/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/e$1;->MR:Lcom/kwad/components/core/page/b/e;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 0

    return-void
.end method

.method public final onMediaPlayError(II)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/page/b/e$1;->MR:Lcom/kwad/components/core/page/b/e;

    iget-object p1, p1, Lcom/kwad/components/core/page/b/e;->MQ:Lcom/kwad/components/core/page/b/d;

    invoke-virtual {p1}, Lcom/kwad/components/core/page/b/d;->getActivity()Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 0

    return-void
.end method
