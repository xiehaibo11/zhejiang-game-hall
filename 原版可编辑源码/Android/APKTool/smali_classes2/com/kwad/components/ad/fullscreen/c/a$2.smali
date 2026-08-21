.class final Lcom/kwad/components/ad/fullscreen/c/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/fullscreen/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ge:Lcom/kwad/components/ad/fullscreen/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a$2;->ge:Lcom/kwad/components/ad/fullscreen/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/q;)V
    .locals 1

    if-eqz p1, :cond_0

    iget p1, p1, Lcom/kwad/components/core/webview/b/b/q;->type:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a$2;->ge:Lcom/kwad/components/ad/fullscreen/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/a;->b(Lcom/kwad/components/ad/fullscreen/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->release()V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a$2;->ge:Lcom/kwad/components/ad/fullscreen/c/a;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/a;->c(Lcom/kwad/components/ad/fullscreen/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->fR()V

    :cond_0
    return-void
.end method
