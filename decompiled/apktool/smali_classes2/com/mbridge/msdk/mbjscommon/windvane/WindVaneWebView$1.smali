.class final Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView$1;
.super Ljava/lang/Object;
.source "WindVaneWebView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 177
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView$1;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 180
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView$1;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Z)Z

    .line 181
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView$1;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->destroy()V

    return-void
.end method
