.class final Lcom/kwad/components/ad/splashscreen/c/p$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/d/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->ds()Lcom/kwad/components/core/webview/jshandler/o;
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

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$3;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/d/a/a;->yD()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/d/b/a;->Ek()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$3;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/p;->h(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/h;->m(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iget-object v1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->Va:Lcom/kwad/sdk/core/webview/d/b/c;

    iget-object v1, v1, Lcom/kwad/sdk/core/webview/d/b/c;->UP:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/report/z$b;->UP:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p$3;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    const/4 v2, 0x0

    iget v3, p1, Lcom/kwad/sdk/core/webview/d/b/a;->UZ:I

    iget p1, p1, Lcom/kwad/sdk/core/webview/d/b/a;->jG:I

    invoke-static {v1, v2, v3, v0, p1}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/ad/splashscreen/c/p;ZILcom/kwad/sdk/core/report/z$b;I)V

    return-void
.end method
