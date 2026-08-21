.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$9;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;->onConfigurationChanged(Landroid/content/res/Configuration;)V
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

    .line 3088
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 3092
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;Z)V

    .line 3093
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->R(Lcom/mbridge/msdk/nativex/view/MBMediaView;)I

    move-result v0

    if-nez v0, :cond_0

    .line 3094
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->F(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    goto :goto_0

    .line 3096
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->K(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 3098
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 3099
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 3100
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->I(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 3101
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 3102
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$9;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->orientation(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 3105
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_1
    return-void
.end method
