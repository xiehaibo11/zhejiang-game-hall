.class final Lcom/kwad/components/ad/f/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/e;->bg()Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eO:Landroid/view/View;

.field final synthetic mS:Lcom/kwad/components/ad/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/e;Landroid/view/View;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/e$1;->mS:Lcom/kwad/components/ad/f/e;

    iput-object p2, p0, Lcom/kwad/components/ad/f/e$1;->eO:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/e$1;->mS:Lcom/kwad/components/ad/f/e;

    iget-object v1, p0, Lcom/kwad/components/ad/f/e$1;->eO:Landroid/view/View;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/f/e;->a(Lcom/kwad/components/ad/f/e;Landroid/view/View;)V

    return-void
.end method
