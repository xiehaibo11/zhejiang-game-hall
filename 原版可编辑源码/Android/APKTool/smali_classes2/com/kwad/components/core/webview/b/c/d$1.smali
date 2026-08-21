.class final Lcom/kwad/components/core/webview/b/c/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnKeyListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/c/d;->onActivityCreated(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Xx:Lcom/kwad/components/core/webview/b/c/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/c/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/c/d$1;->Xx:Lcom/kwad/components/core/webview/b/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onKey(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z
    .locals 0

    const/4 p1, 0x4

    if-ne p2, p1, :cond_0

    invoke-virtual {p3}, Landroid/view/KeyEvent;->getAction()I

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
