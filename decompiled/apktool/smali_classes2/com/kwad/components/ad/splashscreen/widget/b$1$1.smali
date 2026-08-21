.class final Lcom/kwad/components/ad/splashscreen/widget/b$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/widget/b$1;->onAnimationEnd(Landroid/animation/Animator;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Fm:Lcom/kwad/components/ad/splashscreen/widget/b$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/widget/b$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1$1;->Fm:Lcom/kwad/components/ad/splashscreen/widget/b$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b$1$1;->Fm:Lcom/kwad/components/ad/splashscreen/widget/b$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/widget/b$1;->Fl:Lcom/kwad/components/ad/splashscreen/widget/b;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/b;->b(Lcom/kwad/components/ad/splashscreen/widget/b;)Landroid/animation/Animator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    return-void
.end method
