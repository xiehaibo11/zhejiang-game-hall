.class final Lcom/kwad/sdk/core/webview/KsAdWebView$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/webview/KsAdWebView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field final synthetic ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;


# direct methods
.method private constructor <init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/sdk/core/webview/KsAdWebView;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView$a;-><init>(Lcom/kwad/sdk/core/webview/KsAdWebView;)V

    return-void
.end method


# virtual methods
.method public final onDownloadStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    iget-object p2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/core/webview/a/c$a;->Ec()Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iput-object p1, p2, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->isWebViewDownload:Z

    iget-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->g(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/webview/a/c$a;->cy(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/webview/a/c$a;

    :cond_0
    const-class p1, Lcom/kwad/sdk/service/a/a;

    invoke-static {p1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/service/a/a;

    iget-object p2, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p2}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p2

    iget-object p3, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-static {p3}, Lcom/kwad/sdk/core/webview/KsAdWebView;->f(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/sdk/core/webview/a/c$a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/kwad/sdk/core/webview/a/c$a;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p3

    invoke-interface {p1, p2, p3}, Lcom/kwad/sdk/service/a/a;->g(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void

    :cond_1
    :try_start_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    new-instance p2, Landroid/content/Intent;

    const-string p3, "android.intent.action.VIEW"

    invoke-direct {p2, p3, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/webview/KsAdWebView$a;->ayp:Lcom/kwad/sdk/core/webview/KsAdWebView;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method
