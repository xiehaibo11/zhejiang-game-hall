.class final Lcom/kwad/components/ad/reward/m/g$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/g;->a(Lcom/kwad/components/ad/reward/m/g$a;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yM:Lcom/kwad/components/ad/reward/m/g;

.field final synthetic yN:Landroid/animation/Animator;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/g;Landroid/animation/Animator;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/g$2;->yM:Lcom/kwad/components/ad/reward/m/g;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/m/g$2;->yN:Landroid/animation/Animator;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/g$2;->yN:Landroid/animation/Animator;

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    return-void
.end method
