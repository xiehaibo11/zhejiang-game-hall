.class final Lcom/kwad/components/ad/reward/presenter/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/m/n$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/d;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sb:Lcom/kwad/components/ad/reward/b/c;

.field final synthetic sc:Lcom/kwad/components/ad/reward/presenter/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/d;Lcom/kwad/components/ad/reward/b/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d$1;->sc:Lcom/kwad/components/ad/reward/presenter/d;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/d$1;->sb:Lcom/kwad/components/ad/reward/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final hB()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d$1;->sb:Lcom/kwad/components/ad/reward/b/c;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/b/c;->showDialog()V

    return-void
.end method
