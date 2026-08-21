.class final Lcom/tkay/expressad/mbbanner/a/d/c$2;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 970
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 973
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->l(Lcom/tkay/expressad/mbbanner/a/d/c;)Z

    .line 977
    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Landroid/webkit/WebView;)V

    .line 978
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->n(Lcom/tkay/expressad/mbbanner/a/d/c;)Z

    .line 980
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->h(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->h(Lcom/tkay/expressad/mbbanner/a/d/c;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result p1

    if-nez p1, :cond_0

    .line 981
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1}, Lcom/tkay/expressad/mbbanner/a/d/c;->e(Lcom/tkay/expressad/mbbanner/a/d/c;)V

    .line 982
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/c;->b()V

    :cond_0
    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 988
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$2;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-static {p1, p3}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/mbbanner/a/d/c;Ljava/lang/String;)V

    .line 989
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/c;->b()V

    return-void
.end method
