.class final Lcom/kwad/components/ad/reward/j/p$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j/p;->b(Lcom/kwad/components/core/webview/jshandler/ab$b;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;

.field final synthetic xE:Lcom/kwad/components/ad/reward/j/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j/p;Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j/p$1;->xE:Lcom/kwad/components/ad/reward/j/p;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/p$1;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/p$1;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j/p$1;->xE:Lcom/kwad/components/ad/reward/j/p;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/j/p;->a(Lcom/kwad/components/ad/reward/j/p;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->G(Ljava/lang/String;)V

    return-void
.end method
