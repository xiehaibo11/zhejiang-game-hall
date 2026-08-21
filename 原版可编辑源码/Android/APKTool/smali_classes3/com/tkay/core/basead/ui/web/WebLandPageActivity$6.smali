.class final Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;
.super Landroid/webkit/WebChromeClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->onResume()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;


# direct methods
.method constructor <init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V
    .locals 0

    .line 415
    iput-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public final onGeolocationPermissionsShowPrompt(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 443
    :try_start_0
    invoke-interface {p2, p1, v0, v1}, Landroid/webkit/GeolocationPermissions$Callback;->invoke(Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 447
    :catchall_0
    invoke-super {p0, p1, p2}, Landroid/webkit/WebChromeClient;->onGeolocationPermissionsShowPrompt(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V

    return-void
.end method

.method public final onProgressChanged(Landroid/webkit/WebView;I)V
    .locals 2

    .line 451
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->e(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 452
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->e(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;->setProgress(I)V

    const/16 p1, 0x64

    if-ne p2, p1, :cond_0

    .line 454
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6$1;

    invoke-direct {p2, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6$1;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;)V

    const-wide/16 v0, 0xc8

    invoke-virtual {p1, p2, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    :cond_0
    return-void
.end method

.method public final onShowFileChooser(Landroid/webkit/WebView;Landroid/webkit/ValueCallback;Landroid/webkit/WebChromeClient$FileChooserParams;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/WebView;",
            "Landroid/webkit/ValueCallback<",
            "[",
            "Landroid/net/Uri;",
            ">;",
            "Landroid/webkit/WebChromeClient$FileChooserParams;",
            ")Z"
        }
    .end annotation

    const-string p1, "android.intent.extra.ALLOW_MULTIPLE"

    .line 421
    :try_start_0
    iget-object p3, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-static {p3, p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;Landroid/webkit/ValueCallback;)Landroid/webkit/ValueCallback;

    .line 423
    new-instance p2, Landroid/content/Intent;

    const-string p3, "android.intent.action.GET_CONTENT"

    invoke-direct {p2, p3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/4 p3, 0x1

    .line 424
    invoke-virtual {p2, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const-string v0, "*/*"

    .line 425
    invoke-virtual {p2, v0}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "android.intent.category.OPENABLE"

    .line 428
    invoke-virtual {p2, v0}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 429
    invoke-virtual {p2, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 430
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;->a:Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    const-string v0, "File Chooser"

    invoke-static {p2, v0}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object p2

    const/16 v0, 0x200

    invoke-virtual {p1, p2, v0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p3

    :catchall_0
    const/4 p1, 0x0

    return p1
.end method
