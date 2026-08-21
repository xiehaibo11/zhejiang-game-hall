.class final Lcom/kwad/components/ad/reward/j$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->a(Landroid/app/Activity;Lcom/kwad/components/ad/reward/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j;->d(Landroid/content/DialogInterface;)V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$2;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j$2;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->resume()V

    :cond_0
    return-void
.end method
