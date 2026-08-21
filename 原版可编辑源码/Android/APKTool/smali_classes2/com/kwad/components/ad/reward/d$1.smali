.class final Lcom/kwad/components/ad/reward/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/d;->c(Lcom/kwad/components/core/webview/b/b/q;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ox:Lcom/kwad/components/core/webview/b/b/q;

.field final synthetic oy:Lcom/kwad/components/ad/reward/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/d;Lcom/kwad/components/core/webview/b/b/q;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/d$1;->oy:Lcom/kwad/components/ad/reward/d;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/d$1;->ox:Lcom/kwad/components/core/webview/b/b/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/d$1;->oy:Lcom/kwad/components/ad/reward/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/d$1;->ox:Lcom/kwad/components/core/webview/b/b/q;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/d;->a(Lcom/kwad/components/ad/reward/d;Lcom/kwad/components/core/webview/b/b/q;)V

    return-void
.end method
