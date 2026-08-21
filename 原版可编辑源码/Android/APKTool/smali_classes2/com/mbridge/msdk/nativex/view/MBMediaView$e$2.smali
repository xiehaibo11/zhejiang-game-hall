.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->onSensorChanged(Landroid/hardware/SensorEvent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView$e;)V
    .locals 0

    .line 2714
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const-string v0, "MBMediaView"

    :try_start_0
    const-string v1, "onSensorChanged: is portrait: |||||||||||||||||"

    .line 2718
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2719
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/nativex/view/mbfullview/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v2, v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->w(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v3, v3, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v3}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v3

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/nativex/view/mbfullview/a;->a(Lcom/mbridge/msdk/nativex/view/mbfullview/BaseView;Z)V

    .line 2720
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->K(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 2721
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->G(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 2722
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->H(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 2723
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->I(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 2724
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "=====orientation|||||"

    .line 2725
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2726
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v1, v1, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->y(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$e$2;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$e;

    iget-object v2, v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$e;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->z(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/nativex/view/WindVaneWebViewForNV;->orientation(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 2729
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
