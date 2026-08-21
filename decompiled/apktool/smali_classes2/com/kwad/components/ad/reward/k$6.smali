.class final Lcom/kwad/components/ad/reward/k$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/k;->a(Lcom/kwad/components/ad/reward/k;Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic pX:Lcom/kwad/components/ad/reward/k$a;

.field final synthetic qd:Lcom/kwad/components/ad/reward/k;

.field final synthetic qg:Lcom/kwad/components/ad/reward/k;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/k;Lcom/kwad/components/ad/reward/k;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/k$6;->qd:Lcom/kwad/components/ad/reward/k;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/k$6;->qg:Lcom/kwad/components/ad/reward/k;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/k$6;->pX:Lcom/kwad/components/ad/reward/k$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$6;->qg:Lcom/kwad/components/ad/reward/k;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$6;->pX:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/k$a;->gp()V

    :cond_0
    return-void
.end method
