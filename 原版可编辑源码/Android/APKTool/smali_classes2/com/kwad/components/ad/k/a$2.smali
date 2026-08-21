.class final Lcom/kwad/components/ad/k/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/k/a;->fA()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic GZ:Lcom/kwad/components/ad/k/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/k/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/a$2;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/k/a$2;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {p1}, Lcom/kwad/components/ad/k/a;->c(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$b;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/k/a$2;->GZ:Lcom/kwad/components/ad/k/a;

    invoke-static {p1}, Lcom/kwad/components/ad/k/a;->c(Lcom/kwad/components/ad/k/a;)Lcom/kwad/components/ad/k/a$b;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/components/ad/k/a$b;->iA()V

    :cond_0
    return-void
.end method
