.class final Lcom/kwad/components/core/webview/b/a/w$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/a/w;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic WO:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

.field final synthetic WP:Lcom/kwad/components/core/webview/b/a/w;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/a/w;Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/w$1;->WP:Lcom/kwad/components/core/webview/b/a/w;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/a/w$1;->WO:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/w$1;->WP:Lcom/kwad/components/core/webview/b/a/w;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/a/w;->a(Lcom/kwad/components/core/webview/b/a/w;)Lcom/kwad/components/core/webview/b/a/w$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/a/w$1;->WP:Lcom/kwad/components/core/webview/b/a/w;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/a/w;->a(Lcom/kwad/components/core/webview/b/a/w;)Lcom/kwad/components/core/webview/b/a/w$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/a/w$1;->WO:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    invoke-interface {v0, v1}, Lcom/kwad/components/core/webview/b/a/w$a;->a(Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;)V

    :cond_0
    return-void
.end method
