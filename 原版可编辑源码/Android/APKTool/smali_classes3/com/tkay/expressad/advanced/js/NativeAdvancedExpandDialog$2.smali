.class Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V
    .locals 0

    .line 132
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;->a:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 2

    .line 136
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 138
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "javascript:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 139
    invoke-static {}, Lcom/tkay/expressad/d/b/a;->a()Lcom/tkay/expressad/d/b/a;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 141
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-gt v0, v1, :cond_0

    .line 142
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    .line 144
    :cond_0
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2$1;-><init>(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;)V

    invoke-virtual {p1, p2, v0}, Landroid/webkit/WebView;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    .line 151
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog$2;->a:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    invoke-static {p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->a(Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;)V

    return-void
.end method
