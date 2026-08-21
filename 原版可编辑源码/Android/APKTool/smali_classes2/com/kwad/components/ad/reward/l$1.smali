.class final Lcom/kwad/components/ad/reward/l$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/l;->a(Lcom/kwad/components/core/webview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic qr:Lcom/kwad/components/ad/reward/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l$1;->qr:Lcom/kwad/components/ad/reward/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/c/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l$1;->qr:Lcom/kwad/components/ad/reward/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/l;->a(Lcom/kwad/components/ad/reward/l;)Lcom/kwad/components/ad/reward/c/d;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l$1;->qr:Lcom/kwad/components/ad/reward/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/l;->a(Lcom/kwad/components/ad/reward/l;)Lcom/kwad/components/ad/reward/c/d;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/components/ad/reward/c/d;->a(Lcom/kwad/components/ad/reward/c/b;)V

    :cond_0
    return-void
.end method
