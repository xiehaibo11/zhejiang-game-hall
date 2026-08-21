.class final Lcom/kwad/components/ad/k/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/d/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/core/webview/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Hh:Lcom/kwad/components/ad/k/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/k/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/k/b$2;->Hh:Lcom/kwad/components/ad/k/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    new-instance p1, Lcom/kwad/components/ad/k/b$2$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/k/b$2$1;-><init>(Lcom/kwad/components/ad/k/b$2;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
