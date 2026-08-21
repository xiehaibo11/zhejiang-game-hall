.class public final Lcom/kwad/components/core/offline/init/d/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/webview/IWebView;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final createWebView(Landroid/content/Context;)Lcom/kwad/components/offline/api/core/webview/BaseKsWebView;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/offline/init/d/a;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/offline/init/d/a;-><init>(Landroid/content/Context;)V

    return-object v0
.end method
