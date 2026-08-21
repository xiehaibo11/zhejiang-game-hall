.class final Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/page/widget/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/AdWebViewActivityProxy;->onBackPressed()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/DialogInterface;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$600(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/16 v1, 0x68

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method

.method public final b(Landroid/content/DialogInterface;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$1200(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Z

    move-result p1

    if-nez p1, :cond_0

    :try_start_0
    iget-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$1301(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {p1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$600(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/16 v0, 0x69

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void
.end method

.method public final c(Landroid/content/DialogInterface;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$4;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$600(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/16 v1, 0x6a

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
