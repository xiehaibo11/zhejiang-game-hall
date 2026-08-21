.class public final Lcom/tkay/expressad/atsignalcommon/windvane/k;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/Object;)Lcom/tkay/expressad/atsignalcommon/windvane/b;
    .locals 1

    .line 6
    :try_start_0
    check-cast p0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 7
    iget-object p0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getSignalCommunication()Lcom/tkay/expressad/atsignalcommon/windvane/d;

    move-result-object p0

    invoke-interface {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/d;->b()Ljava/lang/String;

    move-result-object p0

    const-string v0, "wv_hybird:"

    .line 8
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 9
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p0

    return-object p0

    .line 11
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 14
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 16
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p0

    return-object p0
.end method
