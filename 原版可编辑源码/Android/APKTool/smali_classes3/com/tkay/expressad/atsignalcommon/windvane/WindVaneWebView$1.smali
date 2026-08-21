.class final Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->release()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView$1;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView$1;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)Z

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView$1;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->destroy()V

    return-void
.end method
