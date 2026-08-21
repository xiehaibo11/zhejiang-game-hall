.class final Lcom/kwad/components/core/webview/b/h$12;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;

.field final synthetic Wn:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$12;->Wk:Lcom/kwad/components/core/webview/b/h;

    iput-object p2, p0, Lcom/kwad/components/core/webview/b/h$12;->Wn:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$12;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/h$12;->Wn:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;)Lcom/kwad/components/core/webview/b/h$a;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/components/offline/api/tk/model/StyleTemplate;Lcom/kwad/components/core/webview/b/h$a;)V

    return-void
.end method
