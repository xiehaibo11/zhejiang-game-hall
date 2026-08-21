.class final Lcom/kwad/components/core/webview/b/c/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/c/c;->cc()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Xt:Lcom/kwad/components/core/webview/b/c/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/c$3;->Xt:Lcom/kwad/components/core/webview/b/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c$3;->Xt:Lcom/kwad/components/core/webview/b/c/c;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/c/c;->b(Lcom/kwad/components/core/webview/b/c/c;)Lcom/kwad/components/core/webview/b/c/d;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/core/webview/b/c/d;->e(Landroid/content/DialogInterface$OnDismissListener;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/c$3;->Xt:Lcom/kwad/components/core/webview/b/c/c;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/c/c;->c(Lcom/kwad/components/core/webview/b/c/c;)V

    return-void
.end method
