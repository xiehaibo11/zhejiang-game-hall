.class final Lcom/kwad/components/ad/splashscreen/c/p$10;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->lq()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$10;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$10;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/p;->n(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/g/d;->CG()V

    return-void
.end method
