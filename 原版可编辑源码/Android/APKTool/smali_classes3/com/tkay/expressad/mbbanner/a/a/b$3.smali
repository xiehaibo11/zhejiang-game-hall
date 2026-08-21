.class final Lcom/tkay/expressad/mbbanner/a/a/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnDismissListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/a/b;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/a/b;)V
    .locals 0

    .line 156
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismiss(Landroid/content/DialogInterface;)V
    .locals 6

    .line 159
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/a/b;->b(Lcom/tkay/expressad/mbbanner/a/a/b;)Lcom/tkay/expressad/mbbanner/a/c/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 160
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/a/b;->b(Lcom/tkay/expressad/mbbanner/a/a/b;)Lcom/tkay/expressad/mbbanner/a/c/a;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(Z)V

    .line 163
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/a/b;->c(Lcom/tkay/expressad/mbbanner/a/a/b;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v5, 0x0

    const-string v2, ""

    const-string v3, "text/html"

    const-string v4, "utf-8"

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/a/b;->d(Lcom/tkay/expressad/mbbanner/a/a/b;)Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/a/b;->c(Lcom/tkay/expressad/mbbanner/a/a/b;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 165
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/a/b;->c(Lcom/tkay/expressad/mbbanner/a/a/b;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->release()V

    .line 166
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/b;->a(Lcom/tkay/expressad/mbbanner/a/a/b;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 167
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/b$3;->a:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-static {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/b;->a(Lcom/tkay/expressad/mbbanner/a/a/b;Lcom/tkay/expressad/mbbanner/a/c/a;)Lcom/tkay/expressad/mbbanner/a/c/a;

    return-void
.end method
