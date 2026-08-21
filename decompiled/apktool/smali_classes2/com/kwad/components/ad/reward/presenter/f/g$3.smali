.class final Lcom/kwad/components/ad/reward/presenter/f/g$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/i;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/g;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wL:Lcom/kwad/components/ad/reward/presenter/f/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/g$3;->wL:Lcom/kwad/components/ad/reward/presenter/f/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/e;Ljava/lang/String;)V
    .locals 1

    const-string v0, "getExtraReward"

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/components/ad/reward/c/a;->gX()Lcom/kwad/components/ad/reward/c/b;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/jshandler/e;->a(Lcom/kwad/sdk/core/response/a/a;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c/a;->gW()Lcom/kwad/components/ad/reward/c/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/reward/c/a;->a(Lcom/kwad/components/core/webview/jshandler/e;)V

    :cond_0
    return-void
.end method
