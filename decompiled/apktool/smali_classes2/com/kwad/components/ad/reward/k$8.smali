.class final Lcom/kwad/components/ad/reward/k$8;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/k;->a(Lcom/kwad/components/ad/reward/k/a;Landroid/app/DialogFragment;Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/reward/k$a;)Landroid/view/View;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/k$8;->qe:Landroid/app/DialogFragment;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/k$8;->qf:Lcom/kwad/components/ad/reward/k$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$8;->qe:Landroid/app/DialogFragment;

    invoke-virtual {p1}, Landroid/app/DialogFragment;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$8;->qf:Lcom/kwad/components/ad/reward/k$a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/k$a;->gp()V

    :cond_0
    return-void
.end method
