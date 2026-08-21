.class final Lcom/tkay/basead/mraid/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/basead/mraid/MraidWebView;Lcom/tkay/basead/mraid/d$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/basead/mraid/d$a;

.field final synthetic c:Lcom/tkay/basead/mraid/MraidWebView;

.field final synthetic d:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Lcom/tkay/basead/mraid/d$a;Lcom/tkay/basead/mraid/MraidWebView;Ljava/lang/String;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/basead/mraid/d$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/tkay/basead/mraid/d$1;->b:Lcom/tkay/basead/mraid/d$a;

    iput-object p3, p0, Lcom/tkay/basead/mraid/d$1;->c:Lcom/tkay/basead/mraid/MraidWebView;

    iput-object p4, p0, Lcom/tkay/basead/mraid/d$1;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 57
    sget-object v0, Lcom/tkay/basead/mraid/d;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/basead/mraid/d$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", start load mraid webview"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 58
    new-instance v0, Lcom/tkay/basead/mraid/a;

    invoke-direct {v0}, Lcom/tkay/basead/mraid/a;-><init>()V

    .line 59
    new-instance v1, Lcom/tkay/basead/mraid/e;

    iget-object v2, p0, Lcom/tkay/basead/mraid/d$1;->a:Ljava/lang/String;

    invoke-direct {v1, v2}, Lcom/tkay/basead/mraid/e;-><init>(Ljava/lang/String;)V

    .line 61
    new-instance v2, Lcom/tkay/basead/mraid/d$1$1;

    invoke-direct {v2, p0}, Lcom/tkay/basead/mraid/d$1$1;-><init>(Lcom/tkay/basead/mraid/d$1;)V

    invoke-virtual {v1, v2}, Lcom/tkay/basead/mraid/e;->a(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 122
    iget-object v2, p0, Lcom/tkay/basead/mraid/d$1;->c:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v2, v1}, Lcom/tkay/basead/mraid/MraidWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 123
    iget-object v1, p0, Lcom/tkay/basead/mraid/d$1;->c:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v1, v0}, Lcom/tkay/basead/mraid/MraidWebView;->setObject(Ljava/lang/Object;)V

    .line 124
    iget-object v0, p0, Lcom/tkay/basead/mraid/d$1;->c:Lcom/tkay/basead/mraid/MraidWebView;

    iget-object v1, p0, Lcom/tkay/basead/mraid/d$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/mraid/MraidWebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method
