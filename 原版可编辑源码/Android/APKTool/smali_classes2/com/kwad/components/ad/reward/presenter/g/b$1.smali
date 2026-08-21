.class final Lcom/kwad/components/ad/reward/presenter/g/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/g/b;->a(Lcom/kwad/sdk/core/view/AdBaseFrameLayout;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xk:Lcom/kwad/sdk/widget/KSFrameLayout;

.field final synthetic xl:F

.field final synthetic xm:Lcom/kwad/components/ad/reward/presenter/g/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/g/b;Lcom/kwad/sdk/widget/KSFrameLayout;F)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b$1;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/g/b$1;->xk:Lcom/kwad/sdk/widget/KSFrameLayout;

    iput p3, p0, Lcom/kwad/components/ad/reward/presenter/g/b$1;->xl:F

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$1;->xk:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->getHeight()I

    return-void
.end method
