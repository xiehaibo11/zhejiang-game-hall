.class final Lcom/kwad/components/ad/reward/presenter/p$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/p;->onCreate()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sN:Lcom/kwad/components/ad/reward/presenter/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/p$2;->sN:Lcom/kwad/components/ad/reward/presenter/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/p$2;->sN:Lcom/kwad/components/ad/reward/presenter/p;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/presenter/p;->a(Lcom/kwad/components/ad/reward/presenter/p;Z)Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/p$2;->sN:Lcom/kwad/components/ad/reward/presenter/p;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/p;->a(Lcom/kwad/components/ad/reward/presenter/p;)Lcom/kwad/components/ad/reward/widget/KsToastView;

    move-result-object p1

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/widget/KsToastView;->setVisibility(I)V

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object p1

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/core/playable/PlayableSource;)V

    return-void
.end method
