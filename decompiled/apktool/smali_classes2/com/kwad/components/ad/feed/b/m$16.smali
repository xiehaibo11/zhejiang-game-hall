.class final Lcom/kwad/components/ad/feed/b/m$16;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/m;->u(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eu:I

.field final synthetic fI:Lcom/kwad/components/ad/feed/b/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/m;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/m$16;->fI:Lcom/kwad/components/ad/feed/b/m;

    iput p2, p0, Lcom/kwad/components/ad/feed/b/m$16;->eu:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/m$16;->fI:Lcom/kwad/components/ad/feed/b/m;

    iget v1, p0, Lcom/kwad/components/ad/feed/b/m$16;->eu:I

    invoke-static {v0, v1}, Lcom/kwad/components/ad/feed/b/m;->c(Lcom/kwad/components/ad/feed/b/m;I)V

    return-void
.end method
