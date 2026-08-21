.class public final Lcom/tkay/expressad/atsignalcommon/windvane/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/windvane/b;


# static fields
.field private static a:Lcom/tkay/expressad/atsignalcommon/windvane/g;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 7
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/g;

    invoke-direct {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/g;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/g;->a:Lcom/tkay/expressad/atsignalcommon/windvane/g;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a()Lcom/tkay/expressad/atsignalcommon/windvane/g;
    .locals 1

    .line 13
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/g;->a:Lcom/tkay/expressad/atsignalcommon/windvane/g;

    return-object v0
.end method

.method private static a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 45
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p2, v1, [Ljava/lang/Object;

    aput-object p1, p2, v2

    const-string p1, "javascript:window.MvBridge.fireEvent(\'%s\', \'\');"

    .line 46
    invoke-static {p1, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 50
    :cond_0
    invoke-static {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/n;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v2

    aput-object p2, v0, v1

    const-string p1, "javascript:window.MvBridge.fireEvent(\'%s\',\'%s\');"

    .line 51
    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    if-eqz p0, :cond_1

    .line 57
    :try_start_0
    invoke-virtual {p0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 61
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p0

    .line 59
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 67
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz v0, :cond_1

    .line 68
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 70
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p2, v1, [Ljava/lang/Object;

    .line 71
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->g:Ljava/lang/String;

    aput-object v0, p2, v2

    const-string v0, "javascript:window.OW.onSuccess(%s,\'\');"

    invoke-static {v0, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 75
    :cond_0
    invoke-static {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/n;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 76
    iget-object v3, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v2

    aput-object p2, v0, v1

    const-string p2, "javascript:window.OW.onSuccess(%s,\'%s\');"

    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 80
    :goto_0
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 82
    :try_start_0
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 86
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 84
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 17
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz v0, :cond_1

    .line 18
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 20
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p3, v1, [Ljava/lang/Object;

    aput-object p2, p3, v2

    const-string p2, "javascript:window.MvBridge.fireEvent(\'%s\', \'\');"

    .line 21
    invoke-static {p2, p3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 25
    :cond_0
    invoke-static {p3}, Lcom/tkay/expressad/atsignalcommon/windvane/n;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p2, v0, v2

    aput-object p3, v0, v1

    const-string p2, "javascript:window.MvBridge.fireEvent(\'%s\',\'%s\');"

    .line 26
    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 31
    :goto_0
    iget-object p3, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p3, :cond_1

    .line 33
    :try_start_0
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 37
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 35
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public final b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 93
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz v0, :cond_1

    .line 94
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 96
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    new-array v0, v2, [Ljava/lang/Object;

    .line 97
    iget-object v3, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v1

    const-string v3, "javascript:window.MvBridge.onFailure(%s,\'\');"

    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    goto :goto_0

    .line 101
    :cond_0
    invoke-static {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/n;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    :goto_0
    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 102
    iget-object v3, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v1

    aput-object p2, v0, v2

    const-string p2, "javascript:window.MvBridge.onFailure(%s,\'%s\');"

    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 106
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 108
    :try_start_0
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 112
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 110
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method
