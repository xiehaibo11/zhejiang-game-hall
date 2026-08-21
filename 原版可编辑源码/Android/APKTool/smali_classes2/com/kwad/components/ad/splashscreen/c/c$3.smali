.class final Lcom/kwad/components/ad/splashscreen/c/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/c;->s(Lcom/kwad/sdk/core/response/model/AdInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic CJ:Lcom/kwad/components/ad/splashscreen/c/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c$3;->CJ:Lcom/kwad/components/ad/splashscreen/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c$3;->CJ:Lcom/kwad/components/ad/splashscreen/c/c;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/c;->b(Lcom/kwad/components/ad/splashscreen/c/c;)Lcom/kwad/components/ad/splashscreen/widget/a;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/c$3$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/c$3$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/c$3;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
