.class final Lcom/kwad/components/ad/reward/k$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/k;->a(Landroid/app/DialogFragment;Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic qe:Landroid/app/DialogFragment;

.field final synthetic qf:Lcom/kwad/components/ad/reward/k$a;


# direct methods
.method constructor <init>(Landroid/app/DialogFragment;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/k$3;->qe:Landroid/app/DialogFragment;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/k$3;->qf:Lcom/kwad/components/ad/reward/k$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$3;->qe:Landroid/app/DialogFragment;

    invoke-virtual {p1}, Landroid/app/DialogFragment;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$3;->qf:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/kwad/components/ad/reward/k$a;->H(Z)V

    :cond_0
    return-void
.end method
