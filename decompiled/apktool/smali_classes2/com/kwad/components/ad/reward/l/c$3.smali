.class final Lcom/kwad/components/ad/reward/l/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/l/c;->jN()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yh:Lcom/kwad/components/ad/reward/l/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/l/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c$3;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/video/a/c;)V
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->isAppOnForeground()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/l/c$3;->yh:Lcom/kwad/components/ad/reward/l/c;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/l/c;->e(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/components/core/video/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/video/b;->start()V

    :cond_0
    return-void
.end method
