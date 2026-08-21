.class final Lcom/kwad/components/ad/reward/presenter/f/b$1;
.super Lcom/kwad/components/core/webview/b/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/b;->ei()Lcom/kwad/components/core/webview/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wi:Lcom/kwad/components/ad/reward/presenter/f/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$1;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/c;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/b/c;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/c;-><init>()V

    invoke-static {}, Lcom/kwad/components/ad/reward/model/b;->cK()I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/c;->WS:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
