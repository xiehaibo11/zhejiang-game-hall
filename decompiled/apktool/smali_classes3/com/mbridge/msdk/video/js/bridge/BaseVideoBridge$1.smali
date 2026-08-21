.class final Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;
.super Ljava/lang/Object;
.source "BaseVideoBridge.java"

# interfaces
.implements Lcom/mbridge/msdk/video/bt/module/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->click(Ljava/lang/Object;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Object;

.field final synthetic b:Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;Ljava/lang/Object;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;->b:Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;

    iput-object p2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;->a:Ljava/lang/Object;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 176
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;->a:Ljava/lang/Object;

    if-eqz v0, :cond_0

    .line 177
    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    const-string v1, "========"

    const-string v2, "============onInstallAlertShow"

    .line 178
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "onInstallAlertShow"

    const-string v3, ""

    invoke-virtual {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 180
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;->b:Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;

    iget-object v0, v0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x5

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 4

    .line 186
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;->a:Ljava/lang/Object;

    if-eqz v0, :cond_0

    .line 187
    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    const-string v1, "========"

    const-string v2, "============onInstallAlertHide"

    .line 188
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 189
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "onInstallAlertHide"

    const-string v3, ""

    invoke-virtual {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge$1;->b:Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;

    iget-object v0, v0, Lcom/mbridge/msdk/video/js/bridge/BaseVideoBridge;->a:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    const/4 v1, 0x4

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    :cond_0
    return-void
.end method
