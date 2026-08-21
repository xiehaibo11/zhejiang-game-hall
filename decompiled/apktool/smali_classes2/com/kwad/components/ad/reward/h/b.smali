.class public final Lcom/kwad/components/ad/reward/h/b;
.super Lcom/kwad/components/core/webview/jshandler/av;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/av$a;


# instance fields
.field private rX:Lcom/kwad/components/core/playable/PlayableSource;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/webview/jshandler/av;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object p3, p0, Lcom/kwad/components/ad/reward/h/b;->rX:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p0, p0}, Lcom/kwad/components/ad/reward/h/b;->a(Lcom/kwad/components/core/webview/jshandler/av$a;)V

    return-void
.end method


# virtual methods
.method public final dw()Z
    .locals 4

    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/h/b;->rX:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v2, Lcom/kwad/components/ad/reward/h/a;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/h/b;->mContext:Landroid/content/Context;

    invoke-direct {v2, v3}, Lcom/kwad/components/ad/reward/h/a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/reward/b;->c(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V

    const/4 v0, 0x0

    return v0
.end method
