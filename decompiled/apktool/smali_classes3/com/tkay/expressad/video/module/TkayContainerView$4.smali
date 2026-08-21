.class final Lcom/tkay/expressad/video/module/TkayContainerView$4;
.super Lcom/tkay/expressad/video/module/a/a/i;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/signal/factory/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/module/a/a;)V
    .locals 0

    .line 853
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView$4;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-direct {p0, p2}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 0

    .line 856
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/i;->a(ILjava/lang/Object;)V

    const/16 p2, 0x64

    if-ne p1, p2, :cond_0

    .line 858
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView$4;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->webviewshow()V

    .line 859
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView$4;->a:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/module/TkayContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_0
    return-void
.end method
