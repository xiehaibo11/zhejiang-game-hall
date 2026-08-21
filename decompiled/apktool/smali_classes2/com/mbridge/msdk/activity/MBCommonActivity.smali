.class public Lcom/mbridge/msdk/activity/MBCommonActivity;
.super Lcom/mbridge/msdk/activity/DomainMBCommonActivity;
.source "MBCommonActivity.java"


# instance fields
.field private b:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 6
    invoke-direct {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;-><init>()V

    const/4 v0, 0x0

    .line 7
    iput-boolean v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->b:Z

    return-void
.end method


# virtual methods
.method public finish()V
    .locals 3

    .line 10
    iget-object v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 11
    iget-object v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->setListener(Lcom/mbridge/msdk/foundation/webview/BrowserView$a;)V

    .line 12
    iget-object v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->destroy()V

    .line 14
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/webview/b;->a:Ljava/util/HashMap;

    iget-object v2, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/webview/BrowserView;

    if-eqz v0, :cond_1

    .line 16
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->setListener(Lcom/mbridge/msdk/foundation/webview/BrowserView$a;)V

    .line 17
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->destroy()V

    :cond_1
    const/4 v0, 0x1

    .line 19
    iput-boolean v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->b:Z

    .line 20
    invoke-super {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->finish()V

    return-void
.end method

.method protected onDestroy()V
    .locals 3

    .line 25
    invoke-super {p0}, Lcom/mbridge/msdk/activity/DomainMBCommonActivity;->onDestroy()V

    .line 26
    iget-boolean v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->b:Z

    if-nez v0, :cond_1

    .line 27
    iget-object v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 28
    iget-object v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->setListener(Lcom/mbridge/msdk/foundation/webview/BrowserView$a;)V

    .line 29
    iget-object v0, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->browserView:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->destroy()V

    .line 31
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/webview/b;->a:Ljava/util/HashMap;

    iget-object v2, p0, Lcom/mbridge/msdk/activity/MBCommonActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/webview/BrowserView;

    if-eqz v0, :cond_1

    .line 33
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->setListener(Lcom/mbridge/msdk/foundation/webview/BrowserView$a;)V

    .line 34
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/webview/BrowserView;->destroy()V

    :cond_1
    return-void
.end method
