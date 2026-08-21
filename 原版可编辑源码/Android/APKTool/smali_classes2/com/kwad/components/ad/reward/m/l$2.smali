.class final Lcom/kwad/components/ad/reward/m/l$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/l;->kg()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic zG:Lcom/kwad/components/ad/reward/m/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/l$2;->zG:Lcom/kwad/components/ad/reward/m/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/l$2;->zG:Lcom/kwad/components/ad/reward/m/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/l;->c(Lcom/kwad/components/ad/reward/m/l;)Landroid/view/View;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/m/l;->a(Lcom/kwad/components/ad/reward/m/l;Landroid/view/View;)Landroid/animation/Animator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    return-void
.end method
