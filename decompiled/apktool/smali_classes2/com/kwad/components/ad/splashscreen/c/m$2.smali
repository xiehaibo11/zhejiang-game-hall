.class final Lcom/kwad/components/ad/splashscreen/c/m$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/m;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ds:Lcom/kwad/components/ad/splashscreen/c/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/m;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$2;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m$2;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/m;->b(Lcom/kwad/components/ad/splashscreen/c/m;)Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->lH()V

    return-void
.end method
