.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$16;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/click/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MBMediaView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 1033
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onDownloadFinish(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onDownloadProgress(I)V
    .locals 0

    return-void
.end method

.method public final onDownloadStart(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 2

    const-string v0, "MBMediaView"

    .line 1070
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1071
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1072
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1, p1, p2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    const-string p1, "=====hideloading"

    .line 1073
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1076
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final onInterceptDefaultLoadingDialog()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 2

    const-string v0, "MBMediaView"

    .line 1053
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->p(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1054
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->q(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1055
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1, p1, p2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    const-string p1, "=====hideloading"

    .line 1056
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1058
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final onShowLoading(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 2

    const-string v0, "MBMediaView"

    .line 1037
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->n(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1038
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->o(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 1039
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$16;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1, p1, p2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    const-string p1, "=====showloading"

    .line 1040
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1042
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
