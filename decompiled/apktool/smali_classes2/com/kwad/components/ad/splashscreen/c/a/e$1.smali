.class final Lcom/kwad/components/ad/splashscreen/c/a/e$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/a/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/a/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;->Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;->Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/a/e;->a(Lcom/kwad/components/ad/splashscreen/c/a/e;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-splash-end-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;->Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/d;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;-><init>()V

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;->Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/c/a/a;-><init>()V

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;->Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/c/a/b;-><init>()V

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/e$1;->Ex:Lcom/kwad/components/ad/splashscreen/c/a/e;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;-><init>()V

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/a/e;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    :cond_0
    return-void
.end method
