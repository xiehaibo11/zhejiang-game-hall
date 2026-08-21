.class final Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vi:Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$3;->vi:Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardVerify()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$3;->vi:Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$3;->vi:Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->f(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Landroid/widget/TextView;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->it()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x2

    aget-object v1, v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
