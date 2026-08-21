.class Lcom/sigmob/sdk/base/views/e$2;
.super Landroid/webkit/WebChromeClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/e;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/e;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/e$2;->a:Lcom/sigmob/sdk/base/views/e;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onJsAlert(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 0

    invoke-static {p3}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p4}, Landroid/webkit/JsResult;->confirm()V

    const/4 p1, 0x1

    return p1
.end method

.method public onJsBeforeUnload(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 0

    invoke-static {p3}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p4}, Landroid/webkit/JsResult;->confirm()V

    const/4 p1, 0x1

    return p1
.end method

.method public onJsConfirm(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 0

    invoke-static {p3}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p4}, Landroid/webkit/JsResult;->confirm()V

    const/4 p1, 0x1

    return p1
.end method

.method public onJsPrompt(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z
    .locals 0

    invoke-static {p3}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p5}, Landroid/webkit/JsPromptResult;->confirm()V

    const/4 p1, 0x1

    return p1
.end method
