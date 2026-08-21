.class final Lcom/kwad/components/ad/f/b/i$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/b/i;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nr:Lcom/kwad/components/ad/f/b/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/i$1;->nr:Lcom/kwad/components/ad/f/b/i;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayStart()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/i$1;->nr:Lcom/kwad/components/ad/f/b/i;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/i;->a(Lcom/kwad/components/ad/f/b/i;)Lcom/kwad/components/core/video/DetailVideoView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i$1;->nr:Lcom/kwad/components/ad/f/b/i;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method
