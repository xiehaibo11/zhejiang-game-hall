.class public Lcom/tkay/expressad/atsignalcommon/windvane/o;
.super Landroid/webkit/WebChromeClient;


# static fields
.field private static final b:Ljava/lang/String; = "H5_ENTRY"


# instance fields
.field a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private c:Lcom/tkay/expressad/atsignalcommon/windvane/e;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 16
    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/o;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/o;->c:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    return-void
.end method

.method public onConsoleMessage(Landroid/webkit/ConsoleMessage;)Z
    .locals 6

    .line 49
    invoke-virtual {p1}, Landroid/webkit/ConsoleMessage;->messageLevel()Landroid/webkit/ConsoleMessage$MessageLevel;

    move-result-object v0

    sget-object v1, Landroid/webkit/ConsoleMessage$MessageLevel;->LOG:Landroid/webkit/ConsoleMessage$MessageLevel;

    if-eq v0, v1, :cond_0

    .line 50
    invoke-super {p0, p1}, Landroid/webkit/WebChromeClient;->onConsoleMessage(Landroid/webkit/ConsoleMessage;)Z

    move-result p1

    return p1

    .line 53
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/o;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getSignalCommunication()Lcom/tkay/expressad/atsignalcommon/windvane/d;

    move-result-object v0

    if-eqz v0, :cond_2

    if-eqz p1, :cond_2

    .line 55
    invoke-virtual {p1}, Landroid/webkit/ConsoleMessage;->message()Ljava/lang/String;

    move-result-object v1

    const-string v2, "wv_hybrid:"

    .line 57
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_1

    const-string v3, "mv://"

    invoke-virtual {v1, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 58
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "onConsoleMessage: message.length() = "

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 59
    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/d;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 60
    invoke-virtual {v1, v5}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result p1

    const/4 v2, 0x1

    add-int/2addr p1, v2

    .line 61
    invoke-virtual {v1, v4, p1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    .line 63
    invoke-interface {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/d;->c(Ljava/lang/String;)V

    return v2

    :cond_1
    return v4

    .line 70
    :cond_2
    invoke-super {p0, p1}, Landroid/webkit/WebChromeClient;->onConsoleMessage(Landroid/webkit/ConsoleMessage;)Z

    move-result p1

    return p1
.end method

.method public onJsPrompt(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z
    .locals 0

    .line 26
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 28
    iget-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/o;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getSignalCommunication()Lcom/tkay/expressad/atsignalcommon/windvane/d;

    move-result-object p1

    if-eqz p1, :cond_0

    if-eqz p4, :cond_0

    .line 30
    invoke-interface {p1, p4}, Lcom/tkay/expressad/atsignalcommon/windvane/d;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 31
    invoke-interface {p1, p3}, Lcom/tkay/expressad/atsignalcommon/windvane/d;->c(Ljava/lang/String;)V

    const-string p1, ""

    .line 32
    invoke-virtual {p5, p1}, Landroid/webkit/JsPromptResult;->confirm(Ljava/lang/String;)V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public onProgressChanged(Landroid/webkit/WebView;I)V
    .locals 1

    .line 41
    invoke-super {p0, p1, p2}, Landroid/webkit/WebChromeClient;->onProgressChanged(Landroid/webkit/WebView;I)V

    .line 42
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/o;->c:Lcom/tkay/expressad/atsignalcommon/windvane/e;

    if-eqz v0, :cond_0

    .line 43
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->onProgressChanged(Landroid/webkit/WebView;I)V

    :cond_0
    return-void
.end method
